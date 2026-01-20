//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
//   BaseTextView
//--------------------------------------------------------------------------------------------------

public class BaseTextView : BaseView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final public let mCocoaTextView : InternalCocoaTextView

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private final let mScrollView : InternalCocoaScrollView
  private final let mVerticalScroller : InternalVerticalScroller?
  private final let mMinSize : NSSize
  private final let mHStretchingResistance : HorizontalStretchingResistance
  private final let mVStretchingResistance : VerticalStretchingResistance

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (drawsBackground inDrawsBackground : Bool,
               editable inEditable : Bool,
               textStorage inOptionalTextStorage : NSTextStorage? = nil,
               horizontalScroller inHorizontalScroller : Bool,
               verticalScroller inVerticalScroller : Bool,
               minWidth inMinWidth : Int = 0,
               minHeight inMinHeight : Int = 0,
               hStretchingResistance inHStretching : HorizontalStretchingResistance = .low,
               vStretchingResistance inVStretching : VerticalStretchingResistance = .low) {
    self.mCocoaTextView = InternalCocoaTextView (textStorage: inOptionalTextStorage)
    self.mMinSize = NSSize (width: CGFloat (inMinWidth), height: CGFloat (inMinHeight))
    self.mHStretchingResistance = inHStretching
    self.mVStretchingResistance = inVStretching
    self.mScrollView = InternalCocoaScrollView ()
    self.mVerticalScroller = inVerticalScroller ? InternalVerticalScroller () : nil
    self.mScrollView.verticalScroller = self.mVerticalScroller

    super.init (withCocoaView: self.mScrollView)

    self.mScrollView.drawsBackground = false // Scroll view has no background
    self.mScrollView.documentView = self.mCocoaTextView
    self.mScrollView.hasHorizontalScroller = inHorizontalScroller
    self.mScrollView.hasVerticalScroller = inVerticalScroller
    self.mScrollView.automaticallyAdjustsContentInsets = true

    self.mCocoaTextView.isEditable = inEditable
    self.mCocoaTextView.isSelectable = true
    self.mCocoaTextView.isVerticallyResizable = true
    self.mCocoaTextView.isHorizontallyResizable = true
    self.mCocoaTextView.isRichText = false
    self.mCocoaTextView.importsGraphics = false
    self.mCocoaTextView.allowsImageEditing = false
    self.mCocoaTextView.drawsBackground = inDrawsBackground

    let MAX_SIZE : CGFloat = 1_000_000.0 // CGFloat.greatestFiniteMagnitude
    self.mCocoaTextView.minSize = NSSize (width: 0.0, height: self.mScrollView.contentSize.height)
    self.mCocoaTextView.maxSize = NSSize (width: MAX_SIZE, height: MAX_SIZE)
    self.mCocoaTextView.textContainer?.containerSize = NSSize (
      width: self.mScrollView.contentSize.width,
      height: MAX_SIZE
    )
    self.mCocoaTextView.textContainer?.widthTracksTextView = true

    self.mCocoaTextView.isGrammarCheckingEnabled = false
    self.mCocoaTextView.isContinuousSpellCheckingEnabled = false
    self.mCocoaTextView.isAutomaticQuoteSubstitutionEnabled = false
    self.mCocoaTextView.smartInsertDeleteEnabled = false
    self.mCocoaTextView.isAutomaticDashSubstitutionEnabled = false
    self.mCocoaTextView.layoutManager?.allowsNonContiguousLayout = false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Settings
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func setUsesFindBar () -> Self {
    self.mCocoaTextView.usesFindBar = true
    self.mCocoaTextView.isIncrementalSearchingEnabled = true
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func setBackgroundColor (_ inColor : NSColor) {
    self.mCocoaTextView.backgroundColor = inColor
    self.mCocoaTextView.needsDisplay = true
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func setTextViewDelegate (_ inDelegate : (any BaseTextViewDelegate)?) {
    self.mCocoaTextView.mDelegate = inDelegate
    self.mVerticalScroller?.mDelegate = inDelegate
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func setFont (_ inFont : NSFont) -> Self {
    self.mCocoaTextView.font = inFont
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func setSelectable (_ inFlag : Bool) -> Self {
    self.mCocoaTextView.isSelectable = inFlag
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func setUndoManager (_ inUndoManager : UndoManager?) {
    self.mCocoaTextView.setUndoManager (inUndoManager)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Getters
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final var textStorage : NSTextStorage? { self.mCocoaTextView.textStorage }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final var string : String {
    get { return self.mCocoaTextView.string }
    set { self.mCocoaTextView.string = newValue }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var currentLine : Int {
    let selectedRange = self.mCocoaTextView.selectedRange
    let s = self.mCocoaTextView.string as NSString
    var idx = 0
    var lineIndex = 0
    var found = false
    while !found, idx < s.length {
      lineIndex += 1
      let lineRange = s.lineRange (for: NSRange (location: idx, length: 1))
      idx = lineRange.location + lineRange.length
      found = idx > selectedRange.location
    }
    return lineIndex
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var lineCount : Int {
    var lineIndex = 0
    let s = self.mCocoaTextView.string as NSString
    if s.length > 0 {
      var idx = 0
      while idx < s.length {
        let lineRange = s.lineRange (for: NSRange (location: idx, length: 1))
        idx = lineRange.location + lineRange.length
        lineIndex += 1
      }
    }
    return lineIndex
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func selectLineStart (_ inLine : Int) {
    if let textStorage = self.mCocoaTextView.textStorage {
      let range = textStorage.rangeFor (line: inLine, startColumn: 1, length: 0)
      self.mCocoaTextView.setSelectedRange (range)
      self.mCocoaTextView.scrollRangeToVisible (range)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final var selectedRange : NSRange { self.mCocoaTextView.selectedRange }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public var verticalRuler : NSRulerView? { self.mScrollView.verticalRulerView }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func triggerDisplay () {
    self.mCocoaTextView.needsDisplay = true
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func scrollRangeToVisible (_ inRange : NSRange) {
    self.mCocoaTextView.scrollRangeToVisible (inRange)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func setSelectedRange (_ inRange : NSRange) {
    self.mCocoaTextView.setSelectedRange (inRange)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func setTextViewDidChangeSelectionAction (_ inAction : (() -> Void)?) {
    self.mCocoaTextView.setTextViewDidChangeSelectionAction (inAction)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Ruler view
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func createVerticalRulerView (_ inCreator : (NSScrollView) -> NSRulerView) {
    let rulerView = inCreator (self.mScrollView)
    self.mScrollView.verticalRulerView = rulerView
    self.mScrollView.rulersVisible = true
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func textViewNeedsDisplay () {
    self.mCocoaTextView.needsDisplay = true
    self.mScrollView.verticalScroller?.needsDisplay = true
//    self.mScrollView.verticalRulerView?.needsDisplay = true
    self.mScrollView.verticalRulerView?.invalidateHashMarks ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Layout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var smallestSize : NSSize { self.mMinSize }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var hStretchingResistance : HorizontalStretchingResistance {
    self.mHStretchingResistance
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var vStretchingResistance : VerticalStretchingResistance {
    self.mVStretchingResistance
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//---- Avec ce code, l'édition affecte le layout
//  public override func computeSimpleLayout (withFrame inFrame: NSRect) {
//    super.computeSimpleLayout (withFrame: inFrame)
//    if !self.mScrollView.hasHorizontalScroller {
//      var f = self.mCocoaTextView.frame
//      f.size.width = self.mScrollView.contentSize.width
//      self.mCocoaTextView.frame = f
//    }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate final class EmbeddedLayoutManager : NSLayoutManager {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override init () {
    super.init ()
    noteObjectAllocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init? (coder inCoder : NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

public extension NSTextStorage {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func rangeFor (line inLine : Int,
                 startColumn inStartColumn : Int,
                 length inLength : Int) -> NSRange {
    var idx = 0
    if inLine > 1 {
      var lineIndex = 1
      let s = self.string as NSString
      var found = false
      while !found, idx < s.length {
        lineIndex += 1
        let lineRange = s.lineRange (for: NSRange (location: idx, length: 1))
        idx = lineRange.location + lineRange.length
        found = inLine == lineIndex
      }
    }
    return NSRange (location: idx + inStartColumn - 1, length: max (inLength, 0))
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

public class InternalVerticalScroller : NSScroller {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public weak var mDelegate : (any BaseTextViewDelegate)? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init () {
    super.init (frame: .zero)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init? (coder: NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override public func draw (_ inDirtyRect : NSRect) {
    super.draw (inDirtyRect)
    self.mDelegate?.didDrawVerticalScroller (inDirtyRect, self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
// https://stackoverflow.com/questions/11237622/using-autolayout-with-expanding-nstextviews
//--------------------------------------------------------------------------------------------------

public final class InternalCocoaTextView : NSTextView, NSTextViewDelegate { //, NSTextFinderClient {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public weak var mDelegate : (any BaseTextViewDelegate)? = nil

  //--- REQUIRED!!! Declaring theses properties ensures they are retained (required for ElCapitan)
  private let mTextStorage : NSTextStorage // Subclassing NSTextStorage requires defining string, …
  private let mLayoutManager = EmbeddedLayoutManager ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // https://developer.apple.com/library/archive/documentation/TextFonts/Conceptual/CocoaTextArchitecture/TextSystemArchitecture/ArchitectureOverview.html#//apple_ref/doc/uid/TP40009459-CH7-CJBJHGAG
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (textStorage inOptionalTextStorage : NSTextStorage?) {
    self.mTextStorage = inOptionalTextStorage ?? NSTextStorage ()
    let textContainer = NSTextContainer (size: NSSize (width: 300, height: 300))
    self.mTextStorage.addLayoutManager (self.mLayoutManager)
    self.mLayoutManager.addTextContainer (textContainer)

    super.init (frame: .zero, textContainer: textContainer)
    noteObjectAllocation (self)
    self.delegate = self // NSTextViewDelegate
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override init (frame : NSRect, textContainer : NSTextContainer?) { // Required, otherwise run time error
    fatalError ("init(frame:textContainer:) has not been implemented")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init? (coder inCoder : NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var acceptsFirstResponder : Bool { self.isEditable }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mUndoManager : UndoManager? = nil
  private var mTextViewDidChangeSelectionAction : (() -> Void)? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func setUndoManager (_ inUndoManager : UndoManager?) {
    self.mUndoManager = inUndoManager
    self.allowsUndo = true
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func setTextViewDidChangeSelectionAction (_ inAction : (() -> Void)?) {
    self.mTextViewDidChangeSelectionAction = inAction
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   NSTextViewDelegate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func undoManager (for inView : NSTextView) -> UndoManager? {  // NSTextViewDelegate
    return self.mUndoManager
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func textViewDidChangeSelection (_ inNotification : Notification) { // NSTextViewDelegate
    self.mTextViewDidChangeSelectionAction? ()
    self.mDelegate?.selectedRangeDidChange (self.selectedRange (), self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override func selectionRange (forProposedRange inProposedSelRange : NSRange,
                                       granularity inGranularity : NSSelectionGranularity) -> NSRange {
    let optRange = self.mDelegate?.selectionRange (
      forProposedRange: inProposedSelRange,
      granularity: inGranularity,
      self
    )
    return optRange ?? super.selectionRange (forProposedRange: inProposedSelRange, granularity: inGranularity)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override func keyDown (with inEvent : NSEvent) {
    var callSuperOnReturn = true
    self.mDelegate?.keyDown (with: inEvent, self, callSuperOnReturn: &callSuperOnReturn)
    if callSuperOnReturn {
      super.keyDown (with: inEvent)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override func mouseDown (with inEvent : NSEvent) {
    var callSuperOnReturn = true
    self.mDelegate?.mouseDown (with: inEvent, self, callSuperOnReturn: &callSuperOnReturn)
    if callSuperOnReturn {
      super.mouseDown (with: inEvent)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override func draw (_ inDirtyRect : NSRect) {
//    self.mDelegate?.willDrawTextView (inDirtyRect, self)
    super.draw (inDirtyRect)
//    self.mDelegate?.didDrawTextView (inDirtyRect, self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
