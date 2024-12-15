//
//  Created by Pierre Molinaro on 02/11/2021.
//
//--------------------------------------------------------------------------------------------------

import AppKit
import MyAutoLayoutKit

//--------------------------------------------------------------------------------------------------

@MainActor final class SWIFT_SingleDocument : NSDocument, NSTextStorageDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let mUndoManager = UndoManager ()
  private var mTokenizer : SWIFT_Tokenizer_Protocol? = nil
  var tokenizer : SWIFT_Tokenizer_Protocol?  { self.mTokenizer }
  private let mFontStyleObserver = EBOutletEvent ()
  private let mLineHeightObserver = EBOutletEvent ()
  var mDisplayDescriptors = [SWIFT_WeakElement <SWIFT_DisplayDescriptor>] ()
  var mTokenRangeArray = [SWIFT_Token] ()
  let mTextStorage = NSTextStorage (string: "")

 //····················································································································

  override init () {
    super.init ()
    noteObjectAllocation (self)

    self.undoManager = self.mUndoManager
    self.mTextStorage.delegate = self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit { // Not always in main thead
    self.mTimerForAutosaving?.invalidate ()
    DispatchQueue.main.async { SWIFT_SingleWindow.documentEditionStateDidChange () }
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override class var autosavesInPlace: Bool { return true }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   ADD DISPLAY DESCRIPTOR
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func append (displayDescriptor inDisplayDescriptor : SWIFT_DisplayDescriptor) {
    self.mDisplayDescriptors.append (SWIFT_WeakElement (inDisplayDescriptor))
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
          tokenizer.color (forStyle: i).startsBeingObserved (by: self.mFontStyleObserver)
          tokenizer.bold (forStyle: i).startsBeingObserved (by: self.mFontStyleObserver)
          tokenizer.italic (forStyle: i).startsBeingObserved (by: self.mFontStyleObserver)
        }
        tokenizer.font.startsBeingObserved (by: self.mFontStyleObserver)
        tokenizer.lineHeight.startsBeingObserved (by: self.mFontStyleObserver)
        tokenizer.lineHeight.startsBeingObserved (by: self.mLineHeightObserver)
      }
      self.mFontStyleObserver.mEventCallBack = { [weak self] in
        if let me = self {
          me.mTextStorage.beginEditing ()
          me.computeLexicalColoring (NSRange (location: 0, length: me.mTextStorage.length), 0)
          me.mTextStorage.endEditing ()
        }
      }
      self.mLineHeightObserver.mEventCallBack = { [weak self] in
        if let me = self {
          for displayDescriptor in me.mDisplayDescriptors {
            displayDescriptor.possibleElement?.lineHeightDidChange ()
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
//    Swift.print ("makeWindowControllers has not been implemented")
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

 //····················································································································
 // Update from file system
 //····················································································································

  override func presentedItemDidChange () {
    // [caution] This method can be called from any thread.
    // [caution] DO NOT invoke `super.presentedItemDidChange()` that reverts document automatically if autosavesInPlace is enable.
   //        super.presentedItemDidChange()
    DispatchQueue.main.async { self.presentedItemDidChange_onMainThread () }
  }

 //····················································································································

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
  // Auto save
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mTimerForAutosaving : Timer? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  nonisolated func textStorage (_ textStorage: NSTextStorage,
                                didProcessEditing inEditedMask : NSTextStorageEditActions,
                                range inEditedRange: NSRange,
                                changeInLength inDelta : Int) {  // NSTextStorageDelegate
    if inEditedMask.contains (.editedCharacters) {
      DispatchQueue.main.async {
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
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func autosaveTimerDidFire (_ inTimer : Timer) {
    self.saveGGSDocument ()
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

  func saveGGSDocument () {
    self.save (nil)
    self.releaseTimer ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
