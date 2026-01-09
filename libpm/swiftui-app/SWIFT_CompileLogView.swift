//
//  SWIFT_CompileLogView.swift
//  galgas-ide-swiftui
//
//  Created by Pierre Molinaro on 09/01/2026.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct SWIFT_CompileLogView : NSViewRepresentable {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mAttributedString : NSAttributedString
  private let mIssueArray : [SWIFT_Issue]

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (attributedString inAttributedString : NSAttributedString,
        issueArray inIssueArray : [SWIFT_Issue]) {
    self.mAttributedString = inAttributedString
    self.mIssueArray = inIssueArray
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
 //--- Create ruler
    let rulerView = SWIFT_CompileLogRulerView (textView: textView)
    rulerView.scrollView = scrollView
    scrollView.verticalRulerView = rulerView
    scrollView.hasVerticalRuler = true
    scrollView.rulersVisible = true
  //---
    return scrollView
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func updateNSView (_ inScrollView : NSScrollView,
                     context inContext : Context) {
    if let textView = inScrollView.documentView as? NSTextView,
          textView.textStorage?.string != self.mAttributedString.string {
      textView.textStorage?.setAttributedString (self.mAttributedString)
      textView.scrollRangeToVisible (NSRange (location: self.mAttributedString.length, length: 0))
    }
    if let rulerView = inScrollView.verticalRulerView as? SWIFT_CompileLogRulerView {
      rulerView.setIssueArray (self.mIssueArray)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate let RULER_WIDTH = 18.0

//--------------------------------------------------------------------------------------------------

fileprivate final class SWIFT_CompileLogRulerView : NSRulerView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mIssueArray : [SWIFT_Issue] = []

  private weak var mTextView : NSTextView? = nil
  private let mPadding : CGFloat = 5
  private var mLineRangeCacheArray : [NSRange] = []

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (textView inTextView : NSTextView) {
    self.mTextView = inTextView
    super.init (scrollView: inTextView.enclosingScrollView!, orientation: .verticalRuler)
    noteObjectAllocation (self)
    self.clientView = inTextView
    self.clipsToBounds = true
    self.ruleThickness = RULER_WIDTH // À ajuster selon besoin
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init (coder: NSCoder) { fatalError("init(coder:)") }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setIssueArray (_ inIssueArray : [SWIFT_Issue]) {
    self.mIssueArray = inIssueArray
    self.setNeedsDisplay (self.bounds)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  override func draw (_ inDirtyRect : NSRect) {
//    self.drawHashMarksAndLabels (in: inDirtyRect)
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  override func invalidateHashMarks () {
//    if let scrollView = self.scrollView,
//       let textView = scrollView.documentView as? NSTextView,
//       let layoutManager = textView.layoutManager,
//       let textContainer = textView.textContainer {
//      layoutManager.ensureLayout (for: textContainer)
//    }
//    super.invalidateHashMarks ()
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func drawHashMarksAndLabels (in rect: NSRect) {
  //--- Draw background
    NSColor.windowBackgroundColor.setFill()
    self.bounds.fill ()
  //---
    for issue in self.mIssueArray {
      if let p = self.pointForCharacter (at: issue.locationInBuildLogTextView) {
        let rect = NSRect (
          x: RULER_WIDTH / 4.0,
          y: p.y + RULER_WIDTH / 4.0,
          width: RULER_WIDTH / 2.0,
          height: RULER_WIDTH / 2.0
        )
        let bp = NSBezierPath (ovalIn: rect)
        let color : NSColor = issue.kind == .error ? .systemRed : .systemOrange
        color.setFill ()
        bp.fill()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func pointForCharacter (at index: Int) -> NSPoint? {
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

}

//--------------------------------------------------------------------------------------------------
