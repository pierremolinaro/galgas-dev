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
//   Global functions
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

/* @MainActor func tokenizers () -> [any SWIFT_Tokenizer_Protocol] {
  return [
    SettingViewFor_galgasScanner3 (),
    SettingViewFor_galgasScanner4 (),
    SettingViewFor_galgasTemplateScanner ()
  ]
} */

//--------------------------------------------------------------------------------------------------

struct SettingsView : View {
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder var body : some View {
    TabView {
      SettingViewFor_galgasScanner3 ().tabItem { Text ("Source GALGAS 3") }
      SettingViewFor_galgasScanner4 ().tabItem { Text ("Source GALGAS 4") }
      SettingViewFor_galgasTemplateScanner ().tabItem { Text ("Template") }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}


//--------------------------------------------------------------------------------------------------

/* func buildRunOption () -> String {
  return ""
} */

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


