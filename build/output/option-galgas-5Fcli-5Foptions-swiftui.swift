//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

fileprivate let SELECTED_COMPILER_TOOL_INDEX_PREFKEY = "selected.compiler.tool.index"
fileprivate let checkEntityUsefulness_PREFKEY = "galgas_cli_options:checkEntityUsefulness"
fileprivate let displayUnicodeLexicalTestFunctions_PREFKEY = "galgas_cli_options:displayUnicodeLexicalTestFunctions"
fileprivate let emitClassGraph_PREFKEY = "galgas_cli_options:emitClassGraph"
fileprivate let emitSyntaxDiagrams_PREFKEY = "galgas_cli_options:emitSyntaxDiagrams"
fileprivate let generateManyFiles_PREFKEY = "galgas_cli_options:generateManyFiles"
fileprivate let generateOneHeader_PREFKEY = "galgas_cli_options:generateOneHeader"
fileprivate let outputHTMLgrammarFile_PREFKEY = "galgas_cli_options:outputHTMLgrammarFile"
fileprivate let outputHTMLTypeListFile_PREFKEY = "galgas_cli_options:outputHTMLTypeListFile"
fileprivate let printPredefinedLexicalActions_PREFKEY = "galgas_cli_options:printPredefinedLexicalActions"
fileprivate let check_big_int_PREFKEY = "galgas_cli_options:check_big_int"
fileprivate let create_project_PREFKEY = "galgas_cli_options:create_project"
fileprivate let extractLIBPMOption_PREFKEY = "galgas_cli_options:extractLIBPMOption"
fileprivate let cppCompile_PREFKEY = "galgas_cli_options:cppCompile"

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

  @AppStorage(checkEntityUsefulness_PREFKEY) private var checkEntityUsefulness : Bool = false
  @AppStorage(displayUnicodeLexicalTestFunctions_PREFKEY) private var displayUnicodeLexicalTestFunctions : Bool = false
  @AppStorage(emitClassGraph_PREFKEY) private var emitClassGraph : Bool = false
  @AppStorage(emitSyntaxDiagrams_PREFKEY) private var emitSyntaxDiagrams : Bool = false
  @AppStorage(generateManyFiles_PREFKEY) private var generateManyFiles : Bool = false
  @AppStorage(generateOneHeader_PREFKEY) private var generateOneHeader : Bool = false
  @AppStorage(outputHTMLgrammarFile_PREFKEY) private var outputHTMLgrammarFile : Bool = false
  @AppStorage(outputHTMLTypeListFile_PREFKEY) private var outputHTMLTypeListFile : Bool = false
  @AppStorage(printPredefinedLexicalActions_PREFKEY) private var printPredefinedLexicalActions : Bool = false
  @AppStorage(check_big_int_PREFKEY) private var check_big_int : Bool = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // UInt options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // String options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage(create_project_PREFKEY) private var create_project : String = ""
  @AppStorage(extractLIBPMOption_PREFKEY) private var extractLIBPMOption : String = ""
  @AppStorage(cppCompile_PREFKEY) private var cppCompile : String = ""

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
          Toggle ("Check Entity Usefulness", isOn: self.$checkEntityUsefulness)
          Toggle ("Display Unicode Lexical Test Functions", isOn: self.$displayUnicodeLexicalTestFunctions)
          Toggle ("Emit class graph in dot file", isOn: self.$emitClassGraph)
          Toggle ("Emit grammar syntax diagrams in TEX files", isOn: self.$emitSyntaxDiagrams)
          Toggle ("Generate many C++ implementation files", isOn: self.$generateManyFiles)
          Toggle ("Generate one C++ header file for all declarations", isOn: self.$generateOneHeader)
          Toggle ("Output a HTML file for every grammar component", isOn: self.$outputHTMLgrammarFile)
          Toggle ("Output a HTML file that contains all defined types", isOn: self.$outputHTMLTypeListFile)
          Toggle ("Print the list of predefined lexical routines and functions", isOn: self.$printPredefinedLexicalActions)
          Toggle ("Run bit integers checks", isOn: self.$check_big_int)
          HStack { Text ("Create a new GALGAS Project") ; TextField ("", text: self.$create_project) }
          HStack { Text ("Extract embedded LIBPM at given path") ; TextField ("", text: self.$extractLIBPMOption) }
          HStack { Text ("Perform C++ compilation on 'string' target") ; TextField ("", text: self.$cppCompile) }
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
  if ud.bool (forKey: checkEntityUsefulness_PREFKEY) {
    arguments.append ("--check-usefulness")
  }
  if ud.bool (forKey: displayUnicodeLexicalTestFunctions_PREFKEY) {
    arguments.append ("--display-lexical-test-functions")
  }
  if ud.bool (forKey: emitClassGraph_PREFKEY) {
    arguments.append ("--emit-class-graph")
  }
  if ud.bool (forKey: emitSyntaxDiagrams_PREFKEY) {
    arguments.append ("--emit-syntax-diagrams")
  }
  if ud.bool (forKey: generateManyFiles_PREFKEY) {
    arguments.append ("--generate-many-cpp-files")
  }
  if ud.bool (forKey: generateOneHeader_PREFKEY) {
    arguments.append ("--generate-one-cpp-header")
  }
  if ud.bool (forKey: outputHTMLgrammarFile_PREFKEY) {
    arguments.append ("--output-html-grammar-file")
  }
  if ud.bool (forKey: outputHTMLTypeListFile_PREFKEY) {
    arguments.append ("--output-html-type-dump-file")
  }
  if ud.bool (forKey: printPredefinedLexicalActions_PREFKEY) {
    arguments.append ("--print-predefined-lexical-actions")
  }
  if ud.bool (forKey: check_big_int_PREFKEY) {
    arguments.append ("--check-big-int")
  }
  do{
    let v : String = ud.string (forKey: create_project_PREFKEY) ?? ""
    if v != "" {
      arguments.append ("--create-project=" + v)
    }
  }
  do{
    let v : String = ud.string (forKey: extractLIBPMOption_PREFKEY) ?? ""
    if v != "" {
      arguments.append ("--extract-libpm=" + v)
    }
  }
  do{
    let v : String = ud.string (forKey: cppCompile_PREFKEY) ?? ""
    if v != "" {
      arguments.append ("--compile=" + v)
    }
  }
  return CommandLineToolInvocation (tool: tool, arguments: arguments)
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


