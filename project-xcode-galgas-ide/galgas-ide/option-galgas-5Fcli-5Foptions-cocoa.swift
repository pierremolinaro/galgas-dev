//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

func enterOptions () -> [SWIFT_CommandLineOption] {
  var array = [SWIFT_CommandLineOption] ()
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "propertyAccessRequiresSelf",
    commandChar: "",
    commandString: "error-property-access-without-self",
    comment: "'self' is required for accessing properties in getter, setter and methods",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "checkEntityUsefulness",
    commandChar: "",
    commandString: "check-usefulness",
    comment: "Check Entity Usefulness",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "displayUnicodeLexicalTestFunctions",
    commandChar: "",
    commandString: "display-lexical-test-functions",
    comment: "Display Unicode Lexical Test Functions",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "emitClassGraph",
    commandChar: "",
    commandString: "emit-class-graph",
    comment: "Emit class graph in dot file",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "emitSyntaxDiagrams",
    commandChar: "",
    commandString: "emit-syntax-diagrams",
    comment: "Emit grammar syntax diagrams in TEX files",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "errorAnomynousForInstructionEnumeratedObject",
    commandChar: "",
    commandString: "error-anonymous-for-instruction",
    comment: "Error on anonymous 'for' instruction enumerated object ('for () in ...')",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "errorObsoleteGetterCall",
    commandChar: "",
    commandString: "error-on-obsolete-getter-call",
    comment: "Error on call of an obsolete getter",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "errorPropertyGetterCall",
    commandChar: "",
    commandString: "error-property-getter-call",
    comment: "Error on calling property getter (instead of dot notation)",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "errorEllipsisInEnumeratedObject",
    commandChar: "",
    commandString: "error-ellipsis-in-for-instruction",
    comment: "Error on ellipsis in enumerated object ('for (x y ...) in xxx')",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "errorOnGetterCallWithNoArgument",
    commandChar: "",
    commandString: "error-on-getter-call-with-no-argument",
    comment: "Error on getter call; with no argument (GGS4, suppress parenthesis)",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "errorOldStyleCollectionInitializer",
    commandChar: "",
    commandString: "error-old-syle-collection-initializer",
    comment: "Error on old style collection initializer",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "errorOldStyleLocalVarDeclaration",
    commandChar: "",
    commandString: "error-old-style-local-var-declaration",
    comment: "Error on old style local variable declaration",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "errorOldStylePropertyDeclaration",
    commandChar: "",
    commandString: "error-old-style-property-declaration",
    comment: "Error on old style property declaration",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "errorUsingNewInsteadOfInit",
    commandChar: "",
    commandString: "error-using-new-instead-of-init",
    comment: "GGS3: error on using 'new' instead of 'init'",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "generateManyFiles",
    commandChar: "",
    commandString: "generate-many-cpp-files",
    comment: "Generate many C++ implementation files",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "generateOneHeader",
    commandChar: "",
    commandString: "generate-one-cpp-header",
    comment: "Generate one C++ header file for all declarations",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "outputHTMLgrammarFile",
    commandChar: "",
    commandString: "output-html-grammar-file",
    comment: "Output a HTML file for every grammar component",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "outputHTMLTypeListFile",
    commandChar: "T",
    commandString: "output-html-type-dump-file",
    comment: "Output a HTML file that contains all defined types",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "printPredefinedLexicalActions",
    commandChar: "",
    commandString: "print-predefined-lexical-actions",
    comment: "Print the list of predefined lexical routines and functions",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "check_big_int",
    commandChar: "",
    commandString: "check-big-int",
    comment: "Run bit integers checks",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "warningNotGalgas4Feature",
    commandChar: "",
    commandString: "warns-on-feature-not-handled-in-galgas4",
    comment: "Warns on feature not handled in galgas 4",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .uint,
    identifier: "macosxSDK",
    commandChar: "",
    commandString: "macosx",
    comment: "Generate an Xcode project for OS X",
    defaultValue: "0"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .string,
    identifier: "create_project",
    commandChar: "",
    commandString: "create-project",
    comment: "Create a new GALGAS Project",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .string,
    identifier: "extractLIBPMOption",
    commandChar: "",
    commandString: "extract-libpm",
    comment: "Extract embedded LIBPM at given path",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .string,
    identifier: "cppCompile",
    commandChar: "",
    commandString: "compile",
    comment: "Perform C++ compilation on 'string' target",
    defaultValue: ""
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "quiet_output",
    commandChar: "q",
    commandString: "quiet",
    comment: "Quiet output",
    defaultValue: ""
  ))
  return array
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


