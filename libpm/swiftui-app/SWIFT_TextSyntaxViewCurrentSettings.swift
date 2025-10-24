//
//  SWIFT_TextSyntaxViewCurrentSettings.swift
//  galgas-ide-swiftui
//
//  Created by Pierre Molinaro on 24/10/2025.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine

//--------------------------------------------------------------------------------------------------

struct SWIFT_TextSyntaxViewCurrentSettings : Identifiable {
  let id = UUID ()
  @State var mBottomViewIsVisible = false
  @State var mTopViewSelection = NSRange ()
  @State var mBottomViewSelection = NSRange ()
}

//--------------------------------------------------------------------------------------------------
