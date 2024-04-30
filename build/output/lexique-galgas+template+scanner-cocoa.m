//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-galgas+template+scanner-cocoa.h"
#import "PMDebug.h"

//--------------------------------------------------------------------------------------------------

@implementation OC_Lexique_galgasTemplateScanner

//--------------------------------------------------------------------------------------------------
//
//                           Template Replacements
//
//--------------------------------------------------------------------------------------------------

static NSArray * kTemplateReplacementArray_galgasTemplateScanner ; // Of NSString 

//--------------------------------------------------------------------------------------------------
//
//                           Template Delimiters
//
//--------------------------------------------------------------------------------------------------

static NSArray * kTemplateDefinitionArray_galgasTemplateScanner ;

//--------------------------------------------------------------------------------------------------
//
//                           init
//
//--------------------------------------------------------------------------------------------------

- (instancetype) init {
  self = [super init] ;
  if (self) {
    noteObjectAllocation (self) ;
  }
  if (nil == kTemplateDefinitionArray_galgasTemplateScanner) {
    kTemplateDefinitionArray_galgasTemplateScanner = [NSArray arrayWithObjects:
      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@"%" endString:@"%" discardStartString:YES],
      nil
    ] ;
  }
  if (nil == kTemplateReplacementArray_galgasTemplateScanner) {
    kTemplateReplacementArray_galgasTemplateScanner = [NSArray arrayWithObjects:
      @"\\%",
      @"\\n",
      @"\\\\",
      nil
    ] ;
  }
  return self ;
}

//--------------------------------------------------------------------------------------------------

- (void) dealloc {
  noteObjectDeallocation (self) ;
}

//--------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//--------------------------------------------------------------------------------------------------

static const BOOL kEndOfScriptInTemplateArray_galgasTemplateScanner [194] = {
  NO /* identifier */,
  NO /* double.xxx */,
  NO /* literalInt */,
  NO /* . */,
  NO /* ... */,
  NO /* ..< */,
  NO /* @type */,
  NO /* 'char' */,
  NO /* $terminal$ */,
  NO /* comment */,
  NO /* commentMark */,
  NO /* ?selector: */,
  NO /* ? */,
  NO /* ?!selector: */,
  NO /* ?! */,
  NO /* !selector: */,
  NO /* ! */,
  NO /* !?selector: */,
  NO /* !? */,
  NO /* < */,
  NO /* <= */,
  NO /* << */,
  NO /* <non_terminal> */,
  NO /* "string" */,
  NO /* abstract */,
  NO /* after */,
  NO /* as */,
  NO /* bang */,
  NO /* before */,
  NO /* between */,
  NO /* block */,
  NO /* boolset */,
  NO /* cast */,
  NO /* case */,
  NO /* class */,
  NO /* default */,
  NO /* dict */,
  NO /* do */,
  NO /* drop */,
  NO /* else */,
  NO /* elsif */,
  NO /* end */,
  NO /* enum */,
  NO /* error */,
  NO /* extension */,
  NO /* extern */,
  NO /* false */,
  NO /* fileprivate */,
  NO /* filewrapper */,
  NO /* for */,
  NO /* final */,
  NO /* fixit */,
  NO /* func */,
  NO /* getter */,
  NO /* grammar */,
  NO /* graph */,
  NO /* gui */,
  NO /* if */,
  NO /* in */,
  NO /* indexing */,
  NO /* init */,
  NO /* insert */,
  NO /* is */,
  NO /* label */,
  NO /* let */,
  NO /* lexique */,
  NO /* list */,
  NO /* log */,
  NO /* loop */,
  NO /* map */,
  NO /* message */,
  NO /* method */,
  NO /* mod */,
  NO /* mutating */,
  NO /* nil */,
  NO /* not */,
  NO /* on */,
  NO /* operator */,
  NO /* option */,
  NO /* or */,
  NO /* override */,
  NO /* parse */,
  NO /* public */,
  NO /* protected */,
  NO /* private */,
  NO /* proc */,
  NO /* project */,
  NO /* refclass */,
  NO /* remove */,
  NO /* repeat */,
  NO /* replace */,
  NO /* rewind */,
  NO /* rule */,
  NO /* search */,
  NO /* select */,
  NO /* self */,
  NO /* send */,
  NO /* setter */,
  NO /* sortedlist */,
  NO /* spoil */,
  NO /* struct */,
  NO /* style */,
  NO /* super */,
  NO /* switch */,
  NO /* syntax */,
  NO /* tag */,
  NO /* template */,
  NO /* then */,
  NO /* true */,
  NO /* typealias */,
  NO /* unused */,
  NO /* valueclass */,
  NO /* var */,
  NO /* warning */,
  NO /* weak */,
  NO /* while */,
  NO /* with */,
  NO /* %app-link */,
  NO /* %app-source */,
  NO /* %applicationBundleBase */,
  NO /* %clonable */,
  NO /* %codeblocks-linux32 */,
  NO /* %codeblocks-linux64 */,
  NO /* %codeblocks-windows */,
  NO /* %comparable */,
  NO /* %equatable */,
  NO /* %from */,
  NO /* %generatedInSeparateFile */,
  NO /* %initArgLabel */,
  NO /* %libpmAtPath */,
  NO /* %MacOS */,
  NO /* %MacOSDeployment */,
  NO /* %macCodeSign */,
  NO /* %makefile-macosx */,
  NO /* %makefile-unix */,
  NO /* %makefile-x86linux32-on-macosx */,
  NO /* %makefile-x86linux64-on-macosx */,
  NO /* %makefile-win32-on-macosx */,
  NO /* %nonAtomicSelection */,
  NO /* %once */,
  NO /* %preserved */,
  NO /* %quietOutputByDefault */,
  NO /* %templateEndMark */,
  NO /* %tool-source */,
  NO /* %translate */,
  NO /* %usefull */,
  NO /* * */,
  NO /* , */,
  NO /* + */,
  NO /* &+ */,
  NO /* &- */,
  NO /* &* */,
  NO /* &/ */,
  NO /* > */,
  NO /* ; */,
  NO /* : */,
  NO /* :> */,
  NO /* - */,
  NO /* ( */,
  NO /* ) */,
  NO /* -> */,
  NO /* == */,
  NO /* = */,
  NO /* && */,
  NO /* [ */,
  NO /* ] */,
  NO /* += */,
  NO /* -= */,
  NO /* *= */,
  NO /* /= */,
  NO /* &= */,
  NO /* |= */,
  NO /* ^= */,
  NO /* / */,
  NO /* != */,
  NO /* >= */,
  NO /* & */,
  NO /* { */,
  NO /* } */,
  NO /* ` */,
  NO /* || */,
  NO /* | */,
  NO /* ^ */,
  NO /* >> */,
  NO /* ~ */,
  NO /* -- */,
  NO /* ++ */,
  NO /* &-- */,
  NO /* &++ */,
  NO /* === */,
  NO /* !== */,
  NO /* ?^ */,
  NO /* !^ */,
  NO /* §[ */
} ;

//--------------------------------------------------------------------------------------------------
//
//               P A R S E    L E X I C A L    T O K E N
//
//--------------------------------------------------------------------------------------------------

- (void) parseLexicalTokenForLexicalColoring {
  BOOL scanningOk = YES ;
  mTokenCode = 0 ;
  while ((mTokenCode == 0) && (mCurrentChar != '\0')) {
    mTokenStartLocation = mCurrentLocation ;
    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_galgasTemplateScanner objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {
      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_galgasTemplateScanner objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;
      if (foundEndDelimitor) {
        mMatchedTemplateDelimiterIndex = -1 ;
      }
    }
    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\0')) {
      [self searchForReplacementPattern:kTemplateReplacementArray_galgasTemplateScanner] ;
      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_galgasTemplateScanner] ;
      if (mMatchedTemplateDelimiterIndex < 0) {
        [self advance] ;
        mTokenCode = -2 ;
      }
    }
    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\0') && scanningOk) {
      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;
    }
    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_galgasTemplateScanner [mTokenCode - 1]) {
      mMatchedTemplateDelimiterIndex = -1 ;
    }
  //--- Error ?
    if (! scanningOk) {
      mTokenCode = -1 ;
      [self advance] ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//                I S    T E M P L A T E    L E X I Q U E
//
//--------------------------------------------------------------------------------------------------

- (BOOL) isTemplateLexique {
  return YES ;
}

//--------------------------------------------------------------------------------------------------
//
//         L E X I Q U E   I D E N T I F I E R
//
//--------------------------------------------------------------------------------------------------

- (NSString *) lexiqueIdentifier {
  return @"galgasTemplateScanner" ;
}

//--------------------------------------------------------------------------------------------------

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


