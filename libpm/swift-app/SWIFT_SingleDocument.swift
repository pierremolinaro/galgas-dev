//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 02/11/2021.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

@MainActor final class SWIFT_SingleDocument : NSDocument, @preconcurrency NSTextStorageDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let mUndoManager = UndoManager ()
  private(set) var mTokenizer : (any SWIFT_Tokenizer_Protocol)? = nil
  private let mDisplayStyleChangeObserver = EBOutletEvent ()
  private let mLineHeightObserver = EBOutletEvent ()
  var mDisplayDescriptors = [SWIFT_WeakElement <SWIFT_DisplayDescriptor>] ()
  var mTokenRangeArray = [SWIFT_Token] ()
  public let mTextStorage = NSTextStorage (string: "")
  private(set) var mIssueArray = [SWIFT_Issue] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public var string : String { self.mTextStorage.string }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override init () {
    super.init ()
    noteObjectAllocation (self)

    self.undoManager = self.mUndoManager
    self.mTextStorage.delegate = self // NSTextStorageDelegate
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func close () { // Is always called before deinit
    self.releaseTimer ()
    super.close ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit { // Not always in main thead
  //    mTimerForAutosaving has been released by close()
    DispatchQueue.main.async {
      SWIFT_SingleWindow.documentEditionStateDidChange ()
    }
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  IMPORTANT: if autosavesInPlace is true, "File" menu items are modified by MacOS!!!
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override class var autosavesInPlace : Bool { false }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   ADD DISPLAY DESCRIPTOR
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func appendDisplayDescriptor (_ inDisplayDescriptor : SWIFT_DisplayDescriptor) {
    self.mDisplayDescriptors.append (SWIFT_WeakElement (inDisplayDescriptor))
    inDisplayDescriptor.sourcePresentationView.populateRevealInFinderPullDownButton (with: self.fileURL?.pathComponents)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // READ DOCUMENT
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func read (from inData : Data, ofType inTypeName : String) throws {
    let str = String (data: inData, encoding: .utf8) ?? ""
    DispatchQueue.main.async {
      self.mTokenizer = tokenizerFor (extension: self.lastComponentOfFileName.pathExtension)
      if let tokenizer = self.mTokenizer {
        for i : UInt8 in 0 ..< (tokenizer.styleCount () + 3) {
          tokenizer.color (forStyle: i).startsBeingObserved (by: self.mDisplayStyleChangeObserver)
          tokenizer.bold (forStyle: i).startsBeingObserved (by: self.mDisplayStyleChangeObserver)
          tokenizer.italic (forStyle: i).startsBeingObserved (by: self.mDisplayStyleChangeObserver)
        }
        tokenizer.font.startsBeingObserved (by: self.mDisplayStyleChangeObserver)
        tokenizer.lineHeight.startsBeingObserved (by: self.mDisplayStyleChangeObserver)
        tokenizer.lineHeight.startsBeingObserved (by: self.mLineHeightObserver)
      }
      self.mDisplayStyleChangeObserver.mEventCallBack = { [weak self] in
        if let me = self {
          me.mTextStorage.beginEditing ()
          me.computeLexicalColoring (NSRange (location: 0, length: me.mTextStorage.length), 0)
          me.mTextStorage.endEditing ()
          for displayDescriptor in me.mDisplayDescriptors {
            displayDescriptor.possibleElement?.textViewNeedsDisplay ()
          }
        }
      }
      self.mLineHeightObserver.mEventCallBack = { [weak self] in
        if let me = self {
          for displayDescriptor in me.mDisplayDescriptors {
            displayDescriptor.possibleElement?.textViewNeedsDisplay ()
          }
        }
      }
      self.setTextWithoutActivatingTimer (str)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // SAVE DOCUMENT
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func data (ofType inTypeName : String) throws -> Data {
    let data = self.mTextStorage.string.data (using: .utf8)!
    return data
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func makeWindowControllers () {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   SET TEXT
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mActivateTimerOnChange = true

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func setTextWithoutActivatingTimer (_ inString : String) {
    if self.mTextStorage.string != inString {
      self.releaseTimer ()
      self.mActivateTimerOnChange = false
      self.mTextStorage.beginEditing ()
      self.mTextStorage.replaceCharacters (in: NSRange (location: 0, length: self.mTextStorage.length), with: inString)
      self.mTextStorage.endEditing ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func selectedRangeDidChange () {
    for w in NSApp.windows {
      if let window = w as? SWIFT_SingleWindow {
        window.selectedRangeDidChange (forDocument: self)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Issues
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func removeAllIssues () {
    self.mIssueArray.removeAll (keepingCapacity: true)
    self.textViewNeedsDisplay ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func appendIssue (_ inIssue : SWIFT_Issue) {
    if inIssue.fileURL == self.fileURL {
      let range = self.mTextStorage.rangeFor (
        line: inIssue.line,
        startColumn: inIssue.startColumn,
        length: inIssue.length
      )
      inIssue.setRange (range)
      self.mIssueArray.append (inIssue)
      self.textViewNeedsDisplay ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func textViewNeedsDisplay () {
    for dd in self.mDisplayDescriptors {
      dd.possibleElement?.textViewNeedsDisplay ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Update from file system
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func presentedItemDidChange () {
    // [caution] This method can be called from any thread.
    // [caution] DO NOT invoke `super.presentedItemDidChange()` that reverts document automatically if autosavesInPlace is enable.
    DispatchQueue.main.async { self.presentedItemDidChange_onMainThread () }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func presentedItemDidChange_onMainThread () {
    if let currentFileURL = self.fileURL {
      var optionalNewText : String? = nil
      var optionalFileModificationDate : Date? = nil
      var coordinatorError : NSError? = nil
      let coordinator = NSFileCoordinator (filePresenter: self)
      coordinator.coordinate (readingItemAt: currentFileURL, options: .withoutChanges, error: &coordinatorError) { (newURL) in
        do {
        //--- ignore if file's modificationDate is the same as document's modificationDate
          optionalFileModificationDate = try FileManager.default.attributesOfItem (atPath: newURL.path)[.modificationDate] as? Date
          if optionalFileModificationDate != self.fileModificationDate {
         //--- check if file contents was changed from the stored file data
            let data = try Data (contentsOf: newURL, options: [.mappedIfSafe])
            let text = String (data: data, encoding: .utf8)!
            if text != self.mTextStorage.string {
              optionalNewText = text
            }
          }
        }catch{
          return assertionFailure (error.localizedDescription)
        }
      }
      if let error = coordinatorError {
        assertionFailure (error.localizedDescription)
      }
      if let newText = optionalNewText {
        DispatchQueue.main.async {
          if let lastModificationDate = self.fileModificationDate,
             let fileModificationDate = optionalFileModificationDate,
             lastModificationDate < fileModificationDate {
            self.fileModificationDate = fileModificationDate
            self.setTextWithoutActivatingTimer (newText)
          }
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK:   NSTextStorageDelegate method
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func textStorage (_ inTextStorage : NSTextStorage,
                    didProcessEditing inEditedMask : NSTextStorageEditActions,
                    range inEditedRange : NSRange,
                    changeInLength inDelta : Int) {
    if inEditedMask.contains (.editedCharacters) {
      self.mTextStorage.beginEditing ()
      self.computeLexicalColoring (inEditedRange, inDelta)
      self.mTextStorage.endEditing ()
      if self.mActivateTimerOnChange && (nil == self.mTimerForAutosaving) {
        let timer = Timer (
          timeInterval: 5.0,
          target: self,
          selector: #selector (Self.autosaveTimerDidFire (_:)),
          userInfo: nil,
          repeats: false
        )
        self.mTimerForAutosaving = timer
        RunLoop.main.add (timer, forMode: .default)
        SWIFT_SingleWindow.documentEditionStateDidChange ()
      }
      self.mActivateTimerOnChange = true
    }
  //--- Update issues
    var updateDisplay = false
    for issue in self.mIssueArray {
      issue.updateLocationForPreviousRange (
        inEditedRange,
        changeInLength: inDelta,
        updateDisplay: &updateDisplay
      )
    }
    if updateDisplay {
      self.textViewNeedsDisplay ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Auto save
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mTimerForAutosaving : Timer? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func autosaveTimerDidFire (_ inTimer : Timer) {
    self.save (nil)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func releaseTimer () { // Not always in main thread
    self.mTimerForAutosaving?.invalidate ()
    self.mTimerForAutosaving = nil
    DispatchQueue.main.async { SWIFT_SingleWindow.documentEditionStateDidChange () }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override var isDocumentEdited : Bool { return nil != self.mTimerForAutosaving  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func save (_ inSender : Any?) {
    super.save (inSender)
    self.releaseTimer ()
    // NSSound.beep ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func canClose (withDelegate delegate : Any,
                          shouldClose shouldCloseSelector : Selector?,
                          contextInfo : UnsafeMutableRawPointer?) {
    if self.isDocumentEdited {
      self.save (nil)
    }
    super.canClose (withDelegate: delegate, shouldClose: shouldCloseSelector, contextInfo: contextInfo)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Comment / uncomment
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func commentRange (_ inSelectedRangeValue : NSRange) -> NSRange {
    var newSelectedRange = NSRange ()
    if let tokenizer = self.mTokenizer {
      self.mTextStorage.beginEditing ()
    //---
      let blockCommentString = NSAttributedString (string: tokenizer.blockComment (), attributes: nil)
      let sourceString = self.mTextStorage.string as NSString
      let lineRange = sourceString.lineRange (for: inSelectedRangeValue)
      var insertedCharsCount = 0
      var currentLineRange = sourceString.lineRange (for: NSRange (location: lineRange.location + lineRange.length - 1, length: 1))
      repeat {
        self.mTextStorage.insert (blockCommentString, at: currentLineRange.location)
        insertedCharsCount += (blockCommentString.string as NSString).length
        if currentLineRange.location > 0 {
          currentLineRange = sourceString.lineRange (for: NSRange (location: currentLineRange.location - 1, length: 1))
        }
      }while ((currentLineRange.location > 0) && (currentLineRange.location >= lineRange.location))
  //---
      self.mTextStorage.endEditing ()
  //--- Update selected range
      newSelectedRange = NSRange (location: inSelectedRangeValue.location, length: inSelectedRangeValue.length + insertedCharsCount)
    //--- Register undo
      self.mUndoManager.registerUndo (
        withTarget: self,
        selector: #selector (Self.uncommentRangeForUndo(_:)),
        object: NSValue (range: newSelectedRange)
      )
    }
  //---
    return newSelectedRange
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func commentRangeForUndo (_ inRangeValue : NSValue) { // An NSValue of NSRange
    _ = self.commentRange (inRangeValue.rangeValue)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //
  //                       U N C O M M E N T R A N G E
  //
  // Cette méthode a plusieurs rôles :
  //   - supprimer les marques de commentaires des lignes concernées par la sélection, uniquement quand le
  //     commentaire commence une ligne ;
  //   - ajuster la sélection en conséquence ; en effet, dès que la méthode replaceCharactersInRange:withString: est
  //     appelée, Cocoa ramène la sélection à un point d'insertion. La sélection est ajustée et maintenue dans la
  //     variable finalSelectedRange.
  //
  // Le plus difficile est l'ajustement de la sélection. Pour cela, on calcule :
  //   - le nombre beforeSelectionCharacterCount de caractères du commentaire supprimé qui sont avant la sélection ; si
  //     ce nombre est > 0, on le début de la sélection du min entre ce nombre et le nombre de caractères du
  //     commentaire ;
  //   - le nombre withinSelectionCharacterCount de caractères du commentaire supprimé qui sont à l'intérieur de la
  //     sélection ; si ce nombre est > 0, on le retranche de la longueur de la sélection.
  //
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func uncommentRange (_ initialSelectedRange : NSRange) -> NSRange {
    var finalSelectedRange = NSRange ()
    if let tokenizer = self.mTokenizer {
      self.mTextStorage.beginEditing ()
    //--- Block comment string
      let blockCommentString = tokenizer.blockComment ()
      let blockCommentLength = (blockCommentString as NSString).length
    //--- Get source string
      let sourceString = self.mTextStorage.string as NSString
    //--- Final selection range
      finalSelectedRange = initialSelectedRange
    //--- Get line range that is affected by the operation
      let lineRange = sourceString.lineRange (for: initialSelectedRange)
      var currentLineRange = sourceString.lineRange (for: NSRange (location: lineRange.location + lineRange.length - 1, length: 1))
      repeat {
        let lineString = self.mTextStorage.string.nsSubstring (with: currentLineRange) as NSString
        if lineString.compare (blockCommentString, options: .literal, range: NSRange (location: 0, length: blockCommentLength)) == .orderedSame {
          self.mTextStorage.replaceCharacters (in: NSRange (location: currentLineRange.location, length: blockCommentLength), with: "")
        //--- Examen du nombre de caractères à l'intérieur de la sélection
          let withinSelectionCharacterCount =
            min (currentLineRange.location + blockCommentLength, finalSelectedRange.location + finalSelectedRange.length)
          -
            max (currentLineRange.location, finalSelectedRange.location)
          if withinSelectionCharacterCount > 0 {
            finalSelectedRange.length -= withinSelectionCharacterCount
          }
        //--- Examen du nombre de caractères avant la sélection
          let beforeSelectionCharacterCount = finalSelectedRange.location - currentLineRange.location
          if beforeSelectionCharacterCount > 0 {
            finalSelectedRange.location -= min (blockCommentLength, beforeSelectionCharacterCount)
          }
        }
        if currentLineRange.location > 0 {
          currentLineRange = sourceString.lineRange (for: NSRange (location: currentLineRange.location - 1, length: 1))
        }
      }while (currentLineRange.location > 0) && (currentLineRange.location >= lineRange.location)
    //---
      self.mTextStorage.endEditing ()
    //--- Register undo
      self.mUndoManager.registerUndo (
        withTarget: self,
        selector: #selector (Self.commentRangeForUndo(_:)),
        object: NSValue (range: finalSelectedRange)
      )
    }
    return finalSelectedRange
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func uncommentRangeForUndo (_ inRangeValue : NSValue) { // An NSValue of NSRange
    _ = self.uncommentRange (inRangeValue.rangeValue)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
