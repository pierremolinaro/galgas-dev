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

enum {galgasScanner3_1_,
  galgasScanner3_1_identifier,
  galgasScanner3_1_double_2E_xxx,
  galgasScanner3_1_literalInt,
  galgasScanner3_1__27_char_27_,
  galgasScanner3_1__24_terminal_24_,
  galgasScanner3_1_comment,
  galgasScanner3_1_commentMark,
  galgasScanner3_1__40_type,
  galgasScanner3_1__3F_selector_3A_,
  galgasScanner3_1__3F_,
  galgasScanner3_1__3F__21_selector_3A_,
  galgasScanner3_1__3F__21_,
  galgasScanner3_1__21_selector_3A_,
  galgasScanner3_1__21_,
  galgasScanner3_1__21__3F_selector_3A_,
  galgasScanner3_1__21__3F_,
  galgasScanner3_1__3C_,
  galgasScanner3_1__3C__3D_,
  galgasScanner3_1__3C__3C_,
  galgasScanner3_1__3C_non_5F_terminal_3E_,
  galgasScanner3_1__22_string_22_,
  galgasScanner3_1_abstract,
  galgasScanner3_1_after,
  galgasScanner3_1_as,
  galgasScanner3_1_bang,
  galgasScanner3_1_before,
  galgasScanner3_1_between,
  galgasScanner3_1_block,
  galgasScanner3_1_boolset,
  galgasScanner3_1_cast,
  galgasScanner3_1_case,
  galgasScanner3_1_class,
  galgasScanner3_1_default,
  galgasScanner3_1_dict,
  galgasScanner3_1_do,
  galgasScanner3_1_drop,
  galgasScanner3_1_else,
  galgasScanner3_1_elsif,
  galgasScanner3_1_end,
  galgasScanner3_1_enum,
  galgasScanner3_1_error,
  galgasScanner3_1_extension,
  galgasScanner3_1_extern,
  galgasScanner3_1_false,
  galgasScanner3_1_fileprivate,
  galgasScanner3_1_filewrapper,
  galgasScanner3_1_for,
  galgasScanner3_1_final,
  galgasScanner3_1_fixit,
  galgasScanner3_1_func,
  galgasScanner3_1_getter,
  galgasScanner3_1_grammar,
  galgasScanner3_1_graph,
  galgasScanner3_1_guard,
  galgasScanner3_1_gui,
  galgasScanner3_1_if,
  galgasScanner3_1_in,
  galgasScanner3_1_indexing,
  galgasScanner3_1_init,
  galgasScanner3_1_insert,
  galgasScanner3_1_is,
  galgasScanner3_1_label,
  galgasScanner3_1_let,
  galgasScanner3_1_lexique,
  galgasScanner3_1_list,
  galgasScanner3_1_log,
  galgasScanner3_1_loop,
  galgasScanner3_1_map,
  galgasScanner3_1_message,
  galgasScanner3_1_method,
  galgasScanner3_1_mod,
  galgasScanner3_1_mutating,
  galgasScanner3_1_nil,
  galgasScanner3_1_not,
  galgasScanner3_1_on,
  galgasScanner3_1_operator,
  galgasScanner3_1_option,
  galgasScanner3_1_or,
  galgasScanner3_1_override,
  galgasScanner3_1_parse,
  galgasScanner3_1_public,
  galgasScanner3_1_protected,
  galgasScanner3_1_private,
  galgasScanner3_1_proc,
  galgasScanner3_1_project,
  galgasScanner3_1_remove,
  galgasScanner3_1_repeat,
  galgasScanner3_1_replace,
  galgasScanner3_1_rewind,
  galgasScanner3_1_rule,
  galgasScanner3_1_search,
  galgasScanner3_1_select,
  galgasScanner3_1_self,
  galgasScanner3_1_send,
  galgasScanner3_1_setter,
  galgasScanner3_1_sortedlist,
  galgasScanner3_1_spoil,
  galgasScanner3_1_struct,
  galgasScanner3_1_style,
  galgasScanner3_1_super,
  galgasScanner3_1_switch,
  galgasScanner3_1_syntax,
  galgasScanner3_1_tag,
  galgasScanner3_1_template,
  galgasScanner3_1_then,
  galgasScanner3_1_true,
  galgasScanner3_1_typealias,
  galgasScanner3_1_unused,
  galgasScanner3_1_valueclass,
  galgasScanner3_1_var,
  galgasScanner3_1_warning,
  galgasScanner3_1_weak,
  galgasScanner3_1_while,
  galgasScanner3_1_with,
  galgasScanner3_1__25_app_2D_link,
  galgasScanner3_1__25_app_2D_source,
  galgasScanner3_1__25_applicationBundleBase,
  galgasScanner3_1__25_clonable,
  galgasScanner3_1__25_codeblocks_2D_linux_33__32_,
  galgasScanner3_1__25_codeblocks_2D_linux_36__34_,
  galgasScanner3_1__25_codeblocks_2D_windows,
  galgasScanner3_1__25_comparable,
  galgasScanner3_1__25_equatable,
  galgasScanner3_1__25_from,
  galgasScanner3_1__25_generatedInSeparateFile,
  galgasScanner3_1__25_initArgLabel,
  galgasScanner3_1__25_libpmAtPath,
  galgasScanner3_1__25_MacOS,
  galgasScanner3_1__25_MacOSDeployment,
  galgasScanner3_1__25_macCodeSign,
  galgasScanner3_1__25_makefile_2D_macosx,
  galgasScanner3_1__25_makefile_2D_unix,
  galgasScanner3_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx,
  galgasScanner3_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx,
  galgasScanner3_1__25_makefile_2D_win_33__32__2D_on_2D_macosx,
  galgasScanner3_1__25_nonAtomicSelection,
  galgasScanner3_1__25_once,
  galgasScanner3_1__25_preserved,
  galgasScanner3_1__25_quietOutputByDefault,
  galgasScanner3_1__25_templateEndMark,
  galgasScanner3_1__25_tool_2D_source,
  galgasScanner3_1__25_translate,
  galgasScanner3_1__25_usefull,
  galgasScanner3_1__2A_,
  galgasScanner3_1__2C_,
  galgasScanner3_1__2B_,
  galgasScanner3_1__26__2B_,
  galgasScanner3_1__26__2D_,
  galgasScanner3_1__26__2A_,
  galgasScanner3_1__26__2F_,
  galgasScanner3_1__3E_,
  galgasScanner3_1__3B_,
  galgasScanner3_1__3A_,
  galgasScanner3_1__3A__3E_,
  galgasScanner3_1__2D_,
  galgasScanner3_1__28_,
  galgasScanner3_1__29_,
  galgasScanner3_1__2D__3E_,
  galgasScanner3_1__3D__3D_,
  galgasScanner3_1__3D_,
  galgasScanner3_1__26__26_,
  galgasScanner3_1__5B_,
  galgasScanner3_1__5D_,
  galgasScanner3_1__2E_,
  galgasScanner3_1__2E__2E__2E_,
  galgasScanner3_1__2E__2E__3C_,
  galgasScanner3_1__40__7B_,
  galgasScanner3_1__40__28_,
  galgasScanner3_1__2B__3D_,
  galgasScanner3_1__2D__3D_,
  galgasScanner3_1__2A__3D_,
  galgasScanner3_1__2F__3D_,
  galgasScanner3_1__26__3D_,
  galgasScanner3_1__7C__3D_,
  galgasScanner3_1__5E__3D_,
  galgasScanner3_1__2F_,
  galgasScanner3_1__21__3D_,
  galgasScanner3_1__3E__3D_,
  galgasScanner3_1__26_,
  galgasScanner3_1__7B_,
  galgasScanner3_1__7D_,
  galgasScanner3_1__60_,
  galgasScanner3_1__7C__7C_,
  galgasScanner3_1__7C_,
  galgasScanner3_1__5E_,
  galgasScanner3_1__3E__3E_,
  galgasScanner3_1__7E_,
  galgasScanner3_1__2D__2D_,
  galgasScanner3_1__2B__2B_,
  galgasScanner3_1__26__2D__2D_,
  galgasScanner3_1__26__2B__2B_,
  galgasScanner3_1__3D__3D__3D_,
  galgasScanner3_1__21__3D__3D_,
  galgasScanner3_1__3F__5E_,
  galgasScanner3_1__21__5E_,
  galgasScanner3_1__A7__5B_
} ;

//--------------------------------------------------------------------------------------------------
//
//                     S C A N N E R    C L A S S
//
//--------------------------------------------------------------------------------------------------

@interface OC_Lexique_galgasScanner3 : OC_Lexique {
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

