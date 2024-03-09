//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

func enterOptions (_ ioBoolOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioUIntOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioStringOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioStringListOptionArray : inout [SWIFT_CommandLineOption]) {
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
    identifier: "propertyAccessRequiresSelf",
    commandChar: "",
    commandString: "error-property-access-without-self",
    comment: "'self' is required for accessing properties in getter, setter and methods",
    defaultValue: ""
  ))
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
    identifier: "errorValueClassDeclaration",
    commandChar: "",
    commandString: "error-value-class-declaration",
    comment: "Error on 'value class' declaration",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorAnomynousForInstructionEnumeratedObject",
    commandChar: "",
    commandString: "error-anonymous-for-instruction",
    comment: "Error on anonymous 'for' instruction enumerated object ('for () in ...')",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorObsoleteGetterCall",
    commandChar: "",
    commandString: "error-on-obsolete-getter-call",
    comment: "Error on call of an obsolete getter",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorPropertyGetterCall",
    commandChar: "",
    commandString: "error-property-getter-call",
    comment: "Error on calling property getter (instead of dot notation)",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorEllipsisInEnumeratedObject",
    commandChar: "",
    commandString: "error-ellipsis-in-for-instruction",
    comment: "Error on ellipsis in enumerated object ('for (x y ...) in xxx')",
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
    identifier: "errorOldStyleCollectionInitializer",
    commandChar: "",
    commandString: "error-old-syle-collection-initializer",
    comment: "Error on old style collection initializer",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorOldStyleLocalVarDeclaration",
    commandChar: "",
    commandString: "error-old-style-local-var-declaration",
    comment: "Error on old style local variable declaration",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "errorOldStylePropertyDeclaration",
    commandChar: "",
    commandString: "error-old-style-property-declaration",
    comment: "Error on old style property declaration",
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
    identifier: "outputHTMLgrammarFile",
    commandChar: "",
    commandString: "output-html-grammar-file",
    comment: "Output a HTML file for every grammar component",
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
    identifier: "printPredefinedLexicalActions",
    commandChar: "",
    commandString: "print-predefined-lexical-actions",
    comment: "Print the list of predefined lexical routines and functions",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "check_big_int",
    commandChar: "",
    commandString: "check-big-int",
    comment: "Run bit integers checks",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "warningNotGalgas4Feature",
    commandChar: "",
    commandString: "warns-on-feature-not-handled-in-galgas4",
    comment: "Warns on feature not handled in galgas 4",
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
  ioStringOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "cppCompile",
    commandChar: "",
    commandString: "compile",
    comment: "Perform C++ compilation on 'string' target",
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


