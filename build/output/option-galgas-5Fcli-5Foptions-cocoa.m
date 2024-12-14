//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------

#import "option-galgas-5Fcli-5Foptions-cocoa.h"
#import "OC_GGS_CommandLineOption.h"

//--------------------------------------------------------------------------------------------------

void enterOptionsFor_galgas_5F_cli_5F_options (NSMutableArray * ioBoolOptionArray,
                                               NSMutableArray * ioUIntOptionArray,
                                               NSMutableArray * ioStringOptionArray,
                                               NSMutableArray * ioStringListOptionArray) {
  OC_GGS_CommandLineOption * option ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"propertyAccessRequiresSelf"
    commandChar:0
    commandString:@"error-property-access-without-self"
    comment:@"'self' is required for accessing properties in getter, setter and methods"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"checkEntityUsefulness"
    commandChar:0
    commandString:@"check-usefulness"
    comment:@"Check Entity Usefulness"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"displayUnicodeLexicalTestFunctions"
    commandChar:0
    commandString:@"display-lexical-test-functions"
    comment:@"Display Unicode Lexical Test Functions"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"emitClassGraph"
    commandChar:0
    commandString:@"emit-class-graph"
    comment:@"Emit class graph in dot file"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"emitSyntaxDiagrams"
    commandChar:0
    commandString:@"emit-syntax-diagrams"
    comment:@"Emit grammar syntax diagrams in TEX files"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"errorAnomynousForInstructionEnumeratedObject"
    commandChar:0
    commandString:@"error-anonymous-for-instruction"
    comment:@"Error on anonymous 'for' instruction enumerated object ('for () in ...')"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"errorObsoleteGetterCall"
    commandChar:0
    commandString:@"error-on-obsolete-getter-call"
    comment:@"Error on call of an obsolete getter"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"errorPropertyGetterCall"
    commandChar:0
    commandString:@"error-property-getter-call"
    comment:@"Error on calling property getter (instead of dot notation)"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"errorEllipsisInEnumeratedObject"
    commandChar:0
    commandString:@"error-ellipsis-in-for-instruction"
    comment:@"Error on ellipsis in enumerated object ('for (x y ...) in xxx')"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"errorOnGetterCallWithNoArgument"
    commandChar:0
    commandString:@"error-on-getter-call-with-no-argument"
    comment:@"Error on getter call; with no argument (GGS4, suppress parenthesis)"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"errorOldStyleCollectionInitializer"
    commandChar:0
    commandString:@"error-old-syle-collection-initializer"
    comment:@"Error on old style collection initializer"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"errorOldStyleLocalVarDeclaration"
    commandChar:0
    commandString:@"error-old-style-local-var-declaration"
    comment:@"Error on old style local variable declaration"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"errorOldStylePropertyDeclaration"
    commandChar:0
    commandString:@"error-old-style-property-declaration"
    comment:@"Error on old style property declaration"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"errorUsingNewInsteadOfInit"
    commandChar:0
    commandString:@"error-using-new-instead-of-init"
    comment:@"GGS3: error on using 'new' instead of 'init'"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"generateManyFiles"
    commandChar:0
    commandString:@"generate-many-cpp-files"
    comment:@"Generate many C++ implementation files"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"generateOneHeader"
    commandChar:0
    commandString:@"generate-one-cpp-header"
    comment:@"Generate one C++ header file for all declarations"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"outputHTMLgrammarFile"
    commandChar:0
    commandString:@"output-html-grammar-file"
    comment:@"Output a HTML file for every grammar component"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"outputHTMLTypeListFile"
    commandChar:84
    commandString:@"output-html-type-dump-file"
    comment:@"Output a HTML file that contains all defined types"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"printPredefinedLexicalActions"
    commandChar:0
    commandString:@"print-predefined-lexical-actions"
    comment:@"Print the list of predefined lexical routines and functions"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"check_big_int"
    commandChar:0
    commandString:@"check-big-int"
    comment:@"Run bit integers checks"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"warningNotGalgas4Feature"
    commandChar:0
    commandString:@"warns-on-feature-not-handled-in-galgas4"
    comment:@"Warns on feature not handled in galgas 4"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"create_project"
    commandChar:0
    commandString:@"create-project"
    comment:@"Create a new GALGAS Project"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"extractLIBPMOption"
    commandChar:0
    commandString:@"extract-libpm"
    comment:@"Extract embedded LIBPM at given path"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"cppCompile"
    commandChar:0
    commandString:@"compile"
    comment:@"Perform C++ compilation on 'string' target"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


