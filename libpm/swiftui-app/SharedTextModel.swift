//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 11/09/2025.
//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine

//--------------------------------------------------------------------------------------------------

let ISSUE_MARK_WIDTH = 5.0

//--------------------------------------------------------------------------------------------------

final class SharedTextModel : NSObject, ObservableObject, Identifiable, NSTextStorageDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mScanner : AbstractScanner?
  let mFileURL : URL
  private let mTextStorage = NSTextStorage ()

  var mDocumentString : String {
    didSet {
      self.mWriteFileCallback? (self.mTextStorage.string)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mSharedUndoManager : UndoManager = UndoManager ()
  @Published private var mCanUndo = false
  @Published private var mCanRedo = false
  @ObservationTracked var canUndo : Bool { self.mCanUndo }
  @ObservationTracked var canRedo : Bool { self.mCanRedo }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Published var mBottomViewIsVisible = false
  private var mWriteFileCallback : ((String) -> Void)? = nil
  private var mPopUpMenuItems = [IdentifiableAttributedString] ()

  @Published var mTopViewSelection = NSRange ()
  @Published var mBottomViewSelection = NSRange ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Binding var mIssues : [CompilationIssue]

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (scanner inScanner : AbstractScanner?,
        initialString inString : String,
        fileURL inFileURL : URL,
        issuesBinding inIssuesBinding : Binding <[CompilationIssue]>) {
    self.mScanner = inScanner
    self.mDocumentString = inString
    self._mIssues = inIssuesBinding
    self.mFileURL = inFileURL
    super.init ()
    noteObjectAllocation (self)
 //--- Add UndoManager observers
    NotificationCenter.default.addObserver (
      self,
      selector: #selector (updateUndoRedoStatus),
      name: .NSUndoManagerDidCloseUndoGroup,
      object: self.mSharedUndoManager
    )
    NotificationCenter.default.addObserver (
      self,
      selector: #selector (updateUndoRedoStatus),
      name: .NSUndoManagerDidUndoChange,
      object: self.mSharedUndoManager
    )
    NotificationCenter.default.addObserver (
      self,
      selector: #selector (updateUndoRedoStatus),
      name: .NSUndoManagerDidRedoChange,
      object: self.mSharedUndoManager
    )
  //--- Add UserDefault observer
    NotificationCenter.default.addObserver (
      self,
      selector: #selector (userDefaultDidChange),
      name: UserDefaults.didChangeNotification,
      object: nil
    )
  //---
    self.mTextStorage.delegate = self // NSTextStorageDelegate
    self.mScanner?.performLexicalColoringAfterUserDefaultChange (textStorage: self.mTextStorage)
    let attributedStr = NSMutableAttributedString (string: self.mDocumentString)
    self.mTextStorage.setAttributedString (attributedStr)
  //--- Inutile d'en faire plus, la méthode textStorage (_:didProcessEditing:range:changeInLength)
  //  va être appelée, la classe courante est le délégué du self.mTextStorage (NSTextStorageDelegate)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor deinit {
  //--- Remove observers
    let notificationCenter = NotificationCenter.default
    notificationCenter.removeObserver (
      self,
      name: .NSUndoManagerDidCloseUndoGroup,
      object: nil
    )
    notificationCenter.removeObserver (
      self,
      name: .NSUndoManagerDidUndoChange,
      object: nil
    )
    notificationCenter.removeObserver (
      self,
      name: .NSUndoManagerDidRedoChange,
      object: nil
    )
    notificationCenter.removeObserver (
      self,
      name: UserDefaults.didChangeNotification,
      object: nil
    )
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setWriteFileCallback (_ inWriteFileCallback : ((String) -> Void)?) {
    self.mWriteFileCallback = inWriteFileCallback
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc func userDefaultDidChange () {
    self.mScanner?.performLexicalColoringAfterUserDefaultChange (textStorage: self.mTextStorage)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  func blockComment () -> String? {
//    return self.mScanner?.blockComment ()
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func indexingTitles () -> [String] {
    return self.mScanner?.indexingTitles() ?? []
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var lineCount : Int {
    let str = self.mDocumentString as NSString
    var n = 0
    str.enumerateSubstrings (in: NSRange (location: 0, length: str.length), options: .byLines) { (_, range, _, stopPtr) in
      n += 1
    }
    return n
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Comment / uncomment
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func performBlockComment (forSelection inSelectedRange : NSRange) -> NSRange {
    var newSelectedRange = inSelectedRange
    if let blockComment = self.mScanner?.blockComment () {
      let blockCommentAT = NSAttributedString (string: blockComment, attributes: nil)
      let sourceString = self.mTextStorage.string as NSString
      let lineRange = sourceString.lineRange (for: inSelectedRange)
      var insertedCharsCount = 0
      var currentLineRange = sourceString.lineRange (for: NSRange (location: lineRange.location + lineRange.length - 1, length: 1))
      self.mTextStorage.beginEditing ()
      repeat {
        self.mTextStorage.insert (blockCommentAT, at: currentLineRange.location)
        insertedCharsCount += (blockComment as NSString).length
        if currentLineRange.location > 0 {
          currentLineRange = sourceString.lineRange (for: NSRange (location: currentLineRange.location - 1, length: 1))
        }
      }while ((currentLineRange.location > 0) && (currentLineRange.location >= lineRange.location))
      self.mTextStorage.endEditing ()
    //--- Update selected range
      newSelectedRange = NSRange (location: inSelectedRange.location, length: inSelectedRange.length + insertedCharsCount)
    //--- Register undo
      self.mSharedUndoManager.registerUndo (
        withTarget: self,
        selector: #selector (Self.uncommentRangeForUndo(_:)),
        object: NSValue (range: newSelectedRange)
      )
    }
    return newSelectedRange
//      self.mTextStorage.beginEditing ()
//    //---
//      let blockCommentString = NSAttributedString (string: tokenizer.blockComment (), attributes: nil)
//      let sourceString = self.mTextStorage.string as NSString
//      let lineRange = sourceString.lineRange (for: inSelectedRangeValue)
//      var insertedCharsCount = 0
//      var currentLineRange = sourceString.lineRange (for: NSRange (location: lineRange.location + lineRange.length - 1, length: 1))
//      repeat {
//        self.mTextStorage.insert (blockCommentString, at: currentLineRange.location)
//        insertedCharsCount += (blockCommentString.string as NSString).length
//        if currentLineRange.location > 0 {
//          currentLineRange = sourceString.lineRange (for: NSRange (location: currentLineRange.location - 1, length: 1))
//        }
//      }while ((currentLineRange.location > 0) && (currentLineRange.location >= lineRange.location))
//  //---
//      self.mTextStorage.endEditing ()
//  //--- Update selected range
//      newSelectedRange = NSRange (location: inSelectedRangeValue.location, length: inSelectedRangeValue.length + insertedCharsCount)
    //--- Register undo
//      self.mSharedUndoManager.registerUndo (
//        withTarget: self,
//        selector: #selector (Self.uncommentRangeForUndo(_:)),
//        object: NSValue (range: newSelectedRange)
//      )
//    }
//  //---
//    return newSelectedRange
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func commentRangeForUndo (_ inRangeValue : NSValue) { // An NSValue of NSRange
    _ = self.performBlockComment (forSelection: inRangeValue.rangeValue)
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

  func performBlockUncomment (forSelection initialSelectedRange : NSRange) -> NSRange {
    var finalSelectedRange = NSRange ()
    if let blockCommentString = self.mScanner?.blockComment () {
      self.mTextStorage.beginEditing ()
    //--- Block comment string
      let blockCommentLength = (blockCommentString as NSString).length
    //--- Get source string
      let sourceString = self.mTextStorage.string as NSString
    //--- Final selection range
      finalSelectedRange = initialSelectedRange
    //--- Get line range that is affected by the operation
      let lineRange = sourceString.lineRange (for: initialSelectedRange)
      var currentLineRange = sourceString.lineRange (for: NSRange (location: lineRange.location + lineRange.length - 1, length: 1))
      repeat {
        let lineString = (self.mTextStorage.string as NSString).substring (with: currentLineRange) as NSString
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
      self.mSharedUndoManager.registerUndo (
        withTarget: self,
        selector: #selector (Self.commentRangeForUndo(_:)),
        object: NSValue (range: finalSelectedRange)
      )
    }
    return finalSelectedRange
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func uncommentRangeForUndo (_ inRangeValue : NSValue) { // An NSValue of NSRange
    _ = self.self.performBlockUncomment (forSelection: inRangeValue.rangeValue)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // TextView
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func
  createAndConfigureTextView (installScrollToLineNotificationObserver inFlag : Bool,
                              popupMenuItemsBinding inPopUpMenuItemsBinding : Binding <[IdentifiableAttributedString]>) -> InternalNSTextView {
    DispatchQueue.main.async {
      inPopUpMenuItemsBinding.wrappedValue = self.mPopUpMenuItems
    }
  //--- Création du layout manager
    let layoutManager = InternalLayoutManager ()
    layoutManager.allowsNonContiguousLayout = true
    self.mTextStorage.addLayoutManager (layoutManager)
  //-- Création du container relié
    let greatestSize = NSSize (
      width: CGFloat.greatestFiniteMagnitude,
      height: CGFloat.greatestFiniteMagnitude
    )
    let textContainer = InternalTextContainer (size: greatestSize)
    layoutManager.addTextContainer (textContainer)
  //--- Création de la NSTextView reliée au container
    let textView = InternalNSTextView (
      textContainer: textContainer,
      sharedTextModel: self,
      undoManager: self.mSharedUndoManager,
      installScrollToLineNotificationObserver: inFlag
    )
  //---
    return textView
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func textViewIsDeiniting (_ inTextView : InternalNSTextView) {
    if let lm = inTextView.layoutManager {
      while lm.textContainers.count > 0 {
        lm.removeTextContainer (at: 0)
      }
      self.mTextStorage.removeLayoutManager (lm)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  Undo / Redo
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func updateUndoRedoStatus () {
    if self.mCanUndo != self.mSharedUndoManager.canUndo {
      self.mCanUndo = self.mSharedUndoManager.canUndo
    }
    if self.mCanRedo != self.mSharedUndoManager.canRedo {
      self.mCanRedo = self.mSharedUndoManager.canRedo
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func undo () {
    self.mSharedUndoManager.undo ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func redo () {
    self.mSharedUndoManager.redo ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func selectionRange (forProposedRange inProposedSelectionRange : NSRange,
                       granularity inGranularity : NSSelectionGranularity,
                       nsTextViewComputedRange inTextViewComputedRange : NSRange) -> NSRange {
    if let scanner = self.mScanner{
      return scanner.selectionRange (
        forProposedRange: inProposedSelectionRange,
        granularity: inGranularity,
        nsTextViewComputedRange: inTextViewComputedRange
      )
    }else{
      return inProposedSelectionRange
    }
  }

 // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool { false }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func textStorage (_ textStorage: NSTextStorage,
                    didProcessEditing inEditedMask : NSTextStorageEditActions,
                    range inEditedRange : NSRange,
                    changeInLength inDelta : Int) { // NSTextStorageDelegate
    if inEditedMask.contains (.editedCharacters) {
      self.mScanner?.performLexicalAnalysisAndColoring (
        textStorage: self.mTextStorage,
        editedRange: inEditedRange,
        changeInLength: inDelta,
        popMenuItems: &self.mPopUpMenuItems
      )
      if self.mDocumentString != self.mTextStorage.string {
        self.mDocumentString = self.mTextStorage.string
      }
    //--- Update pop up menu items
      for layoutManager in self.mTextStorage.layoutManagers {
        for textContainer in layoutManager.textContainers {
          if let textView = textContainer.textView as? InternalNSTextView {
            textView.didProcessEditing (self.mPopUpMenuItems)
          }
        }
      }
    //--- Update issues
//      for idx in 0 ..< self.mIssues.count {
//        let issue = self.mIssues [idx]
//        if issue.mIsValid, issue.fileURL == self.mFileURL {
//          DispatchQueue.main.async {
//            self.mIssues [idx].updateLocationForPreviousRange (
//              editedRange: inEditedRange,
//              changeInLength: inDelta,
//              updatedString: self.mDocumentString
//            )
//          }
//        }
//      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

struct LexicalHilitingTextEditor : NSViewRepresentable {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mIssueArray : [CompilationIssue]
  private let mInstallScrollToLineNotificationObserver : Bool
  private let mPopulateContextualMenuCallBack : (NSMenu, String, [String]) -> Void

  @ObservedObject private var mSharedTextModel : SharedTextModel

  @Binding private var mSelection : NSRange
  @Binding private var mPopUpMenuItems : [IdentifiableAttributedString]

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (model inSharedTextModel : SharedTextModel,
        selectionBinding inSelectionBinding : Binding <NSRange>,
        issueArray inIssueArray : [CompilationIssue],
        installScrollToLineNotificationObserver inFlag : Bool,
        popUpMenuItemsBinding inPopUpMenuItems : Binding <[IdentifiableAttributedString]>,
        populateContextualMenuCallBack inCallBack : @escaping (NSMenu, String, [String]) -> Void) {
    self.mSharedTextModel = inSharedTextModel
    self._mPopUpMenuItems = inPopUpMenuItems
    self._mSelection = inSelectionBinding
    self.mIssueArray = inIssueArray
    self.mInstallScrollToLineNotificationObserver = inFlag
    self.mPopulateContextualMenuCallBack = inCallBack
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func makeCoordinator () -> SyntaxHighlightingTextEditorCoordinator {
    return SyntaxHighlightingTextEditorCoordinator (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func makeNSView (context inContext : Context) -> NSScrollView {
    let textView = self.mSharedTextModel.createAndConfigureTextView (
      installScrollToLineNotificationObserver: self.mInstallScrollToLineNotificationObserver,
      popupMenuItemsBinding: self.$mPopUpMenuItems
    )
    textView.mPopulateContextualMenuCallBack = self.mPopulateContextualMenuCallBack
    textView.mPopUpMenuItemsCallBack = { self.mPopUpMenuItems = $0 }
    textView.allowsUndo = true
    textView.isRichText = true
    textView.isAutomaticDataDetectionEnabled = false
    textView.isAutomaticLinkDetectionEnabled = false
    textView.isAutomaticTextCompletionEnabled = false
    textView.isAutomaticTextReplacementEnabled = false
    textView.isAutomaticDashSubstitutionEnabled = false
    textView.isAutomaticQuoteSubstitutionEnabled = false
    textView.isAutomaticSpellingCorrectionEnabled = false
    textView.isEditable = true
    textView.isSelectable = true
    textView.minSize = .zero
    textView.maxSize = NSSize (
      width: CGFloat.greatestFiniteMagnitude,
      height: CGFloat.greatestFiniteMagnitude
    )
    textView.isHorizontallyResizable = true
    textView.isVerticallyResizable = true
    textView.autoresizingMask = [.width]
    textView.delegate = inContext.coordinator
  //--- ScrollView
    let scrollView = InternalNSScrollView ()
    scrollView.documentView = textView
    scrollView.hasVerticalScroller = true
    scrollView.autohidesScrollers = true
  //--- Find bar
    textView.usesFindBar = true
    textView.isIncrementalSearchingEnabled = true
 //--- Create ruler
    let rulerView = InternalTextViewRulerView (textView: textView)
    rulerView.scrollView = scrollView
    scrollView.verticalRulerView = rulerView
    scrollView.rulersVisible = true
  //--- Restore selection
    textView.setSelectedRange (self.mSelection)
    DispatchQueue.main.async {
      textView.scrollRangeToVisible (textView.selectedRange)
    }
  //---
    return scrollView
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func updateNSView (_ inScrollView : NSScrollView,
                     context inContext : Context) {
    if let rulerView = inScrollView.verticalRulerView as? InternalTextViewRulerView {
      rulerView.setIssueArray (self.mIssueArray)
    }
    if self.mSelection != inContext.coordinator.mLastSelection,
       let textView = inScrollView.documentView as? InternalNSTextView {
      inContext.coordinator.mLastSelection = self.mSelection
      DispatchQueue.main.async {
        textView.setSelectedRange (self.mSelection)
        textView.scrollRangeToVisible (textView.selectedRange)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func selectionRangeDidChange (_ inSelectedRange : NSRange) {
    DispatchQueue.main.async {
      if self.mSelection != inSelectedRange {
        self.mSelection = inSelectedRange
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate final class InternalNSScrollView : NSScrollView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init () {
    super.init (frame: .zero)
    noteObjectAllocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init? (coder: NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

final class SyntaxHighlightingTextEditorCoordinator : NSObject, NSTextViewDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mParent : LexicalHilitingTextEditor
  var mLastSelection : NSRange? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (_ inParent : LexicalHilitingTextEditor) {
    self.mParent = inParent
    super.init ()
    noteObjectAllocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func textViewDidChangeSelection (_ inNotification : Notification) { // NSTextViewDelegate
    if let textView = inNotification.object as? NSTextView {
      textView.enclosingScrollView?.verticalRulerView?.layer?.setNeedsDisplay ()
      textView.layer?.setNeedsDisplay () // For hiliting current line when selection length is empty
      self.mParent.selectionRangeDidChange (textView.selectedRange)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate final class InternalNSTextView : NSTextView, NSTextFinderClient {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private weak var mSharedTextModel : SharedTextModel?
  private weak var mUndoManager : UndoManager?
  var mPopUpMenuItemsCallBack : ((_ inPopUpMenuItems : [IdentifiableAttributedString]) -> Void)? = nil
  var mPopulateContextualMenuCallBack : ((NSMenu, String, [String]) -> Void)? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (textContainer inContainer : NSTextContainer?,
        sharedTextModel inSharedTextModel : SharedTextModel,
        undoManager inUndoManager : UndoManager,
        installScrollToLineNotificationObserver inFlag : Bool) {
    self.mSharedTextModel = inSharedTextModel
    self.mUndoManager = inUndoManager
    super.init (frame: .zero, textContainer: inContainer)
    noteObjectAllocation (self)
    if inFlag {
      NotificationCenter.default.addObserver (
        self,
        selector: #selector (self.scrollToLocationNotification(_:)),
        name: Notification.Name.myScrollSourceToLocation,
        object: nil
      )
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init? (coder inCoder : NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor deinit {
    self.mSharedTextModel?.textViewIsDeiniting (self)
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override var undoManager : UndoManager? {
    return self.mUndoManager
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func mouseDown (with inEvent : NSEvent) {
  //--- Rafraîchir le vertical ruler
    self.enclosingScrollView?.verticalRulerView?.layer?.setNeedsDisplay ()
  //--- Intercepter un command+clic
    if inEvent.modifierFlags.contains (.command) {
    //--- Select range
      let local_point = self.convert (inEvent.locationInWindow, from: nil)
      let characterIndex = self.characterIndexForInsertion (at: local_point)
      let selectedRange = NSRange (location: characterIndex, length: 0)
      let r = self.selectionRange (forProposedRange: selectedRange, granularity: .selectByWord)
      self.setSelectedRange (r)
    //--- Display contextual menu
      let selectedString = (self.string as NSString).substring (with: r)
      let menu = NSMenu (title: "")
      menu.autoenablesItems = false
      menu.font = NSFont.systemFont (ofSize: NSFont.smallSystemFontSize)
      menu.allowsContextMenuPlugIns = false
      let indexingTitles = self.mSharedTextModel?.indexingTitles () ?? []
      self.mPopulateContextualMenuCallBack? (menu, selectedString, indexingTitles)
      NSMenu.popUpContextMenu (menu, with: inEvent, for: self)
    }else{
      super.mouseDown (with: inEvent)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func selectionRange (forProposedRange inProposedSelectionRange : NSRange,
                                granularity inGranularity : NSSelectionGranularity) -> NSRange {
    let nsTextViewComputedRange = super.selectionRange (
      forProposedRange: inProposedSelectionRange,
      granularity: inGranularity
    )
    var range = nsTextViewComputedRange
    if let model = self.mSharedTextModel {
      range = model.selectionRange (
        forProposedRange: inProposedSelectionRange,
        granularity: inGranularity,
        nsTextViewComputedRange: nsTextViewComputedRange
      )
    }
    return range
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func draw (_ inDirtyRect : NSRect) {
    super.draw (inDirtyRect)
  //---
    if self.selectedRange.length == 0 {
      let startEnd = self.string.lineStartAndEndLocations (forLocation: self.selectedRange.location)
      if let startRect = self.rectForCharacter (atIndex: startEnd.startLocation),
         let endRect = self.rectForCharacter (atIndex: startEnd.endLocation) {
        let r = startRect.union (endRect)
        NSColor.blue.withAlphaComponent (0.05).setFill ()
        NSBezierPath.fill (r)
      }
   }
  //--- Underline issues
    for issue in self.mSharedTextModel?.mIssues ?? [] {
      if issue.mIsValid, issue.fileURL == self.mSharedTextModel?.mFileURL {
        let startIndex = issue.mStartLocation
        let endIndex = startIndex + issue.length
        if let startRect = self.rectForCharacter (atIndex: startIndex),
           let endRect = self.rectForCharacter (atIndex: endIndex) {
          let bp = NSBezierPath ()
          bp.move (to: NSPoint (x: startRect.origin.x, y: startRect.maxY - 1.0))
          bp.line (to: NSPoint (x: endRect.origin.x, y: endRect.maxY - 1.0))
          switch issue.kind {
          case .error : NSColor.systemRed.setStroke ()
          case .warning : NSColor.systemOrange.setStroke ()
          }
          bp.lineWidth = 2.0
          bp.stroke ()
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func rectForCharacter (atIndex inIndex : Int) -> NSRect? {
    if let layoutManager = self.layoutManager, let textContainer = self.textContainer {
    //--- S'assurer que le layout est calculé
      layoutManager.ensureLayout (for: textContainer)
    //-- Conversion caractère → glyphe
      let glyphIndex = layoutManager.glyphIndexForCharacter (at: inIndex)
    //--- Rect du glyphe dans le text container
      let r = layoutManager.boundingRect (
        forGlyphRange: NSRange (location: glyphIndex, length: 1),
        in: textContainer
      )
      return r
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func scrollToLocationNotification (_ inNotification : Notification) {
    if let notificationObject = inNotification.object as? ScrollSourceToLineNotification {
      notificationObject.performScroll (on: self)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func didProcessEditing (_ inPopupMenuItems : [IdentifiableAttributedString]) {
    self.mPopUpMenuItemsCallBack? (inPopupMenuItems)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate final class InternalTextViewRulerView : NSRulerView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private weak var mTextView : NSTextView? = nil
  private let mPadding : CGFloat = 5
  private var mLineRangeCacheArray : [NSRange] = []
  private var mIssueArray : [CompilationIssue] = []

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (textView: NSTextView) {
    self.mTextView = textView
    super.init (scrollView: textView.enclosingScrollView!, orientation: .verticalRuler)
    noteObjectAllocation (self)
    self.clientView = textView
    self.clipsToBounds = true
    self.ruleThickness = 75.0 // À ajuster selon besoin
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init (coder: NSCoder) { fatalError("init(coder:)") }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setIssueArray (_ inIssueArray : [CompilationIssue]) {
    self.mIssueArray = inIssueArray
    self.rebuildLineIndexCache ()
    self.setNeedsDisplay (self.bounds)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func rebuildLineIndexCache () {
    guard let textView = self.mTextView else { return }
    let str = textView.string as NSString
    self.mLineRangeCacheArray = []
    str.enumerateSubstrings (in: NSRange (location: 0, length: str.length), options: .byLines) { _, range, _, _ in
      var lineRange = range
      lineRange.length += 1
      self.mLineRangeCacheArray.append (lineRange)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Recherche binaire pour trouver le numéro de ligne à partir d'un index caractère
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func lineRangeAndNumber (forCharIndex inCharIndex : Int) -> (NSRange, Int) {
    var low = 0
    var high = self.mLineRangeCacheArray.count - 1
    while low <= high {
      let mid = (low + high) / 2
      if self.mLineRangeCacheArray [mid].location == inCharIndex {
        return (self.mLineRangeCacheArray [mid], mid + 1)
      }else if self.mLineRangeCacheArray [mid].location < inCharIndex {
        low = mid + 1
      }else{
        high = mid - 1
      }
    }
    return (self.mLineRangeCacheArray [self.mLineRangeCacheArray.count - 1], self.mLineRangeCacheArray.count)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  override func draw (_ inDirtyRect : NSRect) {
//    self.drawHashMarksAndLabels (in: inDirtyRect)
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func drawHashMarksAndLabels (in rect: NSRect) {
    guard
      let textView = self.mTextView,
      let layoutManager = textView.layoutManager,
      let textContainer = textView.textContainer
    else { return }
    self.rebuildLineIndexCache ()
  //--- Selected range
    let selectedRange : NSRange = textView.selectedRange
  //--- Draw background
    NSColor.windowBackgroundColor.setFill()
    self.bounds.fill ()
  //--- visible rect relatif au document (coordonnées du document)
    let visibleRect = textView.enclosingScrollView?.contentView.bounds ?? textView.bounds
  //--- obtenir la plage de glyphs visibles
    let glyphRange = layoutManager.glyphRange (forBoundingRect: visibleRect, in: textContainer)
  //--- On parcourt les fragments de ligne visibles
    layoutManager.enumerateLineFragments (forGlyphRange: glyphRange) { (rectFragment, usedRect, textContainer, glyphRangeForFragment, stop) in
  // centre vertical du fragment pour aligner le label
      let y = usedRect.minY + (usedRect.height / 2.0) - visibleRect.minY
    // convertir glyph -> caractère pour trouver le numéro de ligne
      let charIndex = layoutManager.characterIndexForGlyph (at: glyphRangeForFragment.location)
    // numéro de ligne logique = nombre de retours + 1
      let (lineRange, lineNumber) = self.lineRangeAndNumber (forCharIndex: charIndex)
    //--- Draw background if line selected
      let lineIntersectsSelection = selectedRange.intersection (lineRange) != nil
      if lineIntersectsSelection {
        let ruleRectForCurrentLine = NSRect (
          x: 0.0,
          y: usedRect.minY - visibleRect.minY,
          width: self.bounds.size.width,
          height: usedRect.height
        )
//        NSColor.white.setFill ()
        NSColor.blue.withAlphaComponent (0.05).setFill ()
        NSBezierPath.fill (ruleRectForCurrentLine)
      }
    //--- Préparer l'attribut de texte
      let attrs: [NSAttributedString.Key: Any] = [
        .font: textView.font!,
        .foregroundColor: NSColor.secondaryLabelColor
      ]
      let label = "\(lineNumber)" as NSString
      let labelSize = label.size (withAttributes: attrs)
    //--- Draw line number
      let x = self.ruleThickness - labelSize.width - self.mPadding
      let drawPoint = NSPoint (x: x, y: y - (labelSize.height / 2.0))
      label.draw (at: drawPoint, withAttributes: attrs)
    }
  //---
    for issue in self.mIssueArray {
      if issue.mIsValid, let p = self.pointForCharacter (atIndex: issue.mStartLocation) {
        let rect = NSRect (
          x: ISSUE_MARK_WIDTH,
          y: p.y + ISSUE_MARK_WIDTH,
          width: ISSUE_MARK_WIDTH * 2.0,
          height: ISSUE_MARK_WIDTH * 2.0
        )
        let bp = NSBezierPath (ovalIn: rect)
        switch issue.kind {
        case .error : NSColor.systemRed.setFill ()
        case .warning : NSColor.systemOrange.setFill ()
        }
        bp.fill()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func pointForCharacter (atIndex index : Int) -> NSPoint? {
    if let textView = self.mTextView,
          let layoutManager = textView.layoutManager,
          let textContainer = textView.textContainer,
          let textStorage = textView.textStorage,
          index >= 0,
          index < textStorage.length {
    //--- S'assurer que le layout est calculé
      layoutManager.ensureLayout (for: textContainer)
    //-- Conversion caractère → glyphe
      let glyphIndex = layoutManager.glyphIndexForCharacter (at: index)
    //--- Rect du glyphe dans le text container
      let r = layoutManager.boundingRect (
        forGlyphRange: NSRange (location: glyphIndex, length: 1),
        in: textContainer
      )
    //--- Décalage dû à l'origine du texte dans la textView
      let p = self.convert (NSPoint (x: 0.0, y: r.origin.y), from: textView)
      return p
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func mouseDown (with inEvent : NSEvent) {
    for issue in self.mIssueArray {
      if issue.mIsValid, let p = self.pointForCharacter (atIndex: issue.mStartLocation) {
        let rect = NSRect (
          x: ISSUE_MARK_WIDTH,
          y: p.y + ISSUE_MARK_WIDTH,
          width: ISSUE_MARK_WIDTH * 2.0,
          height: ISSUE_MARK_WIDTH * 2.0
        )
        let bp = NSBezierPath (ovalIn: rect)
        let p = self.convert (inEvent.locationInWindow, from: nil)
        if bp.contains (p) {
          NotificationCenter.default.post (name: .myShowIssueInSidebar, object: issue.id)
          return
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate class InternalLayoutManager : NSLayoutManager {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  nonisolated override init () {
    super.init ()
    noteObjectAllocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  nonisolated required init (coder: NSCoder) { fatalError("init(coder:)") }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate class InternalTextContainer : NSTextContainer {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  nonisolated override init (size inSize : CGSize) {
    super.init (size: inSize)
    noteObjectAllocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  nonisolated required init (coder: NSCoder) { fatalError("init(coder:)") }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
