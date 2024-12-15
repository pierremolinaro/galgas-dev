//--------------------------------------------------------------------------------------------------
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2024, ..., 2024 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

import Foundation

//--------------------------------------------------------------------------------------------------

func commonCommandLineOptions () -> [SWIFT_CommandLineOption] {
  var array = [SWIFT_CommandLineOption] ()
  array.append (SWIFT_CommandLineOption (
    domainName: "generic_cli_options",
    type: .bool,
    identifier: "display_help",
    commandChar: "",
    commandString: "help",
    comment: "Display help information"
  ))

  array.append (SWIFT_CommandLineOption (
    domainName: "generic_cli_options",
    type: .bool,
    identifier: "display_version",
    commandChar: "",
    commandString: "version",
    comment: "Display version"
  ))


  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "log_file_read",
    commandChar: "",
    commandString: "log-file-read",
    comment: "Log every file read"
  ))

  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "do_not_generate_any_file",
    commandChar: "",
    commandString: "no-file-generation",
    comment: "Do not generate any file"
  ))

  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "treat_warnings_as_error",
    commandChar: "",
    commandString: "Werror",
    comment: "Treat warnings as errors"
  ))

  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "outputConcreteSyntaxTree",
    commandChar: "",
    commandString: "output-concrete-syntax-tree",
    comment: "Generate the concrete syntax tree, in .dot format (suitable for Graphviz)"
  ))

  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .uint,
    identifier: "max_errors",
    commandChar: "",
    commandString: "max-errors",
    comment: "Stop after the given number of errors has been reached (0 is interpreted as 100)"
  ))

  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .uint,
    identifier: "max_warnings",
    commandChar: "",
    commandString: "max-warnings",
    comment: "Stop after the given number of warnings has been reached (0 is interpreted as 100)"
  ))

  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "emit_issue_json_file",
    commandChar: "",
    commandString: "emit-issue-json-file",
    comment: "Emit a JSON file that contains all compilation issues"
  ))

  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .string,
    identifier: "mode",
    commandChar: "",
    commandString: "mode",
    comment: "Mode: empty, 'lexical-only' or 'syntax-only'"
  ))
  

  array.append (SWIFT_CommandLineOption (
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
