//--------------------------------------------------------------------------------------------------

import Foundation

//--------------------------------------------------------------------------------------------------

func commonCommandLineOptions () -> [CommandLineOption] {
  var array = [CommandLineOption] ()
  array.append (CommandLineOption (
    domainName: "generic_cli_options",
    type: .bool,
    identifier: "display_help",
    commandChar: "",
    commandString: "help",
    comment: "Display help information"
  ))

  array.append (CommandLineOption (
    domainName: "generic_cli_options",
    type: .bool,
    identifier: "display_version",
    commandChar: "",
    commandString: "version",
    comment: "Display version"
  ))


  array.append (CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "log_file_read",
    commandChar: "",
    commandString: "log-file-read",
    comment: "Log every file read"
  ))

  array.append (CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "do_not_generate_any_file",
    commandChar: "",
    commandString: "no-file-generation",
    comment: "Do not generate any file"
  ))

  array.append (CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "treat_warnings_as_error",
    commandChar: "",
    commandString: "Werror",
    comment: "Treat warnings as errors"
  ))

  array.append (CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "outputConcreteSyntaxTree",
    commandChar: "",
    commandString: "output-concrete-syntax-tree",
    comment: "Generate the concrete syntax tree, in .dot format (suitable for Graphviz)"
  ))

  array.append (CommandLineOption (
    domainName: "galgas_cli_options",
    type: .uint,
    identifier: "max_errors",
    commandChar: "",
    commandString: "max-errors",
    comment: "Stop after the given number of errors has been reached (0 is interpreted as 100)"
  ))

  array.append (CommandLineOption (
    domainName: "galgas_cli_options",
    type: .uint,
    identifier: "max_warnings",
    commandChar: "",
    commandString: "max-warnings",
    comment: "Stop after the given number of warnings has been reached (0 is interpreted as 100)"
  ))

  array.append (CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "emit_issue_json_file",
    commandChar: "",
    commandString: "emit-issue-json-file",
    comment: "Emit a JSON file that contains all compilation issues"
  ))

  array.append (CommandLineOption (
    domainName: "galgas_cli_options",
    type: .string,
    identifier: "mode",
    commandChar: "",
    commandString: "mode",
    comment: "Mode: empty, 'lexical-only' or 'syntax-only'"
  ))
  

  array.append (CommandLineOption (
    domainName: "galgas_cli_options",
    type: .string,
    identifier: "outputKeywordList",
    commandChar: "",
    commandString: "output-keyword-list-file",
    comment: "Output a Latex file containing keyword list"
  ))
  return array
}

//--------------------------------------------------------------------------------------------------
