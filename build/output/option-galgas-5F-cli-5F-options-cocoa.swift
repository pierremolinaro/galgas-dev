//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

func enterOptions (_ ioBoolOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioUIntOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioStringOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioStringListOptionArray : inout [SWIFT_CommandLineOption]) {
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "checkEntityUsefulness",
    commandChar: "",
    commandString: "check-usefulness",
    comment: "Check Entity Usefulness",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "check_gmp",
    commandChar: "",
    commandString: "check-gmp",
    comment: "Run a GMP check",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "displayUnicodeLexicalTestFunctions",
    commandChar: "",
    commandString: "display-lexical-test-functions",
    comment: "Display Unicode Lexical Test Functions",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "emitClassGraph",
    commandChar: "",
    commandString: "emit-class-graph",
    comment: "Emit class graph in dot file",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "emitSyntaxDiagrams",
    commandChar: "",
    commandString: "emit-syntax-diagrams",
    comment: "Emit grammar syntax diagrams in TEX files",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorAnomynousForInstructionEnumeratedObject",
    commandChar: "",
    commandString: "error-anonymous-for-instruction",
    comment: "error on anonymous 'for' instruction enumerated object ('for () in ...')",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorClassDeclaration",
    commandChar: "",
    commandString: "error-class-declaration",
    comment: "'class' declaration is obsolete use 'valueclass'",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorEllipsisInEnumeratedObject",
    commandChar: "",
    commandString: "error-ellipsis-in-for-instruction",
    comment: "error on ellipsis in enumerated object ('for (x y ...) in xxx')",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorObsoleteGetterCall",
    commandChar: "",
    commandString: "error-on-obsolete-getter-call",
    comment: "error on call of an obsolete getter",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorOldStyleCollectionInitializer",
    commandChar: "",
    commandString: "error-old-syle-collection-initializer",
    comment: "error on old style collection initializer",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorOldStyleLocalVarDeclaration",
    commandChar: "",
    commandString: "error-old-style-local-var-declaration",
    comment: "error on old style local variable declaration",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorOldStylePropertyDeclaration",
    commandChar: "",
    commandString: "error-old-style-property-declaration",
    comment: "error on old style property declaration",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorOnGetterCallWithNoArgument",
    commandChar: "",
    commandString: "error-on-getter-call-with-no-argument",
    comment: "Error on getter call; with no argument (GGS4, suppress parenthesis)",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorOnUselessSelector",
    commandChar: "",
    commandString: "error-on-useless-selector",
    comment: "Error on useless selector (GGS4)",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorPropertyGetterCall",
    commandChar: "",
    commandString: "error-property-getter-call",
    comment: "error on calling property getter (instead of dot notation)",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorValueClassDeclaration",
    commandChar: "",
    commandString: "error-value-class-declaration",
    comment: "error on 'value class' declaration",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "generateManyFiles",
    commandChar: "",
    commandString: "generate-many-cpp-files",
    comment: "Generate many C++ implementation files",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "generateOneHeader",
    commandChar: "",
    commandString: "generate-one-cpp-header",
    comment: "Generate one C++ header file for all declarations",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "outputHTMLTypeListFile",
    commandChar: "T",
    commandString: "output-html-type-dump-file",
    comment: "Output a HTML file that contains all defined types",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "outputHTMLgrammarFile",
    commandChar: "",
    commandString: "output-html-grammar-file",
    comment: "Output a HTML file for every grammar component",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "printPredefinedLexicalActions",
    commandChar: "",
    commandString: "print-predefined-lexical-actions",
    comment: "Print the list of predefined lexical routines and functions",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "propertyAccessRequiresSelf",
    commandChar: "",
    commandString: "error-property-access-without-self",
    comment: "'self' is required for accessing properties in getter, setter and methods",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "warningNotGalgas4Feature",
    commandChar: "",
    commandString: "warns-on-feature-not-handled-in-galgas4",
    comment: "warns on feature not handled in galgas 4",
    defaultValue: ""
  ))
  ioUIntOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "macosxSDK",
    commandChar: "",
    commandString: "macosx",
    comment: "Generate an Xcode project for OS X",
    defaultValue: "0"
  ))
  ioStringOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "cppCompile",
    commandChar: "",
    commandString: "compile",
    comment: "Perform C++ compilation on 'string' target",
    defaultValue: ""
  ))
  ioStringOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "create_project",
    commandChar: "",
    commandString: "create-project",
    comment: "Create a new GALGAS Project",
    defaultValue: ""
  ))
  ioStringOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "extractLIBPMOption",
    commandChar: "",
    commandString: "extract-libpm",
    comment: "Extract embedded LIBPM at given path",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "quiet_output",
    commandChar: "q",
    commandString: "quiet",
    comment: "Quiet output",
    defaultValue: ""
  ))
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


