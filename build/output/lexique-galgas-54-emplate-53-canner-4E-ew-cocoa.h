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

enum {galgasTemplateScannerNew_1_,
  galgasTemplateScannerNew_1_identifier,
  galgasTemplateScannerNew_1_double_2E_xxx,
  galgasTemplateScannerNew_1_uint_33__32_,
  galgasTemplateScannerNew_1_sint_33__32__5F_S,
  galgasTemplateScannerNew_1_uint_36__34__5F_L,
  galgasTemplateScannerNew_1_sint_36__34__5F_LS,
  galgasTemplateScannerNew_1_bigint_5F_G,
  galgasTemplateScannerNew_1__2E_,
  galgasTemplateScannerNew_1__2E__2E__2E_,
  galgasTemplateScannerNew_1__2E__2E__3C_,
  galgasTemplateScannerNew_1__40_type,
  galgasTemplateScannerNew_1__25_attribute,
  galgasTemplateScannerNew_1__27_char_27_,
  galgasTemplateScannerNew_1__24_terminal_24_,
  galgasTemplateScannerNew_1__3F_,
  galgasTemplateScannerNew_1__3F__21_,
  galgasTemplateScannerNew_1__21_,
  galgasTemplateScannerNew_1__21__3F_,
  galgasTemplateScannerNew_1__3C_,
  galgasTemplateScannerNew_1__3C__3D_,
  galgasTemplateScannerNew_1__3C__3C_,
  galgasTemplateScannerNew_1__3C_non_5F_terminal_3E_,
  galgasTemplateScannerNew_1__22_string_22_,
  galgasTemplateScannerNew_1_comment,
  galgasTemplateScannerNew_1_commentMark,
  galgasTemplateScannerNew_1_abstract,
  galgasTemplateScannerNew_1_after,
  galgasTemplateScannerNew_1_array,
  galgasTemplateScannerNew_1_as,
  galgasTemplateScannerNew_1_before,
  galgasTemplateScannerNew_1_between,
  galgasTemplateScannerNew_1_block,
  galgasTemplateScannerNew_1_boolset,
  galgasTemplateScannerNew_1_cast,
  galgasTemplateScannerNew_1_case,
  galgasTemplateScannerNew_1_class,
  galgasTemplateScannerNew_1_constructor,
  galgasTemplateScannerNew_1_default,
  galgasTemplateScannerNew_1_dict,
  galgasTemplateScannerNew_1_do,
  galgasTemplateScannerNew_1_drop,
  galgasTemplateScannerNew_1_else,
  galgasTemplateScannerNew_1_elsif,
  galgasTemplateScannerNew_1_end,
  galgasTemplateScannerNew_1_enum,
  galgasTemplateScannerNew_1_error,
  galgasTemplateScannerNew_1_extension,
  galgasTemplateScannerNew_1_extern,
  galgasTemplateScannerNew_1_false,
  galgasTemplateScannerNew_1_filewrapper,
  galgasTemplateScannerNew_1_for,
  galgasTemplateScannerNew_1_fixit,
  galgasTemplateScannerNew_1_func,
  galgasTemplateScannerNew_1_getter,
  galgasTemplateScannerNew_1_grammar,
  galgasTemplateScannerNew_1_graph,
  galgasTemplateScannerNew_1_gui,
  galgasTemplateScannerNew_1_if,
  galgasTemplateScannerNew_1_in,
  galgasTemplateScannerNew_1_indexing,
  galgasTemplateScannerNew_1_insert,
  galgasTemplateScannerNew_1_is,
  galgasTemplateScannerNew_1_label,
  galgasTemplateScannerNew_1_let,
  galgasTemplateScannerNew_1_lexique,
  galgasTemplateScannerNew_1_list,
  galgasTemplateScannerNew_1_listmap,
  galgasTemplateScannerNew_1_log,
  galgasTemplateScannerNew_1_loop,
  galgasTemplateScannerNew_1_map,
  galgasTemplateScannerNew_1_message,
  galgasTemplateScannerNew_1_method,
  galgasTemplateScannerNew_1_mod,
  galgasTemplateScannerNew_1_mutating,
  galgasTemplateScannerNew_1_not,
  galgasTemplateScannerNew_1_on,
  galgasTemplateScannerNew_1_operator,
  galgasTemplateScannerNew_1_option,
  galgasTemplateScannerNew_1_or,
  galgasTemplateScannerNew_1_override,
  galgasTemplateScannerNew_1_parse,
  galgasTemplateScannerNew_1_public,
  galgasTemplateScannerNew_1_private,
  galgasTemplateScannerNew_1_proc,
  galgasTemplateScannerNew_1_project,
  galgasTemplateScannerNew_1_refclass,
  galgasTemplateScannerNew_1_remove,
  galgasTemplateScannerNew_1_replace,
  galgasTemplateScannerNew_1_repeat,
  galgasTemplateScannerNew_1_rewind,
  galgasTemplateScannerNew_1_rule,
  galgasTemplateScannerNew_1_search,
  galgasTemplateScannerNew_1_select,
  galgasTemplateScannerNew_1_self,
  galgasTemplateScannerNew_1_send,
  galgasTemplateScannerNew_1_setter,
  galgasTemplateScannerNew_1_sortedlist,
  galgasTemplateScannerNew_1_struct,
  galgasTemplateScannerNew_1_style,
  galgasTemplateScannerNew_1_switch,
  galgasTemplateScannerNew_1_syntax,
  galgasTemplateScannerNew_1_tag,
  galgasTemplateScannerNew_1_template,
  galgasTemplateScannerNew_1_then,
  galgasTemplateScannerNew_1_true,
  galgasTemplateScannerNew_1_unused,
  galgasTemplateScannerNew_1_var,
  galgasTemplateScannerNew_1_valueclass,
  galgasTemplateScannerNew_1_warning,
  galgasTemplateScannerNew_1_while,
  galgasTemplateScannerNew_1_with,
  galgasTemplateScannerNew_1__2A_,
  galgasTemplateScannerNew_1__2C_,
  galgasTemplateScannerNew_1__2B_,
  galgasTemplateScannerNew_1__26__2B_,
  galgasTemplateScannerNew_1__26__2D_,
  galgasTemplateScannerNew_1__26__2A_,
  galgasTemplateScannerNew_1__26__2F_,
  galgasTemplateScannerNew_1__3E_,
  galgasTemplateScannerNew_1__3B_,
  galgasTemplateScannerNew_1__3A_,
  galgasTemplateScannerNew_1__3A__3E_,
  galgasTemplateScannerNew_1__2D_,
  galgasTemplateScannerNew_1__28_,
  galgasTemplateScannerNew_1__29_,
  galgasTemplateScannerNew_1__2D__3E_,
  galgasTemplateScannerNew_1__3D__3D_,
  galgasTemplateScannerNew_1__3D_,
  galgasTemplateScannerNew_1__26__26_,
  galgasTemplateScannerNew_1__5B_,
  galgasTemplateScannerNew_1__5D_,
  galgasTemplateScannerNew_1__2B__3D_,
  galgasTemplateScannerNew_1__2D__3D_,
  galgasTemplateScannerNew_1__2A__3D_,
  galgasTemplateScannerNew_1__2F__3D_,
  galgasTemplateScannerNew_1__2F_,
  galgasTemplateScannerNew_1__21__3D_,
  galgasTemplateScannerNew_1__3E__3D_,
  galgasTemplateScannerNew_1__26_,
  galgasTemplateScannerNew_1__7B_,
  galgasTemplateScannerNew_1__7D_,
  galgasTemplateScannerNew_1__60_,
  galgasTemplateScannerNew_1__7C__7C_,
  galgasTemplateScannerNew_1__7C_,
  galgasTemplateScannerNew_1__5E_,
  galgasTemplateScannerNew_1__3E__3E_,
  galgasTemplateScannerNew_1__7E_,
  galgasTemplateScannerNew_1__2D__2D_,
  galgasTemplateScannerNew_1__2B__2B_,
  galgasTemplateScannerNew_1__26__2D__2D_,
  galgasTemplateScannerNew_1__26__2B__2B_,
  galgasTemplateScannerNew_1__B0_,
  galgasTemplateScannerNew_1__3D__3D__3D_,
  galgasTemplateScannerNew_1__21__3D__3D_,
  galgasTemplateScannerNew_1__3F__5E_,
  galgasTemplateScannerNew_1__21__5E_
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                     S C A N N E R    C L A S S                                                
//
//----------------------------------------------------------------------------------------------------------------------

@interface OC_Lexique_galgasTemplateScannerNew : OC_Lexique {
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

