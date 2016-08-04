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

enum {galgasTemplateScanner_1_,
  galgasTemplateScanner_1_identifier,
  galgasTemplateScanner_1__40_type,
  galgasTemplateScanner_1_literal_5F_double,
  galgasTemplateScanner_1_literal_5F_uint_33__32_,
  galgasTemplateScanner_1_literal_5F_sint_33__32_,
  galgasTemplateScanner_1_literal_5F_uint_36__34_,
  galgasTemplateScanner_1_literal_5F_sint_36__34_,
  galgasTemplateScanner_1_literal_5F_bigint,
  galgasTemplateScanner_1__2E_,
  galgasTemplateScanner_1__2E__3D_,
  galgasTemplateScanner_1__2E__2E__2E_,
  galgasTemplateScanner_1__2E__2E__3C_,
  galgasTemplateScanner_1_literal_5F_char,
  galgasTemplateScanner_1_literal_5F_string,
  galgasTemplateScanner_1__3F_,
  galgasTemplateScanner_1__3F__21_,
  galgasTemplateScanner_1__21_,
  galgasTemplateScanner_1__21__3F_,
  galgasTemplateScanner_1__3C_,
  galgasTemplateScanner_1__3C__3D_,
  galgasTemplateScanner_1__3C__3C_,
  galgasTemplateScanner_1_comment,
  galgasTemplateScanner_1_abstract,
  galgasTemplateScanner_1_after,
  galgasTemplateScanner_1_array,
  galgasTemplateScanner_1_before,
  galgasTemplateScanner_1_between,
  galgasTemplateScanner_1_block,
  galgasTemplateScanner_1_case,
  galgasTemplateScanner_1_cast,
  galgasTemplateScanner_1_class,
  galgasTemplateScanner_1_const,
  galgasTemplateScanner_1_constructor,
  galgasTemplateScanner_1_default,
  galgasTemplateScanner_1_do,
  galgasTemplateScanner_1_drop,
  galgasTemplateScanner_1_else,
  galgasTemplateScanner_1_elsif,
  galgasTemplateScanner_1_end,
  galgasTemplateScanner_1_enum,
  galgasTemplateScanner_1_error,
  galgasTemplateScanner_1_extension,
  galgasTemplateScanner_1_extends,
  galgasTemplateScanner_1_extern,
  galgasTemplateScanner_1_false,
  galgasTemplateScanner_1_feature,
  galgasTemplateScanner_1_filewrapper,
  galgasTemplateScanner_1_for,
  galgasTemplateScanner_1_foreach,
  galgasTemplateScanner_1_func,
  galgasTemplateScanner_1_function,
  galgasTemplateScanner_1_getter,
  galgasTemplateScanner_1_grammar,
  galgasTemplateScanner_1_graph,
  galgasTemplateScanner_1_gui,
  galgasTemplateScanner_1_here,
  galgasTemplateScanner_1_if,
  galgasTemplateScanner_1_import,
  galgasTemplateScanner_1_in,
  galgasTemplateScanner_1_index,
  galgasTemplateScanner_1_indexing,
  galgasTemplateScanner_1_insert,
  galgasTemplateScanner_1_is,
  galgasTemplateScanner_1_label,
  galgasTemplateScanner_1_let,
  galgasTemplateScanner_1_lexique,
  galgasTemplateScanner_1_list,
  galgasTemplateScanner_1_listmap,
  galgasTemplateScanner_1_log,
  galgasTemplateScanner_1_loop,
  galgasTemplateScanner_1_map,
  galgasTemplateScanner_1_match,
  galgasTemplateScanner_1_message,
  galgasTemplateScanner_1_method,
  galgasTemplateScanner_1_mod,
  galgasTemplateScanner_1_not,
  galgasTemplateScanner_1_on,
  galgasTemplateScanner_1_once,
  galgasTemplateScanner_1_operator,
  galgasTemplateScanner_1_option,
  galgasTemplateScanner_1_or,
  galgasTemplateScanner_1_override,
  galgasTemplateScanner_1_parse,
  galgasTemplateScanner_1_private,
  galgasTemplateScanner_1_proc,
  galgasTemplateScanner_1_project,
  galgasTemplateScanner_1_remove,
  galgasTemplateScanner_1_replace,
  galgasTemplateScanner_1_repeat,
  galgasTemplateScanner_1_rewind,
  galgasTemplateScanner_1_root,
  galgasTemplateScanner_1_routine,
  galgasTemplateScanner_1_rule,
  galgasTemplateScanner_1_search,
  galgasTemplateScanner_1_select,
  galgasTemplateScanner_1_self,
  galgasTemplateScanner_1_semantics,
  galgasTemplateScanner_1_send,
  galgasTemplateScanner_1_setter,
  galgasTemplateScanner_1_sortedlist,
  galgasTemplateScanner_1_state,
  galgasTemplateScanner_1_struct,
  galgasTemplateScanner_1_style,
  galgasTemplateScanner_1_switch,
  galgasTemplateScanner_1_syntax,
  galgasTemplateScanner_1_tag,
  galgasTemplateScanner_1_template,
  galgasTemplateScanner_1_then,
  galgasTemplateScanner_1_true,
  galgasTemplateScanner_1_sharedmap,
  galgasTemplateScanner_1_unused,
  galgasTemplateScanner_1_var,
  galgasTemplateScanner_1_warning,
  galgasTemplateScanner_1_when,
  galgasTemplateScanner_1_while,
  galgasTemplateScanner_1_with,
  galgasTemplateScanner_1__2A_,
  galgasTemplateScanner_1__7C_,
  galgasTemplateScanner_1__2C_,
  galgasTemplateScanner_1__2B_,
  galgasTemplateScanner_1__2D__2D_,
  galgasTemplateScanner_1__3A__3E_,
  galgasTemplateScanner_1__3E_,
  galgasTemplateScanner_1__3B_,
  galgasTemplateScanner_1__3A_,
  galgasTemplateScanner_1__3F__5E_,
  galgasTemplateScanner_1__2D_,
  galgasTemplateScanner_1__28_,
  galgasTemplateScanner_1__29_,
  galgasTemplateScanner_1__2D__3E_,
  galgasTemplateScanner_1__3D__3D_,
  galgasTemplateScanner_1__3F__3F_,
  galgasTemplateScanner_1__3A__3D_,
  galgasTemplateScanner_1__2B__2B_,
  galgasTemplateScanner_1__5B_,
  galgasTemplateScanner_1__5D_,
  galgasTemplateScanner_1__2B__3D_,
  galgasTemplateScanner_1__26__2B_,
  galgasTemplateScanner_1__2F_,
  galgasTemplateScanner_1__21__3D_,
  galgasTemplateScanner_1__3E__3D_,
  galgasTemplateScanner_1__26_,
  galgasTemplateScanner_1__21__5E_,
  galgasTemplateScanner_1__7B_,
  galgasTemplateScanner_1__7D_,
  galgasTemplateScanner_1__5E_,
  galgasTemplateScanner_1__3E__3E_,
  galgasTemplateScanner_1__7E_,
  galgasTemplateScanner_1__26__2B__2B_,
  galgasTemplateScanner_1__26__2D__2D_,
  galgasTemplateScanner_1__26__2F_
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     S C A N N E R    C L A S S                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@interface OC_Lexique_galgasTemplateScanner : OC_Lexique {
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

