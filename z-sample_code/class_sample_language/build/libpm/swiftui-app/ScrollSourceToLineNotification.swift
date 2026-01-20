//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 17/01/2026.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct ScrollSourceToLineNotification {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let location : Int

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  static func notify (location inLocation : Int) {
    let object = ScrollSourceToLineNotification (location: inLocation)
    DispatchQueue.main.async {
      DispatchQueue.main.async {
        NotificationCenter.default.post (name: .myScrollSourceToLocation, object: object)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func performScroll (on inTextView : NSTextView) {
    DispatchQueue.main.async {
      inTextView.scrollRangeToVisible (NSRange (location: self.location, length: 0))
      inTextView.selectedRange = NSRange (location: self.location, length: 0)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
