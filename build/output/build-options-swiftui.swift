//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

fileprivate let SELECTED_COMPILER_TOOL_INDEX_PREFKEY = "selected.compiler.tool.index"
fileprivate let display_version_PREFKEY = "build-option:display_version"
fileprivate let display_help_PREFKEY = "build-option:display_help"
fileprivate let quiet_PREFKEY = "build-option:quiet"
fileprivate let outputConcreteSyntaxTree_PREFKEY = "build-option:outputConcreteSyntaxTree"
fileprivate let log_file_read_PREFKEY = "build-option:log_file_read"
fileprivate let do_not_generate_any_file_PREFKEY = "build-option:do_not_generate_any_file"
fileprivate let treat_warnings_as_error_PREFKEY = "build-option:treat_warnings_as_error"
fileprivate let no_color_PREFKEY = "build-option:no_color"
fileprivate let outputHTMLgrammarFile_PREFKEY = "build-option:outputHTMLgrammarFile"
fileprivate let outputGrammarSwiftDescriptionFile_PREFKEY = "build-option:outputGrammarSwiftDescriptionFile"
fileprivate let outputHTMLTypeListFile_PREFKEY = "build-option:outputHTMLTypeListFile"
fileprivate let printPredefinedLexicalActions_PREFKEY = "build-option:printPredefinedLexicalActions"
fileprivate let generateOneHeader_PREFKEY = "build-option:generateOneHeader"
fileprivate let generateManyFiles_PREFKEY = "build-option:generateManyFiles"
fileprivate let check_big_int_PREFKEY = "build-option:check_big_int"
fileprivate let emitSyntaxDiagrams_PREFKEY = "build-option:emitSyntaxDiagrams"
fileprivate let emitClassGraph_PREFKEY = "build-option:emitClassGraph"
fileprivate let displayUnicodeLexicalTestFunctions_PREFKEY = "build-option:displayUnicodeLexicalTestFunctions"
fileprivate let checkEntityUsefulness_PREFKEY = "build-option:checkEntityUsefulness"
fileprivate let warnsOnOldStyleEnumeration_PREFKEY = "build-option:warnsOnOldStyleEnumeration"
fileprivate let max_errors_PREFKEY = "build-option:max_errors"
fileprivate let max_warnings_PREFKEY = "build-option:max_warnings"
fileprivate let emit_issue_json_file_PREFKEY = "build-option:emit_issue_json_file"
fileprivate let outputKeywordList_PREFKEY = "build-option:outputKeywordList"
fileprivate let mode_PREFKEY = "build-option:mode"
fileprivate let create_project_PREFKEY = "build-option:create_project"
fileprivate let extractLIBPMOption_PREFKEY = "build-option:extractLIBPMOption"

//--------------------------------------------------------------------------------------------------
//   Options View
//--------------------------------------------------------------------------------------------------

struct OptionView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mCompilerTools : [CompilerTool] = compilerTools ()
  @AppStorage(SELECTED_COMPILER_TOOL_INDEX_PREFKEY) private var mSelectedCompilerIndex = 0
  @State private var mCommandLine = compilerCommandExplained ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Bool options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage(display_version_PREFKEY) private var display_version : Bool = false
  @AppStorage(display_help_PREFKEY) private var display_help : Bool = false
  @AppStorage(quiet_PREFKEY) private var quiet : Bool = false
  @AppStorage(outputConcreteSyntaxTree_PREFKEY) private var outputConcreteSyntaxTree : Bool = false
  @AppStorage(log_file_read_PREFKEY) private var log_file_read : Bool = false
  @AppStorage(do_not_generate_any_file_PREFKEY) private var do_not_generate_any_file : Bool = false
  @AppStorage(treat_warnings_as_error_PREFKEY) private var treat_warnings_as_error : Bool = false
  @AppStorage(no_color_PREFKEY) private var no_color : Bool = false
  @AppStorage(outputHTMLgrammarFile_PREFKEY) private var outputHTMLgrammarFile : Bool = false
  @AppStorage(outputGrammarSwiftDescriptionFile_PREFKEY) private var outputGrammarSwiftDescriptionFile : Bool = false
  @AppStorage(outputHTMLTypeListFile_PREFKEY) private var outputHTMLTypeListFile : Bool = false
  @AppStorage(printPredefinedLexicalActions_PREFKEY) private var printPredefinedLexicalActions : Bool = false
  @AppStorage(generateOneHeader_PREFKEY) private var generateOneHeader : Bool = false
  @AppStorage(generateManyFiles_PREFKEY) private var generateManyFiles : Bool = false
  @AppStorage(check_big_int_PREFKEY) private var check_big_int : Bool = false
  @AppStorage(emitSyntaxDiagrams_PREFKEY) private var emitSyntaxDiagrams : Bool = false
  @AppStorage(emitClassGraph_PREFKEY) private var emitClassGraph : Bool = false
  @AppStorage(displayUnicodeLexicalTestFunctions_PREFKEY) private var displayUnicodeLexicalTestFunctions : Bool = false
  @AppStorage(checkEntityUsefulness_PREFKEY) private var checkEntityUsefulness : Bool = false
  @AppStorage(warnsOnOldStyleEnumeration_PREFKEY) private var warnsOnOldStyleEnumeration : Bool = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // UInt options (ATTENTION UINT ---> Int)
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage(max_errors_PREFKEY) private var max_errors : Int = 0
  @AppStorage(max_warnings_PREFKEY) private var max_warnings : Int = 0

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // String options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage(emit_issue_json_file_PREFKEY) private var emit_issue_json_file : String = ""
  @AppStorage(outputKeywordList_PREFKEY) private var outputKeywordList : String = ""
  @AppStorage(mode_PREFKEY) private var mode : String = ""
  @AppStorage(create_project_PREFKEY) private var create_project : String = ""
  @AppStorage(extractLIBPMOption_PREFKEY) private var extractLIBPMOption : String = ""

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
        Spacer ()
      }
      ScrollView {
        VStack (alignment: .leading) {
          Toggle ("Display version", isOn: self.$display_version)
          Toggle ("Display help", isOn: self.$display_help)
          Toggle ("Quiet output", isOn: self.$quiet)
          Toggle ("Generate the concrete syntax tree, in .dot format (suitable for Graphviz)", isOn: self.$outputConcreteSyntaxTree)
          Toggle ("Log every file read", isOn: self.$log_file_read)
          Toggle ("Do not generate any file", isOn: self.$do_not_generate_any_file)
          Toggle ("Treat warnings as errors", isOn: self.$treat_warnings_as_error)
          Toggle ("Do not issue colored messages (Unix Only)", isOn: self.$no_color)
          Toggle ("Output a HTML file for every grammar component", isOn: self.$outputHTMLgrammarFile)
          Toggle ("Output a Swift description file for every grammar component", isOn: self.$outputGrammarSwiftDescriptionFile)
          Toggle ("Output a HTML file that contains all defined types", isOn: self.$outputHTMLTypeListFile)
          Toggle ("Print the list of predefined lexical routines and functions", isOn: self.$printPredefinedLexicalActions)
          Toggle ("Generate one C++ header file for all declarations", isOn: self.$generateOneHeader)
          Toggle ("Generate many C++ implementation files", isOn: self.$generateManyFiles)
          Toggle ("Run bit integers checks", isOn: self.$check_big_int)
          Toggle ("Emit grammar syntax diagrams in TEX files", isOn: self.$emitSyntaxDiagrams)
          Toggle ("Emit class graph in dot file", isOn: self.$emitClassGraph)
          Toggle ("Display Unicode Lexical Test Functions", isOn: self.$displayUnicodeLexicalTestFunctions)
          Toggle ("Check Entity Usefulness", isOn: self.$checkEntityUsefulness)
          Toggle ("Warns on old style enumeration", isOn: self.$warnsOnOldStyleEnumeration)
          HStack { Text ("Stop after the given number of errors has been reached") ; TextField ("", value: self.$max_errors, format: .number.precision (.fractionLength (0))) }
          HStack { Text ("Stop after the given number of warnings has been reached") ; TextField ("", value: self.$max_warnings, format: .number.precision (.fractionLength (0))) }
          HStack { Text ("Emit a JSON file that contains all compilation issues") ; TextField ("", text: self.$emit_issue_json_file) }
          HStack { Text ("Output a Latex file containing keyword list") ; TextField ("", text: self.$outputKeywordList) }
          HStack { Text ("'lexical-only', 'syntax-only' or 'latex'") ; TextField ("", text: self.$mode) }
          HStack { Text ("Create a new GALGAS Project") ; TextField ("", text: self.$create_project) }
          HStack { Text ("Extract embedded LIBPM at given path") ; TextField ("", text: self.$extractLIBPMOption) }
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
  if ud.bool (forKey: display_version_PREFKEY) {
    arguments.append ("--version")
  }
  if ud.bool (forKey: display_help_PREFKEY) {
    arguments.append ("--help")
  }
  if ud.bool (forKey: quiet_PREFKEY) {
    arguments.append ("--quiet")
  }
  if ud.bool (forKey: outputConcreteSyntaxTree_PREFKEY) {
    arguments.append ("--output-concrete-syntax-tree")
  }
  if ud.bool (forKey: log_file_read_PREFKEY) {
    arguments.append ("--log-file-read")
  }
  if ud.bool (forKey: do_not_generate_any_file_PREFKEY) {
    arguments.append ("--no-file-generation")
  }
  if ud.bool (forKey: treat_warnings_as_error_PREFKEY) {
    arguments.append ("--Werror")
  }
  if ud.bool (forKey: no_color_PREFKEY) {
    arguments.append ("--no-color")
  }
  if ud.bool (forKey: outputHTMLgrammarFile_PREFKEY) {
    arguments.append ("--output-html-grammar-file")
  }
  if ud.bool (forKey: outputGrammarSwiftDescriptionFile_PREFKEY) {
    arguments.append ("--output-swift-description-grammar-file")
  }
  if ud.bool (forKey: outputHTMLTypeListFile_PREFKEY) {
    arguments.append ("--output-html-type-dump-file")
  }
  if ud.bool (forKey: printPredefinedLexicalActions_PREFKEY) {
    arguments.append ("--print-predefined-lexical-actions")
  }
  if ud.bool (forKey: generateOneHeader_PREFKEY) {
    arguments.append ("--generate-one-cpp-header")
  }
  if ud.bool (forKey: generateManyFiles_PREFKEY) {
    arguments.append ("--generate-many-cpp-files")
  }
  if ud.bool (forKey: check_big_int_PREFKEY) {
    arguments.append ("--check-big-int")
  }
  if ud.bool (forKey: emitSyntaxDiagrams_PREFKEY) {
    arguments.append ("--emit-syntax-diagrams")
  }
  if ud.bool (forKey: emitClassGraph_PREFKEY) {
    arguments.append ("--emit-class-graph")
  }
  if ud.bool (forKey: displayUnicodeLexicalTestFunctions_PREFKEY) {
    arguments.append ("--display-lexical-test-functions")
  }
  if ud.bool (forKey: checkEntityUsefulness_PREFKEY) {
    arguments.append ("--check-usefulness")
  }
  if ud.bool (forKey: warnsOnOldStyleEnumeration_PREFKEY) {
    arguments.append ("--warns-on-old-style-enumeration")
  }
  do{
    let v : Int = ud.integer (forKey: max_errors_PREFKEY)
    if v != 0 {
      arguments.append ("--max-errors=" + String (v))
    }
  }
  do{
    let v : Int = ud.integer (forKey: max_warnings_PREFKEY)
    if v != 0 {
      arguments.append ("--max-warnings=" + String (v))
    }
  }
  do{
    let v : String = ud.string (forKey: emit_issue_json_file_PREFKEY) ?? ""
    if v != "" {
      arguments.append ("--emit-issue-json-file=" + v)
    }
  }
  do{
    let v : String = ud.string (forKey: outputKeywordList_PREFKEY) ?? ""
    if v != "" {
      arguments.append ("--output-keyword-list-file=" + v)
    }
  }
  do{
    let v : String = ud.string (forKey: mode_PREFKEY) ?? ""
    if v != "" {
      arguments.append ("--mode=" + v)
    }
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
  return CommandLineToolInvocation (tool: tool, arguments: arguments)
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


