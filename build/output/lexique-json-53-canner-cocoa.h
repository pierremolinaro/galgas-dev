//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Lexique.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    R O U T I N E S                                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    F U N C T I O N S                                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

enum {jsonScanner_1_,
  jsonScanner_1__22_string_22_,
  jsonScanner_1_integer,
  jsonScanner_1__5B_,
  jsonScanner_1__5D_,
  jsonScanner_1__7B_,
  jsonScanner_1__7D_,
  jsonScanner_1__3A_,
  jsonScanner_1__2C_,
  jsonScanner_1_false,
  jsonScanner_1_null,
  jsonScanner_1_true
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        U N I C O D E    T E S T    F U N C T I O N S                                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     S C A N N E R    C L A S S                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@interface OC_Lexique_jsonScanner : OC_Lexique {
//--- Attributes
  @private NSMutableString * mLexicalAttribute_bigintValue ;
  @private UInt32 mLexicalAttribute_charValue ;
  @private NSMutableString * mLexicalAttribute_tokenString ;
  @private UInt32 mLexicalAttribute_uint32value ;

}

- (NSUInteger) terminalVocabularyCount ;

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;

- (void) parseLexicalTokenForLexicalColoring ;

- (NSUInteger) styleCount ;

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;

- (NSString *) indexingDirectory ;

- (NSArray *) indexingTitles ; // Array of NSString

- (BOOL) isTemplateLexique ;

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;

@end

//---------------------------------------------------------------------------------------------------------------------*
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

