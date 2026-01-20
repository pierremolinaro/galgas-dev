//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 16/07/2021.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public final class AutoLayoutStaticTextView : BaseTextView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (drawsBackground inDrawsBackground : Bool,
               horizontalScroller inHorizontalScroller : Bool,
               verticalScroller inVerticalScroller : Bool) {
    super.init (
      drawsBackground: inDrawsBackground,
      editable: false,
      horizontalScroller: inHorizontalScroller,
      verticalScroller: inVerticalScroller
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public final func setFont (_ inFont : NSFont) -> Self {
//    self.mCocoaTextView.setFont (inFont)
//    return self
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func set (text inString : String) -> Self {
    appendMessageString (inString)
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func setRedTextColor () -> Self {
    self.mCocoaTextView.textColor = .red
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  var string : String {
//    get { return self.mCocoaTextView.string }
//    set { self.mCocoaTextView.string = newValue }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func clear () {
    if let ts = self.mCocoaTextView.layoutManager?.textStorage {
      let str = NSAttributedString (string: "", attributes: nil)
      ts.setAttributedString (str)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func appendAttributedString (_ inAttributedString : NSAttributedString) {
    if let ts = self.mCocoaTextView.layoutManager?.textStorage {
      ts.append (inAttributedString)
      let endOfText = NSRange (location: ts.length, length: 0)
      self.mCocoaTextView.scrollRangeToVisible (endOfText)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func appendMessageString (_ inString : String) {
    let attributes : [NSAttributedString.Key : NSObject] = [
      .font : NSFont.boldSystemFont (ofSize: NSFont.smallSystemFontSize),
      .foregroundColor : NSColor.black
    ]
    let str = NSAttributedString (string:inString, attributes:attributes)
    self.appendAttributedString (str)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func appendMessageString (_ inString : String, color : NSColor, bold inBold : Bool) {
    let font = inBold
      ? NSFont.boldSystemFont (ofSize: NSFont.smallSystemFontSize)
      : NSFont.systemFont (ofSize: NSFont.smallSystemFontSize)
    let attributes : [NSAttributedString.Key : Any] = [
      .font : font,
      .foregroundColor : color
    ]
    let str = NSAttributedString (string: inString, attributes: attributes)
    self.appendAttributedString (str)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func appendCodeString (_ inString : String, color : NSColor) {
    let font = NSFont.userFixedPitchFont (ofSize: NSFont.smallSystemFontSize)
        ?? NSFont.boldSystemFont (ofSize: NSFont.smallSystemFontSize)
    let attributes : [NSAttributedString.Key : NSObject] = [
      .font : font,
      .foregroundColor : color
    ]
    let str = NSAttributedString (string: inString, attributes: attributes)
    self.appendAttributedString (str)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func appendErrorString (_ inString : String) {
    self.appendMessageString (inString, color: .red, bold: true)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func appendWarningString (_ inString : String) {
    self.appendMessageString (inString, color: .orange, bold: true)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func appendSuccessString (_ inString : String) {
    self.appendMessageString (inString, color: .blue, bold: true)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func scrollToEndOfText () {
    let s = self.mCocoaTextView.string as NSString
    let eot = s.length
    self.scrollRangeToVisible (NSRange (location: eot, length: 0))
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
