//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 19/01/2026.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

extension FocusedValues {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var activeView : ActiveViewFocusedValue? {
    get { self [ActiveViewFocusedValueKey.self] }
    set { self [ActiveViewFocusedValueKey.self] = newValue }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var activeDocument : ActiveDocumentFocusedValue? {
    get { self [ActiveDocumentFocusedValueKey.self] }
    set { self [ActiveDocumentFocusedValueKey.self] = newValue }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

struct ActiveDocumentFocusedValue {
  let projectURL : URL
}

//--------------------------------------------------------------------------------------------------

struct ActiveDocumentFocusedValueKey : FocusedValueKey {
  typealias Value = ActiveDocumentFocusedValue
}

//--------------------------------------------------------------------------------------------------

struct ActiveViewFocusedValue {
  let sharedTextModel : SharedTextModel
  let canUndo : Bool
  let canRedo : Bool
  let presentGotoLineSheet : () -> Void
  let commentSelection : () -> Void
  let uncommentSelection : () -> Void
}

//--------------------------------------------------------------------------------------------------

struct ActiveViewFocusedValueKey : FocusedValueKey {
  typealias Value = ActiveViewFocusedValue
}

//--------------------------------------------------------------------------------------------------
