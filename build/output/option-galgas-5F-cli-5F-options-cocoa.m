//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------

#import "option-galgas-5F-cli-5F-options-cocoa.h"
#import "OC_GGS_CommandLineOption.h"

//----------------------------------------------------------------------------------------------------------------------

void enterOptionsFor_galgas_5F_cli_5F_options (NSMutableArray * ioBoolOptionArray,
                                               NSMutableArray * ioUIntOptionArray,
                                               NSMutableArray * ioStringOptionArray,
                                               NSMutableArray * ioStringListOptionArray) {
  OC_GGS_CommandLineOption * option ;
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
    identifier:@"check_gmp"
    commandChar:0
    commandString:@"check-gmp"
    comment:@"Run a GMP check"
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
    identifier:@"emitSyntaxDiagrams"
    commandChar:0
    commandString:@"emit-syntax-diagrams"
    comment:@"Emit grammar syntax diagrams in TEX files"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"errorSharedClassDeclaration"
    commandChar:0
    commandString:@"error-shared-class-declaration"
    comment:@"'shared class' declaration is invalid"
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
    identifier:@"generateSharedMapAutomatonDotFiles"
    commandChar:0
    commandString:@"generate-shared-map-automaton-dot-files"
    comment:@"Generate shared map automaton dot files"
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
    identifier:@"outputHTMLgrammarFile"
    commandChar:0
    commandString:@"output-html-grammar-file"
    comment:@"Output a HTML file for every grammar component"
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
    identifier:@"propertyAccessRequiresSelf"
    commandChar:0
    commandString:@"property-access-requires-self"
    comment:@"'self' is required for accessing properties in getter, setter and methods"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"warnsAnomynousForInstructionEnumeratedObject"
    commandChar:0
    commandString:@"warns-anonymous-for-instruction"
    comment:@"warns on anonymous 'for' instruction enumerated object ('for () in ...')"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"macosxSDK"
    commandChar:0
    commandString:@"macosx"
    comment:@"Generate an Xcode project for OS X"
    defaultValue:@"0"
  ] ;
  [ioUIntOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"cppCompile"
    commandChar:0
    commandString:@"compile"
    comment:@"Perform C++ compilation on 'string' target"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
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
}

//----------------------------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


