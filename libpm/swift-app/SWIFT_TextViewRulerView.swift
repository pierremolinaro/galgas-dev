//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 15/12/2024.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

final class SWIFT_TextViewRulerView : NSRulerView {

  private(set) weak var mDocument : SWIFT_SingleDocument?

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (scrollView inScrollView : NSScrollView, document inDocument : SWIFT_SingleDocument) {
    self.mDocument = inDocument
    super.init (scrollView: inScrollView, orientation: .verticalRuler)
    noteObjectAllocation (self)
    self.ruleThickness = 50.0
    self.clipsToBounds = true
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init (coder : NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func draw (_ inRect : NSRect) { // Indispensable sous Monterey ?
    self.drawHashMarksAndLabels (in: inRect)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func drawHashMarksAndLabels (in inRect : NSRect) {
    if let scrollView = self.scrollView,
       let textView = scrollView.documentView as? NSTextView,
       let layoutManager = textView.layoutManager,
       let textContainer = textView.textContainer,
       let issueArray = self.mDocument?.mIssueArray {
      let rightMargin = 5.0
    //-------- Draw background
      NSColor.windowBackgroundColor.setFill ()
      NSBezierPath.fill (self.bounds)
    //-------- Set draw text attributes and find point size
      let textAttributes : [NSAttributedString.Key : Any] = [
        .font : NSFont.monospacedDigitSystemFont (ofSize: NSFont.smallSystemFontSize, weight: .semibold),
        .foregroundColor : NSColor.darkGray
      ]
    //-------- Note: ruler view and text view are both flipped
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
      let warningBP = NSBezierPath ()
      let errorBP = NSBezierPath ()
      let markDiameter = 12.0
      let markOffset = 4.0
    //--- Find first line number to draw
      var idx = 0
      var lineIndex = 1
      var issueIndex = 0
    //---
      var maxYreached = false
      while (idx < sourceString.length) && !maxYreached {
        let lineRange = sourceString.lineRange (for: NSMakeRange (idx, 0))
        let isVisible = max (visibleRange.location, lineRange.location) <= min (NSMaxRange(visibleRange), NSMaxRange(lineRange))
        maxYreached = lineRange.location > NSMaxRange (visibleRange)
        if isVisible {
          let r = layoutManager.lineFragmentRect (
            forGlyphAt: layoutManager.glyphIndexForCharacter (at: lineRange.location),
            effectiveRange: nil
          )
          let p = self.convert (NSPoint (x: 0.0, y: r.origin.y), from: textView)
          let lineIntersectsSelection =
            max (selectedRange.location, idx)
              <
            min (selectedRange.location + selectedRange.length + 1, lineRange.location + lineRange.length)
        //--- Draw background if line selected
          let ruleRectForCurrentLine = NSRect (
            x: 0.0,
            y: p.y,
            width: self.bounds.size.width,
            height: r.size.height
          )
          if lineIntersectsSelection {
            NSColor.white.setFill ()
            NSBezierPath.fill (ruleRectForCurrentLine)
          }
        //--- Draw line number
          let str = "\(lineIndex)"
          let strSize = str.size (withAttributes: textAttributes)
          let lineNumberOrigin = NSPoint (
            x: self.bounds.size.width - strSize.width - rightMargin,
            y: ruleRectForCurrentLine.midY - strSize.height / 2.0
          )
          str.draw (at: lineNumberOrigin, withAttributes: textAttributes)
        //--- Draw mark ?
          while issueIndex < issueArray.count,
                issueArray [issueIndex].mIsValid,
                issueArray [issueIndex].range.intersection(lineRange) != nil {
            let mark = NSRect (
              x: markOffset,
              y: ruleRectForCurrentLine.midY - markDiameter / 2.0,
              width: markDiameter,
              height: markDiameter
            )
            switch issueArray [issueIndex].kind {
            case .warning : warningBP.appendOval (in: mark)
            case .error   : errorBP.appendOval (in: mark)
            }
            issueIndex += 1
          }
        }
        idx = lineRange.location + lineRange.length
      //---
        lineIndex += 1
      }
    //--- Iterate on issues
//      let warningBP = NSBezierPath ()
//      let errorBP = NSBezierPath ()
//      let markDiameter = self.bounds.size.width * 2.0 / 3.0
//      let markOffset = (self.bounds.size.width - markDiameter) / 2.0
//      for issue in self.mIssueArray {
//        let r = layoutManager.lineFragmentRect (
//          forGlyphAt: layoutManager.glyphIndexForCharacter (at: issue.locationInBuildLogTextView),
//          effectiveRange: nil
//        )
//        let p = self.convert (NSPoint (x: 0.0, y: r.origin.y), from: textView)
//      //--- Draw mark
//        let mark = NSRect (x: markOffset, y: p.y, width: markDiameter, height: markDiameter)
//        switch issue.kind {
//        case .warning : warningBP.appendOval (in: mark)
//        case .error   : errorBP.appendOval (in: mark)
//        }
//      }
      NSColor.orange.setFill ()
      warningBP.fill ()
      NSColor.red.setFill ()
      errorBP.fill ()
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
