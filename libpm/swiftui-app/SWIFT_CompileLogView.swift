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

struct SWIFT_CompileLogView : NSViewRepresentable {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mAttributedString : NSAttributedString

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (attributedString inAttributedString : NSAttributedString) {
    self.mAttributedString = inAttributedString
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
    textView.textStorage!.setAttributedString (self.mAttributedString)
  //---
    return scrollView
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func updateNSView (_ inScrollView : NSScrollView,
                     context inContext : Context) {
    if let textView = inScrollView.documentView as? NSTextView,
          textView.textStorage?.string != self.mAttributedString.string {
      textView.textStorage?.setAttributedString (self.mAttributedString)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

////--------------------------------------------------------------------------------------------------
//
//struct IdentifiableAttributedString : Identifiable, Equatable {
//  let id : UUID = UUID ()
//  let string : AttributedString
//}
//
////--------------------------------------------------------------------------------------------------
//
//struct SWIFT_CompileLogViewEx : NSViewRepresentable {
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  private var mAttributedString : IdentifiableAttributedString
//  private let mTextView : NSTextView
//  @Binding var mSize : CGSize
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  init (attributedString inAttributedString : IdentifiableAttributedString,
//        sizeBinding inSizeBinding : Binding <CGSize>) {
//    self.mAttributedString = inAttributedString
//    self.mTextView = NSTextView ()
//    self._mSize = inSizeBinding
//    print ("init \(self.mSize)")
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  func makeNSView (context inContext : Context) -> NSScrollView {
//    print ("makeNSView")
//    self.mTextView.allowsUndo = false
//    self.mTextView.isRichText = true
//    self.mTextView.isAutomaticDataDetectionEnabled = false
//    self.mTextView.isAutomaticLinkDetectionEnabled = false
//    self.mTextView.isAutomaticTextCompletionEnabled = false
//    self.mTextView.isAutomaticTextReplacementEnabled = false
//    self.mTextView.isAutomaticDashSubstitutionEnabled = false
//    self.mTextView.isAutomaticQuoteSubstitutionEnabled = false
//    self.mTextView.isAutomaticSpellingCorrectionEnabled = false
//    self.mTextView.isEditable = false
//    self.mTextView.isSelectable = true
//
////    self.mTextView.textContainer!.widthTracksTextView = false
////    self.mTextView.textContainer!.containerSize = CGSize(width: CGFloat.greatestFiniteMagnitude, height: CGFloat.greatestFiniteMagnitude)
//    self.mTextView.minSize = .zero
//    self.mTextView.maxSize = NSSize (
//      width: CGFloat.greatestFiniteMagnitude,
//      height: CGFloat.greatestFiniteMagnitude
//    )
////    self.mTextView.frame.size = self.mSize
//    self.mTextView.isHorizontallyResizable = true
//    self.mTextView.isVerticallyResizable = true
//    self.mTextView.autoresizingMask = [.width]
////    self.mTextView.delegate = inContext.coordinator
//  //--- ScrollView
//    let scrollView = NSScrollView ()
//    scrollView.documentView = self.mTextView
//    scrollView.hasVerticalScroller = true
//    scrollView.autohidesScrollers = true
//  //--- Find bar
//    self.mTextView.usesFindBar = false
//    self.mTextView.isIncrementalSearchingEnabled = false
// //--- Create ruler
////    let rulerView = SWIFT_TextViewRulerView (textView: self.mTextView)
////    rulerView.scrollView = scrollView
////    scrollView.verticalRulerView = rulerView
////    scrollView.rulersVisible = true
//  //--- Restore selection
////    self.mTextView.selectedRange = self.mSelectionBinding
////    DispatchQueue.main.async {
////      self.mTextView.scrollRangeToVisible (self.mTextView.selectedRange)
////    }
//    self.mTextView.string = String (self.mAttributedString.string.characters)
////    self.mTextView.textStorage?.setAttributedString (NSAttributedString (self.mAttributedString.string))
//  //---
//    return scrollView
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  func updateNSView (_ inUnusedScrollView : NSScrollView,
//                     context inContext : Context) {
//    print ("updateNSView")
////    self.mTextView.textStorage?.beginEditing ()
////    self.mTextView.string = String (self.mAttributedString.string.characters)
////    self.mTextView.textStorage?.endEditing ()
//    inUnusedScrollView.needsDisplay = true
////    self.mTextView.textStorage?.setAttributedString (NSAttributedString (self.mAttributedString.string))
////    DispatchQueue.main.async {
////      self.mSize = self.mTextView.textStorage!.size()
////    }
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//}
//
////--------------------------------------------------------------------------------------------------
//
//struct AttributedText : View  {
//    @State var size: CGSize = .zero
//    let attributedString: NSAttributedString
//    
//    init(_ attributedString: NSAttributedString) {
//        self.attributedString = attributedString
//    }
//
//    var body: some View {
//      ScrollView (showsIndicators: true) {
//        AttributedTextRepresentable(attributedString: attributedString, size: $size)
//          .frame(width: size.width, height: size.height)
//          .background (.white)
//      }
//    }
//    
//}
//
////--------------------------------------------------------------------------------------------------
//
//struct AttributedTextEx : NSViewRepresentable  {
//    @State var size: CGSize = .zero
//    let attributedString: NSAttributedString
//    
//    init(_ attributedString: NSAttributedString) {
//        self.attributedString = attributedString
//    }
//
//    func makeNSView(context: Context) -> NSScrollView {
//      let scrollView = NSScrollView ()
//      scrollView.documentView = NSHostingView (rootView: AttributedTextRepresentable(attributedString: attributedString, size: $size)
//            .frame(width: size.width, height: size.height))
//      return scrollView
//    }
//
//        func updateNSView(_ nsView: NSScrollView, context: Context) {
//        }
////    var body: some View {
////      ScrollView {
////        AttributedTextRepresentable(attributedString: attributedString, size: $size)
////            .frame(width: size.width, height: size.height)
////      }
////    }
//    
//}
//
////--------------------------------------------------------------------------------------------------
//
//private struct AttributedTextRepresentable : NSViewRepresentable {
//
//        let attributedString: NSAttributedString
//        @Binding var size: CGSize
//        
//        func makeNSView(context: Context) -> NSTextView {
//            let textView = NSTextView()
//
//            textView.textContainer!.widthTracksTextView = false
//            textView.textContainer!.containerSize = CGSize(width: CGFloat.greatestFiniteMagnitude, height: CGFloat.greatestFiniteMagnitude)
//            textView.drawsBackground = false
//
//            return textView
//        }
//
//        func updateNSView(_ nsView: NSTextView, context: Context) {
//            nsView.textStorage?.setAttributedString(attributedString)
//            
//            DispatchQueue.main.async {
//                size = nsView.textStorage!.size()
//            }
//        }
//}
