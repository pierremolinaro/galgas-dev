//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
//   AutoLayoutStaticLabels
//--------------------------------------------------------------------------------------------------

public final class AutoLayoutStaticLabels : AutoLayoutHorizontalStackView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (left inLeft : String,
        right inRight : String,
        bold inBold : Bool,
        size inSize : NSControl.ControlSize) {
    super.init ()
    _ = self.appendView (AutoLayoutStaticLabel (title: inLeft, bold: inBold, size: inSize, alignment: .left))
      .appendFlexibleSpace ()
      .appendView (AutoLayoutStaticLabel (title: inRight, bold: inBold, size: inSize, alignment: .right))
      .set (spacing: .zero)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init? (coder inCoder : NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
