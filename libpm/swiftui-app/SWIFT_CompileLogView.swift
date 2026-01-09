//
//  SWIFT_CompileLogView.swift
//  galgas-ide-swiftui
//
//  Created by Pierre Molinaro on 09/01/2026.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine

//--------------------------------------------------------------------------------------------------

struct IdentifiableAttributedString : Identifiable, Equatable {
  let id : UUID = UUID ()
  let string : AttributedString
}

//--------------------------------------------------------------------------------------------------

struct SWIFT_CompileLogView : NSViewRepresentable {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mAttributedString : IdentifiableAttributedString
  private let mTextView : NSTextView
  @Binding var mSize : CGSize

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (attributedString inAttributedString : IdentifiableAttributedString,
        sizeBinding inSizeBinding : Binding <CGSize>) {
    self.mAttributedString = inAttributedString
    self.mTextView = NSTextView ()
    self._mSize = inSizeBinding
    print ("init \(self.mSize)")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func makeNSView (context inContext : Context) -> NSScrollView {
    print ("makeNSView")
    self.mTextView.allowsUndo = false
    self.mTextView.isRichText = true
    self.mTextView.isAutomaticDataDetectionEnabled = false
    self.mTextView.isAutomaticLinkDetectionEnabled = false
    self.mTextView.isAutomaticTextCompletionEnabled = false
    self.mTextView.isAutomaticTextReplacementEnabled = false
    self.mTextView.isAutomaticDashSubstitutionEnabled = false
    self.mTextView.isAutomaticQuoteSubstitutionEnabled = false
    self.mTextView.isAutomaticSpellingCorrectionEnabled = false
    self.mTextView.isEditable = false
    self.mTextView.isSelectable = true

//    self.mTextView.textContainer!.widthTracksTextView = false
//    self.mTextView.textContainer!.containerSize = CGSize(width: CGFloat.greatestFiniteMagnitude, height: CGFloat.greatestFiniteMagnitude)
    self.mTextView.minSize = .zero
    self.mTextView.maxSize = NSSize (
      width: CGFloat.greatestFiniteMagnitude,
      height: CGFloat.greatestFiniteMagnitude
    )
    self.mTextView.isHorizontallyResizable = true
    self.mTextView.isVerticallyResizable = true
    self.mTextView.autoresizingMask = [.width]
//    self.mTextView.delegate = inContext.coordinator
  //--- ScrollView
    let scrollView = NSScrollView ()
    scrollView.documentView = self.mTextView
    scrollView.hasVerticalScroller = true
    scrollView.autohidesScrollers = true
  //--- Find bar
    self.mTextView.usesFindBar = false
    self.mTextView.isIncrementalSearchingEnabled = false
 //--- Create ruler
//    let rulerView = SWIFT_TextViewRulerView (textView: self.mTextView)
//    rulerView.scrollView = scrollView
//    scrollView.verticalRulerView = rulerView
//    scrollView.rulersVisible = true
  //--- Restore selection
//    self.mTextView.selectedRange = self.mSelectionBinding
//    DispatchQueue.main.async {
//      self.mTextView.scrollRangeToVisible (self.mTextView.selectedRange)
//    }
    self.mTextView.string = String (self.mAttributedString.string.characters)
//    self.mTextView.textStorage?.setAttributedString (NSAttributedString (self.mAttributedString.string))
  //---
    return scrollView
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func updateNSView (_ inUnusedScrollView : NSScrollView,
                     context inContext : Context) {
    print ("updateNSView")
    self.mTextView.string = String (self.mAttributedString.string.characters)
    self.mTextView.needsDisplay = true
//    self.mTextView.textStorage?.setAttributedString (NSAttributedString (self.mAttributedString.string))
    DispatchQueue.main.async {
      self.mSize = self.mTextView.textStorage!.size()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

struct AttributedText: View  {
    @State var size: CGSize = .zero
    let attributedString: NSAttributedString
    
    init(_ attributedString: NSAttributedString) {
        self.attributedString = attributedString
    }

    var body: some View {
        AttributedTextRepresentable(attributedString: attributedString, size: $size)
            .frame(width: size.width, height: size.height)
    }
    
    struct AttributedTextRepresentable: NSViewRepresentable {

        let attributedString: NSAttributedString
        @Binding var size: CGSize
        
        func makeNSView(context: Context) -> NSTextView {
            let textView = NSTextView()

            textView.textContainer!.widthTracksTextView = false
            textView.textContainer!.containerSize = CGSize(width: CGFloat.greatestFiniteMagnitude, height: CGFloat.greatestFiniteMagnitude)
            textView.drawsBackground = false

            return textView
        }

        func updateNSView(_ nsView: NSTextView, context: Context) {
            nsView.textStorage?.setAttributedString(attributedString)
            
            DispatchQueue.main.async {
                size = nsView.textStorage!.size()
            }
        }
    }
}
