//
//  SWIFT_SharedTextModel.swift
//  galgas-ide-swiftui
//
//  Created by Pierre Molinaro on 11/09/2025.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine

//--------------------------------------------------------------------------------------------------

final class SWIFT_SharedTextModel : NSObject, ObservableObject, Identifiable, NSTextStorageDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mScanner : SWIFT_Scanner?
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
  var mTopViewSelection = NSRange () // Pas de @Published
  var mBottomViewSelection = NSRange () // Pas de @Published
  private var mWriteFileCallback : ((String) -> Void)? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (scanner inScanner : SWIFT_Scanner?,
        initialString inString : String) {
    self.mScanner = inScanner
    self.mDocumentString = inString
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
  // TextView
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func createAndConfigureTextView () -> InternalNSTextView {
  //--- Création du layout manager
    let layoutManager = SWIFT_LayoutManager ()
    layoutManager.allowsNonContiguousLayout = true
    self.mTextStorage.addLayoutManager (layoutManager)
  //-- Création du container relié
    let greatestSize = NSSize (
      width: CGFloat.greatestFiniteMagnitude,
      height: CGFloat.greatestFiniteMagnitude
    )
    let textContainer = SWIFT_TextContainer (size: greatestSize)
    layoutManager.addTextContainer (textContainer)
  //--- Création de la NSTextView reliée au container
    let textView = InternalNSTextView (
      textContainer: textContainer,
      sharedTextModel: self,
      undoManager: self.mSharedUndoManager
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
        changeInLength: inDelta
      )
    }
    if self.mDocumentString != self.mTextStorage.string {
      self.mDocumentString = self.mTextStorage.string
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

struct SWIFT_LexicalHilitingTextEditor : NSViewRepresentable {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Binding private var mSelectionBinding : NSRange
  private let mTextView : InternalNSTextView

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (model inSharedTextModel : SWIFT_SharedTextModel,
        selectionBinding inSelectionBinding : Binding <NSRange>) {
    self.mTextView = inSharedTextModel.createAndConfigureTextView ()
    self._mSelectionBinding = inSelectionBinding
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func makeCoordinator () -> SyntaxHighlightingTextEditorCoordinator {
    return SyntaxHighlightingTextEditorCoordinator (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func makeNSView (context inContext : Context) -> NSScrollView {
    self.mTextView.allowsUndo = true
    self.mTextView.isRichText = true
    self.mTextView.isAutomaticDataDetectionEnabled = false
    self.mTextView.isAutomaticLinkDetectionEnabled = false
    self.mTextView.isAutomaticTextCompletionEnabled = false
    self.mTextView.isAutomaticTextReplacementEnabled = false
    self.mTextView.isAutomaticDashSubstitutionEnabled = false
    self.mTextView.isAutomaticQuoteSubstitutionEnabled = false
    self.mTextView.isAutomaticSpellingCorrectionEnabled = false
    self.mTextView.isEditable = true
    self.mTextView.isSelectable = true
    self.mTextView.minSize = .zero
    self.mTextView.maxSize = NSSize (
      width: CGFloat.greatestFiniteMagnitude,
      height: CGFloat.greatestFiniteMagnitude
    )
    self.mTextView.isHorizontallyResizable = true
    self.mTextView.isVerticallyResizable = true
    self.mTextView.autoresizingMask = [.width]
    self.mTextView.delegate = inContext.coordinator
  //--- ScrollView
    let scrollView = InternalNSScrollView ()
    scrollView.documentView = self.mTextView
    scrollView.hasVerticalScroller = true
    scrollView.autohidesScrollers = true
  //--- Find bar
    self.mTextView.usesFindBar = true
    self.mTextView.isIncrementalSearchingEnabled = true
 //--- Create ruler
    let rulerView = SWIFT_TextViewRulerView (textView: self.mTextView)
    rulerView.scrollView = scrollView
    scrollView.verticalRulerView = rulerView
    scrollView.rulersVisible = true
  //--- Restore selection
    self.mTextView.selectedRange = self.mSelectionBinding
    DispatchQueue.main.async {
      self.mTextView.scrollRangeToVisible (self.mTextView.selectedRange)
    }
  //---
    return scrollView
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func updateNSView (_ inUnusedScrollView : NSScrollView,
                     context inContext : Context) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func selectionRangeDidChange () {
    self.mTextView.enclosingScrollView?.verticalRulerView?.layer?.setNeedsDisplay ()
    if self.mSelectionBinding != self.mTextView.selectedRange {
      self.mSelectionBinding = self.mTextView.selectedRange
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

  private let mParent : SWIFT_LexicalHilitingTextEditor

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (_ inParent : SWIFT_LexicalHilitingTextEditor) {
    self.mParent = inParent
    super.init ()
    noteObjectAllocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func textViewDidChangeSelection (_ inUnusedNotification : Notification) {  // NSTextViewDelegate
    self.mParent.selectionRangeDidChange ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate final class InternalNSTextView : NSTextView, NSTextFinderClient {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private weak var mSharedTextModel : SWIFT_SharedTextModel?
  private weak var mUndoManager : UndoManager?

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (textContainer inContainer : NSTextContainer?,
        sharedTextModel inSharedTextModel : SWIFT_SharedTextModel,
        undoManager inUndoManager : UndoManager) {
    self.mSharedTextModel = inSharedTextModel
    self.mUndoManager = inUndoManager
    super.init (frame: .zero, textContainer: inContainer)
    noteObjectAllocation (self)
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
      let menu = NSMenu (title: "")
      menu.autoenablesItems = false
    //--- Add issues
//      for issue in self.mDocument?.mIssueArray ?? [] {
//        if NSIntersectionRange (issue.range, r).length != NSNotFound {
//          issue.storeItemsToMenu (menu, inCocoaTextWiew, r)
//        }
//      }
    //--- Source indexing
//      self.appendToIndexingMenu (menu, r)
    //--- Display menu
      menu.font = NSFont.systemFont (ofSize: NSFont.smallSystemFontSize)
      menu.allowsContextMenuPlugIns = false
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

}

//--------------------------------------------------------------------------------------------------

fileprivate final class SWIFT_TextViewRulerView : NSRulerView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private weak var mTextView : NSTextView? = nil
  private let mPadding : CGFloat = 5
  private var mLineRangeCacheArray : [NSRange] = []

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (textView: NSTextView) {
    self.mTextView = textView
    super.init (scrollView: textView.enclosingScrollView!, orientation: .verticalRuler)
    noteObjectAllocation (self)
    self.clientView = textView
    self.clipsToBounds = true
    self.ruleThickness = 75.0 // ajuste selon besoin
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init (coder: NSCoder) { fatalError("init(coder:)") }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
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

  override func draw (_ inDirtyRect : NSRect) {
    self.drawHashMarksAndLabels (in: inDirtyRect)
  }

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
        NSColor.white.setFill ()
        NSBezierPath.fill (ruleRectForCurrentLine)
      }
    //--- Préparer l'attribut de texte
      let attrs: [NSAttributedString.Key: Any] = [
        .font: textView.font!, //NSFont.monospacedDigitSystemFont (ofSize: NSFont.systemFontSize(for: .small), weight: .regular),
        .foregroundColor: NSColor.secondaryLabelColor
      ]
      let label = "\(lineNumber)" as NSString
      let labelSize = label.size (withAttributes: attrs)
    //--- Draw line number
      let x = self.ruleThickness - labelSize.width - self.mPadding
      let drawPoint = NSPoint (x: x, y: y - (labelSize.height / 2.0))
      label.draw (at: drawPoint, withAttributes: attrs)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate class SWIFT_LayoutManager : NSLayoutManager {

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

fileprivate class SWIFT_TextContainer : NSTextContainer {

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
