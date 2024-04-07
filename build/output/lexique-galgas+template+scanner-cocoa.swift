//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import AppKit

//--------------------------------------------------------------------------------------------------
//                           Template Replacements
//--------------------------------------------------------------------------------------------------

fileprivate let kTemplateReplacementArray_galgasTemplateScanner : [String] = [
  "\\%",
  "\\n",
  "\\\\"
]

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters
//--------------------------------------------------------------------------------------------------

fileprivate let kTemplateDefinitionArray_galgasTemplateScanner : [SWIFT_TemplateDelimiter] = [
  SWIFT_TemplateDelimiter (startString: "%", endString: "%", discardStartString: true)
]

//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark
//--------------------------------------------------------------------------------------------------

fileprivate let kEndOfScriptInTemplateArray_galgasTemplateScanner : [Bool] = [
  false /* identifier */,
  false /* double.xxx */,
  false /* literalInt */,
  false /* . */,
  false /* ... */,
  false /* ..< */,
  false /* @type */,
  false /* 'char' */,
  false /* $terminal$ */,
  false /* comment */,
  false /* commentMark */,
  false /* ?selector: */,
  false /* ? */,
  false /* ?!selector: */,
  false /* ?! */,
  false /* !selector: */,
  false /* ! */,
  false /* !?selector: */,
  false /* !? */,
  false /* < */,
  false /* <= */,
  false /* << */,
  false /* <non_terminal> */,
  false /* "string" */,
  false /* abstract */,
  false /* after */,
  false /* array */,
  false /* as */,
  false /* bang */,
  false /* before */,
  false /* between */,
  false /* block */,
  false /* boolset */,
  false /* cast */,
  false /* case */,
  false /* class */,
  false /* default */,
  false /* dict */,
  false /* do */,
  false /* drop */,
  false /* else */,
  false /* elsif */,
  false /* end */,
  false /* enum */,
  false /* error */,
  false /* extension */,
  false /* extern */,
  false /* false */,
  false /* fileprivate */,
  false /* filewrapper */,
  false /* for */,
  false /* final */,
  false /* fixit */,
  false /* func */,
  false /* getter */,
  false /* grammar */,
  false /* graph */,
  false /* gui */,
  false /* if */,
  false /* in */,
  false /* indexing */,
  false /* init */,
  false /* insert */,
  false /* is */,
  false /* label */,
  false /* let */,
  false /* lexique */,
  false /* list */,
  false /* listmap */,
  false /* log */,
  false /* loop */,
  false /* map */,
  false /* message */,
  false /* method */,
  false /* mod */,
  false /* mutating */,
  false /* not */,
  false /* on */,
  false /* operator */,
  false /* option */,
  false /* or */,
  false /* override */,
  false /* parse */,
  false /* public */,
  false /* protected */,
  false /* private */,
  false /* proc */,
  false /* project */,
  false /* refclass */,
  false /* remove */,
  false /* repeat */,
  false /* replace */,
  false /* rewind */,
  false /* rule */,
  false /* search */,
  false /* select */,
  false /* self */,
  false /* send */,
  false /* setter */,
  false /* sortedlist */,
  false /* spoil */,
  false /* struct */,
  false /* style */,
  false /* super */,
  false /* switch */,
  false /* syntax */,
  false /* tag */,
  false /* template */,
  false /* then */,
  false /* true */,
  false /* typealias */,
  false /* unused */,
  false /* valueclass */,
  false /* var */,
  false /* warning */,
  false /* while */,
  false /* with */,
  false /* %app-link */,
  false /* %app-source */,
  false /* %makefile-macosx */,
  false /* %makefile-unix */,
  false /* %makefile-x86linux32-on-macosx */,
  false /* %makefile-x86linux64-on-macosx */,
  false /* %makefile-win32-on-macosx */,
  false /* %codeblocks-windows */,
  false /* %codeblocks-linux32 */,
  false /* %codeblocks-linux64 */,
  false /* %applicationBundleBase */,
  false /* %MacOS */,
  false /* %MacOSDeployment */,
  false /* %quietOutputByDefault */,
  false /* %macCodeSign */,
  false /* %libpmAtPath */,
  false /* %tool-source */,
  false /* %translate */,
  false /* %once */,
  false /* %usefull */,
  false /* %generatedInSeparateFile */,
  false /* %nonAtomicSelection */,
  false /* %templateEndMark */,
  false /* %noArgumentLabel */,
  false /* %preserved */,
  false /* %selector */,
  false /* %useGrammar */,
  false /* * */,
  false /* , */,
  false /* + */,
  false /* &+ */,
  false /* &- */,
  false /* &* */,
  false /* &/ */,
  false /* > */,
  false /* ; */,
  false /* : */,
  false /* :> */,
  false /* - */,
  false /* ( */,
  false /* ) */,
  false /* -> */,
  false /* == */,
  false /* = */,
  false /* && */,
  false /* [ */,
  false /* ] */,
  false /* += */,
  false /* -= */,
  false /* *= */,
  false /* /= */,
  false /* / */,
  false /* != */,
  false /* >= */,
  false /* & */,
  false /* { */,
  false /* } */,
  false /* ` */,
  false /* || */,
  false /* | */,
  false /* ^ */,
  false /* >> */,
  false /* ~ */,
  false /* -- */,
  false /* ++ */,
  false /* &-- */,
  false /* &++ */,
  false /* === */,
  false /* !== */,
  false /* ?^ */,
  false /* !^ */,
  false /* §[ */
]


//--------------------------------------------------------------------------------------------------

func galgasTemplateScanner_lexiqueIdentifier () -> String {
  return "galgasTemplateScanner"
}

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class SWIFT_Lexique_galgasTemplateScanner : SWIFT_Lexique_galgasScanner3 {

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func isTemplateLexique () -> Bool {
    return true
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Lexical analysis
  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {
    let startLocation = self.currentLocation
    if let idx = self.mEndTemplateDelimiterIndex, self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].endString, advance: true) {
      self.mEndTemplateDelimiterIndex = nil
    }
    if self.mEndTemplateDelimiterIndex != nil {
      return super.parseLexicalTokenForLexicalColoring ()
    }else{ // In template string, find code start string
      while self.mEndTemplateDelimiterIndex == nil, self.currentChar != 0 {
        var idx = 0
        while self.mEndTemplateDelimiterIndex == nil, idx < kTemplateDefinitionArray_galgasTemplateScanner.count {
          if self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].startString, advance: true) {
            self.mEndTemplateDelimiterIndex = idx
          }
          idx += 1
        }
        if self.mEndTemplateDelimiterIndex == nil {
          self.advance ()
        }
      }
      return SWIFT_Token (
        range: NSRange (location: startLocation, length: self.currentLocation - startLocation),
        tokenCode: galgasScanner_2_TEMPLATE,
        templateDelimiterIndex: self.mEndTemplateDelimiterIndex
      )
    }
  }
//    var styleIndex : UInt8 = 0
//    var tokenCode : UInt16 = 0
//    let startLocation = self.currentLocation
//    while styleIndex == 0, self.currentChar != 0 {
//      let tokenStartLocation = self.currentLocation
//      if let idx = matchedTemplateDelimiterIndex, !kTemplateDefinitionArray_galgasTemplateScanner [idx].startString.isEmpty {
//        let foundEndDelimitor = self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].endString, advance: true)
//        if foundEndDelimitor {
//          matchedTemplateDelimiterIndex = nil
//        }
//      }
//      while matchedTemplateDelimiterIndex != nil, self.currentChar != 0 {
//        self.searchForReplacementPattern (kTemplateReplacementArray_galgasTemplateScanner)
//        matchedTemplateDelimiterIndex = self.findTemplateDelimiterIndex (kTemplateDefinitionArray_galgasTemplateScanner)
//        if matchedTemplateDelimiterIndex == nil {
//          self.advance ()
//          styleIndex = -2
//        }
//      }
//      if matchedTemplateDelimiterIndex != nil, styleIndex == 0, self.currentChar != 0 {
//        let s = super.parseLexicalTokenForLexicalColoring ()
//        styleIndex = s.styleIndex
//        tokenCode = s.token
//      }
//      if styleIndex > 0, kEndOfScriptInTemplateArray_galgasTemplateScanner [Int (styleIndex) - 1] {
//        matchedTemplateDelimiterIndex = nil
//      }
//    //--- Error ?
////      if !scanningOk {
////        styleIndex = Int8 (self.styleCount ())
////        self.advance ()
////      }
//    }
//  }
  
  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
//
//                           init
//
//--------------------------------------------------------------------------------------------------

/* - (instancetype) init {
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
*/

//--------------------------------------------------------------------------------------------------

/* - (void) dealloc {
  noteObjectDeallocation (self) ;
} */

//--------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//--------------------------------------------------------------------------------------------------

/*
static const BOOL kEndOfScriptInTemplateArray_galgasTemplateScanner [189] = {
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
  NO /* array */,
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
  NO /* listmap */,
  NO /* log */,
  NO /* loop */,
  NO /* map */,
  NO /* message */,
  NO /* method */,
  NO /* mod */,
  NO /* mutating */,
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
  NO /* while */,
  NO /* with */,
  NO /* %app-link */,
  NO /* %app-source */,
  NO /* %makefile-macosx */,
  NO /* %makefile-unix */,
  NO /* %makefile-x86linux32-on-macosx */,
  NO /* %makefile-x86linux64-on-macosx */,
  NO /* %makefile-win32-on-macosx */,
  NO /* %codeblocks-windows */,
  NO /* %codeblocks-linux32 */,
  NO /* %codeblocks-linux64 */,
  NO /* %applicationBundleBase */,
  NO /* %MacOS */,
  NO /* %MacOSDeployment */,
  NO /* %quietOutputByDefault */,
  NO /* %macCodeSign */,
  NO /* %libpmAtPath */,
  NO /* %tool-source */,
  NO /* %translate */,
  NO /* %once */,
  NO /* %usefull */,
  NO /* %generatedInSeparateFile */,
  NO /* %nonAtomicSelection */,
  NO /* %templateEndMark */,
  NO /* %noArgumentLabel */,
  NO /* %preserved */,
  NO /* %selector */,
  NO /* %useGrammar */,
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
 */

//--------------------------------------------------------------------------------------------------
//
//               P A R S E    L E X I C A L    T O K E N
//
//--------------------------------------------------------------------------------------------------

/* - (void) parseLexicalTokenForLexicalColoring {
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
*/ 
//--------------------------------------------------------------------------------------------------
//
//                I S    T E M P L A T E    L E X I Q U E
//
//--------------------------------------------------------------------------------------------------

/* - (BOOL) isTemplateLexique {
  return YES ;
} */

//--------------------------------------------------------------------------------------------------
//
//         L E X I Q U E   I D E N T I F I E R
//
//--------------------------------------------------------------------------------------------------

/* - (NSString *) lexiqueIdentifier {
  return @"galgasTemplateScanner" ;
} */

//--------------------------------------------------------------------------------------------------

// @end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


