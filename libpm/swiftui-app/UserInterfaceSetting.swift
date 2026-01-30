//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 24/01/2026.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

final class UserInterfaceSetting {

  // -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -

  private var mProjectWindowFrame : NSRect? = nil
  var projectWindowFrame : NSRect? { self.mProjectWindowFrame }

  private var mProjectSettingsURL : URL? = nil

  // -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -

  func setProjectSettingsURL (_ inProjectSettingsURL : URL) {
    self.mProjectSettingsURL = inProjectSettingsURL
    if let data = try? Data (contentsOf: inProjectSettingsURL),
       let guiSettings = try? JSONDecoder ().decode (InternalJSONSettings.self, from: data) {
      self.mProjectWindowFrame = guiSettings.projectWindowFrame
    }
  }

  // -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -

  func writeGUISettings () {
    if let r = self.mProjectWindowFrame, let projectSettingsURL = self.mProjectSettingsURL {
      let projectSettingsDirURL = projectSettingsURL.deletingLastPathComponent ()
      let fm = FileManager ()
      try? fm.createDirectory (at: projectSettingsDirURL, withIntermediateDirectories: true)
      let settings = InternalJSONSettings (projectWindowFrame: r)
      if let data = try? JSONEncoder().encode (settings) {
        try? data.write (to: projectSettingsURL)
      }
    }
  }

  // -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -

  @objc @MainActor func projectWindowFrameDidChange (_ inNotification : Notification) {
    if let window = inNotification.object as? NSWindow {
      self.mProjectWindowFrame = window.frame
    }
  }

  // -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -

}

//--------------------------------------------------------------------------------------------------

fileprivate struct InternalJSONSettings : Decodable, Encodable {
  let projectWindowFrame : NSRect
}

//--------------------------------------------------------------------------------------------------
