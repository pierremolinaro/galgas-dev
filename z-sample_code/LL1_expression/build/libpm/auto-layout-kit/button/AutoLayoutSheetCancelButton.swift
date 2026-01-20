//
//  AutoLayoutSheetCancelButton.swift
//
//  Created by Pierre Molinaro on 02/04/2025.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

final class AutoLayoutSheetCancelButton : AutoLayoutButton {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override init (title inTitle : String,
                 size inSize : NSControl.ControlSize) {
    super.init (title: inTitle, size: inSize)
    self.mCocoaButton.keyEquivalent = "\u{1b}"
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init? (coder inCoder : NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func runAction () {
    super.runAction ()
    if let mySheet = self.window {
      mySheet.endEditing (for: nil)
      if let parent = mySheet.sheetParent {
        parent.endSheet (mySheet, returnCode: .cancel)
      }else{
        NSApplication.shared.abortModal ()
        self.window?.orderOut (nil)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------


