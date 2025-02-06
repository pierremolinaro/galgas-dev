//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 15/12/2024.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

final class SWIFT_BuildLogViewRuler : NSRulerView {

  private var mIssueArray = [SWIFT_Issue] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (scrollView inScrollView : NSScrollView) {
    super.init (scrollView: inScrollView, orientation: .verticalRuler)
    noteObjectAllocation (self)
    self.ruleThickness = 20.0
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

  func setIssueArray (_ inIssueArray : [SWIFT_Issue]) {
    self.mIssueArray = inIssueArray
    self.needsDisplay = true
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
       let textContainer = textView.textContainer {
    //-------- Draw background
      NSColor.windowBackgroundColor.setFill ()
      NSBezierPath.fill (self.bounds)
    //-------- Compute layout
      layoutManager.ensureLayout (for: textContainer)
    //--- Iterate on issues
      let warningBP = NSBezierPath ()
      let errorBP = NSBezierPath ()
      let markDiameter = self.bounds.size.width * 2.0 / 3.0
      let markOffset = (self.bounds.size.width - markDiameter) / 2.0
      for issue in self.mIssueArray {
        if issue.mIsValid {
          let r = layoutManager.lineFragmentRect (
            forGlyphAt: layoutManager.glyphIndexForCharacter (at: issue.locationInBuildLogTextView),
            effectiveRange: nil
          )
          let p = self.convert (NSPoint (x: 0.0, y: r.origin.y), from: textView)
        //--- Draw mark
          let mark = NSRect (x: markOffset, y: p.y, width: markDiameter, height: markDiameter)
          switch issue.kind {
          case .warning : warningBP.appendOval (in: mark)
          case .error   : errorBP.appendOval (in: mark)
          }
        }
      }
      NSColor.orange.setFill ()
      warningBP.fill ()
      NSColor.red.setFill ()
      errorBP.fill ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func mouseDown (with inMouseDownEvent : NSEvent) {
    if let scrollView = self.scrollView,
       let textView = scrollView.documentView as? NSTextView,
       let layoutManager = textView.layoutManager {
      let locationInView = self.convert (inMouseDownEvent.locationInWindow, from: nil)
      for issue in self.mIssueArray {
        let r = layoutManager.lineFragmentRect (
          forGlyphAt: layoutManager.glyphIndexForCharacter (at: issue.locationInBuildLogTextView),
          effectiveRange: nil
        )
        let rr = self.convert (r, from: textView)
//        Swift.print (locationInView, rr)
        if locationInView.y >= rr.minY, locationInView.y <= rr.maxY, let w = self.window as? SWIFT_SingleWindow {
          w.findOrAddTab (forIssue: issue)
          return
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

