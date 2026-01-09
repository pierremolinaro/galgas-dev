//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import SwiftUI

//--------------------------------------------------------------------------------------------------
//    Project file extensions
//--------------------------------------------------------------------------------------------------

func indexingDescriptorDictionary () -> [String : String] {
  return [  "galgasProject" : "build/indexes",  "ggsproject" : "*+BUILD/indexes",]
}

//--------------------------------------------------------------------------------------------------
//   Scanner for a given extension
//--------------------------------------------------------------------------------------------------

@MainActor func scannerFor (extension inExtension : String) -> SWIFT_Scanner? {
  var result : SWIFT_Scanner? = nil
  if inExtension == "galgas" {
    result = ScannerFor_galgasScanner3 ()
  }else if inExtension == "galgasProject" {
    result = ScannerFor_galgasScanner3 ()
  }else if inExtension == "galgasTemplate" {
    result = ScannerFor_galgasTemplateScanner ()
  }else if inExtension == "ggs" {
    result = ScannerFor_galgasScanner4 ()
  }else if inExtension == "ggsTemplate" {
    result = ScannerFor_galgasTemplateScanner ()
  }else if inExtension == "ggsproject" {
    result = ScannerFor_galgasScanner4 ()
  }
  return result
}

//--------------------------------------------------------------------------------------------------
// Setting View
//--------------------------------------------------------------------------------------------------

struct SettingsView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  enum SidebarItem {
    case commandLineOptions
    case galgasScanner3
    case galgasScanner4
    case galgasTemplateScanner
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mSelection : SidebarItem = .commandLineOptions

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder var body : some View {
    NavigationSplitView {
      List(selection: self.$mSelection) {
        Text ("Options").tag (SidebarItem.commandLineOptions)

        Text ("Source GALGAS 3").tag (SidebarItem.galgasScanner3)
        Text ("Source GALGAS 4").tag (SidebarItem.galgasScanner4)
        Text ("Template").tag (SidebarItem.galgasTemplateScanner)
      }
      .toolbar (removing: .sidebarToggle)
    } detail: {
      switch self.mSelection {
        case .commandLineOptions : OptionView ()
        case .galgasScanner3 : SettingViewFor_galgasScanner3 ()
        case .galgasScanner4 : SettingViewFor_galgasScanner4 ()
        case .galgasTemplateScanner : SettingViewFor_galgasTemplateScanner ()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


