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

final class SWIFT_TextSyntaxViewCurrentSettings : ObservableObject {
  @Published var mBottomViewIsVisible = false
  var mTopViewSelection = NSRange () // Pas de @Published
  var mBottomViewSelection = NSRange () // Pas de @Published
}

//--------------------------------------------------------------------------------------------------
