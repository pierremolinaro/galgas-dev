//
//  Font+RawRepresentable.swift
//  text-syntax-coloring
//
//  Created by Pierre Molinaro on 09/08/2025.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct CustomFont : RawRepresentable {
  public typealias RawValue = String

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let name : String
  let size : CGFloat

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (name: String, size: CGFloat) {
    self.size = size
    if NSFont (name: name, size: size) != nil {
      self.name = name
    }else{
      let font = NSFont.systemFont (ofSize: self.size)
      self.name = font.fontName
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (nsFont inFont : NSFont) {
    self.name = inFont.fontName
    self.size = inFont.pointSize
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public var rawValue : String { // RawRepresentable
    return "\(self.name):\(self.size)"
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init? (rawValue inRawValue : String) { // RawRepresentable
    let components = inRawValue.components (separatedBy: ":")
    if components.count == 2, let fontSize = Double (components [1]) {
      let fontName = components [0]
      let fs = CGFloat (fontSize)
      self = CustomFont (name: fontName, size: fs)
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public var displayName : String {
    return "\(self.name) \(self.size) pt"
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var nsFont : NSFont {
    return NSFont (name: self.name, size: self.size) ?? NSFont.systemFont (ofSize: self.size)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

