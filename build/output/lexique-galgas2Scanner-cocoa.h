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

enum {galgas2Scanner_1_,
  galgas2Scanner_1_identifier,
  galgas2Scanner_1_literal_5F_double,
  galgas2Scanner_1_unsigned_5F_literal_5F_integer,
  galgas2Scanner_1_signed_5F_literal_5F_integer,
  galgas2Scanner_1_unsigned_5F_literal_5F_integer_36__34_,
  galgas2Scanner_1_signed_5F_literal_5F_integer_36__34_,
  galgas2Scanner_1_bigint,
  galgas2Scanner_1__2E_,
  galgas2Scanner_1__2E__3D_,
  galgas2Scanner_1__2E__2E__2E_,
  galgas2Scanner_1__2E__2E__3C_,
  galgas2Scanner_1_type_5F_name,
  galgas2Scanner_1_literal_5F_char,
  galgas2Scanner_1_terminal,
  galgas2Scanner_1__3F__3F_,
  galgas2Scanner_1__3F_,
  galgas2Scanner_1__3F__21_,
  galgas2Scanner_1__21_,
  galgas2Scanner_1__21__3F_,
  galgas2Scanner_1__3C_,
  galgas2Scanner_1__3C__2D__3E_,
  galgas2Scanner_1__3C__3D_,
  galgas2Scanner_1__3C__3C_,
  galgas2Scanner_1_non_5F_terminal_5F_symbol,
  galgas2Scanner_1_literal_5F_string,
  galgas2Scanner_1_comment,
  galgas2Scanner_1_commentMark,
  galgas2Scanner_1_abstract,
  galgas2Scanner_1_after,
  galgas2Scanner_1_array,
  galgas2Scanner_1_before,
  galgas2Scanner_1_between,
  galgas2Scanner_1_block,
  galgas2Scanner_1_case,
  galgas2Scanner_1_cast,
  galgas2Scanner_1_class,
  galgas2Scanner_1_const,
  galgas2Scanner_1_constructor,
  galgas2Scanner_1_default,
  galgas2Scanner_1_do,
  galgas2Scanner_1_drop,
  galgas2Scanner_1_else,
  galgas2Scanner_1_elsif,
  galgas2Scanner_1_end,
  galgas2Scanner_1_enum,
  galgas2Scanner_1_error,
  galgas2Scanner_1_extension,
  galgas2Scanner_1_extends,
  galgas2Scanner_1_extern,
  galgas2Scanner_1_false,
  galgas2Scanner_1_feature,
  galgas2Scanner_1_filewrapper,
  galgas2Scanner_1_for,
  galgas2Scanner_1_foreach,
  galgas2Scanner_1_func,
  galgas2Scanner_1_function,
  galgas2Scanner_1_getter,
  galgas2Scanner_1_grammar,
  galgas2Scanner_1_graph,
  galgas2Scanner_1_gui,
  galgas2Scanner_1_here,
  galgas2Scanner_1_if,
  galgas2Scanner_1_import,
  galgas2Scanner_1_in,
  galgas2Scanner_1_index,
  galgas2Scanner_1_indexing,
  galgas2Scanner_1_insert,
  galgas2Scanner_1_is,
  galgas2Scanner_1_label,
  galgas2Scanner_1_let,
  galgas2Scanner_1_lexique,
  galgas2Scanner_1_list,
  galgas2Scanner_1_listmap,
  galgas2Scanner_1_local,
  galgas2Scanner_1_log,
  galgas2Scanner_1_loop,
  galgas2Scanner_1_map,
  galgas2Scanner_1_match,
  galgas2Scanner_1_message,
  galgas2Scanner_1_method,
  galgas2Scanner_1_mod,
  galgas2Scanner_1_modifier,
  galgas2Scanner_1_nonterminal,
  galgas2Scanner_1_not,
  galgas2Scanner_1_on,
  galgas2Scanner_1_once,
  galgas2Scanner_1_operator,
  galgas2Scanner_1_option,
  galgas2Scanner_1_or,
  galgas2Scanner_1_override,
  galgas2Scanner_1_parse,
  galgas2Scanner_1_private,
  galgas2Scanner_1_proc,
  galgas2Scanner_1_project,
  galgas2Scanner_1_program,
  galgas2Scanner_1_reader,
  galgas2Scanner_1_remove,
  galgas2Scanner_1_replace,
  galgas2Scanner_1_repeat,
  galgas2Scanner_1_rewind,
  galgas2Scanner_1_root,
  galgas2Scanner_1_routine,
  galgas2Scanner_1_rule,
  galgas2Scanner_1_search,
  galgas2Scanner_1_select,
  galgas2Scanner_1_self,
  galgas2Scanner_1_selfcopy,
  galgas2Scanner_1_semantics,
  galgas2Scanner_1_send,
  galgas2Scanner_1_setter,
  galgas2Scanner_1_sortedlist,
  galgas2Scanner_1_state,
  galgas2Scanner_1_struct,
  galgas2Scanner_1_style,
  galgas2Scanner_1_switch,
  galgas2Scanner_1_syntax,
  galgas2Scanner_1_tag,
  galgas2Scanner_1_template,
  galgas2Scanner_1_then,
  galgas2Scanner_1_true,
  galgas2Scanner_1_sharedmap,
  galgas2Scanner_1_unused,
  galgas2Scanner_1_var,
  galgas2Scanner_1_warning,
  galgas2Scanner_1_when,
  galgas2Scanner_1_while,
  galgas2Scanner_1_with,
  galgas2Scanner_1__2A_,
  galgas2Scanner_1__7C_,
  galgas2Scanner_1__2C_,
  galgas2Scanner_1__2B_,
  galgas2Scanner_1__3A__3E_,
  galgas2Scanner_1__3E_,
  galgas2Scanner_1__3B_,
  galgas2Scanner_1__3A_,
  galgas2Scanner_1__3A__3A_,
  galgas2Scanner_1__26__26_,
  galgas2Scanner_1__2D_,
  galgas2Scanner_1__28_,
  galgas2Scanner_1__29_,
  galgas2Scanner_1__2D__3E_,
  galgas2Scanner_1__3D__3D_,
  galgas2Scanner_1__3A__3D_,
  galgas2Scanner_1__7C__7C_,
  galgas2Scanner_1__26__2B_,
  galgas2Scanner_1__26__2D_,
  galgas2Scanner_1__26__2A_,
  galgas2Scanner_1__5B_,
  galgas2Scanner_1__5D_,
  galgas2Scanner_1__2B__3D_,
  galgas2Scanner_1__2F_,
  galgas2Scanner_1__21__3D_,
  galgas2Scanner_1__3E__3D_,
  galgas2Scanner_1__26_,
  galgas2Scanner_1__7B_,
  galgas2Scanner_1__7D_,
  galgas2Scanner_1__60_,
  galgas2Scanner_1__5E_,
  galgas2Scanner_1__3E__3E_,
  galgas2Scanner_1__7E_,
  galgas2Scanner_1__2D__2D_,
  galgas2Scanner_1__2B__2B_,
  galgas2Scanner_1__26__2D__2D_,
  galgas2Scanner_1__26__2B__2B_,
  galgas2Scanner_1__26__2F_
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     S C A N N E R    C L A S S                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@interface OC_Lexique_galgas2Scanner : OC_Lexique {
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

//---------------------------------------------------------------------------------------------------------------------*
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

