//--------------------------------------------------------------------------------------------------

import AppKit
import MyAutoLayoutKit

//--------------------------------------------------------------------------------------------------

final class AutoLayoutSourceTextPresentationView : AutoLayoutVerticalStackView { //, NSTextViewDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  private let mScrollView = BaseScrollView (
//    contentView: <#BaseView#>,
//    horizontalScroller: <#Bool#>,
//    verticalScroller: <#Bool#>,
//    minWidth: <#Int#>,
//    minHeight: <#Int#>,
//    hStretchingResistance: <#HorizontalStretchingResistance#>,
//    vStretchingResistance: <#VerticalStretchingResistance#>)
  private let mEntryPopUpButton = AutoLayoutPopUpButton (pullsDown: false, size: .regular)
  private let mSourceTextView : BaseTextView
  var sourceTextView : BaseTextView { return self.mSourceTextView }
  private var mBackgroundObserver : EBSimpleObserver? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (textStorage inTextStorage : NSTextStorage,
        undoManager inUndoManager : UndoManager) {
    self.mSourceTextView = BaseTextView (
      drawsBackground: true,
      editable: true,
      textStorage: inTextStorage,
      horizontalScroller: true,
      verticalScroller: true
    )
    super.init ()
    _ = self.appendView (self.mSourceTextView)
  //--- Configure text view
//    self.mSourceTextView.isGrammarCheckingEnabled = false
//    self.mSourceTextView.isContinuousSpellCheckingEnabled = false
//    self.mSourceTextView.useAllLigatures (nil)
//    self.mSourceTextView.isAutomaticQuoteSubstitutionEnabled = false
//    self.mSourceTextView.smartInsertDeleteEnabled = false
//    self.mSourceTextView.isAutomaticDashSubstitutionEnabled = false
//    self.mSourceTextView.layoutManager?.allowsNonContiguousLayout = false
//    self.mSourceTextView.isEditable = true
//    self.mSourceTextView.isSelectable = true
//    self.mSourceTextView.isVerticallyResizable = true
//    self.mSourceTextView.isHorizontallyResizable = true
//    self.mSourceTextView.isRichText = false
//    self.mSourceTextView.importsGraphics = false
//    self.mSourceTextView.allowsImageEditing = false
//    let MAX_SIZE : CGFloat = 1_000_000.0 // CGFloat.greatestFiniteMagnitude
//    self.mSourceTextView.minSize = NSSize (width: 0.0, height: self.mScrollView.contentSize.height)
//    self.mSourceTextView.maxSize = NSSize (width: MAX_SIZE, height: MAX_SIZE)
//    self.mSourceTextView.textContainer?.containerSize = NSSize (width: self.mScrollView.contentSize.width, height: MAX_SIZE)
//    self.mSourceTextView.textContainer?.widthTracksTextView = true
//    self.mSourceTextView.layoutManager?.replaceTextStorage (inTextStorage)
//// §    self.mSourceTextView.set (undoManager: inUndoManager)
//    self.mSourceTextView.delegate = self
//  //--- Ajouter un observateur pour être averti du changement de la couleur de fond
//    self.mBackgroundObserver = EBSimpleObserver (object: prefsEditorBackColor) { [weak self] in
//      self?.mSourceTextView.backgroundColor = prefsEditorBackColor.propval
//      self?.mSourceTextView.needsDisplay = true
//    }
//  //--- Configure scrollView
//    self.mScrollView.drawsBackground = false
//    self.mScrollView.documentView = self.mSourceTextView
//    self.mScrollView.hasHorizontalScroller = true
//    self.mScrollView.hasVerticalScroller = true
//    self.mScrollView.automaticallyAdjustsContentInsets = true
//    self.mScrollView.rulersVisible = true
//  //--- Set custom ruler view to scrollview
//    let rulerView = MyRulerViewForTextView (scrollView: self.mScrollView)
//    rulerView.ruleThickness = 50.0
//    self.mScrollView.verticalRulerView = rulerView
//  //--- Configure vertical stack view
//    _ = self.set (topMargin: 8)
//      .appendView (AutoLayoutHorizontalStackView ().appendView (self.mEntryPopUpButton).set (rightMargin: 8))
//      .appendView (self.mScrollView)
 }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  Entry pop up button
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func populateEntryPopUpButton (with inItems : [(NSAttributedString, Int)]) {
    self.mEntryPopUpButton.removeAllItems ()
//    for (title, location) in inItems {
//      self.mEntryPopUpButton.addItem (withTitle: "")
//      let menuItem : NSMenuItem = self.mEntryPopUpButton.lastItem!
//      menuItem.attributedTitle = title
//      menuItem.tag = location
//      menuItem.target = self
//      menuItem.action = #selector (Self.gotoPopUpButtonSelectedEntry (_:))
//    }
//    self.mEntryPopUpButton.isEnabled = inItems.count > 0
//    self.selectPopUpItemFollowingTextSelection ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func gotoPopUpButtonSelectedEntry (_ inSender : Any?) {
    if let menu = inSender as? NSMenuItem {
      let location = menu.tag
      if location >= 0, let ts = self.mSourceTextView.textStorage, location < ts.length {
        let range = NSRange (location: location, length: 0)
        self.mSourceTextView.setSelectedRange (range)
        self.mSourceTextView.scrollRangeToVisible (range)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func selectPopUpItemFollowingTextSelection () {
//    let selectedLocation = self.mSourceTextView.selectedRange.location
////    Swift.print ("selectedLocation \(selectedLocation)")
//    var optionalSelectedMenuItem : NSMenuItem? = self.mEntryPopUpButton.itemArray.first
//    for menuItem in self.mEntryPopUpButton.itemArray {
////      Swift.print ("  menuItem.tag \(menuItem.tag)")
//      if menuItem.tag <= selectedLocation {
//        optionalSelectedMenuItem = menuItem
////        Swift.print ("  match")
//      }else{
//        break
//      }
//    }
//    self.mEntryPopUpButton.select (optionalSelectedMenuItem)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func textViewDidChangeSelection (_ notification: Notification) { // NSTextViewDelegate
    self.selectPopUpItemFollowingTextSelection ()
// §    self.mScrollView.verticalRulerView?.needsDisplay = true
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lineHeightDidChange () {
// §    self.mScrollView.verticalRulerView?.needsDisplay = true
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate final class MyRulerViewForTextView : NSRulerView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (scrollView inScrollView : NSScrollView) {
    super.init (scrollView: inScrollView, orientation: .verticalRuler)
    noteObjectAllocation (self) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init (coder : NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  - (void) setIssueArray: (NSArray *) inIssueArray {
//    mIssueArray = inIssueArray.copy ;
//    [self setNeedsDisplay:YES] ;
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func drawHashMarksAndLabels (in inRect : NSRect) {
    if let scrollView = self.scrollView, let textView = scrollView.documentView as? NSTextView,
       let layoutManager = textView.layoutManager, let textContainer = textView.textContainer {
    //-------- Draw background
      NSColor.windowBackgroundColor.setFill ()
      NSBezierPath.fill (inRect)
  //    Swift.print ("inRect \(inRect), bounds \(self.bounds)")
    //-------- Set draw text attributes and find point size
      let textAttributes : [NSAttributedString.Key : Any] = [
        NSAttributedString.Key.font : NSFont.monospacedDigitSystemFont (ofSize: NSFont.smallSystemFontSize, weight: .semibold),
        NSAttributedString.Key.foregroundColor : NSColor.darkGray
      ]
    //-------- Note: ruler view and text view are both flipp
      let selectedRange : NSRange = textView.selectedRange
      let sourceString = textView.string as NSString
    //-------- Compute layout
      layoutManager.ensureLayout (for: textContainer)
    //-------- Find the characters that are currently visible
      let visibleGlyphRange = layoutManager.glyphRange (
        forBoundingRect: textView.bounds,
        in: textContainer
      )
      let visibleRange = layoutManager.characterRange (forGlyphRange: visibleGlyphRange, actualGlyphRange: nil)
    //--- Find first line number to draw
      var idx = 0
      var lineIndex = 1
    //---
      var maxYreached = false
      while (idx < sourceString.length) && !maxYreached {
        let lineRange = sourceString.lineRange (for: NSMakeRange (idx, 0))
        let isVisible = max (visibleRange.location, lineRange.location) <= min (NSMaxRange(visibleRange), NSMaxRange(lineRange))
        maxYreached = lineRange.location > NSMaxRange (visibleRange) ;
        if isVisible {
          let r = layoutManager.lineFragmentRect (forGlyphAt: layoutManager.glyphIndexForCharacter (at: lineRange.location), effectiveRange: nil, withoutAdditionalLayout: true)
          var p = self.convert (NSPoint (x: 0.0, y: r.origin.y), from: textView)
          let lineIntersectsSelection =
            max (selectedRange.location, idx)
              <
            min (selectedRange.location + selectedRange.length + 1, lineRange.location + lineRange.length)
        //--- Draw background if line selected
          if lineIntersectsSelection {
            let rBackground = NSRect (origin: NSPoint (x: 0.0, y: p.y), size: NSSize (width: self.bounds.size.width, height: r.size.height))
            NSColor.white.setFill ()
            NSBezierPath.fill (rBackground)
          }
        //--- Draw line number
          let offset = layoutManager.typesetter.baselineOffset (
            in: layoutManager,
            glyphIndex: layoutManager.glyphIndexForCharacter (at: lineRange.location)
          )
          let str = "\(lineIndex)"
          let strSize = str.size (withAttributes: textAttributes)
          let rightMargin = 5.0
          p.x = self.bounds.size.width - strSize.width - rightMargin
          // Swift.print ("p.y \(p.y) offset \(offset), r.size.height \(r.size.height), strSize.height \(strSize.height)")
          p.y += r.size.height - strSize.height - offset
          str.draw (at: p, withAttributes: textAttributes)
        }
        idx = lineRange.location + lineRange.length
        lineIndex += 1
      }
    //-------- Draw right border
      let p1 = NSPoint (x: self.bounds.size.width, y: 0.0)
      let p2 = NSPoint (x: self.bounds.size.width, y: self.bounds.size.height)
      NSBezierPath.strokeLine (from: p1, to: p2)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//- (void) mouseDown: (NSEvent *) inMouseDownEvent {
////--- Note: ruler view and text view are both flipped
//  NSTextView * textView = self.scrollView.documentView ;
//  NSLayoutManager * lm = textView.layoutManager ;
//  const NSPoint locationInView = [self convertPoint:inMouseDownEvent.locationInWindow fromView:nil] ;
//  BOOL found = NO ;
//  for (NSUInteger i=0 ; (i<mIssueArray.count) && ! found ; i++) {
//    PMIssueDescriptor * issue = [mIssueArray objectAtIndex:i] ;
//    if (issue.locationInSourceStringStatus != kLocationInSourceStringInvalid) {
//      const NSRect r = [lm lineFragmentUsedRectForGlyphAtIndex:issue.startLocationInSourceString effectiveRange:NULL] ;
//      const NSPoint p = [self convertPoint:NSMakePoint (0.0, NSMidY (r) - 8.0) fromView:textView] ;
//      const NSRect rImage = {{4.0, p.y}, {16.0, 16.0}} ;
//      if (NSPointInRect (locationInView, rImage)) {
//        found = YES ;
//        [issue scrollAndSelectErrorMessage] ;
//      }
//    }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
