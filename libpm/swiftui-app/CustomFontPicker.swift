//
//  FontPicker.swift
//  text-syntax-coloring
//
//  Created by Pierre Molinaro on 09/08/2025.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI
import AppKit

//--------------------------------------------------------------------------------------------------

struct CustomFontPicker : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mCustomFontBinding : Binding <CustomFont>
  private var mFontPanelDelegate : FontPanelDelegate

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (fontBinding inFontBinding : Binding <CustomFont>) {
    self.mCustomFontBinding = inFontBinding
    self.mFontPanelDelegate = FontPanelDelegate (fontBinding: self.mCustomFontBinding)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body: some View {
    Button (self.mCustomFontBinding.wrappedValue.displayName) {
      let fontManager = NSFontManager.shared
      fontManager.target = self.mFontPanelDelegate
      fontManager.setSelectedFont (self.mCustomFontBinding.wrappedValue.nsFont, isMultiple: false)
      fontManager.orderFrontFontPanel (self)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

private final class FontPanelDelegate : NSObject, NSFontChanging {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mCustomFontBinding : Binding <CustomFont>

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (fontBinding inFontBinding : Binding <CustomFont>) {
    self.mCustomFontBinding = inFontBinding
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func changeFont (_ inSender : NSFontManager?) {
    let nsFont = self.mCustomFontBinding.wrappedValue.nsFont
    if let newFont = inSender?.convert (nsFont) {
      self.mCustomFontBinding.wrappedValue = CustomFont (nsFont: newFont)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
