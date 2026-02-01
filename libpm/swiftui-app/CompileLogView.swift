//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 09/01/2026.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct CompileLogView : NSViewRepresentable {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mAttributedString : NSAttributedString
  private let mCompileLogAutoScroll : Bool

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (attributedString inAttributedString : NSAttributedString,
        compileLogAutoScroll inCompileLogAutoScroll : Bool) {
    self.mAttributedString = inAttributedString
    self.mCompileLogAutoScroll = inCompileLogAutoScroll
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func makeNSView (context inContext : Context) -> NSScrollView {
    let textView = NSTextView ()
    textView.allowsUndo = false
    textView.isRichText = true
    textView.isAutomaticDataDetectionEnabled = false
    textView.isAutomaticLinkDetectionEnabled = false
    textView.isAutomaticTextCompletionEnabled = false
    textView.isAutomaticTextReplacementEnabled = false
    textView.isAutomaticDashSubstitutionEnabled = false
    textView.isAutomaticQuoteSubstitutionEnabled = false
    textView.isAutomaticSpellingCorrectionEnabled = false
    textView.isEditable = false
    textView.isSelectable = true
    textView.minSize = .zero
    textView.maxSize = NSSize (
      width: CGFloat.greatestFiniteMagnitude,
      height: CGFloat.greatestFiniteMagnitude
    )
    textView.isHorizontallyResizable = true
    textView.isVerticallyResizable = true
    textView.autoresizingMask = [.width]
    let scrollView = NSScrollView ()
    scrollView.documentView = textView
    scrollView.hasVerticalScroller = true
    scrollView.autohidesScrollers = true
    textView.usesFindBar = false
    textView.isIncrementalSearchingEnabled = false
    return scrollView
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func updateNSView (_ inScrollView : NSScrollView,
                     context inContext : Context) {
    if let textView = inScrollView.documentView as? NSTextView,
          textView.textStorage?.string != self.mAttributedString.string {
      textView.textStorage?.setAttributedString (self.mAttributedString)
      if self.mCompileLogAutoScroll {
        DispatchQueue.main.async {
          textView.scrollRangeToVisible (NSRange (location: self.mAttributedString.length, length: 0))
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
