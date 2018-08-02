//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Lexique.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    E X T E R N    R O U T I N E S                                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    E X T E R N    F U N C T I O N S                                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N                                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

enum {galgas3Scanner_1_,
  galgas3Scanner_1_identifier,
  galgas3Scanner_1_double_2E_xxx,
  galgas3Scanner_1_uint_33__32_,
  galgas3Scanner_1_sint_33__32__5F_S,
  galgas3Scanner_1_uint_36__34__5F_L,
  galgas3Scanner_1_sint_36__34__5F_LS,
  galgas3Scanner_1_bigint_5F_G,
  galgas3Scanner_1__2E_,
  galgas3Scanner_1__2E__2E__2E_,
  galgas3Scanner_1__2E__2E__3C_,
  galgas3Scanner_1__40_type,
  galgas3Scanner_1__25_attribute,
  galgas3Scanner_1__27_char_27_,
  galgas3Scanner_1__24_terminal_24_,
  galgas3Scanner_1__3F_,
  galgas3Scanner_1__3F__21_,
  galgas3Scanner_1__21_,
  galgas3Scanner_1__21__3F_,
  galgas3Scanner_1__3C_,
  galgas3Scanner_1__3C__3D_,
  galgas3Scanner_1__3C__3C_,
  galgas3Scanner_1__3C_non_5F_terminal_3E_,
  galgas3Scanner_1__22_string_22_,
  galgas3Scanner_1_comment,
  galgas3Scanner_1_commentMark,
  galgas3Scanner_1_abstract,
  galgas3Scanner_1_after,
  galgas3Scanner_1_array,
  galgas3Scanner_1_as,
  galgas3Scanner_1_before,
  galgas3Scanner_1_between,
  galgas3Scanner_1_block,
  galgas3Scanner_1_boolset,
  galgas3Scanner_1_cast,
  galgas3Scanner_1_case,
  galgas3Scanner_1_class,
  galgas3Scanner_1_constructor,
  galgas3Scanner_1_default,
  galgas3Scanner_1_dict,
  galgas3Scanner_1_do,
  galgas3Scanner_1_drop,
  galgas3Scanner_1_else,
  galgas3Scanner_1_elsif,
  galgas3Scanner_1_end,
  galgas3Scanner_1_enum,
  galgas3Scanner_1_error,
  galgas3Scanner_1_extension,
  galgas3Scanner_1_extern,
  galgas3Scanner_1_false,
  galgas3Scanner_1_filewrapper,
  galgas3Scanner_1_for,
  galgas3Scanner_1_fixit,
  galgas3Scanner_1_func,
  galgas3Scanner_1_getter,
  galgas3Scanner_1_grammar,
  galgas3Scanner_1_graph,
  galgas3Scanner_1_gui,
  galgas3Scanner_1_if,
  galgas3Scanner_1_in,
  galgas3Scanner_1_indexing,
  galgas3Scanner_1_insert,
  galgas3Scanner_1_is,
  galgas3Scanner_1_label,
  galgas3Scanner_1_let,
  galgas3Scanner_1_lexique,
  galgas3Scanner_1_list,
  galgas3Scanner_1_listmap,
  galgas3Scanner_1_log,
  galgas3Scanner_1_loop,
  galgas3Scanner_1_map,
  galgas3Scanner_1_match,
  galgas3Scanner_1_message,
  galgas3Scanner_1_method,
  galgas3Scanner_1_mod,
  galgas3Scanner_1_not,
  galgas3Scanner_1_on,
  galgas3Scanner_1_operator,
  galgas3Scanner_1_option,
  galgas3Scanner_1_or,
  galgas3Scanner_1_override,
  galgas3Scanner_1_parse,
  galgas3Scanner_1_private,
  galgas3Scanner_1_proc,
  galgas3Scanner_1_project,
  galgas3Scanner_1_remove,
  galgas3Scanner_1_replace,
  galgas3Scanner_1_repeat,
  galgas3Scanner_1_rewind,
  galgas3Scanner_1_rule,
  galgas3Scanner_1_search,
  galgas3Scanner_1_select,
  galgas3Scanner_1_self,
  galgas3Scanner_1_send,
  galgas3Scanner_1_setter,
  galgas3Scanner_1_sortedlist,
  galgas3Scanner_1_state,
  galgas3Scanner_1_struct,
  galgas3Scanner_1_style,
  galgas3Scanner_1_switch,
  galgas3Scanner_1_syntax,
  galgas3Scanner_1_tag,
  galgas3Scanner_1_template,
  galgas3Scanner_1_then,
  galgas3Scanner_1_true,
  galgas3Scanner_1_shared,
  galgas3Scanner_1_unused,
  galgas3Scanner_1_var,
  galgas3Scanner_1_warning,
  galgas3Scanner_1_while,
  galgas3Scanner_1_with,
  galgas3Scanner_1__2A_,
  galgas3Scanner_1__2C_,
  galgas3Scanner_1__2B_,
  galgas3Scanner_1__26__2B_,
  galgas3Scanner_1__26__2D_,
  galgas3Scanner_1__26__2A_,
  galgas3Scanner_1__26__2F_,
  galgas3Scanner_1__3E_,
  galgas3Scanner_1__3B_,
  galgas3Scanner_1__3A_,
  galgas3Scanner_1__3A__3E_,
  galgas3Scanner_1__2D_,
  galgas3Scanner_1__28_,
  galgas3Scanner_1__29_,
  galgas3Scanner_1__2D__3E_,
  galgas3Scanner_1__3D__3D_,
  galgas3Scanner_1__3D_,
  galgas3Scanner_1__26__26_,
  galgas3Scanner_1__5B_,
  galgas3Scanner_1__5D_,
  galgas3Scanner_1__2B__3D_,
  galgas3Scanner_1__2D__3D_,
  galgas3Scanner_1__2A__3D_,
  galgas3Scanner_1__2F__3D_,
  galgas3Scanner_1__2F_,
  galgas3Scanner_1__21__3D_,
  galgas3Scanner_1__3E__3D_,
  galgas3Scanner_1__26_,
  galgas3Scanner_1__7B_,
  galgas3Scanner_1__7D_,
  galgas3Scanner_1__60_,
  galgas3Scanner_1__7C__7C_,
  galgas3Scanner_1__7C_,
  galgas3Scanner_1__5E_,
  galgas3Scanner_1__3E__3E_,
  galgas3Scanner_1__7E_,
  galgas3Scanner_1__2D__2D_,
  galgas3Scanner_1__2B__2B_,
  galgas3Scanner_1__26__2D__2D_,
  galgas3Scanner_1__26__2B__2B_
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        U N I C O D E    T E S T    F U N C T I O N S                                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool galgasUnicodeLetter (const utf32 inUnicodeCharacter) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     S C A N N E R    C L A S S                                                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@interface OC_Lexique_galgas3Scanner : OC_Lexique {
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

- (void) parseLexicalTokenForLexicalColoring ;

- (NSUInteger) styleCount ;

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;

- (NSString *) indexingDirectory ;

- (NSArray *) indexingTitles ; // Array of NSString

- (BOOL) isTemplateLexique ;

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;

@end

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

