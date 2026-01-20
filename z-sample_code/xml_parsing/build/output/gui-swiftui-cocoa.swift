//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import SwiftUI
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

extension UTType {
  nonisolated static let XMLParsing = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".xmlparsing")
}

//--------------------------------------------------------------------------------------------------

extension ProjectDocument {
  static let readableContentTypes : [UTType] = [.XMLParsing]
}

//--------------------------------------------------------------------------------------------------
//    Project file extensions
//--------------------------------------------------------------------------------------------------

let projectFileExtensions = Set (["xmlparsing"])

//--------------------------------------------------------------------------------------------------
//    Indexing dictionary
//--------------------------------------------------------------------------------------------------

func indexingDescriptorDictionary () -> [String : String] {
 return [:]
}

//--------------------------------------------------------------------------------------------------
//   Scanner for a given extension
//--------------------------------------------------------------------------------------------------

@MainActor func scannerFor (extension inExtension : String) -> AbstractScanner? {
  var result : AbstractScanner? = nil
  let fileExtension = inExtension.lowercased ()
  if fileExtension == "xmlparsing" {
    result = ScannerFor_xml_parsing_lexique ()
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
    case xml_parsing_lexique_0
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mSelection : SidebarItem = .commandLineOptions

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder var body : some View {
    NavigationSplitView {
      List(selection: self.$mSelection) {
        Text ("Options").tag (SidebarItem.commandLineOptions)

        Text ("XML File").tag (SidebarItem.xml_parsing_lexique_0)
      }
      .toolbar (removing: .sidebarToggle)
    } detail: {
      switch self.mSelection {
        case .commandLineOptions : OptionView ()
        case .xml_parsing_lexique_0 : SettingViewFor_xml_parsing_lexique ()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}


//--------------------------------------------------------------------------------------------------
//   Popup list data for 'xml_parsing_lexique' lexique
//--------------------------------------------------------------------------------------------------

let gPopUpData_xml_parsing_lexique : [[UInt16]] = [

]

//--------------------------------------------------------------------------------------------------
//   Block Comment for 'xml_parsing_lexique' lexique
//--------------------------------------------------------------------------------------------------

let gBlockComment_xml_parsing_lexique : String? = nil


//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


