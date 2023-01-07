//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//----------------------------------------------------------------------------------------------------------------------

func enterOptionsFor (_ ioBoolOptionArray : inout [SWIFT_GGS_CommandLineOption],
                      _ ioUIntOptionArray : inout [SWIFT_GGS_CommandLineOption],
                      _ ioStringOptionArray : inout [SWIFT_GGS_CommandLineOption],
                      _ ioStringListOptionArray : inout [SWIFT_GGS_CommandLineOption]) {
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "checkEntityUsefulness",
    commandChar: 0,
    commandString: "check-usefulness",
    comment: "Check Entity Usefulness",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "check_gmp",
    commandChar: 0,
    commandString: "check-gmp",
    comment: "Run a GMP check",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "displayUnicodeLexicalTestFunctions",
    commandChar: 0,
    commandString: "display-lexical-test-functions",
    comment: "Display Unicode Lexical Test Functions",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "emitSyntaxDiagrams",
    commandChar: 0,
    commandString: "emit-syntax-diagrams",
    comment: "Emit grammar syntax diagrams in TEX files",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorAnomynousForInstructionEnumeratedObject",
    commandChar: 0,
    commandString: "error-anonymous-for-instruction",
    comment: "error on anonymous 'for' instruction enumerated object ('for () in ...')",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorClassDeclaration",
    commandChar: 0,
    commandString: "error-class-declaration",
    comment: "'class' declaration is obsolete use 'valueclass'",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorEllipsisInEnumeratedObject",
    commandChar: 0,
    commandString: "error-ellipsis-in-for-instruction",
    comment: "error on ellipsis in enumerated object ('for (x y ...) in xxx')",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorOldStyleCollectionInitializer",
    commandChar: 0,
    commandString: "error-old-syle-collection-initializer",
    comment: "error on old style collection initializer",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorOldStyleLocalVarDeclaration",
    commandChar: 0,
    commandString: "error-old-style-local-var-declaration",
    comment: "error on old style local variable declaration",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorOldStylePropertyDeclaration",
    commandChar: 0,
    commandString: "error-old-style-property-declaration",
    comment: "error on old style property declaration",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorPropertyGetterCall",
    commandChar: 0,
    commandString: "error-property-getter-call",
    comment: "error on calling property getter (instead of dot notation)",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorValueClassDeclaration",
    commandChar: 0,
    commandString: "error-value-class-declaration",
    comment: "error on 'value class' declaration",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "generateManyFiles",
    commandChar: 0,
    commandString: "generate-many-cpp-files",
    comment: "Generate many C++ implementation files",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "generateOneHeader",
    commandChar: 0,
    commandString: "generate-one-cpp-header",
    comment: "Generate one C++ header file for all declarations",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "outputHTMLTypeListFile",
    commandChar: 84,
    commandString: "output-html-type-dump-file",
    comment: "Output a HTML file that contains all defined types",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "outputHTMLgrammarFile",
    commandChar: 0,
    commandString: "output-html-grammar-file",
    comment: "Output a HTML file for every grammar component",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "printPredefinedLexicalActions",
    commandChar: 0,
    commandString: "print-predefined-lexical-actions",
    comment: "Print the list of predefined lexical routines and functions",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "propertyAccessRequiresSelf",
    commandChar: 0,
    commandString: "error-property-access-without-self",
    comment: "'self' is required for accessing properties in getter, setter and methods",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "warningNotGalgas4Feature",
    commandChar: 0,
    commandString: "warns-on-feature-not-handled-in-galgas4",
    comment: "warns on feature not handled in galgas 4",
    defaultValue: ""
  ))
  ioUIntOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "macosxSDK",
    commandChar: 0,
    commandString: "macosx",
    comment: "Generate an Xcode project for OS X",
    defaultValue: "0"
  ))
  ioStringOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "cppCompile",
    commandChar: 0,
    commandString: "compile",
    comment: "Perform C++ compilation on 'string' target",
    defaultValue: ""
  ))
  ioStringOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "create_project",
    commandChar: 0,
    commandString: "create-project",
    comment: "Create a new GALGAS Project",
    defaultValue: ""
  ))
  ioStringOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "extractLIBPMOption",
    commandChar: 0,
    commandString: "extract-libpm",
    comment: "Extract embedded LIBPM at given path",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_GGS_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "quiet_output",
    commandChar: ASCII.q.rawValue,
    commandString: "quiet",
    comment: "Quiet output",
    defaultValue: ""
  ))
}

//----------------------------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


