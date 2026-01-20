//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import SwiftUI
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

extension UTType {
  nonisolated static let galgas = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".galgas")
  nonisolated static let galgasProject = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".galgasproject")
  nonisolated static let galgasTemplate = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".galgastemplate")
  nonisolated static let ggs = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".ggs")
  nonisolated static let ggsproject = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".ggsproject")
}

//--------------------------------------------------------------------------------------------------

extension ProjectDocument {
  static let readableContentTypes : [UTType] = [.galgas, .galgasProject, .galgasTemplate, .ggs, .ggsproject]
}

//--------------------------------------------------------------------------------------------------
//    Project file extensions
//--------------------------------------------------------------------------------------------------

let projectFileExtensions = Set (["galgas", "galgasproject", "galgastemplate", "ggs", "ggsproject"])

//--------------------------------------------------------------------------------------------------
//    Indexing dictionary
//--------------------------------------------------------------------------------------------------

func indexingDescriptorDictionary () -> [String : String] {
  return [
    "galgasproject" : "build/indexes",
    "ggsproject" : "build/indexes"
  ]
}

//--------------------------------------------------------------------------------------------------
//   Scanner for a given extension
//--------------------------------------------------------------------------------------------------

@MainActor func scannerFor (extension inExtension : String) -> AbstractScanner? {
  var result : AbstractScanner? = nil
  let fileExtension = inExtension.lowercased ()
  if fileExtension == "galgas" {
    result = ScannerFor_galgasScanner3 ()
  }else if fileExtension == "galgasproject" {
    result = ScannerFor_galgasScanner3 ()
  }else if fileExtension == "galgastemplate" {
    result = ScannerFor_galgasTemplateScanner ()
  }else if fileExtension == "ggs" {
    result = ScannerFor_galgasScanner4 ()
  }else if fileExtension == "ggsproject" {
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
    case galgasScanner3_0
    case galgasScanner4_1
    case galgasTemplateScanner_2
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mSelection : SidebarItem = .commandLineOptions

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder var body : some View {
    NavigationSplitView {
      List(selection: self.$mSelection) {
        Text ("Options").tag (SidebarItem.commandLineOptions)

        Text ("Source GALGAS 3").tag (SidebarItem.galgasScanner3_0)
        Text ("Source GALGAS 4").tag (SidebarItem.galgasScanner4_1)
        Text ("Template").tag (SidebarItem.galgasTemplateScanner_2)
      }
      .toolbar (removing: .sidebarToggle)
    } detail: {
      switch self.mSelection {
        case .commandLineOptions : OptionView ()
        case .galgasScanner3_0 : SettingViewFor_galgasScanner3 ()
        case .galgasScanner4_1 : SettingViewFor_galgasScanner4 ()
        case .galgasTemplateScanner_2 : SettingViewFor_galgasTemplateScanner ()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}


//--------------------------------------------------------------------------------------------------
//   Popup list data for 'galgasScanner3' lexique
//--------------------------------------------------------------------------------------------------

let gPopUpData_galgasScanner3 : [[UInt16]] = [
  [0, // Leading character count to strip
    galgasScanner3_1_before, 0,
    galgasScanner3_1__7B_, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_after, 0,
    galgasScanner3_1__7B_, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_map, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_boolset, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_list, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_sortedlist, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_enum, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_class, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_extern, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_struct, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_rule, 0,
    galgasScanner3_1__3C_non_5F_terminal_3E_, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_proc, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_func, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_func, 0,
    galgasScanner3_1__25_once, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_func, 0,
    galgasScanner3_1__25_once, 0,
    galgasScanner3_1__25_usefull, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_func, 0,
    galgasScanner3_1__25_usefull, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_func, 0,
    galgasScanner3_1__25_usefull, 0,
    galgasScanner3_1__25_once, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_filewrapper, 0,
    galgasScanner3_1_identifier, 0,
    galgasScanner3_1_in, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_dict, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_abstract, 0,
    galgasScanner3_1_method, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_override, 0,
    galgasScanner3_1_method, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_method, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_abstract, 0,
    galgasScanner3_1_method, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_override, 0,
    galgasScanner3_1_method, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_method, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_abstract, 0,
    galgasScanner3_1_getter, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_override, 0,
    galgasScanner3_1_getter, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_getter, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_abstract, 0,
    galgasScanner3_1_getter, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_override, 0,
    galgasScanner3_1_getter, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_getter, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_abstract, 0,
    galgasScanner3_1_setter, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_override, 0,
    galgasScanner3_1_setter, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_setter, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_abstract, 0,
    galgasScanner3_1_setter, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_override, 0,
    galgasScanner3_1_setter, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_setter, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_syntax, 0,
    galgasScanner3_1_extension, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_case, 0,
    galgasScanner3_1__2E_, 0,
    galgasScanner3_1__22_string_22_, 0
  ],
  [1, // Leading character count to strip
    galgasScanner3_1_commentMark, 32
  ],
  [0, // Leading character count to strip
    galgasScanner3_1__24_terminal_24_, 0,
    galgasScanner3_1__21_selector_3A_, 65535
  ],
  [0, // Leading character count to strip
    galgasScanner3_1__24_terminal_24_, 0,
    galgasScanner3_1_error, 65535
  ]
]

//--------------------------------------------------------------------------------------------------
//   Block Comment for 'galgasScanner3' lexique
//--------------------------------------------------------------------------------------------------

let gBlockComment_galgasScanner3 : String? = "//"

//--------------------------------------------------------------------------------------------------
//   Popup list data for 'galgasScanner4' lexique
//--------------------------------------------------------------------------------------------------

let gPopUpData_galgasScanner4 : [[UInt16]] = [
  [0, // Leading character count to strip
    galgasScanner4_1_before, 0,
    galgasScanner4_1__7B_, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_after, 0,
    galgasScanner4_1__7B_, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_dict, 0,
    galgasScanner4_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_map, 0,
    galgasScanner4_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_boolset, 0,
    galgasScanner4_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_list, 0,
    galgasScanner4_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_sortedlist, 0,
    galgasScanner4_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_enum, 0,
    galgasScanner4_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_class, 0,
    galgasScanner4_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_extern, 0,
    galgasScanner4_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_struct, 0,
    galgasScanner4_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_rule, 0,
    galgasScanner4_1__3C_non_5F_terminal_3E_, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_proc, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_func, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_func, 0,
    galgasScanner4_1__25_once, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_func, 0,
    galgasScanner4_1__25_once, 0,
    galgasScanner4_1__25_usefull, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_func, 0,
    galgasScanner4_1__25_usefull, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_func, 0,
    galgasScanner4_1__25_usefull, 0,
    galgasScanner4_1__25_once, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_filewrapper, 0,
    galgasScanner4_1_identifier, 0,
    galgasScanner4_1_in, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_abstract, 0,
    galgasScanner4_1_proc, 0,
    galgasScanner4_1__40_type, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_override, 0,
    galgasScanner4_1_proc, 0,
    galgasScanner4_1__40_type, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_proc, 0,
    galgasScanner4_1__40_type, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_abstract, 0,
    galgasScanner4_1_proc, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_override, 0,
    galgasScanner4_1_proc, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_proc, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_abstract, 0,
    galgasScanner4_1_func, 0,
    galgasScanner4_1__40_type, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_override, 0,
    galgasScanner4_1_func, 0,
    galgasScanner4_1__40_type, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_func, 0,
    galgasScanner4_1__40_type, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_abstract, 0,
    galgasScanner4_1_func, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_override, 0,
    galgasScanner4_1_func, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_func, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_abstract, 0,
    galgasScanner4_1_mutating, 0,
    galgasScanner4_1_proc, 0,
    galgasScanner4_1__40_type, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_override, 0,
    galgasScanner4_1_mutating, 0,
    galgasScanner4_1_proc, 0,
    galgasScanner4_1__40_type, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_mutating, 0,
    galgasScanner4_1_proc, 0,
    galgasScanner4_1__40_type, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_abstract, 0,
    galgasScanner4_1_mutating, 0,
    galgasScanner4_1_proc, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_override, 0,
    galgasScanner4_1_mutating, 0,
    galgasScanner4_1_proc, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_mutating, 0,
    galgasScanner4_1_proc, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_syntax, 0,
    galgasScanner4_1_extension, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_case, 0,
    galgasScanner4_1__2E_, 0,
    galgasScanner4_1__22_string_22_, 0
  ],
  [1, // Leading character count to strip
    galgasScanner4_1_commentMark, 32
  ],
  [0, // Leading character count to strip
    galgasScanner4_1__24_terminal_24_, 0,
    galgasScanner4_1__21_selector_3A_, 65535
  ],
  [0, // Leading character count to strip
    galgasScanner4_1__24_terminal_24_, 0,
    galgasScanner4_1_error, 65535
  ]
]

//--------------------------------------------------------------------------------------------------
//   Block Comment for 'galgasScanner4' lexique
//--------------------------------------------------------------------------------------------------

let gBlockComment_galgasScanner4 : String? = "//"

//--------------------------------------------------------------------------------------------------
//   Popup list data for 'galgasTemplateScanner' lexique
//--------------------------------------------------------------------------------------------------

let gPopUpData_galgasTemplateScanner : [[UInt16]] = [

]

//--------------------------------------------------------------------------------------------------
//   Block Comment for 'galgasTemplateScanner' lexique
//--------------------------------------------------------------------------------------------------

let gBlockComment_galgasTemplateScanner : String? = nil


//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


