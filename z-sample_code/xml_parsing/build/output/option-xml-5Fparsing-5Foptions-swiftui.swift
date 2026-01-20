//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

fileprivate let SELECTED_COMPILER_TOOL_INDEX_PREFKEY = "selected.compiler.tool.index"
fileprivate let dumpUnicode_PREFKEY = "xml_parsing_options:dumpUnicode"

//--------------------------------------------------------------------------------------------------
//   Options View
//--------------------------------------------------------------------------------------------------

struct OptionView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mCompilerTools : [CompilerTool] = compilerTools ()
  @AppStorage(SELECTED_COMPILER_TOOL_INDEX_PREFKEY) private var mSelectedCompilerIndex = 0

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage("prefix.by.time.utility") private var mPrefixByTimeUtility = false
  @State private var mCommandLine = compilerCommandExplained ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Bool options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage(dumpUnicode_PREFKEY) private var dumpUnicode : Bool = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // UInt options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // String options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // String list options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Body
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder var body : some View {
    VStack {
      HStack {
        Picker("Compiler", selection: self.$mSelectedCompilerIndex) {
          ForEach (self.mCompilerTools, id: \.id) { tool in
            Text (tool.url.lastPathComponent).tag (tool.id)
          }
        }.pickerStyle (.automatic)
        Toggle ("Prefix by 'time' utility", isOn: self.$mPrefixByTimeUtility)
        Spacer ()
      }
      ScrollView {
        VStack (alignment: .leading) {
          Toggle ("List all unicode character properties", isOn: self.$dumpUnicode)
        }.padding ()
      }.background (.white)
      HStack { Text ("Build Command") ; Spacer () }
      TextEditor (text: .constant (self.mCommandLine))
      .font (.system (size: 12).monospaced())
      .frame (height: 64)
    }.padding ()
    .onReceive (NotificationCenter.default.publisher (for: UserDefaults.didChangeNotification)) { _ in
      self.mCommandLine = compilerCommandExplained ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

private func compilerCommandExplained () -> String {
  let command : CommandLineToolInvocation = commandLineToolInvocation ()
  var result = command.tool.lastPathComponent
  for arg in command.arguments {
    result += " " + arg
  }
  return result
}

//--------------------------------------------------------------------------------------------------

struct CommandLineToolInvocation {
  let tool : URL
  let arguments : [String]
}

//--------------------------------------------------------------------------------------------------

func commandLineToolInvocation () -> CommandLineToolInvocation {
  let ud = UserDefaults.standard
  let compilerTools : [CompilerTool] = compilerTools ()
  let selectedCompilerIndex : Int = ud.integer (forKey: SELECTED_COMPILER_TOOL_INDEX_PREFKEY)
  let tool = compilerTools [selectedCompilerIndex].url
  var arguments = [String] ()
  if ud.bool (forKey: dumpUnicode_PREFKEY) {
    arguments.append ("--dump-unicode")
  }
  return CommandLineToolInvocation (tool: tool, arguments: arguments)
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


