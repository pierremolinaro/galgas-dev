//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Lexique.h"

//--------------------------------------------------------------------------------------------------
//
//                    E X T E R N    R O U T I N E S
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                    E X T E R N    F U N C T I O N S
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N
//
//--------------------------------------------------------------------------------------------------

enum {galgasScanner4_1_,
  galgasScanner4_1_identifier,
  galgasScanner4_1_double_2E_xxx,
  galgasScanner4_1_literalInt,
  galgasScanner4_1__2E_,
  galgasScanner4_1__2E__2E__2E_,
  galgasScanner4_1__2E__2E__3C_,
  galgasScanner4_1__40_type,
  galgasScanner4_1__27_char_27_,
  galgasScanner4_1__24_terminal_24_,
  galgasScanner4_1_comment,
  galgasScanner4_1_commentMark,
  galgasScanner4_1__3F_selector_3A_,
  galgasScanner4_1__3F_,
  galgasScanner4_1__3F__21_selector_3A_,
  galgasScanner4_1__3F__21_,
  galgasScanner4_1__21_selector_3A_,
  galgasScanner4_1__21_,
  galgasScanner4_1__21__3F_selector_3A_,
  galgasScanner4_1__21__3F_,
  galgasScanner4_1__3C_,
  galgasScanner4_1__3C__3D_,
  galgasScanner4_1__3C__3C_,
  galgasScanner4_1__3C_non_5F_terminal_3E_,
  galgasScanner4_1__22_string_22_,
  galgasScanner4_1_abstract,
  galgasScanner4_1_after,
  galgasScanner4_1_as,
  galgasScanner4_1_bang,
  galgasScanner4_1_before,
  galgasScanner4_1_between,
  galgasScanner4_1_block,
  galgasScanner4_1_boolset,
  galgasScanner4_1_case,
  galgasScanner4_1_class,
  galgasScanner4_1_default,
  galgasScanner4_1_dict,
  galgasScanner4_1_do,
  galgasScanner4_1_drop,
  galgasScanner4_1_else,
  galgasScanner4_1_elsif,
  galgasScanner4_1_end,
  galgasScanner4_1_enum,
  galgasScanner4_1_error,
  galgasScanner4_1_extension,
  galgasScanner4_1_extern,
  galgasScanner4_1_false,
  galgasScanner4_1_fileprivate,
  galgasScanner4_1_filewrapper,
  galgasScanner4_1_final,
  galgasScanner4_1_for,
  galgasScanner4_1_fixit,
  galgasScanner4_1_func,
  galgasScanner4_1_grammar,
  galgasScanner4_1_graph,
  galgasScanner4_1_gui,
  galgasScanner4_1_if,
  galgasScanner4_1_in,
  galgasScanner4_1_indexing,
  galgasScanner4_1_init,
  galgasScanner4_1_is,
  galgasScanner4_1_label,
  galgasScanner4_1_let,
  galgasScanner4_1_lexique,
  galgasScanner4_1_list,
  galgasScanner4_1_listmap,
  galgasScanner4_1_log,
  galgasScanner4_1_loop,
  galgasScanner4_1_map,
  galgasScanner4_1_mod,
  galgasScanner4_1_mutating,
  galgasScanner4_1_not,
  galgasScanner4_1_on,
  galgasScanner4_1_operator,
  galgasScanner4_1_option,
  galgasScanner4_1_or,
  galgasScanner4_1_override,
  galgasScanner4_1_package,
  galgasScanner4_1_parse,
  galgasScanner4_1_public,
  galgasScanner4_1_protected,
  galgasScanner4_1_private,
  galgasScanner4_1_proc,
  galgasScanner4_1_project,
  galgasScanner4_1_repeat,
  galgasScanner4_1_rewind,
  galgasScanner4_1_rule,
  galgasScanner4_1_select,
  galgasScanner4_1_self,
  galgasScanner4_1_send,
  galgasScanner4_1_sortedlist,
  galgasScanner4_1_spoil,
  galgasScanner4_1_super,
  galgasScanner4_1_struct,
  galgasScanner4_1_style,
  galgasScanner4_1_switch,
  galgasScanner4_1_syntax,
  galgasScanner4_1_tag,
  galgasScanner4_1_template,
  galgasScanner4_1_then,
  galgasScanner4_1_true,
  galgasScanner4_1_typealias,
  galgasScanner4_1_unused,
  galgasScanner4_1_var,
  galgasScanner4_1_warning,
  galgasScanner4_1_while,
  galgasScanner4_1_with,
  galgasScanner4_1__25_app_2D_link,
  galgasScanner4_1__25_app_2D_source,
  galgasScanner4_1__25_applicationBundleBase,
  galgasScanner4_1__25_clonable,
  galgasScanner4_1__25_codeblocks_2D_linux_33__32_,
  galgasScanner4_1__25_codeblocks_2D_linux_36__34_,
  galgasScanner4_1__25_codeblocks_2D_windows,
  galgasScanner4_1__25_comparable,
  galgasScanner4_1__25_equatable,
  galgasScanner4_1__25_errorMessage,
  galgasScanner4_1__25_from,
  galgasScanner4_1__25_generatedInSeparateFile,
  galgasScanner4_1__25_initArgLabel,
  galgasScanner4_1__25_insertAfter,
  galgasScanner4_1__25_insertBefore,
  galgasScanner4_1__25_insertOrReplaceSetter,
  galgasScanner4_1__25_insertSetter,
  galgasScanner4_1__25_libpmAtPath,
  galgasScanner4_1__25_macCodeSign,
  galgasScanner4_1__25_makefile_2D_macosx,
  galgasScanner4_1__25_makefile_2D_unix,
  galgasScanner4_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx,
  galgasScanner4_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx,
  galgasScanner4_1__25_makefile_2D_win_33__32__2D_on_2D_macosx,
  galgasScanner4_1__25_MacOS,
  galgasScanner4_1__25_MacOSDeployment,
  galgasScanner4_1__25_nonAtomicSelection,
  galgasScanner4_1__25_once,
  galgasScanner4_1__25_preserved,
  galgasScanner4_1__25_quietOutputByDefault,
  galgasScanner4_1__25_replaceBy,
  galgasScanner4_1__25_remove,
  galgasScanner4_1__25_removeSetter,
  galgasScanner4_1__25_searchMethod,
  galgasScanner4_1__25_searchString,
  galgasScanner4_1__25_tool_2D_source,
  galgasScanner4_1__25_templateEndMark,
  galgasScanner4_1__25_templateReplacement,
  galgasScanner4_1__25_translate,
  galgasScanner4_1__25_usefull,
  galgasScanner4_1__2A_,
  galgasScanner4_1__2C_,
  galgasScanner4_1__2B_,
  galgasScanner4_1__26__2B_,
  galgasScanner4_1__26__2D_,
  galgasScanner4_1__26__2A_,
  galgasScanner4_1__26__2F_,
  galgasScanner4_1__3E_,
  galgasScanner4_1__3B_,
  galgasScanner4_1__3A_,
  galgasScanner4_1__3A__3E_,
  galgasScanner4_1__2D_,
  galgasScanner4_1__28_,
  galgasScanner4_1__29_,
  galgasScanner4_1__2D__3E_,
  galgasScanner4_1__3D__3D_,
  galgasScanner4_1__3D_,
  galgasScanner4_1__26__26_,
  galgasScanner4_1__5B_,
  galgasScanner4_1__5D_,
  galgasScanner4_1__2B__3D_,
  galgasScanner4_1__2D__3D_,
  galgasScanner4_1__2A__3D_,
  galgasScanner4_1__2F__3D_,
  galgasScanner4_1__2F_,
  galgasScanner4_1__21__3D_,
  galgasScanner4_1__3E__3D_,
  galgasScanner4_1__26_,
  galgasScanner4_1__7B_,
  galgasScanner4_1__7D_,
  galgasScanner4_1__60_,
  galgasScanner4_1__7C__7C_,
  galgasScanner4_1__7C_,
  galgasScanner4_1__5E_,
  galgasScanner4_1__3E__3E_,
  galgasScanner4_1__7E_,
  galgasScanner4_1__2D__2D_,
  galgasScanner4_1__2B__2B_,
  galgasScanner4_1__26__2D__2D_,
  galgasScanner4_1__26__2B__2B_,
  galgasScanner4_1__3D__3D__3D_,
  galgasScanner4_1__21__3D__3D_,
  galgasScanner4_1__3F__5E_,
  galgasScanner4_1__21__5E_
} ;

//--------------------------------------------------------------------------------------------------
//
//                     S C A N N E R    C L A S S
//
//--------------------------------------------------------------------------------------------------

@interface OC_Lexique_galgasScanner4 : OC_Lexique {
//--- Attributes
  @protected NSMutableString * mLexicalAttribute_bigintValue ;
  @protected UInt32 mLexicalAttribute_charValue ;
  @protected double mLexicalAttribute_floatValue ;
  @protected NSMutableString * mLexicalAttribute_identifierString ;
  @protected SInt32 mLexicalAttribute_sint32value ;
  @protected SInt64 mLexicalAttribute_sint64value ;
  @protected NSMutableString * mLexicalAttribute_tokenString ;
  @protected UInt32 mLexicalAttribute_uint32value ;
  @protected UInt64 mLexicalAttribute_uint64value ;

}

- (NSUInteger) terminalVocabularyCount ;

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;

- (BOOL) internalParseLexicalTokenForLexicalColoring ;

- (void) parseLexicalTokenForLexicalColoring ;

- (NSUInteger) styleCount ;

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;

- (NSArray *) indexingTitles ; // Array of NSString

- (BOOL) isTemplateLexique ;

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;

@end

//--------------------------------------------------------------------------------------------------
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

