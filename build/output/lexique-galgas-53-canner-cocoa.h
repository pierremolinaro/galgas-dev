//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Lexique.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                    E X T E R N    R O U T I N E S                                             
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                    E X T E R N    F U N C T I O N S                                           
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N                               
//
//----------------------------------------------------------------------------------------------------------------------

enum {galgasScanner_1_,
  galgasScanner_1_identifier,
  galgasScanner_1_double_2E_xxx,
  galgasScanner_1_uint_33__32_,
  galgasScanner_1_sint_33__32__5F_S,
  galgasScanner_1_uint_36__34__5F_L,
  galgasScanner_1_sint_36__34__5F_LS,
  galgasScanner_1_bigint_5F_G,
  galgasScanner_1__2E_,
  galgasScanner_1__2E__2E__2E_,
  galgasScanner_1__2E__2E__3C_,
  galgasScanner_1__40_type,
  galgasScanner_1__25_attribute,
  galgasScanner_1__27_char_27_,
  galgasScanner_1__24_terminal_24_,
  galgasScanner_1__3F_,
  galgasScanner_1__3F__21_,
  galgasScanner_1__21_,
  galgasScanner_1__21__3F_,
  galgasScanner_1__3C_,
  galgasScanner_1__3C__3D_,
  galgasScanner_1__3C__3C_,
  galgasScanner_1__3C_non_5F_terminal_3E_,
  galgasScanner_1__22_string_22_,
  galgasScanner_1_comment,
  galgasScanner_1_commentMark,
  galgasScanner_1_abstract,
  galgasScanner_1_after,
  galgasScanner_1_array,
  galgasScanner_1_as,
  galgasScanner_1_before,
  galgasScanner_1_between,
  galgasScanner_1_block,
  galgasScanner_1_boolset,
  galgasScanner_1_cast,
  galgasScanner_1_case,
  galgasScanner_1_class,
  galgasScanner_1_constructor,
  galgasScanner_1_default,
  galgasScanner_1_dict,
  galgasScanner_1_do,
  galgasScanner_1_drop,
  galgasScanner_1_else,
  galgasScanner_1_elsif,
  galgasScanner_1_end,
  galgasScanner_1_enum,
  galgasScanner_1_error,
  galgasScanner_1_extension,
  galgasScanner_1_extern,
  galgasScanner_1_false,
  galgasScanner_1_filewrapper,
  galgasScanner_1_for,
  galgasScanner_1_fixit,
  galgasScanner_1_func,
  galgasScanner_1_getter,
  galgasScanner_1_grammar,
  galgasScanner_1_graph,
  galgasScanner_1_gui,
  galgasScanner_1_if,
  galgasScanner_1_in,
  galgasScanner_1_indexing,
  galgasScanner_1_insert,
  galgasScanner_1_is,
  galgasScanner_1_label,
  galgasScanner_1_let,
  galgasScanner_1_lexique,
  galgasScanner_1_list,
  galgasScanner_1_listmap,
  galgasScanner_1_log,
  galgasScanner_1_loop,
  galgasScanner_1_map,
  galgasScanner_1_message,
  galgasScanner_1_method,
  galgasScanner_1_mod,
  galgasScanner_1_mutating,
  galgasScanner_1_not,
  galgasScanner_1_on,
  galgasScanner_1_operator,
  galgasScanner_1_option,
  galgasScanner_1_or,
  galgasScanner_1_override,
  galgasScanner_1_parse,
  galgasScanner_1_public,
  galgasScanner_1_private,
  galgasScanner_1_proc,
  galgasScanner_1_project,
  galgasScanner_1_refclass,
  galgasScanner_1_remove,
  galgasScanner_1_replace,
  galgasScanner_1_repeat,
  galgasScanner_1_rewind,
  galgasScanner_1_rule,
  galgasScanner_1_search,
  galgasScanner_1_select,
  galgasScanner_1_self,
  galgasScanner_1_send,
  galgasScanner_1_setter,
  galgasScanner_1_sortedlist,
  galgasScanner_1_struct,
  galgasScanner_1_style,
  galgasScanner_1_switch,
  galgasScanner_1_syntax,
  galgasScanner_1_tag,
  galgasScanner_1_template,
  galgasScanner_1_then,
  galgasScanner_1_true,
  galgasScanner_1_unused,
  galgasScanner_1_var,
  galgasScanner_1_valueclass,
  galgasScanner_1_warning,
  galgasScanner_1_while,
  galgasScanner_1_with,
  galgasScanner_1__2A_,
  galgasScanner_1__2C_,
  galgasScanner_1__2B_,
  galgasScanner_1__26__2B_,
  galgasScanner_1__26__2D_,
  galgasScanner_1__26__2A_,
  galgasScanner_1__26__2F_,
  galgasScanner_1__3E_,
  galgasScanner_1__3B_,
  galgasScanner_1__3A_,
  galgasScanner_1__3A__3E_,
  galgasScanner_1__2D_,
  galgasScanner_1__28_,
  galgasScanner_1__29_,
  galgasScanner_1__2D__3E_,
  galgasScanner_1__3D__3D_,
  galgasScanner_1__3D_,
  galgasScanner_1__26__26_,
  galgasScanner_1__5B_,
  galgasScanner_1__5D_,
  galgasScanner_1__2B__3D_,
  galgasScanner_1__2D__3D_,
  galgasScanner_1__2A__3D_,
  galgasScanner_1__2F__3D_,
  galgasScanner_1__2F_,
  galgasScanner_1__21__3D_,
  galgasScanner_1__3E__3D_,
  galgasScanner_1__26_,
  galgasScanner_1__7B_,
  galgasScanner_1__7D_,
  galgasScanner_1__60_,
  galgasScanner_1__7C__7C_,
  galgasScanner_1__7C_,
  galgasScanner_1__5E_,
  galgasScanner_1__3E__3E_,
  galgasScanner_1__7E_,
  galgasScanner_1__2D__2D_,
  galgasScanner_1__2B__2B_,
  galgasScanner_1__26__2D__2D_,
  galgasScanner_1__26__2B__2B_,
  galgasScanner_1__B0_,
  galgasScanner_1__3D__3D__3D_,
  galgasScanner_1__21__3D__3D_
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                     S C A N N E R    C L A S S                                                
//
//----------------------------------------------------------------------------------------------------------------------

@interface OC_Lexique_galgasScanner : OC_Lexique {
//--- Attributes
  @private NSMutableString * mLexicalAttribute_bigintValue ;
  @private UInt32 mLexicalAttribute_charValue ;
  @private double mLexicalAttribute_floatValue ;
  @private NSMutableString * mLexicalAttribute_identifierString ;
  @private SInt32 mLexicalAttribute_sint32value ;
  @private SInt64 mLexicalAttribute_sint64value ;
  @private NSMutableString * mLexicalAttribute_tokenString ;
  @private UInt32 mLexicalAttribute_uint32value ;
  @private UInt64 mLexicalAttribute_uint64value ;

}

- (NSUInteger) terminalVocabularyCount ;

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;

- (BOOL) internalParseLexicalTokenForLexicalColoring ;

- (void) parseLexicalTokenForLexicalColoring ;

- (NSUInteger) styleCount ;

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;

- (NSString *) indexingDirectory ;

- (NSArray *) indexingTitles ; // Array of NSString

- (BOOL) isTemplateLexique ;

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;

@end

//----------------------------------------------------------------------------------------------------------------------
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2
