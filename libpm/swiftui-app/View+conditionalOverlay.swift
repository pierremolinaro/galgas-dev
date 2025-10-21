//
//  View+conditionalOverlay.swift
//  galgas-ide-swiftui
//
//  Created by Pierre Molinaro on 20/10/2025.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

extension View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder @inlinable nonisolated
  public func conditionalOverlay <V> (condition : Bool,
                                      alignment : Alignment = .center,
                                      @ViewBuilder content : () -> V) -> some View where V : View {
    if condition {
      self.overlay (alignment: alignment, content: content)
    }else{
      self
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
