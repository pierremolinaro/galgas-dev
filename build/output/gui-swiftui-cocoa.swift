//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import SwiftUI
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

extension UTType {
  nonisolated static let galgas_34_ = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".galgas4")
  nonisolated static let galgas_34_project = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".galgas4project")
  nonisolated static let galgasTemplate = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".galgastemplate")
}

//--------------------------------------------------------------------------------------------------

extension ProjectDocument {
  static let readableContentTypes : [UTType] = [.galgas_34_, .galgas_34_project, .galgasTemplate]
}

//--------------------------------------------------------------------------------------------------
//    Project file extensions
//--------------------------------------------------------------------------------------------------

let projectFileExtensions = Set (["galgas4", "galgas4project", "galgastemplate"])

//--------------------------------------------------------------------------------------------------
//   Scanner for a given extension
//--------------------------------------------------------------------------------------------------

@MainActor func scannerFor (extension inExtension : String) -> AbstractScanner? {
  var result : AbstractScanner? = nil
  let fileExtension = inExtension.lowercased ()
  if fileExtension == "galgas4" {
    result = ScannerFor_galgasScanner4 ()
  }else if fileExtension == "galgas4project" {
    result = ScannerFor_galgasScanner4 ()
  }else if fileExtension == "galgastemplate" {
    result = ScannerFor_galgasTemplateScanner ()
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
    case galgasScanner4_0
    case galgasTemplateScanner_1
    case allocationDebugView
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mSelection : SidebarItem = .commandLineOptions

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder var body : some View {
    NavigationSplitView {
      List(selection: self.$mSelection) {
        Text ("Options").tag (SidebarItem.commandLineOptions)

        Text ("Source GALGAS 4").tag (SidebarItem.galgasScanner4_0)
        Text ("Template").tag (SidebarItem.galgasTemplateScanner_1)
        Text ("Allocation Debug").tag (SidebarItem.allocationDebugView)
      }
      .toolbar (removing: .sidebarToggle)
    } detail: {
      switch self.mSelection {
        case .commandLineOptions : OptionView ()
        case .galgasScanner4_0 : SettingViewFor_galgasScanner4 ()
        case .galgasTemplateScanner_1 : SettingViewFor_galgasTemplateScanner ()
        case .allocationDebugView : AllocationDebugView ()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}


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
    galgasScanner4_1__23_once, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_func, 0,
    galgasScanner4_1__23_once, 0,
    galgasScanner4_1__23_usefull, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_func, 0,
    galgasScanner4_1__23_usefull, 0,
    galgasScanner4_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner4_1_func, 0,
    galgasScanner4_1__23_usefull, 0,
    galgasScanner4_1__23_once, 0,
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

let gLineComment_galgasScanner4 : String? = "//"

//--------------------------------------------------------------------------------------------------
//   Popup list data for 'galgasTemplateScanner' lexique
//--------------------------------------------------------------------------------------------------

let gPopUpData_galgasTemplateScanner : [[UInt16]] = [

]

//--------------------------------------------------------------------------------------------------
//   Block Comment for 'galgasTemplateScanner' lexique
//--------------------------------------------------------------------------------------------------

let gLineComment_galgasTemplateScanner : String? = nil


//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


