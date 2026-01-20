//
//  AutoLayoutSheetDefaultOkButton.swift
//
//  Created by Pierre Molinaro on 02/04/2025.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

final class AutoLayoutSheetDefaultOkButton : AutoLayoutButton {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (title inTitle : String,
        size inSize : NSControl.ControlSize,
        sheet inPanel : NSPanel) {
    super.init (title: inTitle, size: inSize)
    if let buttonCell = self.mCocoaButton.cell as? NSButtonCell {
      DispatchQueue.main.async { inPanel.defaultButtonCell = buttonCell }
    }
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
        parent.endSheet (mySheet, returnCode: .stop)
      }else{
        NSApplication.shared.stopModal ()
        self.window?.orderOut (nil)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

