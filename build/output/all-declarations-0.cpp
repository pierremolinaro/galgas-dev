#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-0.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     L E X I Q U E                                                                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"

//---------------------------------------------------------------------------------------------------------------------*

cTokenFor_galgasTemplateScanner::cTokenFor_galgasTemplateScanner (void) :
mLexicalAttribute_bigintValue (),
mLexicalAttribute_charValue (),
mLexicalAttribute_floatValue (),
mLexicalAttribute_identifierString (),
mLexicalAttribute_sint_33__32_value (),
mLexicalAttribute_sint_36__34_value (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value (),
mLexicalAttribute_uint_36__34_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

C_Lexique_galgasTemplateScanner::C_Lexique_galgasTemplateScanner (C_Compiler * inCallerCompiler,
                                                                  const C_String & inDependencyFileExtension,
                                                                  const C_String & inDependencyFilePath,
                                                                  const C_String & inSourceFileName
                                                                  COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inDependencyFileExtension, inDependencyFilePath, inSourceFileName COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//---------------------------------------------------------------------------------------------------------------------*

C_Lexique_galgasTemplateScanner::C_Lexique_galgasTemplateScanner (C_Compiler * inCallerCompiler,
                                                                  const C_String & inSourceString,
                                                                  const C_String & inStringForError
                                                                  COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//---------------------------------------------------------------------------------------------------------------------*
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_galgasTemplateScanner::indexingDirectory (void) const {
  return "" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Lexical error message list                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

static const char * gLexicalMessage_galgasTemplateScanner_ASCIIcodeTooLargeError = "ASCII code > 255" ;

static const char * gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_galgasTemplateScanner_floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_galgasTemplateScanner_incorrectCharConstant = "incorrect literal character" ;

static const char * gLexicalMessage_galgasTemplateScanner_incorrectHTMLescapeSequence = "Invalid HTML sequence, should be '&...;'" ;

static const char * gLexicalMessage_galgasTemplateScanner_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_galgasTemplateScanner_incorrectTypeNameError = "in a type name, a letter should follow the '@' character" ;

static const char * gLexicalMessage_galgasTemplateScanner_internalError = "internal error" ;

static const char * gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition4 = "\\u should be followed by exactly four hexadecimal digits" ;

static const char * gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 = "\\U should be followed by exactly eight hexadecimal digits" ;

static const char * gLexicalMessage_galgasTemplateScanner_obsoleteCharConstruction = "\\x.. is obsolete: now, use \\u.... or \\U........" ;

static const char * gLexicalMessage_galgasTemplateScanner_obsoleteStringConstruction = "\\ followed by digits is obsolete: now, use \\u.... or \\U........" ;

static const char * gLexicalMessage_galgasTemplateScanner_unassignedUnicodeValue = "this value does not correspond to an assigned Unicode point" ;

static const char * gLexicalMessage_galgasTemplateScanner_unknownHTMLescapeSequence = "Invalid &...; HTML sequence" ;

//---------------------------------------------------------------------------------------------------------------------*
//          Syntax error messages, for every terminal symbol                                                           *
//---------------------------------------------------------------------------------------------------------------------*

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_identifier = "an identifier" ;

//--- Syntax error message for terminal '$type_name$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_type_5F_name = "a type name (@...)" ;

//--- Syntax error message for terminal '$literal_double$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_literal_5F_double = "a float number" ;

//--- Syntax error message for terminal '$unsigned_literal_integer$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_unsigned_5F_literal_5F_integer = "a 32-bit unsigned decimal number" ;

//--- Syntax error message for terminal '$signed_literal_integer$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_signed_5F_literal_5F_integer = "a 32-bit signed decimal number" ;

//--- Syntax error message for terminal '$unsigned_literal_integer64$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_unsigned_5F_literal_5F_integer_36__34_ = "a 64-bit unsigned decimal number" ;

//--- Syntax error message for terminal '$signed_literal_integer64$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_signed_5F_literal_5F_integer_36__34_ = "a 64-bit signed decimal number" ;

//--- Syntax error message for terminal '$bigint$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_bigint = "a big integer number" ;

//--- Syntax error message for terminal '$.$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2E_ = "the '.' delimitor" ;

//--- Syntax error message for terminal '$.=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2E__3D_ = "the '.=' delimitor" ;

//--- Syntax error message for terminal '$...$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2E__2E__2E_ = "the '...' delimitor" ;

//--- Syntax error message for terminal '$..<$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2E__2E__3C_ = "the '..<' delimitor" ;

//--- Syntax error message for terminal '$literal_char$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_literal_5F_char = "a character constant" ;

//--- Syntax error message for terminal '$literal_string$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_literal_5F_string = "a character string constant \"...\"" ;

//--- Syntax error message for terminal '$?$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3F_ = "the '\?' or '\?selector:' delimitor" ;

//--- Syntax error message for terminal '$?!$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3F__21_ = "the '\?!' or '\?!selector:' delimitor" ;

//--- Syntax error message for terminal '$!$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__21_ = "the '!' or '!selector:' delimitor" ;

//--- Syntax error message for terminal '$!?$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__21__3F_ = "the '!\?' or '!\?selector:' delimitor" ;

//--- Syntax error message for terminal '$<$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3C_ = "the '<' delimitor" ;

//--- Syntax error message for terminal '$<=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3C__3D_ = "the '<=' delimitor" ;

//--- Syntax error message for terminal '$<<$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3C__3C_ = "the '<<' delimitor" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_comment = "a comment" ;

//--- Syntax error message for terminal '$abstract$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_abstract = "the 'abstract' keyword" ;

//--- Syntax error message for terminal '$after$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_after = "the 'after' keyword" ;

//--- Syntax error message for terminal '$array$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_array = "the 'array' keyword" ;

//--- Syntax error message for terminal '$before$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_before = "the 'before' keyword" ;

//--- Syntax error message for terminal '$between$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_between = "the 'between' keyword" ;

//--- Syntax error message for terminal '$block$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_block = "the 'block' keyword" ;

//--- Syntax error message for terminal '$case$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_case = "the 'case' keyword" ;

//--- Syntax error message for terminal '$cast$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_cast = "the 'cast' keyword" ;

//--- Syntax error message for terminal '$class$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_class = "the 'class' keyword" ;

//--- Syntax error message for terminal '$const$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_const = "the 'const' keyword" ;

//--- Syntax error message for terminal '$constructor$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_constructor = "the 'constructor' keyword" ;

//--- Syntax error message for terminal '$default$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_default = "the 'default' keyword" ;

//--- Syntax error message for terminal '$do$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_do = "the 'do' keyword" ;

//--- Syntax error message for terminal '$drop$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_drop = "the 'drop' keyword" ;

//--- Syntax error message for terminal '$else$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_else = "the 'else' keyword" ;

//--- Syntax error message for terminal '$elsif$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_elsif = "the 'elsif' keyword" ;

//--- Syntax error message for terminal '$end$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_end = "the 'end' keyword" ;

//--- Syntax error message for terminal '$enum$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_enum = "the 'enum' keyword" ;

//--- Syntax error message for terminal '$error$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_error = "the 'error' keyword" ;

//--- Syntax error message for terminal '$extension$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_extension = "the 'extension' keyword" ;

//--- Syntax error message for terminal '$extends$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_extends = "the 'extends' keyword" ;

//--- Syntax error message for terminal '$extern$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_extern = "the 'extern' keyword" ;

//--- Syntax error message for terminal '$false$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_false = "the 'false' keyword" ;

//--- Syntax error message for terminal '$feature$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_feature = "the 'feature' keyword" ;

//--- Syntax error message for terminal '$filewrapper$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_filewrapper = "the 'filewrapper' keyword" ;

//--- Syntax error message for terminal '$for$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_for = "the 'for' keyword" ;

//--- Syntax error message for terminal '$foreach$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_foreach = "the 'foreach' keyword" ;

//--- Syntax error message for terminal '$func$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_func = "the 'func' keyword" ;

//--- Syntax error message for terminal '$function$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_function = "the 'function' keyword" ;

//--- Syntax error message for terminal '$getter$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_getter = "the 'getter' keyword" ;

//--- Syntax error message for terminal '$grammar$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_grammar = "the 'grammar' keyword" ;

//--- Syntax error message for terminal '$graph$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_graph = "the 'graph' keyword" ;

//--- Syntax error message for terminal '$gui$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_gui = "the 'gui' keyword" ;

//--- Syntax error message for terminal '$here$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_here = "the 'here' keyword" ;

//--- Syntax error message for terminal '$if$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_if = "the 'if' keyword" ;

//--- Syntax error message for terminal '$import$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_import = "the 'import' keyword" ;

//--- Syntax error message for terminal '$in$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_in = "the 'in' keyword" ;

//--- Syntax error message for terminal '$index$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_index = "the 'index' keyword" ;

//--- Syntax error message for terminal '$indexing$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_indexing = "the 'indexing' keyword" ;

//--- Syntax error message for terminal '$insert$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_insert = "the 'insert' keyword" ;

//--- Syntax error message for terminal '$is$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_is = "the 'is' keyword" ;

//--- Syntax error message for terminal '$label$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_label = "the 'label' keyword" ;

//--- Syntax error message for terminal '$let$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_let = "the 'let' keyword" ;

//--- Syntax error message for terminal '$lexique$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_lexique = "the 'lexique' keyword" ;

//--- Syntax error message for terminal '$list$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_list = "the 'list' keyword" ;

//--- Syntax error message for terminal '$listmap$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_listmap = "the 'listmap' keyword" ;

//--- Syntax error message for terminal '$local$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_local = "the 'local' keyword" ;

//--- Syntax error message for terminal '$log$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_log = "the 'log' keyword" ;

//--- Syntax error message for terminal '$loop$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_loop = "the 'loop' keyword" ;

//--- Syntax error message for terminal '$map$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_map = "the 'map' keyword" ;

//--- Syntax error message for terminal '$match$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_match = "the 'match' keyword" ;

//--- Syntax error message for terminal '$message$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_message = "the 'message' keyword" ;

//--- Syntax error message for terminal '$method$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_method = "the 'method' keyword" ;

//--- Syntax error message for terminal '$mod$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_mod = "the 'mod' keyword" ;

//--- Syntax error message for terminal '$modifier$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_modifier = "the 'modifier' keyword" ;

//--- Syntax error message for terminal '$nonterminal$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_nonterminal = "the 'nonterminal' keyword" ;

//--- Syntax error message for terminal '$not$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_not = "the 'not' keyword" ;

//--- Syntax error message for terminal '$on$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_on = "the 'on' keyword" ;

//--- Syntax error message for terminal '$once$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_once = "the 'once' keyword" ;

//--- Syntax error message for terminal '$operator$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_operator = "the 'operator' keyword" ;

//--- Syntax error message for terminal '$option$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_option = "the 'option' keyword" ;

//--- Syntax error message for terminal '$or$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_or = "the 'or' keyword" ;

//--- Syntax error message for terminal '$override$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_override = "the 'override' keyword" ;

//--- Syntax error message for terminal '$parse$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_parse = "the 'parse' keyword" ;

//--- Syntax error message for terminal '$private$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_private = "the 'private' keyword" ;

//--- Syntax error message for terminal '$proc$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_proc = "the 'proc' keyword" ;

//--- Syntax error message for terminal '$project$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_project = "the 'project' keyword" ;

//--- Syntax error message for terminal '$remove$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_remove = "the 'remove' keyword" ;

//--- Syntax error message for terminal '$replace$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_replace = "the 'replace' keyword" ;

//--- Syntax error message for terminal '$repeat$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_repeat = "the 'repeat' keyword" ;

//--- Syntax error message for terminal '$rewind$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_rewind = "the 'rewind' keyword" ;

//--- Syntax error message for terminal '$root$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_root = "the 'root' keyword" ;

//--- Syntax error message for terminal '$routine$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_routine = "the 'routine' keyword" ;

//--- Syntax error message for terminal '$rule$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_rule = "the 'rule' keyword" ;

//--- Syntax error message for terminal '$search$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_search = "the 'search' keyword" ;

//--- Syntax error message for terminal '$select$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_select = "the 'select' keyword" ;

//--- Syntax error message for terminal '$self$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_self = "the 'self' keyword" ;

//--- Syntax error message for terminal '$selfcopy$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_selfcopy = "the 'selfcopy' keyword" ;

//--- Syntax error message for terminal '$semantics$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_semantics = "the 'semantics' keyword" ;

//--- Syntax error message for terminal '$send$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_send = "the 'send' keyword" ;

//--- Syntax error message for terminal '$setter$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_setter = "the 'setter' keyword" ;

//--- Syntax error message for terminal '$sortedlist$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_sortedlist = "the 'sortedlist' keyword" ;

//--- Syntax error message for terminal '$state$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_state = "the 'state' keyword" ;

//--- Syntax error message for terminal '$struct$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_struct = "the 'struct' keyword" ;

//--- Syntax error message for terminal '$style$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_style = "the 'style' keyword" ;

//--- Syntax error message for terminal '$switch$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_switch = "the 'switch' keyword" ;

//--- Syntax error message for terminal '$syntax$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_syntax = "the 'syntax' keyword" ;

//--- Syntax error message for terminal '$tag$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_tag = "the 'tag' keyword" ;

//--- Syntax error message for terminal '$template$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_template = "the 'template' keyword" ;

//--- Syntax error message for terminal '$then$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_then = "the 'then' keyword" ;

//--- Syntax error message for terminal '$true$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_true = "the 'true' keyword" ;

//--- Syntax error message for terminal '$sharedmap$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_sharedmap = "the 'sharedmap' keyword" ;

//--- Syntax error message for terminal '$unused$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_unused = "the 'unused' keyword" ;

//--- Syntax error message for terminal '$var$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_var = "the 'var' keyword" ;

//--- Syntax error message for terminal '$warning$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_warning = "the 'warning' keyword" ;

//--- Syntax error message for terminal '$when$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_when = "the 'when' keyword" ;

//--- Syntax error message for terminal '$while$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_while = "the 'while' keyword" ;

//--- Syntax error message for terminal '$with$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_with = "the 'with' keyword" ;

//--- Syntax error message for terminal '$*$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2A_ = "the '*' delimitor" ;

//--- Syntax error message for terminal '$|$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__7C_ = "the '|' delimitor" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2C_ = "the ',' delimitor" ;

//--- Syntax error message for terminal '$+$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2B_ = "the '+' delimitor" ;

//--- Syntax error message for terminal '$--$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2D__2D_ = "the '--' delimitor" ;

//--- Syntax error message for terminal '$:>$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3A__3E_ = "the ':>' delimitor" ;

//--- Syntax error message for terminal '$>$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3E_ = "the '>' delimitor" ;

//--- Syntax error message for terminal '$;$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3B_ = "the ';' delimitor" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3A_ = "the ':' delimitor" ;

//--- Syntax error message for terminal '$?^$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3F__5E_ = "the '\?^' delimitor" ;

//--- Syntax error message for terminal '$-$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2D_ = "the '-' delimitor" ;

//--- Syntax error message for terminal '$($' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__28_ = "the '(' delimitor" ;

//--- Syntax error message for terminal '$)$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__29_ = "the ')' delimitor" ;

//--- Syntax error message for terminal '$->$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2D__3E_ = "the '->' delimitor" ;

//--- Syntax error message for terminal '$==$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3D__3D_ = "the '==' delimitor" ;

//--- Syntax error message for terminal '$??$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3F__3F_ = "the '\?\?' delimitor" ;

//--- Syntax error message for terminal '$:=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3A__3D_ = "the ':=' delimitor" ;

//--- Syntax error message for terminal '$++$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2B__2B_ = "the '++' delimitor" ;

//--- Syntax error message for terminal '$[$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__5B_ = "the '[' delimitor" ;

//--- Syntax error message for terminal '$]$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__5D_ = "the ']' delimitor" ;

//--- Syntax error message for terminal '$+=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2B__3D_ = "the '+=' delimitor" ;

//--- Syntax error message for terminal '$&+$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__26__2B_ = "the '&+' delimitor" ;

//--- Syntax error message for terminal '$/$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2F_ = "the '/' delimitor" ;

//--- Syntax error message for terminal '$!=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__21__3D_ = "the '!=' delimitor" ;

//--- Syntax error message for terminal '$>=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3E__3D_ = "the '>=' delimitor" ;

//--- Syntax error message for terminal '$&$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__26_ = "the '&' delimitor" ;

//--- Syntax error message for terminal '$!^$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__21__5E_ = "the '!^' delimitor" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__7B_ = "the '{' delimitor" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__7D_ = "the '}' delimitor" ;

//--- Syntax error message for terminal '$^$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__5E_ = "the '^' delimitor" ;

//--- Syntax error message for terminal '$>>$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3E__3E_ = "the '>>' delimitor" ;

//--- Syntax error message for terminal '$~$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__7E_ = "the '~' delimitor" ;

//--- Syntax error message for terminal '$&++$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__26__2B__2B_ = "the '&++' delimitor" ;

//--- Syntax error message for terminal '$&--$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__26__2D__2D_ = "the '&--' delimitor" ;

//--- Syntax error message for terminal '$&/$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__26__2F_ = "the '&/' delimitor" ;

//---------------------------------------------------------------------------------------------------------------------*
//                getMessageForTerminal                                                                                *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_galgasTemplateScanner::getMessageForTerminal (const int16_t inTerminalIndex) const {
  static const char * syntaxErrorMessageArray [156] = {kEndOfSourceLexicalErrorMessage,
    gSyntaxErrorMessage_galgasTemplateScanner_identifier,
    gSyntaxErrorMessage_galgasTemplateScanner_type_5F_name,
    gSyntaxErrorMessage_galgasTemplateScanner_literal_5F_double,
    gSyntaxErrorMessage_galgasTemplateScanner_unsigned_5F_literal_5F_integer,
    gSyntaxErrorMessage_galgasTemplateScanner_signed_5F_literal_5F_integer,
    gSyntaxErrorMessage_galgasTemplateScanner_unsigned_5F_literal_5F_integer_36__34_,
    gSyntaxErrorMessage_galgasTemplateScanner_signed_5F_literal_5F_integer_36__34_,
    gSyntaxErrorMessage_galgasTemplateScanner_bigint,
    gSyntaxErrorMessage_galgasTemplateScanner__2E_,
    gSyntaxErrorMessage_galgasTemplateScanner__2E__3D_,
    gSyntaxErrorMessage_galgasTemplateScanner__2E__2E__2E_,
    gSyntaxErrorMessage_galgasTemplateScanner__2E__2E__3C_,
    gSyntaxErrorMessage_galgasTemplateScanner_literal_5F_char,
    gSyntaxErrorMessage_galgasTemplateScanner_literal_5F_string,
    gSyntaxErrorMessage_galgasTemplateScanner__3F_,
    gSyntaxErrorMessage_galgasTemplateScanner__3F__21_,
    gSyntaxErrorMessage_galgasTemplateScanner__21_,
    gSyntaxErrorMessage_galgasTemplateScanner__21__3F_,
    gSyntaxErrorMessage_galgasTemplateScanner__3C_,
    gSyntaxErrorMessage_galgasTemplateScanner__3C__3D_,
    gSyntaxErrorMessage_galgasTemplateScanner__3C__3C_,
    gSyntaxErrorMessage_galgasTemplateScanner_comment,
    gSyntaxErrorMessage_galgasTemplateScanner_abstract,
    gSyntaxErrorMessage_galgasTemplateScanner_after,
    gSyntaxErrorMessage_galgasTemplateScanner_array,
    gSyntaxErrorMessage_galgasTemplateScanner_before,
    gSyntaxErrorMessage_galgasTemplateScanner_between,
    gSyntaxErrorMessage_galgasTemplateScanner_block,
    gSyntaxErrorMessage_galgasTemplateScanner_case,
    gSyntaxErrorMessage_galgasTemplateScanner_cast,
    gSyntaxErrorMessage_galgasTemplateScanner_class,
    gSyntaxErrorMessage_galgasTemplateScanner_const,
    gSyntaxErrorMessage_galgasTemplateScanner_constructor,
    gSyntaxErrorMessage_galgasTemplateScanner_default,
    gSyntaxErrorMessage_galgasTemplateScanner_do,
    gSyntaxErrorMessage_galgasTemplateScanner_drop,
    gSyntaxErrorMessage_galgasTemplateScanner_else,
    gSyntaxErrorMessage_galgasTemplateScanner_elsif,
    gSyntaxErrorMessage_galgasTemplateScanner_end,
    gSyntaxErrorMessage_galgasTemplateScanner_enum,
    gSyntaxErrorMessage_galgasTemplateScanner_error,
    gSyntaxErrorMessage_galgasTemplateScanner_extension,
    gSyntaxErrorMessage_galgasTemplateScanner_extends,
    gSyntaxErrorMessage_galgasTemplateScanner_extern,
    gSyntaxErrorMessage_galgasTemplateScanner_false,
    gSyntaxErrorMessage_galgasTemplateScanner_feature,
    gSyntaxErrorMessage_galgasTemplateScanner_filewrapper,
    gSyntaxErrorMessage_galgasTemplateScanner_for,
    gSyntaxErrorMessage_galgasTemplateScanner_foreach,
    gSyntaxErrorMessage_galgasTemplateScanner_func,
    gSyntaxErrorMessage_galgasTemplateScanner_function,
    gSyntaxErrorMessage_galgasTemplateScanner_getter,
    gSyntaxErrorMessage_galgasTemplateScanner_grammar,
    gSyntaxErrorMessage_galgasTemplateScanner_graph,
    gSyntaxErrorMessage_galgasTemplateScanner_gui,
    gSyntaxErrorMessage_galgasTemplateScanner_here,
    gSyntaxErrorMessage_galgasTemplateScanner_if,
    gSyntaxErrorMessage_galgasTemplateScanner_import,
    gSyntaxErrorMessage_galgasTemplateScanner_in,
    gSyntaxErrorMessage_galgasTemplateScanner_index,
    gSyntaxErrorMessage_galgasTemplateScanner_indexing,
    gSyntaxErrorMessage_galgasTemplateScanner_insert,
    gSyntaxErrorMessage_galgasTemplateScanner_is,
    gSyntaxErrorMessage_galgasTemplateScanner_label,
    gSyntaxErrorMessage_galgasTemplateScanner_let,
    gSyntaxErrorMessage_galgasTemplateScanner_lexique,
    gSyntaxErrorMessage_galgasTemplateScanner_list,
    gSyntaxErrorMessage_galgasTemplateScanner_listmap,
    gSyntaxErrorMessage_galgasTemplateScanner_local,
    gSyntaxErrorMessage_galgasTemplateScanner_log,
    gSyntaxErrorMessage_galgasTemplateScanner_loop,
    gSyntaxErrorMessage_galgasTemplateScanner_map,
    gSyntaxErrorMessage_galgasTemplateScanner_match,
    gSyntaxErrorMessage_galgasTemplateScanner_message,
    gSyntaxErrorMessage_galgasTemplateScanner_method,
    gSyntaxErrorMessage_galgasTemplateScanner_mod,
    gSyntaxErrorMessage_galgasTemplateScanner_modifier,
    gSyntaxErrorMessage_galgasTemplateScanner_nonterminal,
    gSyntaxErrorMessage_galgasTemplateScanner_not,
    gSyntaxErrorMessage_galgasTemplateScanner_on,
    gSyntaxErrorMessage_galgasTemplateScanner_once,
    gSyntaxErrorMessage_galgasTemplateScanner_operator,
    gSyntaxErrorMessage_galgasTemplateScanner_option,
    gSyntaxErrorMessage_galgasTemplateScanner_or,
    gSyntaxErrorMessage_galgasTemplateScanner_override,
    gSyntaxErrorMessage_galgasTemplateScanner_parse,
    gSyntaxErrorMessage_galgasTemplateScanner_private,
    gSyntaxErrorMessage_galgasTemplateScanner_proc,
    gSyntaxErrorMessage_galgasTemplateScanner_project,
    gSyntaxErrorMessage_galgasTemplateScanner_remove,
    gSyntaxErrorMessage_galgasTemplateScanner_replace,
    gSyntaxErrorMessage_galgasTemplateScanner_repeat,
    gSyntaxErrorMessage_galgasTemplateScanner_rewind,
    gSyntaxErrorMessage_galgasTemplateScanner_root,
    gSyntaxErrorMessage_galgasTemplateScanner_routine,
    gSyntaxErrorMessage_galgasTemplateScanner_rule,
    gSyntaxErrorMessage_galgasTemplateScanner_search,
    gSyntaxErrorMessage_galgasTemplateScanner_select,
    gSyntaxErrorMessage_galgasTemplateScanner_self,
    gSyntaxErrorMessage_galgasTemplateScanner_selfcopy,
    gSyntaxErrorMessage_galgasTemplateScanner_semantics,
    gSyntaxErrorMessage_galgasTemplateScanner_send,
    gSyntaxErrorMessage_galgasTemplateScanner_setter,
    gSyntaxErrorMessage_galgasTemplateScanner_sortedlist,
    gSyntaxErrorMessage_galgasTemplateScanner_state,
    gSyntaxErrorMessage_galgasTemplateScanner_struct,
    gSyntaxErrorMessage_galgasTemplateScanner_style,
    gSyntaxErrorMessage_galgasTemplateScanner_switch,
    gSyntaxErrorMessage_galgasTemplateScanner_syntax,
    gSyntaxErrorMessage_galgasTemplateScanner_tag,
    gSyntaxErrorMessage_galgasTemplateScanner_template,
    gSyntaxErrorMessage_galgasTemplateScanner_then,
    gSyntaxErrorMessage_galgasTemplateScanner_true,
    gSyntaxErrorMessage_galgasTemplateScanner_sharedmap,
    gSyntaxErrorMessage_galgasTemplateScanner_unused,
    gSyntaxErrorMessage_galgasTemplateScanner_var,
    gSyntaxErrorMessage_galgasTemplateScanner_warning,
    gSyntaxErrorMessage_galgasTemplateScanner_when,
    gSyntaxErrorMessage_galgasTemplateScanner_while,
    gSyntaxErrorMessage_galgasTemplateScanner_with,
    gSyntaxErrorMessage_galgasTemplateScanner__2A_,
    gSyntaxErrorMessage_galgasTemplateScanner__7C_,
    gSyntaxErrorMessage_galgasTemplateScanner__2C_,
    gSyntaxErrorMessage_galgasTemplateScanner__2B_,
    gSyntaxErrorMessage_galgasTemplateScanner__2D__2D_,
    gSyntaxErrorMessage_galgasTemplateScanner__3A__3E_,
    gSyntaxErrorMessage_galgasTemplateScanner__3E_,
    gSyntaxErrorMessage_galgasTemplateScanner__3B_,
    gSyntaxErrorMessage_galgasTemplateScanner__3A_,
    gSyntaxErrorMessage_galgasTemplateScanner__3F__5E_,
    gSyntaxErrorMessage_galgasTemplateScanner__2D_,
    gSyntaxErrorMessage_galgasTemplateScanner__28_,
    gSyntaxErrorMessage_galgasTemplateScanner__29_,
    gSyntaxErrorMessage_galgasTemplateScanner__2D__3E_,
    gSyntaxErrorMessage_galgasTemplateScanner__3D__3D_,
    gSyntaxErrorMessage_galgasTemplateScanner__3F__3F_,
    gSyntaxErrorMessage_galgasTemplateScanner__3A__3D_,
    gSyntaxErrorMessage_galgasTemplateScanner__2B__2B_,
    gSyntaxErrorMessage_galgasTemplateScanner__5B_,
    gSyntaxErrorMessage_galgasTemplateScanner__5D_,
    gSyntaxErrorMessage_galgasTemplateScanner__2B__3D_,
    gSyntaxErrorMessage_galgasTemplateScanner__26__2B_,
    gSyntaxErrorMessage_galgasTemplateScanner__2F_,
    gSyntaxErrorMessage_galgasTemplateScanner__21__3D_,
    gSyntaxErrorMessage_galgasTemplateScanner__3E__3D_,
    gSyntaxErrorMessage_galgasTemplateScanner__26_,
    gSyntaxErrorMessage_galgasTemplateScanner__21__5E_,
    gSyntaxErrorMessage_galgasTemplateScanner__7B_,
    gSyntaxErrorMessage_galgasTemplateScanner__7D_,
    gSyntaxErrorMessage_galgasTemplateScanner__5E_,
    gSyntaxErrorMessage_galgasTemplateScanner__3E__3E_,
    gSyntaxErrorMessage_galgasTemplateScanner__7E_,
    gSyntaxErrorMessage_galgasTemplateScanner__26__2B__2B_,
    gSyntaxErrorMessage_galgasTemplateScanner__26__2D__2D_,
    gSyntaxErrorMessage_galgasTemplateScanner__26__2F_} ;
  return syntaxErrorMessageArray [inTerminalIndex] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                      U N I C O D E    S T R I N G S                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

//--- Unicode string for '$_A_$'
static const utf32 kUnicodeString_galgasTemplateScanner__A_ [] = {
  TO_UNICODE (10),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__3D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__21__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__5E_$'
static const utf32 kUnicodeString_galgasTemplateScanner__21__5E_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_25_$'
static const utf32 kUnicodeString_galgasTemplateScanner__25_ [] = {
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26_$'
static const utf32 kUnicodeString_galgasTemplateScanner__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2B_$'
static const utf32 kUnicodeString_galgasTemplateScanner__26__2B_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2B__2B_$'
static const utf32 kUnicodeString_galgasTemplateScanner__26__2B__2B_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('+'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2D__2D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__26__2D__2D_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('-'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2F_$'
static const utf32 kUnicodeString_galgasTemplateScanner__26__2F_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_28_$'
static const utf32 kUnicodeString_galgasTemplateScanner__28_ [] = {
  TO_UNICODE ('('),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_29_$'
static const utf32 kUnicodeString_galgasTemplateScanner__29_ [] = {
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A_$'
static const utf32 kUnicodeString_galgasTemplateScanner__2A_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B_$'
static const utf32 kUnicodeString_galgasTemplateScanner__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__2B_$'
static const utf32 kUnicodeString_galgasTemplateScanner__2B__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__3D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__2B__3D_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_galgasTemplateScanner__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__2D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__2D__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3E_$'
static const utf32 kUnicodeString_galgasTemplateScanner__2D__3E_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__2E_$'
static const utf32 kUnicodeString_galgasTemplateScanner__2E__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__3C_$'
static const utf32 kUnicodeString_galgasTemplateScanner__2E__3C_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F_$'
static const utf32 kUnicodeString_galgasTemplateScanner__2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_30_x$'
static const utf32 kUnicodeString_galgasTemplateScanner__30_x [] = {
  TO_UNICODE ('0'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_galgasTemplateScanner__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A__3D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__3A__3D_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A__3E_$'
static const utf32 kUnicodeString_galgasTemplateScanner__3A__3E_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_galgasTemplateScanner__3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D__3D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__3D__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E_$'
static const utf32 kUnicodeString_galgasTemplateScanner__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__3E__3D_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3E_$'
static const utf32 kUnicodeString_galgasTemplateScanner__3E__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3F__3F_$'
static const utf32 kUnicodeString_galgasTemplateScanner__3F__3F_ [] = {
  TO_UNICODE ('\?'),
  TO_UNICODE ('\?'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3F__5E_$'
static const utf32 kUnicodeString_galgasTemplateScanner__3F__5E_ [] = {
  TO_UNICODE ('\?'),
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$LS$'
static const utf32 kUnicodeString_galgasTemplateScanner_LS [] = {
  TO_UNICODE ('L'),
  TO_UNICODE ('S'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_galgasTemplateScanner__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C_$'
static const utf32 kUnicodeString_galgasTemplateScanner__5C_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__25_$'
static const utf32 kUnicodeString_galgasTemplateScanner__5C__25_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__5C_$'
static const utf32 kUnicodeString_galgasTemplateScanner__5C__5C_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('\\'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C_n$'
static const utf32 kUnicodeString_galgasTemplateScanner__5C_n [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E_$'
static const utf32 kUnicodeString_galgasTemplateScanner__5E_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$abstract$'
static const utf32 kUnicodeString_galgasTemplateScanner_abstract [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$after$'
static const utf32 kUnicodeString_galgasTemplateScanner_after [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('f'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$array$'
static const utf32 kUnicodeString_galgasTemplateScanner_array [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$before$'
static const utf32 kUnicodeString_galgasTemplateScanner_before [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$between$'
static const utf32 kUnicodeString_galgasTemplateScanner_between [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('w'),
  TO_UNICODE ('e'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$block$'
static const utf32 kUnicodeString_galgasTemplateScanner_block [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$case$'
static const utf32 kUnicodeString_galgasTemplateScanner_case [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$cast$'
static const utf32 kUnicodeString_galgasTemplateScanner_cast [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$class$'
static const utf32 kUnicodeString_galgasTemplateScanner_class [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$const$'
static const utf32 kUnicodeString_galgasTemplateScanner_const [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$constructor$'
static const utf32 kUnicodeString_galgasTemplateScanner_constructor [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$default$'
static const utf32 kUnicodeString_galgasTemplateScanner_default [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$do$'
static const utf32 kUnicodeString_galgasTemplateScanner_do [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$drop$'
static const utf32 kUnicodeString_galgasTemplateScanner_drop [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$else$'
static const utf32 kUnicodeString_galgasTemplateScanner_else [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$elsif$'
static const utf32 kUnicodeString_galgasTemplateScanner_elsif [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$end$'
static const utf32 kUnicodeString_galgasTemplateScanner_end [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$enum$'
static const utf32 kUnicodeString_galgasTemplateScanner_enum [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$error$'
static const utf32 kUnicodeString_galgasTemplateScanner_error [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extends$'
static const utf32 kUnicodeString_galgasTemplateScanner_extends [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extension$'
static const utf32 kUnicodeString_galgasTemplateScanner_extension [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extern$'
static const utf32 kUnicodeString_galgasTemplateScanner_extern [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$false$'
static const utf32 kUnicodeString_galgasTemplateScanner_false [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$feature$'
static const utf32 kUnicodeString_galgasTemplateScanner_feature [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$filewrapper$'
static const utf32 kUnicodeString_galgasTemplateScanner_filewrapper [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$for$'
static const utf32 kUnicodeString_galgasTemplateScanner_for [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$foreach$'
static const utf32 kUnicodeString_galgasTemplateScanner_foreach [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$func$'
static const utf32 kUnicodeString_galgasTemplateScanner_func [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$function$'
static const utf32 kUnicodeString_galgasTemplateScanner_function [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$getter$'
static const utf32 kUnicodeString_galgasTemplateScanner_getter [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$grammar$'
static const utf32 kUnicodeString_galgasTemplateScanner_grammar [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('m'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$graph$'
static const utf32 kUnicodeString_galgasTemplateScanner_graph [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$gui$'
static const utf32 kUnicodeString_galgasTemplateScanner_gui [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('u'),
  TO_UNICODE ('i'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$here$'
static const utf32 kUnicodeString_galgasTemplateScanner_here [] = {
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$if$'
static const utf32 kUnicodeString_galgasTemplateScanner_if [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$import$'
static const utf32 kUnicodeString_galgasTemplateScanner_import [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$in$'
static const utf32 kUnicodeString_galgasTemplateScanner_in [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$index$'
static const utf32 kUnicodeString_galgasTemplateScanner_index [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$indexing$'
static const utf32 kUnicodeString_galgasTemplateScanner_indexing [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$insert$'
static const utf32 kUnicodeString_galgasTemplateScanner_insert [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$is$'
static const utf32 kUnicodeString_galgasTemplateScanner_is [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$label$'
static const utf32 kUnicodeString_galgasTemplateScanner_label [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$let$'
static const utf32 kUnicodeString_galgasTemplateScanner_let [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$lexique$'
static const utf32 kUnicodeString_galgasTemplateScanner_lexique [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('q'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$list$'
static const utf32 kUnicodeString_galgasTemplateScanner_list [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$listmap$'
static const utf32 kUnicodeString_galgasTemplateScanner_listmap [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$local$'
static const utf32 kUnicodeString_galgasTemplateScanner_local [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$log$'
static const utf32 kUnicodeString_galgasTemplateScanner_log [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$loop$'
static const utf32 kUnicodeString_galgasTemplateScanner_loop [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$map$'
static const utf32 kUnicodeString_galgasTemplateScanner_map [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$match$'
static const utf32 kUnicodeString_galgasTemplateScanner_match [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$message$'
static const utf32 kUnicodeString_galgasTemplateScanner_message [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$method$'
static const utf32 kUnicodeString_galgasTemplateScanner_method [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mod$'
static const utf32 kUnicodeString_galgasTemplateScanner_mod [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$modifier$'
static const utf32 kUnicodeString_galgasTemplateScanner_modifier [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$nonterminal$'
static const utf32 kUnicodeString_galgasTemplateScanner_nonterminal [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$not$'
static const utf32 kUnicodeString_galgasTemplateScanner_not [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$on$'
static const utf32 kUnicodeString_galgasTemplateScanner_on [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$once$'
static const utf32 kUnicodeString_galgasTemplateScanner_once [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$operator$'
static const utf32 kUnicodeString_galgasTemplateScanner_operator [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$option$'
static const utf32 kUnicodeString_galgasTemplateScanner_option [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$or$'
static const utf32 kUnicodeString_galgasTemplateScanner_or [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$override$'
static const utf32 kUnicodeString_galgasTemplateScanner_override [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$parse$'
static const utf32 kUnicodeString_galgasTemplateScanner_parse [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$private$'
static const utf32 kUnicodeString_galgasTemplateScanner_private [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$proc$'
static const utf32 kUnicodeString_galgasTemplateScanner_proc [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$project$'
static const utf32 kUnicodeString_galgasTemplateScanner_project [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('j'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$remove$'
static const utf32 kUnicodeString_galgasTemplateScanner_remove [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$repeat$'
static const utf32 kUnicodeString_galgasTemplateScanner_repeat [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$replace$'
static const utf32 kUnicodeString_galgasTemplateScanner_replace [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rewind$'
static const utf32 kUnicodeString_galgasTemplateScanner_rewind [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$root$'
static const utf32 kUnicodeString_galgasTemplateScanner_root [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$routine$'
static const utf32 kUnicodeString_galgasTemplateScanner_routine [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rule$'
static const utf32 kUnicodeString_galgasTemplateScanner_rule [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$search$'
static const utf32 kUnicodeString_galgasTemplateScanner_search [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$select$'
static const utf32 kUnicodeString_galgasTemplateScanner_select [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$self$'
static const utf32 kUnicodeString_galgasTemplateScanner_self [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$selfcopy$'
static const utf32 kUnicodeString_galgasTemplateScanner_selfcopy [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$semantics$'
static const utf32 kUnicodeString_galgasTemplateScanner_semantics [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$send$'
static const utf32 kUnicodeString_galgasTemplateScanner_send [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$setter$'
static const utf32 kUnicodeString_galgasTemplateScanner_setter [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$sharedmap$'
static const utf32 kUnicodeString_galgasTemplateScanner_sharedmap [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('h'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$sortedlist$'
static const utf32 kUnicodeString_galgasTemplateScanner_sortedlist [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$state$'
static const utf32 kUnicodeString_galgasTemplateScanner_state [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$struct$'
static const utf32 kUnicodeString_galgasTemplateScanner_struct [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$style$'
static const utf32 kUnicodeString_galgasTemplateScanner_style [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$switch$'
static const utf32 kUnicodeString_galgasTemplateScanner_switch [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$syntax$'
static const utf32 kUnicodeString_galgasTemplateScanner_syntax [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('y'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$tag$'
static const utf32 kUnicodeString_galgasTemplateScanner_tag [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$template$'
static const utf32 kUnicodeString_galgasTemplateScanner_template [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$then$'
static const utf32 kUnicodeString_galgasTemplateScanner_then [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$true$'
static const utf32 kUnicodeString_galgasTemplateScanner_true [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$unused$'
static const utf32 kUnicodeString_galgasTemplateScanner_unused [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$var$'
static const utf32 kUnicodeString_galgasTemplateScanner_var [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$warning$'
static const utf32 kUnicodeString_galgasTemplateScanner_warning [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$when$'
static const utf32 kUnicodeString_galgasTemplateScanner_when [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$while$'
static const utf32 kUnicodeString_galgasTemplateScanner_while [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$with$'
static const utf32 kUnicodeString_galgasTemplateScanner_with [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_galgasTemplateScanner__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C_$'
static const utf32 kUnicodeString_galgasTemplateScanner__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7E_$'
static const utf32 kUnicodeString_galgasTemplateScanner__7E_ [] = {
  TO_UNICODE ('~'),
  TO_UNICODE (0)
} ;

//---------------------------------------------------------------------------------------------------------------------*
//             Key words table 'galgasDelimitorsList'                            *
//---------------------------------------------------------------------------------------------------------------------*

static const int32_t ktable_size_galgasTemplateScanner_galgasDelimitorsList = 35 ;

static const C_unicode_lexique_table_entry ktable_for_galgasTemplateScanner_galgasDelimitorsList [ktable_size_galgasTemplateScanner_galgasDelimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__26_, 1, C_Lexique_galgasTemplateScanner::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__28_, 1, C_Lexique_galgasTemplateScanner::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__29_, 1, C_Lexique_galgasTemplateScanner::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2A_, 1, C_Lexique_galgasTemplateScanner::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2B_, 1, C_Lexique_galgasTemplateScanner::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2C_, 1, C_Lexique_galgasTemplateScanner::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2D_, 1, C_Lexique_galgasTemplateScanner::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2F_, 1, C_Lexique_galgasTemplateScanner::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3A_, 1, C_Lexique_galgasTemplateScanner::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3B_, 1, C_Lexique_galgasTemplateScanner::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3E_, 1, C_Lexique_galgasTemplateScanner::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__5B_, 1, C_Lexique_galgasTemplateScanner::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__5D_, 1, C_Lexique_galgasTemplateScanner::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__5E_, 1, C_Lexique_galgasTemplateScanner::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__7B_, 1, C_Lexique_galgasTemplateScanner::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__7C_, 1, C_Lexique_galgasTemplateScanner::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__7D_, 1, C_Lexique_galgasTemplateScanner::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__7E_, 1, C_Lexique_galgasTemplateScanner::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__21__3D_, 2, C_Lexique_galgasTemplateScanner::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__21__5E_, 2, C_Lexique_galgasTemplateScanner::kToken__21__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__26__2B_, 2, C_Lexique_galgasTemplateScanner::kToken__26__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__26__2F_, 2, C_Lexique_galgasTemplateScanner::kToken__26__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2B__2B_, 2, C_Lexique_galgasTemplateScanner::kToken__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2B__3D_, 2, C_Lexique_galgasTemplateScanner::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2D__2D_, 2, C_Lexique_galgasTemplateScanner::kToken__2D__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2D__3E_, 2, C_Lexique_galgasTemplateScanner::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3A__3D_, 2, C_Lexique_galgasTemplateScanner::kToken__3A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3A__3E_, 2, C_Lexique_galgasTemplateScanner::kToken__3A__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3D__3D_, 2, C_Lexique_galgasTemplateScanner::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3E__3D_, 2, C_Lexique_galgasTemplateScanner::kToken__3E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3E__3E_, 2, C_Lexique_galgasTemplateScanner::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3F__3F_, 2, C_Lexique_galgasTemplateScanner::kToken__3F__3F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3F__5E_, 2, C_Lexique_galgasTemplateScanner::kToken__3F__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__26__2B__2B_, 3, C_Lexique_galgasTemplateScanner::kToken__26__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__26__2D__2D_, 3, C_Lexique_galgasTemplateScanner::kToken__26__2D__2D_)
} ;

int16_t C_Lexique_galgasTemplateScanner::search_into_galgasDelimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasTemplateScanner_galgasDelimitorsList, ktable_size_galgasTemplateScanner_galgasDelimitorsList) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//             Key words table 'galgasKeyWordList'                            *
//---------------------------------------------------------------------------------------------------------------------*

static const int32_t ktable_size_galgasTemplateScanner_galgasKeyWordList = 98 ;

static const C_unicode_lexique_table_entry ktable_for_galgasTemplateScanner_galgasKeyWordList [ktable_size_galgasTemplateScanner_galgasKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_do, 2, C_Lexique_galgasTemplateScanner::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_if, 2, C_Lexique_galgasTemplateScanner::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_in, 2, C_Lexique_galgasTemplateScanner::kToken_in),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_is, 2, C_Lexique_galgasTemplateScanner::kToken_is),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_on, 2, C_Lexique_galgasTemplateScanner::kToken_on),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_or, 2, C_Lexique_galgasTemplateScanner::kToken_or),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_end, 3, C_Lexique_galgasTemplateScanner::kToken_end),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_for, 3, C_Lexique_galgasTemplateScanner::kToken_for),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_gui, 3, C_Lexique_galgasTemplateScanner::kToken_gui),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_let, 3, C_Lexique_galgasTemplateScanner::kToken_let),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_log, 3, C_Lexique_galgasTemplateScanner::kToken_log),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_map, 3, C_Lexique_galgasTemplateScanner::kToken_map),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_mod, 3, C_Lexique_galgasTemplateScanner::kToken_mod),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_not, 3, C_Lexique_galgasTemplateScanner::kToken_not),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_tag, 3, C_Lexique_galgasTemplateScanner::kToken_tag),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_var, 3, C_Lexique_galgasTemplateScanner::kToken_var),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_case, 4, C_Lexique_galgasTemplateScanner::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_cast, 4, C_Lexique_galgasTemplateScanner::kToken_cast),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_drop, 4, C_Lexique_galgasTemplateScanner::kToken_drop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_else, 4, C_Lexique_galgasTemplateScanner::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_enum, 4, C_Lexique_galgasTemplateScanner::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_func, 4, C_Lexique_galgasTemplateScanner::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_here, 4, C_Lexique_galgasTemplateScanner::kToken_here),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_list, 4, C_Lexique_galgasTemplateScanner::kToken_list),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_loop, 4, C_Lexique_galgasTemplateScanner::kToken_loop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_once, 4, C_Lexique_galgasTemplateScanner::kToken_once),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_proc, 4, C_Lexique_galgasTemplateScanner::kToken_proc),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_root, 4, C_Lexique_galgasTemplateScanner::kToken_root),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_rule, 4, C_Lexique_galgasTemplateScanner::kToken_rule),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_self, 4, C_Lexique_galgasTemplateScanner::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_send, 4, C_Lexique_galgasTemplateScanner::kToken_send),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_then, 4, C_Lexique_galgasTemplateScanner::kToken_then),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_true, 4, C_Lexique_galgasTemplateScanner::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_when, 4, C_Lexique_galgasTemplateScanner::kToken_when),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_with, 4, C_Lexique_galgasTemplateScanner::kToken_with),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_after, 5, C_Lexique_galgasTemplateScanner::kToken_after),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_array, 5, C_Lexique_galgasTemplateScanner::kToken_array),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_block, 5, C_Lexique_galgasTemplateScanner::kToken_block),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_class, 5, C_Lexique_galgasTemplateScanner::kToken_class),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_const, 5, C_Lexique_galgasTemplateScanner::kToken_const),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_elsif, 5, C_Lexique_galgasTemplateScanner::kToken_elsif),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_error, 5, C_Lexique_galgasTemplateScanner::kToken_error),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_false, 5, C_Lexique_galgasTemplateScanner::kToken_false),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_graph, 5, C_Lexique_galgasTemplateScanner::kToken_graph),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_index, 5, C_Lexique_galgasTemplateScanner::kToken_index),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_label, 5, C_Lexique_galgasTemplateScanner::kToken_label),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_local, 5, C_Lexique_galgasTemplateScanner::kToken_local),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_match, 5, C_Lexique_galgasTemplateScanner::kToken_match),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_parse, 5, C_Lexique_galgasTemplateScanner::kToken_parse),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_state, 5, C_Lexique_galgasTemplateScanner::kToken_state),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_style, 5, C_Lexique_galgasTemplateScanner::kToken_style),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_while, 5, C_Lexique_galgasTemplateScanner::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_before, 6, C_Lexique_galgasTemplateScanner::kToken_before),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_extern, 6, C_Lexique_galgasTemplateScanner::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_getter, 6, C_Lexique_galgasTemplateScanner::kToken_getter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_import, 6, C_Lexique_galgasTemplateScanner::kToken_import),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_insert, 6, C_Lexique_galgasTemplateScanner::kToken_insert),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_method, 6, C_Lexique_galgasTemplateScanner::kToken_method),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_option, 6, C_Lexique_galgasTemplateScanner::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_remove, 6, C_Lexique_galgasTemplateScanner::kToken_remove),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_repeat, 6, C_Lexique_galgasTemplateScanner::kToken_repeat),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_rewind, 6, C_Lexique_galgasTemplateScanner::kToken_rewind),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_search, 6, C_Lexique_galgasTemplateScanner::kToken_search),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_select, 6, C_Lexique_galgasTemplateScanner::kToken_select),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_setter, 6, C_Lexique_galgasTemplateScanner::kToken_setter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_struct, 6, C_Lexique_galgasTemplateScanner::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_switch, 6, C_Lexique_galgasTemplateScanner::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_syntax, 6, C_Lexique_galgasTemplateScanner::kToken_syntax),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_unused, 6, C_Lexique_galgasTemplateScanner::kToken_unused),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_between, 7, C_Lexique_galgasTemplateScanner::kToken_between),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_default, 7, C_Lexique_galgasTemplateScanner::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_extends, 7, C_Lexique_galgasTemplateScanner::kToken_extends),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_feature, 7, C_Lexique_galgasTemplateScanner::kToken_feature),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_foreach, 7, C_Lexique_galgasTemplateScanner::kToken_foreach),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_grammar, 7, C_Lexique_galgasTemplateScanner::kToken_grammar),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_lexique, 7, C_Lexique_galgasTemplateScanner::kToken_lexique),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_listmap, 7, C_Lexique_galgasTemplateScanner::kToken_listmap),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_message, 7, C_Lexique_galgasTemplateScanner::kToken_message),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_private, 7, C_Lexique_galgasTemplateScanner::kToken_private),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_project, 7, C_Lexique_galgasTemplateScanner::kToken_project),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_replace, 7, C_Lexique_galgasTemplateScanner::kToken_replace),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_routine, 7, C_Lexique_galgasTemplateScanner::kToken_routine),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_warning, 7, C_Lexique_galgasTemplateScanner::kToken_warning),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_abstract, 8, C_Lexique_galgasTemplateScanner::kToken_abstract),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_function, 8, C_Lexique_galgasTemplateScanner::kToken_function),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_indexing, 8, C_Lexique_galgasTemplateScanner::kToken_indexing),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_modifier, 8, C_Lexique_galgasTemplateScanner::kToken_modifier),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_operator, 8, C_Lexique_galgasTemplateScanner::kToken_operator),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_override, 8, C_Lexique_galgasTemplateScanner::kToken_override),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_selfcopy, 8, C_Lexique_galgasTemplateScanner::kToken_selfcopy),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_template, 8, C_Lexique_galgasTemplateScanner::kToken_template),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_extension, 9, C_Lexique_galgasTemplateScanner::kToken_extension),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_semantics, 9, C_Lexique_galgasTemplateScanner::kToken_semantics),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_sharedmap, 9, C_Lexique_galgasTemplateScanner::kToken_sharedmap),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_sortedlist, 10, C_Lexique_galgasTemplateScanner::kToken_sortedlist),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_constructor, 11, C_Lexique_galgasTemplateScanner::kToken_constructor),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_filewrapper, 11, C_Lexique_galgasTemplateScanner::kToken_filewrapper),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_nonterminal, 11, C_Lexique_galgasTemplateScanner::kToken_nonterminal)
} ;

int16_t C_Lexique_galgasTemplateScanner::search_into_galgasKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasTemplateScanner_galgasKeyWordList, ktable_size_galgasTemplateScanner_galgasKeyWordList) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                          getCurrentTokenString                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_galgasTemplateScanner::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_galgasTemplateScanner * ptr = (const cTokenFor_galgasTemplateScanner *) inTokenPtr ;
  C_String s ;
  if (ptr == NULL) {
    s.appendCString("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString("$$") ;
      break ;
    case kToken_identifier:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("identifier") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_type_5F_name:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("type_name") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literal_5F_double:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_double") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendDouble (ptr->mLexicalAttribute_floatValue) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_unsigned_5F_literal_5F_integer:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("unsigned_literal_integer") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_signed_5F_literal_5F_integer:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("signed_literal_integer") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendSigned (ptr->mLexicalAttribute_sint_33__32_value) ;
      break ;
    case kToken_unsigned_5F_literal_5F_integer_36__34_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("unsigned_literal_integer64") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_36__34_value) ;
      break ;
    case kToken_signed_5F_literal_5F_integer_36__34_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("signed_literal_integer64") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendSigned (ptr->mLexicalAttribute_sint_36__34_value) ;
      break ;
    case kToken_bigint:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bigint") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_bigintValue.decimalString ()) ;
      break ;
    case kToken__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (".") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (".=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E__2E__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("...") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E__2E__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("..<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_literal_5F_char:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_char") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnicodeCharacter (ptr->mLexicalAttribute_charValue COMMA_HERE) ;
      break ;
    case kToken_literal_5F_string:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_string") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F__21_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?!") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21__3F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!\?") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_comment:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("comment") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_abstract:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("abstract") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_after:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("after") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_array:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("array") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_before:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("before") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_between:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("between") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_block:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("block") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_case:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("case") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_cast:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("cast") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_class:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("class") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_const:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("const") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_constructor:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("constructor") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_default:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("default") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_do:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("do") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_drop:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("drop") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_else:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("else") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_elsif:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("elsif") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_end:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("end") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_enum:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("enum") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_error:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("error") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_extension:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("extension") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_extends:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("extends") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_extern:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("extern") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_false:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("false") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_feature:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("feature") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_filewrapper:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("filewrapper") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_for:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("for") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_foreach:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("foreach") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_func:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("func") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_function:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("function") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_getter:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("getter") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_grammar:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("grammar") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_graph:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("graph") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_gui:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("gui") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_here:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("here") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_if:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("if") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_import:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("import") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_in:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("in") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_index:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("index") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_indexing:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("indexing") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_insert:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("insert") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_is:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("is") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_label:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("label") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_let:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("let") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_lexique:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("lexique") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_list:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("list") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_listmap:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("listmap") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_local:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("local") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_log:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("log") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_loop:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("loop") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_map:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("map") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_match:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("match") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_message:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("message") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_method:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("method") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mod:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("mod") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_modifier:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("modifier") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_nonterminal:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("nonterminal") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_not:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("not") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_on:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("on") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_once:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("once") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_operator:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("operator") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_option:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("option") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_or:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("or") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_override:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("override") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_parse:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("parse") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_private:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("private") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_proc:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("proc") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_project:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("project") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_remove:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("remove") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_replace:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("replace") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_repeat:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("repeat") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rewind:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("rewind") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_root:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("root") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_routine:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("routine") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rule:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("rule") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_search:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("search") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_select:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("select") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_self:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("self") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_selfcopy:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("selfcopy") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_semantics:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("semantics") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_send:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("send") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_setter:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("setter") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_sortedlist:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sortedlist") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_state:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("state") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_struct:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("struct") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_style:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("style") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_switch:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("switch") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_syntax:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("syntax") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_tag:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("tag") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_template:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("template") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_then:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("then") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_true:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("true") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_sharedmap:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sharedmap") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_unused:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("unused") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_var:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("var") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_warning:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("warning") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_when:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("when") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_while:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("while") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_with:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("with") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("*") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("|") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (",") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("--") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":>") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (";") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F__5E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?^") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__28_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("(") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__29_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (")") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("->") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("==") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F__3F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?\?") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("++") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("[") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("]") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&+") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("/") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__5E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!^") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("{") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("}") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("^") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">>") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("~") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2B__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&++") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2D__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&--") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&/") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Template Delimiters                                                                       *
//---------------------------------------------------------------------------------------------------------------------*

static const cTemplateDelimiter kTemplateDefinitionArray [1] = {
  cTemplateDelimiter (kUnicodeString_galgasTemplateScanner__25_, 1, kUnicodeString_galgasTemplateScanner__25_, 1, NULL, true)
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                           Template Replacements                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const cTemplateDelimiter kTemplateReplacementArray [3] = {
  cTemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C__25_, 2, kUnicodeString_galgasTemplateScanner__25_, 1, NULL, true),
  cTemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C_n, 2, kUnicodeString_galgasTemplateScanner__A_, 1, NULL, true),
  cTemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C__5C_, 2, kUnicodeString_galgasTemplateScanner__5C_, 1, NULL, true)
} ;

//---------------------------------------------------------------------------------------------------------------------*
//            Terminal Symbols as end of script in template mark                                                       *
//---------------------------------------------------------------------------------------------------------------------*

static const bool kEndOfScriptInTemplateArray [155] = {
  false /* identifier */,
  false /* type_name */,
  false /* literal_double */,
  false /* unsigned_literal_integer */,
  false /* signed_literal_integer */,
  false /* unsigned_literal_integer64 */,
  false /* signed_literal_integer64 */,
  false /* bigint */,
  false /* . */,
  false /* .= */,
  false /* ... */,
  false /* ..< */,
  false /* literal_char */,
  false /* literal_string */,
  false /* ? */,
  false /* ?! */,
  false /* ! */,
  false /* !? */,
  false /* < */,
  false /* <= */,
  false /* << */,
  false /* comment */,
  false /* abstract */,
  false /* after */,
  false /* array */,
  false /* before */,
  false /* between */,
  false /* block */,
  false /* case */,
  false /* cast */,
  false /* class */,
  false /* const */,
  false /* constructor */,
  false /* default */,
  false /* do */,
  false /* drop */,
  false /* else */,
  false /* elsif */,
  false /* end */,
  false /* enum */,
  false /* error */,
  false /* extension */,
  false /* extends */,
  false /* extern */,
  false /* false */,
  false /* feature */,
  false /* filewrapper */,
  false /* for */,
  false /* foreach */,
  false /* func */,
  false /* function */,
  false /* getter */,
  false /* grammar */,
  false /* graph */,
  false /* gui */,
  false /* here */,
  false /* if */,
  false /* import */,
  false /* in */,
  false /* index */,
  false /* indexing */,
  false /* insert */,
  false /* is */,
  false /* label */,
  false /* let */,
  false /* lexique */,
  false /* list */,
  false /* listmap */,
  false /* local */,
  false /* log */,
  false /* loop */,
  false /* map */,
  false /* match */,
  false /* message */,
  false /* method */,
  false /* mod */,
  false /* modifier */,
  false /* nonterminal */,
  false /* not */,
  false /* on */,
  false /* once */,
  false /* operator */,
  false /* option */,
  false /* or */,
  false /* override */,
  false /* parse */,
  false /* private */,
  false /* proc */,
  false /* project */,
  false /* remove */,
  false /* replace */,
  false /* repeat */,
  false /* rewind */,
  false /* root */,
  false /* routine */,
  false /* rule */,
  false /* search */,
  false /* select */,
  false /* self */,
  false /* selfcopy */,
  false /* semantics */,
  false /* send */,
  false /* setter */,
  false /* sortedlist */,
  false /* state */,
  false /* struct */,
  false /* style */,
  false /* switch */,
  false /* syntax */,
  false /* tag */,
  false /* template */,
  false /* then */,
  false /* true */,
  false /* sharedmap */,
  false /* unused */,
  false /* var */,
  false /* warning */,
  false /* when */,
  false /* while */,
  false /* with */,
  false /* * */,
  false /* | */,
  false /* , */,
  false /* + */,
  false /* -- */,
  false /* :> */,
  false /* > */,
  false /* ; */,
  false /* : */,
  false /* ?^ */,
  false /* - */,
  false /* ( */,
  false /* ) */,
  false /* -> */,
  false /* == */,
  false /* ?? */,
  false /* := */,
  false /* ++ */,
  false /* [ */,
  false /* ] */,
  false /* += */,
  false /* &+ */,
  false /* / */,
  false /* != */,
  false /* >= */,
  false /* & */,
  false /* !^ */,
  false /* { */,
  false /* } */,
  false /* ^ */,
  false /* >> */,
  false /* ~ */,
  false /* &++ */,
  false /* &-- */,
  false /* &/ */
} ;


//---------------------------------------------------------------------------------------------------------------------*
//               P A R S E    L E X I C A L    T O K E N                                                               *
//---------------------------------------------------------------------------------------------------------------------*

bool C_Lexique_galgasTemplateScanner::parseLexicalToken (void) {
  cTokenFor_galgasTemplateScanner token ;
  mLoop = true ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    if ((mMatchedTemplateDelimiterIndex >= 0)
     && (kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)
     && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      const bool foundEndDelimitor = testForInputUTF32String (kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,
                                                              kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength,
                                                              true) ;
      if (foundEndDelimitor) {
        mMatchedTemplateDelimiterIndex = -1 ;
      }
    }
    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      int32_t replacementIndex = 0 ;
      while (replacementIndex >= 0) {
        replacementIndex = findTemplateDelimiterIndex (kTemplateReplacementArray, 3) ;
        if (replacementIndex >= 0) {
          if (kTemplateReplacementArray [replacementIndex].mReplacementFunction == NULL) {
            token.mTemplateStringBeforeToken << kTemplateReplacementArray [replacementIndex].mEndString ;
          }else{
            C_String s ;
            while (notTestForInputUTF32String (kTemplateReplacementArray [replacementIndex].mEndString,
                                               kTemplateReplacementArray [replacementIndex].mEndStringLength,
                                               kEndOfSourceLexicalErrorMessage
                                               COMMA_HERE)) {
              s.appendUnicodeCharacter (previousChar () COMMA_HERE) ;
            }
            kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;
          }
        }
      }
      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (kTemplateDefinitionArray, 1) ;
      if (mMatchedTemplateDelimiterIndex < 0) {
        token.mTemplateStringBeforeToken.appendUnicodeCharacter (mCurrentChar COMMA_HERE) ;
        advance () ;
      }
    }
    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    token.mLexicalAttribute_bigintValue.setToZero () ;
    token.mLexicalAttribute_charValue = TO_UNICODE (0) ;
    token.mLexicalAttribute_floatValue = 0.0 ;
    token.mLexicalAttribute_identifierString.setLengthToZero () ;
    token.mLexicalAttribute_sint_33__32_value = 0 ;
    token.mLexicalAttribute_sint_36__34_value = 0 ;
    token.mLexicalAttribute_tokenString.setLengthToZero () ;
    token.mLexicalAttribute_uint_33__32_value = 0 ;
    token.mLexicalAttribute_uint_36__34_value = 0 ;
    mTokenStartLocation = mCurrentLocation ;
    try{
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (token.mTokenCode == -1) {
            token.mTokenCode = search_into_galgasKeyWordList (token.mLexicalAttribute_identifierString) ;
          }
          if (token.mTokenCode == -1) {
            token.mTokenCode = kToken_identifier ;
          }
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('@'))) {
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            do {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
            if (testForInputUTF32Char (TO_UNICODE ('-'))) {
              do {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
                }else{
                  mLoop = false ;
                }
              }while (mLoop) ;
              mLoop = true ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasTemplateScanner_incorrectTypeNameError COMMA_LINE_AND_SOURCE_FILE) ;
          }
          token.mTokenCode = kToken_type_5F_name ;
          enterToken (token) ;
        }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          do {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (testForInputUTF32Char (TO_UNICODE ('S')) || testForInputUTF32Char (TO_UNICODE ('s'))) {
            ::scanner_routine_convertDecimalStringIntoSInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_33__32_value, gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScanner_internalError) ;
            token.mTokenCode = kToken_signed_5F_literal_5F_integer ;
            enterToken (token) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner_LS, 2, true)) {
            ::scanner_routine_convertDecimalStringIntoSInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_36__34_value, gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScanner_internalError) ;
            token.mTokenCode = kToken_signed_5F_literal_5F_integer_36__34_ ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('L'))) {
            ::scanner_routine_convertDecimalStringIntoUInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_36__34_value, gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScanner_internalError) ;
            token.mTokenCode = kToken_unsigned_5F_literal_5F_integer_36__34_ ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('G'))) {
            ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasTemplateScanner_internalError) ;
            token.mTokenCode = kToken_bigint ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('.'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('.')) ;
            do {
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
            ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_galgasTemplateScanner_floatNumberConversionError) ;
            token.mTokenCode = kToken_literal_5F_double ;
            enterToken (token) ;
          }else{
            ::scanner_routine_convertDecimalStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScanner_internalError) ;
            token.mTokenCode = kToken_unsigned_5F_literal_5F_integer ;
            enterToken (token) ;
          }
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__30_x, 2, true)) {
          do {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else if (testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner_LS, 2, true)) {
            ::scanner_routine_convertHexStringIntoSInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_36__34_value, gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScanner_internalError) ;
            token.mTokenCode = kToken_signed_5F_literal_5F_integer_36__34_ ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('S')) || testForInputUTF32Char (TO_UNICODE ('s'))) {
            ::scanner_routine_convertHexStringIntoSInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_33__32_value, gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScanner_internalError) ;
            token.mTokenCode = kToken_signed_5F_literal_5F_integer ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('L'))) {
            ::scanner_routine_convertHexStringIntoUInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_36__34_value, gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScanner_internalError) ;
            token.mTokenCode = kToken_unsigned_5F_literal_5F_integer_36__34_ ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('G'))) {
            ::scanner_routine_convertHexStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasTemplateScanner_internalError) ;
            token.mTokenCode = kToken_bigint ;
            enterToken (token) ;
          }else{
            ::scanner_routine_convertHexStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScanner_internalError) ;
            token.mTokenCode = kToken_unsigned_5F_literal_5F_integer ;
            enterToken (token) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE ('.'))) {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('0')) ;
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('.')) ;
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            do {
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
            ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_galgasTemplateScanner_floatNumberConversionError) ;
            token.mTokenCode = kToken_literal_5F_double ;
            enterToken (token) ;
          }else{
            if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__2E__2E_, 2, true)) {
              token.mTokenCode = kToken__2E__2E__2E_ ;
              enterToken (token) ;
            }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__2E__3C_, 2, true)) {
              token.mTokenCode = kToken__2E__2E__3C_ ;
              enterToken (token) ;
            }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__3D_, 1, true)) {
              token.mTokenCode = kToken__2E__3D_ ;
              enterToken (token) ;
            }else{
              token.mTokenCode = kToken__2E_ ;
              enterToken (token) ;
            }
          }
        }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
          if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
            if (testForInputUTF32Char (TO_UNICODE ('f'))) {
              ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\f')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('n'))) {
              ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\n')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('r'))) {
              ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\r')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('t'))) {
              ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\t')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('v'))) {
              ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\v')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
              ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\\')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('0'))) {
              ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\0')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
              ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\'')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('u'))) {
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                      ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasTemplateScanner_unassignedUnicodeValue) ;
                    }else{
                      lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else if (testForInputUTF32Char (TO_UNICODE ('U'))) {
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                              ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasTemplateScanner_unassignedUnicodeValue) ;
                            }else{
                              lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                            }
                          }else{
                            lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                          }
                        }else{
                          lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else if (testForInputUTF32Char (TO_UNICODE ('x')) || testForInputUTF32Char (TO_UNICODE ('X'))) {
              lexicalWarning (gLexicalMessage_galgasTemplateScanner_obsoleteCharConstruction COMMA_LINE_AND_SOURCE_FILE) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                do {
                  ::scanner_routine_enterHexDigitIntoASCIIcharacter (*this, token.mLexicalAttribute_charValue, previousChar (), gLexicalMessage_galgasTemplateScanner_ASCIIcodeTooLargeError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  }else{
                    mLoop = false ;
                  }
                }while (mLoop) ;
                mLoop = true ;
              }else{
                lexicalError (gLexicalMessage_galgasTemplateScanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else if (testForInputUTF32Char (TO_UNICODE ('&'))) {
              do {
                if (notTestForInputUTF32String (kUnicodeString_galgasTemplateScanner__3B_, 1, gLexicalMessage_galgasTemplateScanner_incorrectHTMLescapeSequence COMMA_LINE_AND_SOURCE_FILE)) {
                  ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
                }else{
                  mLoop = false ;
                }
              }while (mLoop) ;
              mLoop = true ;
              ::scanner_routine_convertHTMLSequenceToUnicodeCharacter (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue, gLexicalMessage_galgasTemplateScanner_unknownHTMLescapeSequence) ;
            }else{
              lexicalError (gLexicalMessage_galgasTemplateScanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32CharRange (TO_UNICODE (' '), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, previousChar ()) ;
          }else{
            lexicalError (gLexicalMessage_galgasTemplateScanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
          if (testForInputUTF32Char (TO_UNICODE ('\''))) {
            token.mTokenCode = kToken_literal_5F_char ;
            enterToken (token) ;
          }else{
            lexicalError (gLexicalMessage_galgasTemplateScanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
          do {
            if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
              if (testForInputUTF32Char (TO_UNICODE ('f'))) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\f')) ;
              }else if (testForInputUTF32Char (TO_UNICODE ('n'))) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\n')) ;
              }else if (testForInputUTF32Char (TO_UNICODE ('r'))) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\r')) ;
              }else if (testForInputUTF32Char (TO_UNICODE ('t'))) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\t')) ;
              }else if (testForInputUTF32Char (TO_UNICODE ('v'))) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\v')) ;
              }else if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
              }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\"')) ;
              }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\'')) ;
              }else if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\?')) ;
              }else if (testForInputUTF32Char (TO_UNICODE ('&'))) {
                do {
                  if (notTestForInputUTF32String (kUnicodeString_galgasTemplateScanner__3B_, 1, gLexicalMessage_galgasTemplateScanner_incorrectHTMLescapeSequence COMMA_LINE_AND_SOURCE_FILE)) {
                    ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, previousChar ()) ;
                  }else{
                    mLoop = false ;
                  }
                }while (mLoop) ;
                mLoop = true ;
                ::scanner_routine_convertHTMLSequenceToUnicodeCharacter (*this, token.mLexicalAttribute_identifierString, token.mLexicalAttribute_charValue, gLexicalMessage_galgasTemplateScanner_unknownHTMLescapeSequence) ;
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
              }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
                lexicalWarning (gLexicalMessage_galgasTemplateScanner_obsoleteStringConstruction COMMA_LINE_AND_SOURCE_FILE) ;
                do {
                  ::scanner_routine_enterHexDigitIntoASCIIcharacter (*this, token.mLexicalAttribute_charValue, previousChar (), gLexicalMessage_galgasTemplateScanner_ASCIIcodeTooLargeError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
                  }else{
                    mLoop = false ;
                  }
                }while (mLoop) ;
                mLoop = true ;
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
              }else if (testForInputUTF32Char (TO_UNICODE ('u'))) {
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                        ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasTemplateScanner_unassignedUnicodeValue) ;
                        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                      }else{
                        lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else if (testForInputUTF32Char (TO_UNICODE ('U'))) {
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_internalError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                                ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasTemplateScanner_unassignedUnicodeValue) ;
                                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                              }else{
                                lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                              }
                            }else{
                              lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                            }
                          }else{
                            lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                          }
                        }else{
                          lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasTemplateScanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
            token.mTokenCode = kToken_literal_5F_string ;
            enterToken (token) ;
          }else{
            lexicalError (gLexicalMessage_galgasTemplateScanner_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__26__2D__2D_, 3, true)) {
          token.mTokenCode = kToken__26__2D__2D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__26__2B__2B_, 3, true)) {
          token.mTokenCode = kToken__26__2B__2B_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__3F__5E_, 2, true)) {
          token.mTokenCode = kToken__3F__5E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__3F__3F_, 2, true)) {
          token.mTokenCode = kToken__3F__3F_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__3E__3E_, 2, true)) {
          token.mTokenCode = kToken__3E__3E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__3E__3D_, 2, true)) {
          token.mTokenCode = kToken__3E__3D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__3D__3D_, 2, true)) {
          token.mTokenCode = kToken__3D__3D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__3A__3E_, 2, true)) {
          token.mTokenCode = kToken__3A__3E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__3A__3D_, 2, true)) {
          token.mTokenCode = kToken__3A__3D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__2D__3E_, 2, true)) {
          token.mTokenCode = kToken__2D__3E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__2D__2D_, 2, true)) {
          token.mTokenCode = kToken__2D__2D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__2B__3D_, 2, true)) {
          token.mTokenCode = kToken__2B__3D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__2B__2B_, 2, true)) {
          token.mTokenCode = kToken__2B__2B_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__26__2F_, 2, true)) {
          token.mTokenCode = kToken__26__2F_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__26__2B_, 2, true)) {
          token.mTokenCode = kToken__26__2B_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__21__5E_, 2, true)) {
          token.mTokenCode = kToken__21__5E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__21__3D_, 2, true)) {
          token.mTokenCode = kToken__21__3D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__7E_, 1, true)) {
          token.mTokenCode = kToken__7E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__7D_, 1, true)) {
          token.mTokenCode = kToken__7D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__7C_, 1, true)) {
          token.mTokenCode = kToken__7C_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__7B_, 1, true)) {
          token.mTokenCode = kToken__7B_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__5E_, 1, true)) {
          token.mTokenCode = kToken__5E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__5D_, 1, true)) {
          token.mTokenCode = kToken__5D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__5B_, 1, true)) {
          token.mTokenCode = kToken__5B_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__3E_, 1, true)) {
          token.mTokenCode = kToken__3E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__3B_, 1, true)) {
          token.mTokenCode = kToken__3B_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__3A_, 1, true)) {
          token.mTokenCode = kToken__3A_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__2F_, 1, true)) {
          token.mTokenCode = kToken__2F_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__2D_, 1, true)) {
          token.mTokenCode = kToken__2D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__2C_, 1, true)) {
          token.mTokenCode = kToken__2C_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__2B_, 1, true)) {
          token.mTokenCode = kToken__2B_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__2A_, 1, true)) {
          token.mTokenCode = kToken__2A_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__29_, 1, true)) {
          token.mTokenCode = kToken__29_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__28_, 1, true)) {
          token.mTokenCode = kToken__28_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__26_, 1, true)) {
          token.mTokenCode = kToken__26_ ;
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
          const C_LocationInSource currentLocationForTag_onlyInterrogationMark = mCurrentLocation ;
          const C_LocationInSource endLocationForTag_onlyInterrogationMark = mTokenEndLocation ;
          const utf32 currentCharForTag_onlyInterrogationMark = mCurrentChar ;
          if (testForInputUTF32Char (TO_UNICODE ('!'))) {
            const C_LocationInSource currentLocationForTag_onlyExclamationInterrogationMark = mCurrentLocation ;
            const C_LocationInSource endLocationForTag_onlyExclamationInterrogationMark = mTokenEndLocation ;
            const utf32 currentCharForTag_onlyExclamationInterrogationMark = mCurrentChar ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
              do {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
                }else{
                  mLoop = false ;
                }
              }while (mLoop) ;
              mLoop = true ;
              if (testForInputUTF32Char (TO_UNICODE (':'))) {
                token.mTokenCode = kToken__3F__21_ ;
                enterToken (token) ;
              }else{
                ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
                mCurrentLocation = currentLocationForTag_onlyExclamationInterrogationMark ;
                mTokenEndLocation = endLocationForTag_onlyExclamationInterrogationMark ;
                mCurrentChar = currentCharForTag_onlyExclamationInterrogationMark ;
                token.mTokenCode = kToken__3F__21_ ;
                enterToken (token) ;
              }
            }else{
              token.mTokenCode = kToken__3F__21_ ;
              enterToken (token) ;
            }
          }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
            do {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
            if (testForInputUTF32Char (TO_UNICODE (':'))) {
              token.mTokenCode = kToken__3F_ ;
              enterToken (token) ;
            }else{
              ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
              mCurrentLocation = currentLocationForTag_onlyInterrogationMark ;
              mTokenEndLocation = endLocationForTag_onlyInterrogationMark ;
              mCurrentChar = currentCharForTag_onlyInterrogationMark ;
              token.mTokenCode = kToken__3F_ ;
              enterToken (token) ;
            }
          }else{
            token.mTokenCode = kToken__3F_ ;
            enterToken (token) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE ('!'))) {
          const C_LocationInSource currentLocationForTag_onlyExclamationMark = mCurrentLocation ;
          const C_LocationInSource endLocationForTag_onlyExclamationMark = mTokenEndLocation ;
          const utf32 currentCharForTag_onlyExclamationMark = mCurrentChar ;
          if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
            const C_LocationInSource currentLocationForTag_onlyInterrogationExclamationMark = mCurrentLocation ;
            const C_LocationInSource endLocationForTag_onlyInterrogationExclamationMark = mTokenEndLocation ;
            const utf32 currentCharForTag_onlyInterrogationExclamationMark = mCurrentChar ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
              do {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
                }else{
                  mLoop = false ;
                }
              }while (mLoop) ;
              mLoop = true ;
              if (testForInputUTF32Char (TO_UNICODE (':'))) {
                token.mTokenCode = kToken__21__3F_ ;
                enterToken (token) ;
              }else{
                ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
                mCurrentLocation = currentLocationForTag_onlyInterrogationExclamationMark ;
                mTokenEndLocation = endLocationForTag_onlyInterrogationExclamationMark ;
                mCurrentChar = currentCharForTag_onlyInterrogationExclamationMark ;
                token.mTokenCode = kToken__21__3F_ ;
                enterToken (token) ;
              }
            }else{
              token.mTokenCode = kToken__21__3F_ ;
              enterToken (token) ;
            }
          }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
            do {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
            if (testForInputUTF32Char (TO_UNICODE (':'))) {
              token.mTokenCode = kToken__21_ ;
              enterToken (token) ;
            }else{
              ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
              mCurrentLocation = currentLocationForTag_onlyExclamationMark ;
              mTokenEndLocation = endLocationForTag_onlyExclamationMark ;
              mCurrentChar = currentCharForTag_onlyExclamationMark ;
              token.mTokenCode = kToken__21_ ;
              enterToken (token) ;
            }
          }else{
            token.mTokenCode = kToken__21_ ;
            enterToken (token) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE ('<'))) {
          if (testForInputUTF32Char (TO_UNICODE ('='))) {
            token.mTokenCode = kToken__3C__3D_ ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('<'))) {
            token.mTokenCode = kToken__3C__3C_ ;
            enterToken (token) ;
          }else{
            token.mTokenCode = kToken__3C_ ;
            enterToken (token) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
          do {
            if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          enterDroppedTerminal (kToken_comment) ;
        }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
        }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
          token.mTokenCode = kToken_ ; // Empty string code
        }else{ // Unknown input character
          unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
        }
      }catch (const C_lexicalErrorException &) {
        token.mTokenCode = -1 ; // No token
        advance () ; // ... go throught unknown character
      }
    }
    if ((token.mTokenCode > 0) && kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {
      mMatchedTemplateDelimiterIndex = -1 ;
    }
  
  }
  if ((UNICODE_VALUE (mCurrentChar) == '\0') && (token.mTemplateStringBeforeToken.length () > 0)) {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         E N T E R    T O K E N                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

void C_Lexique_galgasTemplateScanner::enterToken (const cTokenFor_galgasTemplateScanner & inToken) {
  cTokenFor_galgasTemplateScanner * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_galgasTemplateScanner ()) ;
  ptr->mTokenCode = inToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = inToken.mTemplateStringBeforeToken ;
  ptr->mLexicalAttribute_bigintValue = inToken.mLexicalAttribute_bigintValue ;
  ptr->mLexicalAttribute_charValue = inToken.mLexicalAttribute_charValue ;
  ptr->mLexicalAttribute_floatValue = inToken.mLexicalAttribute_floatValue ;
  ptr->mLexicalAttribute_identifierString = inToken.mLexicalAttribute_identifierString ;
  ptr->mLexicalAttribute_sint_33__32_value = inToken.mLexicalAttribute_sint_33__32_value ;
  ptr->mLexicalAttribute_sint_36__34_value = inToken.mLexicalAttribute_sint_36__34_value ;
  ptr->mLexicalAttribute_tokenString = inToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = inToken.mLexicalAttribute_uint_33__32_value ;
  ptr->mLexicalAttribute_uint_36__34_value = inToken.mLexicalAttribute_uint_36__34_value ;
  enterTokenFromPointer (ptr) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//               A T T R I B U T E   A C C E S S                                                                       *
//---------------------------------------------------------------------------------------------------------------------*

C_BigInt C_Lexique_galgasTemplateScanner::attributeValue_bigintValue (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_bigintValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

utf32 C_Lexique_galgasTemplateScanner::attributeValue_charValue (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_charValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

double C_Lexique_galgasTemplateScanner::attributeValue_floatValue (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_floatValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_galgasTemplateScanner::attributeValue_identifierString (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_identifierString ;
}

//---------------------------------------------------------------------------------------------------------------------*

int32_t C_Lexique_galgasTemplateScanner::attributeValue_sint_33__32_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_sint_33__32_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

int64_t C_Lexique_galgasTemplateScanner::attributeValue_sint_36__34_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_sint_36__34_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_galgasTemplateScanner::attributeValue_tokenString (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_tokenString ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint32_t C_Lexique_galgasTemplateScanner::attributeValue_uint_33__32_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint64_t C_Lexique_galgasTemplateScanner::attributeValue_uint_36__34_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_uint_36__34_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//         A S S I G N    F R O M    A T T R I B U T E                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint C_Lexique_galgasTemplateScanner::synthetizedAttribute_bigintValue (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_bigint value (ptr->mLexicalAttribute_bigintValue) ;
  GALGAS_lbigint result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar C_Lexique_galgasTemplateScanner::synthetizedAttribute_charValue (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_char value (ptr->mLexicalAttribute_charValue) ;
  GALGAS_lchar result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble C_Lexique_galgasTemplateScanner::synthetizedAttribute_floatValue (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_double value (ptr->mLexicalAttribute_floatValue) ;
  GALGAS_ldouble result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring C_Lexique_galgasTemplateScanner::synthetizedAttribute_identifierString (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint C_Lexique_galgasTemplateScanner::synthetizedAttribute_sint_33__32_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint value (ptr->mLexicalAttribute_sint_33__32_value) ;
  GALGAS_lsint result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_ C_Lexique_galgasTemplateScanner::synthetizedAttribute_sint_36__34_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint_36__34_ value (ptr->mLexicalAttribute_sint_36__34_value) ;
  GALGAS_lsint_36__34_ result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring C_Lexique_galgasTemplateScanner::synthetizedAttribute_tokenString (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint C_Lexique_galgasTemplateScanner::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_ C_Lexique_galgasTemplateScanner::synthetizedAttribute_uint_36__34_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint_36__34_ value (ptr->mLexicalAttribute_uint_36__34_value) ;
  GALGAS_luint_36__34_ result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         I N T R O S P E C T I O N                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist C_Lexique_galgasTemplateScanner::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("type_name") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_double") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("unsigned_literal_integer") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("signed_literal_integer") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("unsigned_literal_integer64") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("signed_literal_integer64") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bigint") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("...") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("..<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_char") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_string") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("abstract") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("after") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("array") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("before") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("between") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("block") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("cast") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("class") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("const") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("constructor") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("default") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("do") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("drop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("else") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("elsif") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("end") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("error") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extension") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extends") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extern") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("false") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("feature") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("filewrapper") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("for") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("foreach") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("func") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("function") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("getter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("grammar") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("graph") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("gui") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("here") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("import") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("in") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("index") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("indexing") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("insert") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("is") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("label") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("let") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("lexique") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("list") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("listmap") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("local") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("log") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("loop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("map") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("match") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("message") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("method") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mod") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("modifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("nonterminal") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("not") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("on") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("once") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("operator") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("option") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("or") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("override") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("parse") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("private") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("proc") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("project") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("remove") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("replace") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("repeat") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rewind") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("root") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("routine") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rule") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("search") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("select") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("selfcopy") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("semantics") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("send") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("setter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sortedlist") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("state") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("style") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("switch") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("syntax") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("tag") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("template") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("then") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("true") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sharedmap") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("unused") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("var") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("warning") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("when") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("while") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("with") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("--") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("->") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("++") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("/") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&++") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&--") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&/") COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

uint32_t C_Lexique_galgasTemplateScanner::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [156] = {0,
    0 /* galgasTemplateScanner_1_identifier */,
    10 /* galgasTemplateScanner_1_type_5F_name */,
    7 /* galgasTemplateScanner_1_literal_5F_double */,
    5 /* galgasTemplateScanner_1_unsigned_5F_literal_5F_integer */,
    5 /* galgasTemplateScanner_1_signed_5F_literal_5F_integer */,
    5 /* galgasTemplateScanner_1_unsigned_5F_literal_5F_integer_36__34_ */,
    5 /* galgasTemplateScanner_1_signed_5F_literal_5F_integer_36__34_ */,
    6 /* galgasTemplateScanner_1_bigint */,
    2 /* galgasTemplateScanner_1__2E_ */,
    2 /* galgasTemplateScanner_1__2E__3D_ */,
    2 /* galgasTemplateScanner_1__2E__2E__2E_ */,
    2 /* galgasTemplateScanner_1__2E__2E__3C_ */,
    9 /* galgasTemplateScanner_1_literal_5F_char */,
    8 /* galgasTemplateScanner_1_literal_5F_string */,
    2 /* galgasTemplateScanner_1__3F_ */,
    2 /* galgasTemplateScanner_1__3F__21_ */,
    2 /* galgasTemplateScanner_1__21_ */,
    2 /* galgasTemplateScanner_1__21__3F_ */,
    2 /* galgasTemplateScanner_1__3C_ */,
    2 /* galgasTemplateScanner_1__3C__3D_ */,
    2 /* galgasTemplateScanner_1__3C__3C_ */,
    11 /* galgasTemplateScanner_1_comment */,
    1 /* galgasTemplateScanner_1_abstract */,
    1 /* galgasTemplateScanner_1_after */,
    1 /* galgasTemplateScanner_1_array */,
    1 /* galgasTemplateScanner_1_before */,
    1 /* galgasTemplateScanner_1_between */,
    1 /* galgasTemplateScanner_1_block */,
    1 /* galgasTemplateScanner_1_case */,
    1 /* galgasTemplateScanner_1_cast */,
    1 /* galgasTemplateScanner_1_class */,
    1 /* galgasTemplateScanner_1_const */,
    1 /* galgasTemplateScanner_1_constructor */,
    1 /* galgasTemplateScanner_1_default */,
    1 /* galgasTemplateScanner_1_do */,
    1 /* galgasTemplateScanner_1_drop */,
    1 /* galgasTemplateScanner_1_else */,
    1 /* galgasTemplateScanner_1_elsif */,
    1 /* galgasTemplateScanner_1_end */,
    1 /* galgasTemplateScanner_1_enum */,
    1 /* galgasTemplateScanner_1_error */,
    1 /* galgasTemplateScanner_1_extension */,
    1 /* galgasTemplateScanner_1_extends */,
    1 /* galgasTemplateScanner_1_extern */,
    1 /* galgasTemplateScanner_1_false */,
    1 /* galgasTemplateScanner_1_feature */,
    1 /* galgasTemplateScanner_1_filewrapper */,
    1 /* galgasTemplateScanner_1_for */,
    1 /* galgasTemplateScanner_1_foreach */,
    1 /* galgasTemplateScanner_1_func */,
    1 /* galgasTemplateScanner_1_function */,
    1 /* galgasTemplateScanner_1_getter */,
    1 /* galgasTemplateScanner_1_grammar */,
    1 /* galgasTemplateScanner_1_graph */,
    1 /* galgasTemplateScanner_1_gui */,
    1 /* galgasTemplateScanner_1_here */,
    1 /* galgasTemplateScanner_1_if */,
    1 /* galgasTemplateScanner_1_import */,
    1 /* galgasTemplateScanner_1_in */,
    1 /* galgasTemplateScanner_1_index */,
    1 /* galgasTemplateScanner_1_indexing */,
    1 /* galgasTemplateScanner_1_insert */,
    1 /* galgasTemplateScanner_1_is */,
    1 /* galgasTemplateScanner_1_label */,
    1 /* galgasTemplateScanner_1_let */,
    1 /* galgasTemplateScanner_1_lexique */,
    1 /* galgasTemplateScanner_1_list */,
    1 /* galgasTemplateScanner_1_listmap */,
    1 /* galgasTemplateScanner_1_local */,
    1 /* galgasTemplateScanner_1_log */,
    1 /* galgasTemplateScanner_1_loop */,
    1 /* galgasTemplateScanner_1_map */,
    1 /* galgasTemplateScanner_1_match */,
    1 /* galgasTemplateScanner_1_message */,
    1 /* galgasTemplateScanner_1_method */,
    1 /* galgasTemplateScanner_1_mod */,
    1 /* galgasTemplateScanner_1_modifier */,
    1 /* galgasTemplateScanner_1_nonterminal */,
    1 /* galgasTemplateScanner_1_not */,
    1 /* galgasTemplateScanner_1_on */,
    1 /* galgasTemplateScanner_1_once */,
    1 /* galgasTemplateScanner_1_operator */,
    1 /* galgasTemplateScanner_1_option */,
    1 /* galgasTemplateScanner_1_or */,
    1 /* galgasTemplateScanner_1_override */,
    1 /* galgasTemplateScanner_1_parse */,
    1 /* galgasTemplateScanner_1_private */,
    1 /* galgasTemplateScanner_1_proc */,
    1 /* galgasTemplateScanner_1_project */,
    1 /* galgasTemplateScanner_1_remove */,
    1 /* galgasTemplateScanner_1_replace */,
    1 /* galgasTemplateScanner_1_repeat */,
    1 /* galgasTemplateScanner_1_rewind */,
    1 /* galgasTemplateScanner_1_root */,
    1 /* galgasTemplateScanner_1_routine */,
    1 /* galgasTemplateScanner_1_rule */,
    1 /* galgasTemplateScanner_1_search */,
    1 /* galgasTemplateScanner_1_select */,
    1 /* galgasTemplateScanner_1_self */,
    1 /* galgasTemplateScanner_1_selfcopy */,
    1 /* galgasTemplateScanner_1_semantics */,
    1 /* galgasTemplateScanner_1_send */,
    1 /* galgasTemplateScanner_1_setter */,
    1 /* galgasTemplateScanner_1_sortedlist */,
    1 /* galgasTemplateScanner_1_state */,
    1 /* galgasTemplateScanner_1_struct */,
    1 /* galgasTemplateScanner_1_style */,
    1 /* galgasTemplateScanner_1_switch */,
    1 /* galgasTemplateScanner_1_syntax */,
    1 /* galgasTemplateScanner_1_tag */,
    1 /* galgasTemplateScanner_1_template */,
    1 /* galgasTemplateScanner_1_then */,
    1 /* galgasTemplateScanner_1_true */,
    1 /* galgasTemplateScanner_1_sharedmap */,
    1 /* galgasTemplateScanner_1_unused */,
    1 /* galgasTemplateScanner_1_var */,
    1 /* galgasTemplateScanner_1_warning */,
    1 /* galgasTemplateScanner_1_when */,
    1 /* galgasTemplateScanner_1_while */,
    1 /* galgasTemplateScanner_1_with */,
    2 /* galgasTemplateScanner_1__2A_ */,
    2 /* galgasTemplateScanner_1__7C_ */,
    2 /* galgasTemplateScanner_1__2C_ */,
    2 /* galgasTemplateScanner_1__2B_ */,
    2 /* galgasTemplateScanner_1__2D__2D_ */,
    2 /* galgasTemplateScanner_1__3A__3E_ */,
    2 /* galgasTemplateScanner_1__3E_ */,
    2 /* galgasTemplateScanner_1__3B_ */,
    2 /* galgasTemplateScanner_1__3A_ */,
    2 /* galgasTemplateScanner_1__3F__5E_ */,
    2 /* galgasTemplateScanner_1__2D_ */,
    2 /* galgasTemplateScanner_1__28_ */,
    2 /* galgasTemplateScanner_1__29_ */,
    2 /* galgasTemplateScanner_1__2D__3E_ */,
    2 /* galgasTemplateScanner_1__3D__3D_ */,
    2 /* galgasTemplateScanner_1__3F__3F_ */,
    2 /* galgasTemplateScanner_1__3A__3D_ */,
    2 /* galgasTemplateScanner_1__2B__2B_ */,
    2 /* galgasTemplateScanner_1__5B_ */,
    2 /* galgasTemplateScanner_1__5D_ */,
    2 /* galgasTemplateScanner_1__2B__3D_ */,
    2 /* galgasTemplateScanner_1__26__2B_ */,
    2 /* galgasTemplateScanner_1__2F_ */,
    2 /* galgasTemplateScanner_1__21__3D_ */,
    2 /* galgasTemplateScanner_1__3E__3D_ */,
    2 /* galgasTemplateScanner_1__26_ */,
    2 /* galgasTemplateScanner_1__21__5E_ */,
    2 /* galgasTemplateScanner_1__7B_ */,
    2 /* galgasTemplateScanner_1__7D_ */,
    2 /* galgasTemplateScanner_1__5E_ */,
    2 /* galgasTemplateScanner_1__3E__3E_ */,
    2 /* galgasTemplateScanner_1__7E_ */,
    2 /* galgasTemplateScanner_1__26__2B__2B_ */,
    2 /* galgasTemplateScanner_1__26__2D__2D_ */,
    2 /* galgasTemplateScanner_1__26__2F_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                                            *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_galgasTemplateScanner::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
  if (inStyleIndex < 12) {
    static const char * kStyleArray [12] = {
      "",
      "keywordsStyle",
      "delimitersStyle",
      "nonTerminalStyle",
      "variantStyle",
      "integerStyle",
      "bigintStyle",
      "floatStyle",
      "stringStyle",
      "characterStyle",
      "typeNameStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@templateInstructionListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_templateInstructionListAST : public cCollectionElement {
  public : GALGAS_templateInstructionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_templateInstructionListAST (const GALGAS_templateInstructionAST & in_mInstruction
                                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_templateInstructionListAST::cCollectionElement_templateInstructionListAST (const GALGAS_templateInstructionAST & in_mInstruction
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_templateInstructionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_templateInstructionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionListAST (mObject.mAttribute_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_templateInstructionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mAttribute_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_templateInstructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionListAST * operand = (cCollectionElement_templateInstructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST::GALGAS_templateInstructionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST::GALGAS_templateInstructionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_templateInstructionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionListAST::constructor_listWithValue (const GALGAS_templateInstructionAST & inOperand0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_templateInstructionAST & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_templateInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListAST::addAssign_operation (const GALGAS_templateInstructionAST & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListAST::modifier_insertAtIndex (const GALGAS_templateInstructionAST inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListAST::modifier_removeAtIndex (GALGAS_templateInstructionAST & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateInstructionListAST * p = (cCollectionElement_templateInstructionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateInstructionListAST) ;
      outOperand0 = p->mObject.mAttribute_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListAST::modifier_popFirst (GALGAS_templateInstructionAST & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListAST * p = (cCollectionElement_templateInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListAST::modifier_popLast (GALGAS_templateInstructionAST & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListAST * p = (cCollectionElement_templateInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListAST::method_first (GALGAS_templateInstructionAST & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListAST * p = (cCollectionElement_templateInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListAST::method_last (GALGAS_templateInstructionAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListAST * p = (cCollectionElement_templateInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionListAST::add_operation (const GALGAS_templateInstructionListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result = GALGAS_templateInstructionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result = GALGAS_templateInstructionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result = GALGAS_templateInstructionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListAST::plusAssign_operation (const GALGAS_templateInstructionListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionAST GALGAS_templateInstructionListAST::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListAST * p = (cCollectionElement_templateInstructionListAST *) attributes.ptr () ;
  GALGAS_templateInstructionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionListAST) ;
    result = p->mObject.mAttribute_mInstruction ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateInstructionListAST::cEnumerator_templateInstructionListAST (const GALGAS_templateInstructionListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST_2D_element cEnumerator_templateInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionListAST * p = (const cCollectionElement_templateInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionAST cEnumerator_templateInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionListAST * p = (const cCollectionElement_templateInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionListAST) ;
  return p->mObject.mAttribute_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @templateInstructionListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionListAST ("templateInstructionListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionListAST result ;
  const GALGAS_templateInstructionListAST * p = (const GALGAS_templateInstructionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@templateExpressionListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_templateExpressionListAST : public cCollectionElement {
  public : GALGAS_templateExpressionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_templateExpressionListAST (const GALGAS_lstring & in_mActualSelector,
                                                         const GALGAS_templateExpressionAST & in_mExpression,
                                                         const GALGAS_location & in_mEndOfExpressionLocation
                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_templateExpressionListAST::cCollectionElement_templateExpressionListAST (const GALGAS_lstring & in_mActualSelector,
                                                                                            const GALGAS_templateExpressionAST & in_mExpression,
                                                                                            const GALGAS_location & in_mEndOfExpressionLocation
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActualSelector, in_mExpression, in_mEndOfExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_templateExpressionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_templateExpressionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateExpressionListAST (mObject.mAttribute_mActualSelector, mObject.mAttribute_mExpression, mObject.mAttribute_mEndOfExpressionLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_templateExpressionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActualSelector" ":" ;
  mObject.mAttribute_mActualSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mAttribute_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfExpressionLocation" ":" ;
  mObject.mAttribute_mEndOfExpressionLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_templateExpressionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateExpressionListAST * operand = (cCollectionElement_templateExpressionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateExpressionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST::GALGAS_templateExpressionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST::GALGAS_templateExpressionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateExpressionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_templateExpressionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateExpressionListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_templateExpressionAST & inOperand1,
                                                                                              const GALGAS_location & inOperand2
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateExpressionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_templateExpressionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateExpressionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lstring & in_mActualSelector,
                                                                  const GALGAS_templateExpressionAST & in_mExpression,
                                                                  const GALGAS_location & in_mEndOfExpressionLocation
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_templateExpressionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_templateExpressionListAST (in_mActualSelector,
                                                               in_mExpression,
                                                               in_mEndOfExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateExpressionListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_templateExpressionAST & inOperand1,
                                                            const GALGAS_location & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateExpressionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateExpressionListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_templateExpressionAST inOperand1,
                                                               const GALGAS_location inOperand2,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateExpressionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateExpressionListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_templateExpressionAST & outOperand1,
                                                               GALGAS_location & outOperand2,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateExpressionListAST * p = (cCollectionElement_templateExpressionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
      outOperand0 = p->mObject.mAttribute_mActualSelector ;
      outOperand1 = p->mObject.mAttribute_mExpression ;
      outOperand2 = p->mObject.mAttribute_mEndOfExpressionLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateExpressionListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_templateExpressionAST & outOperand1,
                                                          GALGAS_location & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateExpressionListAST * p = (cCollectionElement_templateExpressionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
    outOperand0 = p->mObject.mAttribute_mActualSelector ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
    outOperand2 = p->mObject.mAttribute_mEndOfExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateExpressionListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_templateExpressionAST & outOperand1,
                                                         GALGAS_location & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateExpressionListAST * p = (cCollectionElement_templateExpressionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
    outOperand0 = p->mObject.mAttribute_mActualSelector ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
    outOperand2 = p->mObject.mAttribute_mEndOfExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateExpressionListAST::method_first (GALGAS_lstring & outOperand0,
                                                     GALGAS_templateExpressionAST & outOperand1,
                                                     GALGAS_location & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateExpressionListAST * p = (cCollectionElement_templateExpressionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
    outOperand0 = p->mObject.mAttribute_mActualSelector ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
    outOperand2 = p->mObject.mAttribute_mEndOfExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateExpressionListAST::method_last (GALGAS_lstring & outOperand0,
                                                    GALGAS_templateExpressionAST & outOperand1,
                                                    GALGAS_location & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateExpressionListAST * p = (cCollectionElement_templateExpressionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
    outOperand0 = p->mObject.mAttribute_mActualSelector ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
    outOperand2 = p->mObject.mAttribute_mEndOfExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateExpressionListAST::add_operation (const GALGAS_templateExpressionListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateExpressionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result = GALGAS_templateExpressionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateExpressionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result = GALGAS_templateExpressionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateExpressionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result = GALGAS_templateExpressionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateExpressionListAST::plusAssign_operation (const GALGAS_templateExpressionListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateExpressionListAST::getter_mActualSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateExpressionListAST * p = (cCollectionElement_templateExpressionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
    result = p->mObject.mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateExpressionListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateExpressionListAST * p = (cCollectionElement_templateExpressionListAST *) attributes.ptr () ;
  GALGAS_templateExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
    result = p->mObject.mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateExpressionListAST::getter_mEndOfExpressionLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateExpressionListAST * p = (cCollectionElement_templateExpressionListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
    result = p->mObject.mAttribute_mEndOfExpressionLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateExpressionListAST::cEnumerator_templateExpressionListAST (const GALGAS_templateExpressionListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST_2D_element cEnumerator_templateExpressionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateExpressionListAST * p = (const cCollectionElement_templateExpressionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateExpressionListAST::current_mActualSelector (LOCATION_ARGS) const {
  const cCollectionElement_templateExpressionListAST * p = (const cCollectionElement_templateExpressionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
  return p->mObject.mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cEnumerator_templateExpressionListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_templateExpressionListAST * p = (const cCollectionElement_templateExpressionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
  return p->mObject.mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_templateExpressionListAST::current_mEndOfExpressionLocation (LOCATION_ARGS) const {
  const cCollectionElement_templateExpressionListAST * p = (const cCollectionElement_templateExpressionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
  return p->mObject.mAttribute_mEndOfExpressionLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @templateExpressionListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateExpressionListAST ("templateExpressionListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateExpressionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExpressionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateExpressionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateExpressionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateExpressionListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateExpressionListAST result ;
  const GALGAS_templateExpressionListAST * p = (const GALGAS_templateExpressionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateExpressionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExpressionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@templateInstructionIfBranchListAST' list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_templateInstructionIfBranchListAST : public cCollectionElement {
  public : GALGAS_templateInstructionIfBranchListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_templateInstructionIfBranchListAST (const GALGAS_templateExpressionAST & in_mExpression,
                                                                  const GALGAS_templateInstructionListAST & in_mInstructionList
                                                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_templateInstructionIfBranchListAST::cCollectionElement_templateInstructionIfBranchListAST (const GALGAS_templateExpressionAST & in_mExpression,
                                                                                                              const GALGAS_templateInstructionListAST & in_mInstructionList
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_templateInstructionIfBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_templateInstructionIfBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionIfBranchListAST (mObject.mAttribute_mExpression, mObject.mAttribute_mInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_templateInstructionIfBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mAttribute_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mAttribute_mInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_templateInstructionIfBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionIfBranchListAST * operand = (cCollectionElement_templateInstructionIfBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionIfBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST::GALGAS_templateInstructionIfBranchListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST::GALGAS_templateInstructionIfBranchListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfBranchListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfBranchListAST::constructor_listWithValue (const GALGAS_templateExpressionAST & inOperand0,
                                                                                                                const GALGAS_templateInstructionListAST & inOperand1
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionIfBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_templateExpressionAST & in_mExpression,
                                                                           const GALGAS_templateInstructionListAST & in_mInstructionList
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionIfBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_templateInstructionIfBranchListAST (in_mExpression,
                                                                        in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListAST::addAssign_operation (const GALGAS_templateExpressionAST & inOperand0,
                                                                     const GALGAS_templateInstructionListAST & inOperand1
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionIfBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListAST::modifier_insertAtIndex (const GALGAS_templateExpressionAST inOperand0,
                                                                        const GALGAS_templateInstructionListAST inOperand1,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionIfBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListAST::modifier_removeAtIndex (GALGAS_templateExpressionAST & outOperand0,
                                                                        GALGAS_templateInstructionListAST & outOperand1,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateInstructionIfBranchListAST * p = (cCollectionElement_templateInstructionIfBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
      outOperand0 = p->mObject.mAttribute_mExpression ;
      outOperand1 = p->mObject.mAttribute_mInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListAST::modifier_popFirst (GALGAS_templateExpressionAST & outOperand0,
                                                                   GALGAS_templateInstructionListAST & outOperand1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListAST * p = (cCollectionElement_templateInstructionIfBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListAST::modifier_popLast (GALGAS_templateExpressionAST & outOperand0,
                                                                  GALGAS_templateInstructionListAST & outOperand1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListAST * p = (cCollectionElement_templateInstructionIfBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListAST::method_first (GALGAS_templateExpressionAST & outOperand0,
                                                              GALGAS_templateInstructionListAST & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListAST * p = (cCollectionElement_templateInstructionIfBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListAST::method_last (GALGAS_templateExpressionAST & outOperand0,
                                                             GALGAS_templateInstructionListAST & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListAST * p = (cCollectionElement_templateInstructionIfBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfBranchListAST::add_operation (const GALGAS_templateInstructionIfBranchListAST & inOperand,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListAST result = GALGAS_templateInstructionIfBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListAST result = GALGAS_templateInstructionIfBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListAST result = GALGAS_templateInstructionIfBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListAST::plusAssign_operation (const GALGAS_templateInstructionIfBranchListAST inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateInstructionIfBranchListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListAST * p = (cCollectionElement_templateInstructionIfBranchListAST *) attributes.ptr () ;
  GALGAS_templateExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
    result = p->mObject.mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionIfBranchListAST::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListAST * p = (cCollectionElement_templateInstructionIfBranchListAST *) attributes.ptr () ;
  GALGAS_templateInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
    result = p->mObject.mAttribute_mInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateInstructionIfBranchListAST::cEnumerator_templateInstructionIfBranchListAST (const GALGAS_templateInstructionIfBranchListAST & inEnumeratedObject,
                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST_2D_element cEnumerator_templateInstructionIfBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListAST * p = (const cCollectionElement_templateInstructionIfBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cEnumerator_templateInstructionIfBranchListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListAST * p = (const cCollectionElement_templateInstructionIfBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
  return p->mObject.mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST cEnumerator_templateInstructionIfBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListAST * p = (const cCollectionElement_templateInstructionIfBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
  return p->mObject.mAttribute_mInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateInstructionIfBranchListAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST ("templateInstructionIfBranchListAST",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionIfBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionIfBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfBranchListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListAST result ;
  const GALGAS_templateInstructionIfBranchListAST * p = (const GALGAS_templateInstructionIfBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Class for element of '@templateInstructionSwitchBranchListAST' list                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_templateInstructionSwitchBranchListAST : public cCollectionElement {
  public : GALGAS_templateInstructionSwitchBranchListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_templateInstructionSwitchBranchListAST (const GALGAS_lstringlist & in_mConstantList,
                                                                      const GALGAS_templateInstructionListAST & in_mInstructionList
                                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_templateInstructionSwitchBranchListAST::cCollectionElement_templateInstructionSwitchBranchListAST (const GALGAS_lstringlist & in_mConstantList,
                                                                                                                      const GALGAS_templateInstructionListAST & in_mInstructionList
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantList, in_mInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_templateInstructionSwitchBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_templateInstructionSwitchBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionSwitchBranchListAST (mObject.mAttribute_mConstantList, mObject.mAttribute_mInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_templateInstructionSwitchBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantList" ":" ;
  mObject.mAttribute_mConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mAttribute_mInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_templateInstructionSwitchBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionSwitchBranchListAST * operand = (cCollectionElement_templateInstructionSwitchBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST::GALGAS_templateInstructionSwitchBranchListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST::GALGAS_templateInstructionSwitchBranchListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::constructor_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                                                                        const GALGAS_templateInstructionListAST & inOperand1
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionSwitchBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_lstringlist & in_mConstantList,
                                                                               const GALGAS_templateInstructionListAST & in_mInstructionList
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (in_mConstantList,
                                                                            in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListAST::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                                         const GALGAS_templateInstructionListAST & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListAST::modifier_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                                            const GALGAS_templateInstructionListAST inOperand1,
                                                                            const GALGAS_uint inInsertionIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListAST::modifier_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                                            GALGAS_templateInstructionListAST & outOperand1,
                                                                            const GALGAS_uint inRemoveIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
      outOperand0 = p->mObject.mAttribute_mConstantList ;
      outOperand1 = p->mObject.mAttribute_mInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListAST::modifier_popFirst (GALGAS_lstringlist & outOperand0,
                                                                       GALGAS_templateInstructionListAST & outOperand1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mConstantList ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListAST::modifier_popLast (GALGAS_lstringlist & outOperand0,
                                                                      GALGAS_templateInstructionListAST & outOperand1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mConstantList ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListAST::method_first (GALGAS_lstringlist & outOperand0,
                                                                  GALGAS_templateInstructionListAST & outOperand1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mConstantList ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListAST::method_last (GALGAS_lstringlist & outOperand0,
                                                                 GALGAS_templateInstructionListAST & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mConstantList ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::add_operation (const GALGAS_templateInstructionSwitchBranchListAST & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result = GALGAS_templateInstructionSwitchBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result = GALGAS_templateInstructionSwitchBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result = GALGAS_templateInstructionSwitchBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListAST::plusAssign_operation (const GALGAS_templateInstructionSwitchBranchListAST inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_templateInstructionSwitchBranchListAST::getter_mConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    result = p->mObject.mAttribute_mConstantList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionSwitchBranchListAST::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  GALGAS_templateInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    result = p->mObject.mAttribute_mInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateInstructionSwitchBranchListAST::cEnumerator_templateInstructionSwitchBranchListAST (const GALGAS_templateInstructionSwitchBranchListAST & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST_2D_element cEnumerator_templateInstructionSwitchBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_templateInstructionSwitchBranchListAST::current_mConstantList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mAttribute_mConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST cEnumerator_templateInstructionSwitchBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mAttribute_mInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @templateInstructionSwitchBranchListAST type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST ("templateInstructionSwitchBranchListAST",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionSwitchBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchBranchListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListAST result ;
  const GALGAS_templateInstructionSwitchBranchListAST * p = (const GALGAS_templateInstructionSwitchBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_expression_i0_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                 C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 31)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__7C_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 32)) ;
      GALGAS_templateExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightOperand ;
      nt_relation_5F_term_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_templateOrOperationAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("templateSyntax.galgas", 36)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 38)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__5E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 39)) ;
      GALGAS_templateExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightOperand ;
      nt_relation_5F_term_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_templateXorOperationAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("templateSyntax.galgas", 43)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_expression_i0_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__7C_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 32)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__5E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 39)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_relation_5F_term_i1_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                       C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_1 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 58)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__26_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 59)) ;
      GALGAS_templateExpressionAST var_leftOperand = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightOperand ;
      nt_relation_5F_factor_ (var_rightOperand, inCompiler) ;
      outArgument_outExpression = GALGAS_templateAndOperationAST::constructor_new (var_operatorLocation, var_leftOperand, var_rightOperand  COMMA_SOURCE_FILE ("templateSyntax.galgas", 63)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_relation_5F_term_i1_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__26_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 59)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_relation_5F_factor_i2_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                         C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_ (outArgument_outExpression, inCompiler) ;
  switch (select_templateSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 78)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 79)) ;
    GALGAS_templateExpressionAST var_leftExpression = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression ;
    nt_simple_5F_expression_ (var_rightExpression, inCompiler) ;
    outArgument_outExpression = GALGAS_templateEqualTestAST::constructor_new (var_operatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateSyntax.galgas", 83)) ;
  } break ;
  case 3: {
    GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 85)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__21__3D_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 86)) ;
    GALGAS_templateExpressionAST var_leftExpression = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression ;
    nt_simple_5F_expression_ (var_rightExpression, inCompiler) ;
    outArgument_outExpression = GALGAS_templateNonEqualTestAST::constructor_new (var_operatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateSyntax.galgas", 90)) ;
  } break ;
  case 4: {
    GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 92)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3C__3D_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 93)) ;
    GALGAS_templateExpressionAST var_leftExpression = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression ;
    nt_simple_5F_expression_ (var_rightExpression, inCompiler) ;
    outArgument_outExpression = GALGAS_templateInfOrEqualTestAST::constructor_new (var_operatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateSyntax.galgas", 97)) ;
  } break ;
  case 5: {
    GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 99)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 100)) ;
    GALGAS_templateExpressionAST var_leftExpression = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression ;
    nt_simple_5F_expression_ (var_rightExpression, inCompiler) ;
    outArgument_outExpression = GALGAS_templateSupOrEqualTestAST::constructor_new (var_operatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateSyntax.galgas", 104)) ;
  } break ;
  case 6: {
    GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 106)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 107)) ;
    GALGAS_templateExpressionAST var_leftExpression = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression ;
    nt_simple_5F_expression_ (var_rightExpression, inCompiler) ;
    outArgument_outExpression = GALGAS_templateStrictSupTestAST::constructor_new (var_operatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateSyntax.galgas", 111)) ;
  } break ;
  case 7: {
    GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 113)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3C_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 114)) ;
    GALGAS_templateExpressionAST var_leftExpression = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression ;
    nt_simple_5F_expression_ (var_rightExpression, inCompiler) ;
    outArgument_outExpression = GALGAS_templateStrictInfTestAST::constructor_new (var_operatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateSyntax.galgas", 118)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_relation_5F_factor_i2_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  nt_simple_5F_expression_parse (inCompiler) ;
  switch (select_templateSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 79)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__21__3D_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 86)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3C__3D_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 93)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 100)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 107)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3C_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 114)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_simple_5F_expression_i3_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                           C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 133)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3C__3C_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 134)) ;
      GALGAS_templateExpressionAST var_leftExpression = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression ;
      nt_term_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_templateLeftShiftOperationAST::constructor_new (var_operatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateSyntax.galgas", 138)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 140)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3E__3E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 141)) ;
      GALGAS_templateExpressionAST var_leftExpression = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression ;
      nt_term_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_templateRightShiftOperationAST::constructor_new (var_operatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateSyntax.galgas", 145)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 147)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2B_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 148)) ;
      GALGAS_templateExpressionAST var_leftExpression = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression ;
      nt_term_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_templateAddOperationAST::constructor_new (var_operatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateSyntax.galgas", 152)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2D_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 155)) ;
      GALGAS_templateExpressionAST var_leftExpression = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression ;
      nt_term_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_templateSubOperationAST::constructor_new (var_operatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateSyntax.galgas", 159)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_simple_5F_expression_i3_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  nt_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3C__3C_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 134)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3E__3E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 141)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2B_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 148)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2D_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 155)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_term_i4_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                           C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 174)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2A_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 175)) ;
      GALGAS_templateExpressionAST var_leftExpression = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression ;
      nt_factor_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_templateMultiplyOperationAST::constructor_new (var_operatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateSyntax.galgas", 179)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 181)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2F_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 182)) ;
      GALGAS_templateExpressionAST var_leftExpression = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression ;
      nt_factor_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_templateDivideOperationAST::constructor_new (var_operatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateSyntax.galgas", 186)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 188)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_mod) COMMA_SOURCE_FILE ("templateSyntax.galgas", 189)) ;
      GALGAS_templateExpressionAST var_leftExpression = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression ;
      nt_factor_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_templateModuloOperationAST::constructor_new (var_operatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateSyntax.galgas", 193)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_term_i4_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  nt_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2A_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 175)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2F_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 182)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_mod) COMMA_SOURCE_FILE ("templateSyntax.galgas", 189)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i5_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                             C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 208)) ;
      GALGAS_lstring var_structFieldName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 209)) ;
      outArgument_outExpression = GALGAS_structFieldAccessTemplateExpressionAST::constructor_new (var_structFieldName.mAttribute_location, outArgument_outExpression, var_structFieldName  COMMA_SOURCE_FILE ("templateSyntax.galgas", 210)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i5_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 208)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 209)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i6_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                             C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 222)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2D_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 223)) ;
  GALGAS_templateExpressionAST var_expression ;
  nt_factor_ (var_expression, inCompiler) ;
  outArgument_outExpression = GALGAS_templateUnaryMinusOperationAST::constructor_new (var_operatorLocation, var_expression  COMMA_SOURCE_FILE ("templateSyntax.galgas", 226)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i6_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2D_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 223)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i7_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                             C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 237)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_not) COMMA_SOURCE_FILE ("templateSyntax.galgas", 238)) ;
  GALGAS_templateExpressionAST var_ifCondition ;
  nt_factor_ (var_ifCondition, inCompiler) ;
  outArgument_outExpression = GALGAS_templateNotOperatorAST::constructor_new (var_operatorLocation, var_ifCondition  COMMA_SOURCE_FILE ("templateSyntax.galgas", 241)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i7_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_not) COMMA_SOURCE_FILE ("templateSyntax.galgas", 238)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i8_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                             C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 252)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__7E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 253)) ;
  GALGAS_templateExpressionAST var_ifCondition ;
  nt_factor_ (var_ifCondition, inCompiler) ;
  outArgument_outExpression = GALGAS_templateLogicalNegateAST::constructor_new (var_operatorLocation, var_ifCondition  COMMA_SOURCE_FILE ("templateSyntax.galgas", 256)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i8_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__7E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 253)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i9_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                              C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_identifier = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 267)) ;
  outArgument_outExpression = GALGAS_templateVarInExpressionAST::constructor_new (var_identifier  COMMA_SOURCE_FILE ("templateSyntax.galgas", 268)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i9_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 267)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i10_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__28_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 279)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__29_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 281)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i10_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__28_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 279)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__29_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 281)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i11_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_true) COMMA_SOURCE_FILE ("templateSyntax.galgas", 292)) ;
  outArgument_outExpression = GALGAS_templateTrueBoolAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 293))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 293)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i11_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_true) COMMA_SOURCE_FILE ("templateSyntax.galgas", 292)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i12_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_false) COMMA_SOURCE_FILE ("templateSyntax.galgas", 304)) ;
  outArgument_outExpression = GALGAS_templateFalseBoolAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 305))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 305)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i12_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_false) COMMA_SOURCE_FILE ("templateSyntax.galgas", 304)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i13_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint var_literalInt ;
  var_literalInt = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("templateSyntax.galgas", 317)) ;
  outArgument_outExpression = GALGAS_templateLiteralUIntExpressionAST::constructor_new (var_literalInt  COMMA_SOURCE_FILE ("templateSyntax.galgas", 318)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i13_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("templateSyntax.galgas", 317)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i14_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint var_literalInt ;
  var_literalInt = inCompiler->synthetizedAttribute_sint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_signed_5F_literal_5F_integer) COMMA_SOURCE_FILE ("templateSyntax.galgas", 330)) ;
  outArgument_outExpression = GALGAS_templateLiteralSIntExpressionAST::constructor_new (var_literalInt  COMMA_SOURCE_FILE ("templateSyntax.galgas", 331)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i14_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_signed_5F_literal_5F_integer) COMMA_SOURCE_FILE ("templateSyntax.galgas", 330)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i15_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint_36__34_ var_literalInt ;
  var_literalInt = inCompiler->synthetizedAttribute_uint_36__34_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_unsigned_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 343)) ;
  outArgument_outExpression = GALGAS_templateLiteralUInt_36__34_ExpressionAST::constructor_new (var_literalInt  COMMA_SOURCE_FILE ("templateSyntax.galgas", 344)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i15_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_unsigned_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 343)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i16_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint_36__34_ var_literalInt ;
  var_literalInt = inCompiler->synthetizedAttribute_sint_36__34_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_signed_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 356)) ;
  outArgument_outExpression = GALGAS_templateLiteralSInt_36__34_ExpressionAST::constructor_new (var_literalInt  COMMA_SOURCE_FILE ("templateSyntax.galgas", 357)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i16_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_signed_5F_literal_5F_integer_36__34_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 356)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i17_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalDouble ;
  var_literalDouble = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_literal_5F_double) COMMA_SOURCE_FILE ("templateSyntax.galgas", 369)) ;
  outArgument_outExpression = GALGAS_templateLiteralDoubleExpressionAST::constructor_new (var_literalDouble  COMMA_SOURCE_FILE ("templateSyntax.galgas", 370)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i17_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_literal_5F_double) COMMA_SOURCE_FILE ("templateSyntax.galgas", 369)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i18_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("templateSyntax.galgas", 381)) ;
  outArgument_outExpression = GALGAS_templateLiteralCharExpressionAST::constructor_new (var_literalChar  COMMA_SOURCE_FILE ("templateSyntax.galgas", 382)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i18_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("templateSyntax.galgas", 381)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i19_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_stringlist var_literalStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 393)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString ;
    var_literalString = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("templateSyntax.galgas", 396)) ;
    var_literalStringList.addAssign_operation (var_literalString.getter_string (SOURCE_FILE ("templateSyntax.galgas", 397))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 397)) ;
    switch (select_templateSyntax_6 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outExpression = GALGAS_templateLiteralStringExpressionAST::constructor_new (var_literalStringList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 400))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 400)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i19_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("templateSyntax.galgas", 396)) ;
    switch (select_templateSyntax_6 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i20_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__5B_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 417)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_template) COMMA_SOURCE_FILE ("templateSyntax.galgas", 420)) ;
    GALGAS_templateExpressionAST var_receiverExpression ;
    nt_expression_ (var_receiverExpression, inCompiler) ;
    GALGAS_lstring var_templateName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 423)) ;
    GALGAS_templateExpressionListAST var_expressionList ;
    nt_output_5F_expression_5F_list_ (var_expressionList, inCompiler) ;
    outArgument_outExpression = GALGAS_templateCategoryTemplateCallAST::constructor_new (var_receiverExpression, var_templateName, var_expressionList  COMMA_SOURCE_FILE ("templateSyntax.galgas", 426)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("templateSyntax.galgas", 431)) ;
    GALGAS_lstring var_constructorName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 432)) ;
    GALGAS_templateExpressionListAST var_expressionList ;
    nt_output_5F_expression_5F_list_ (var_expressionList, inCompiler) ;
    outArgument_outExpression = GALGAS_templateConstructorAST::constructor_new (var_typeName, var_constructorName, var_expressionList  COMMA_SOURCE_FILE ("templateSyntax.galgas", 434)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_filewrapper) COMMA_SOURCE_FILE ("templateSyntax.galgas", 439)) ;
    GALGAS_lstring var_filewrapperName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 440)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 441)) ;
    GALGAS_lstring var_templateName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 442)) ;
    GALGAS_templateExpressionListAST var_expressionList ;
    nt_output_5F_expression_5F_list_ (var_expressionList, inCompiler) ;
    outArgument_outExpression = GALGAS_templateFileWrapperTemplateCallAST::constructor_new (var_filewrapperName, var_templateName, var_expressionList  COMMA_SOURCE_FILE ("templateSyntax.galgas", 445)) ;
  } break ;
  case 4: {
    GALGAS_templateExpressionAST var_receiverExpression ;
    nt_expression_ (var_receiverExpression, inCompiler) ;
    GALGAS_lstring var_getterName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 449)) ;
    GALGAS_templateExpressionListAST var_expressionList ;
    nt_output_5F_expression_5F_list_ (var_expressionList, inCompiler) ;
    outArgument_outExpression = GALGAS_templateGetterCallInExpressionAST::constructor_new (var_receiverExpression, var_getterName, var_expressionList  COMMA_SOURCE_FILE ("templateSyntax.galgas", 452)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_option) COMMA_SOURCE_FILE ("templateSyntax.galgas", 457)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 459)) ;
      GALGAS_lstring var_optionName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 460)) ;
      GALGAS_lstring var_getterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 461)) ;
      outArgument_outExpression = GALGAS_templateOptionAccessAST::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("galgas_builtin_options"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 462))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 462)), var_optionName, var_getterName  COMMA_SOURCE_FILE ("templateSyntax.galgas", 462)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_optionComponentName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 464)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 465)) ;
      GALGAS_lstring var_optionName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 466)) ;
      GALGAS_lstring var_getterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 467)) ;
      outArgument_outExpression = GALGAS_templateOptionAccessAST::constructor_new (var_optionComponentName, var_optionName, var_getterName  COMMA_SOURCE_FILE ("templateSyntax.galgas", 468)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__5D_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 471)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i20_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__5B_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 417)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_template) COMMA_SOURCE_FILE ("templateSyntax.galgas", 420)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 423)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("templateSyntax.galgas", 431)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 432)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_filewrapper) COMMA_SOURCE_FILE ("templateSyntax.galgas", 439)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 440)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 441)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 442)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
  } break ;
  case 4: {
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 449)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_option) COMMA_SOURCE_FILE ("templateSyntax.galgas", 457)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 459)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 460)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 461)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 464)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 465)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 466)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 467)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__5D_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 471)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i21_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 483)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__28_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 484)) ;
  GALGAS_templateExpressionListAST var_expressionList ;
  nt_output_5F_expression_5F_list_ (var_expressionList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__29_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 486)) ;
  outArgument_outExpression = GALGAS_templateFunctionCallAST::constructor_new (var_functionName, var_expressionList  COMMA_SOURCE_FILE ("templateSyntax.galgas", 487)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i21_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 483)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__28_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 484)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__29_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 486)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_i22_ (GALGAS_templateExpressionListAST & outArgument_outExpressionList,
                                                                                    C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_templateExpressionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 498)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_9 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__21_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 501)) ;
      GALGAS_templateExpressionAST var_expression ;
      nt_expression_ (var_expression, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector, var_expression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 504))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 504)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_i22_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__21_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 501)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i23_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__21_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 516)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (var_selector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the selector should be '!'")  COMMA_SOURCE_FILE ("templateSyntax.galgas", 518)) ;
  }
  GALGAS_templateExpressionAST var_expression ;
  nt_expression_ (var_expression, inCompiler) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionAST::constructor_new (var_expression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 521))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 521))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 521)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i23_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__21_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 516)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3F__5E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 528)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationAST::constructor_new (SOURCE_FILE ("templateSyntax.galgas", 529))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 529)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3F__5E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 528)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__21__5E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 536)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationAST::constructor_new (SOURCE_FILE ("templateSyntax.galgas", 537))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 537)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__21__5E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 536)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i26_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_block) COMMA_SOURCE_FILE ("templateSyntax.galgas", 544)) ;
  GALGAS_templateExpressionAST var_expression ;
  nt_expression_ (var_expression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3A_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 547)) ;
  GALGAS_templateInstructionListAST var_blockInstructionList = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 549)) ;
  {
  routine_enterTemplateString (var_blockInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 550)) ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_10 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_ (var_blockInstructionList, inCompiler) ;
      {
      routine_enterTemplateString (var_blockInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 554)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_end) COMMA_SOURCE_FILE ("templateSyntax.galgas", 557)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateBlockInstructionAST::constructor_new (var_expression, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 560)), var_blockInstructionList  COMMA_SOURCE_FILE ("templateSyntax.galgas", 558))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 558)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i26_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_block) COMMA_SOURCE_FILE ("templateSyntax.galgas", 544)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3A_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 547)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_10 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_end) COMMA_SOURCE_FILE ("templateSyntax.galgas", 557)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i27_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_for) COMMA_SOURCE_FILE ("templateSyntax.galgas", 568)) ;
  GALGAS_bool var_ascending ;
  switch (select_templateSyntax_11 (inCompiler)) {
  case 1: {
    var_ascending = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3C_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 573)) ;
    var_ascending = GALGAS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 576)) ;
    var_ascending = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__28_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 579)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__29_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 580)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_in) COMMA_SOURCE_FILE ("templateSyntax.galgas", 581)) ;
  GALGAS_templateExpressionAST var_expression ;
  nt_expression_ (var_expression, inCompiler) ;
  GALGAS_string var_foreachPrefix ;
  switch (select_templateSyntax_12 (inCompiler)) {
  case 1: {
    var_foreachPrefix = GALGAS_string::makeEmptyString () ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3A_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 587)) ;
    GALGAS_lstring var_prefixString = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 588)) ;
    var_foreachPrefix = var_prefixString.getter_string (SOURCE_FILE ("templateSyntax.galgas", 589)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_templateInstructionListAST var_beforeInstructionList = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 592)) ;
  switch (select_templateSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_before) COMMA_SOURCE_FILE ("templateSyntax.galgas", 595)) ;
    {
    routine_enterTemplateString (var_beforeInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 596)) ;
    }
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_templateSyntax_14 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_ (var_beforeInstructionList, inCompiler) ;
        {
        routine_enterTemplateString (var_beforeInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 600)) ;
        }
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_do) COMMA_SOURCE_FILE ("templateSyntax.galgas", 604)) ;
  GALGAS_lstring var_indexIdentifier ;
  switch (select_templateSyntax_15 (inCompiler)) {
  case 1: {
    var_indexIdentifier = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 607))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 607)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_index) COMMA_SOURCE_FILE ("templateSyntax.galgas", 609)) ;
    var_indexIdentifier = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 610)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_templateInstructionListAST var_doInstructionList = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 612)) ;
  {
  routine_enterTemplateString (var_doInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 613)) ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_templateSyntax_16 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_ (var_doInstructionList, inCompiler) ;
      {
      routine_enterTemplateString (var_doInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 617)) ;
      }
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  GALGAS_templateInstructionListAST var_betweenInstructionList = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 620)) ;
  switch (select_templateSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_between) COMMA_SOURCE_FILE ("templateSyntax.galgas", 623)) ;
    {
    routine_enterTemplateString (var_betweenInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 624)) ;
    }
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_templateSyntax_18 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_ (var_betweenInstructionList, inCompiler) ;
        {
        routine_enterTemplateString (var_betweenInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 628)) ;
        }
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_templateInstructionListAST var_afterInstructionList = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 632)) ;
  switch (select_templateSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_after) COMMA_SOURCE_FILE ("templateSyntax.galgas", 635)) ;
    {
    routine_enterTemplateString (var_afterInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 636)) ;
    }
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      switch (select_templateSyntax_20 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_ (var_beforeInstructionList, inCompiler) ;
        {
        routine_enterTemplateString (var_afterInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 640)) ;
        }
      } break ;
      default:
        repeatFlag_3 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_end) COMMA_SOURCE_FILE ("templateSyntax.galgas", 644)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionForeachAST::constructor_new (var_ascending, var_expression, var_foreachPrefix, var_beforeInstructionList, var_doInstructionList, var_indexIdentifier, var_betweenInstructionList, var_afterInstructionList  COMMA_SOURCE_FILE ("templateSyntax.galgas", 645))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 645)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i27_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_for) COMMA_SOURCE_FILE ("templateSyntax.galgas", 568)) ;
  switch (select_templateSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3C_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 573)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3E_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 576)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__28_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 579)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__29_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 580)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_in) COMMA_SOURCE_FILE ("templateSyntax.galgas", 581)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_templateSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3A_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 587)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 588)) ;
  } break ;
  default:
    break ;
  }
  switch (select_templateSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_before) COMMA_SOURCE_FILE ("templateSyntax.galgas", 595)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_templateSyntax_14 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_do) COMMA_SOURCE_FILE ("templateSyntax.galgas", 604)) ;
  switch (select_templateSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_index) COMMA_SOURCE_FILE ("templateSyntax.galgas", 609)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 610)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_templateSyntax_16 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  switch (select_templateSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_between) COMMA_SOURCE_FILE ("templateSyntax.galgas", 623)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_templateSyntax_18 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_templateSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_after) COMMA_SOURCE_FILE ("templateSyntax.galgas", 635)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      switch (select_templateSyntax_20 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_3 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_end) COMMA_SOURCE_FILE ("templateSyntax.galgas", 644)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i28_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_if) COMMA_SOURCE_FILE ("templateSyntax.galgas", 660)) ;
  GALGAS_templateInstructionIfBranchListAST var_templateInstructionIfBranchList = GALGAS_templateInstructionIfBranchListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 661)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_templateExpressionAST var_expression ;
    nt_expression_ (var_expression, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_then) COMMA_SOURCE_FILE ("templateSyntax.galgas", 665)) ;
    GALGAS_templateInstructionListAST var_instructionList = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 666)) ;
    {
    routine_enterTemplateString (var_instructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 667)) ;
    }
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_22 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_ (var_instructionList, inCompiler) ;
        {
        routine_enterTemplateString (var_instructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 671)) ;
        }
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    var_templateInstructionIfBranchList.addAssign_operation (var_expression, var_instructionList  COMMA_SOURCE_FILE ("templateSyntax.galgas", 673)) ;
    switch (select_templateSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_elsif) COMMA_SOURCE_FILE ("templateSyntax.galgas", 675)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_templateInstructionListAST var_elseInstructionList = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 678)) ;
  switch (select_templateSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_else) COMMA_SOURCE_FILE ("templateSyntax.galgas", 681)) ;
    {
    routine_enterTemplateString (var_elseInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 682)) ;
    }
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_templateSyntax_24 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_ (var_elseInstructionList, inCompiler) ;
        {
        routine_enterTemplateString (var_elseInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 686)) ;
        }
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_end) COMMA_SOURCE_FILE ("templateSyntax.galgas", 690)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionIfAST::constructor_new (var_templateInstructionIfBranchList, var_elseInstructionList  COMMA_SOURCE_FILE ("templateSyntax.galgas", 691))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 691)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i28_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_if) COMMA_SOURCE_FILE ("templateSyntax.galgas", 660)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_then) COMMA_SOURCE_FILE ("templateSyntax.galgas", 665)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_22 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_templateSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_elsif) COMMA_SOURCE_FILE ("templateSyntax.galgas", 675)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_templateSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_else) COMMA_SOURCE_FILE ("templateSyntax.galgas", 681)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_templateSyntax_24 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_end) COMMA_SOURCE_FILE ("templateSyntax.galgas", 690)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i29_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_switch) COMMA_SOURCE_FILE ("templateSyntax.galgas", 700)) ;
  GALGAS_templateExpressionAST var_switchExpression ;
  nt_expression_ (var_switchExpression, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 703)) ;
  GALGAS_templateInstructionSwitchBranchListAST var_templateInstructionSwitchBranchList = GALGAS_templateInstructionSwitchBranchListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 705)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_case) COMMA_SOURCE_FILE ("templateSyntax.galgas", 708)) ;
      GALGAS_lstringlist var_constantList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 709)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_constantName = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 711)) ;
        var_constantList.addAssign_operation (var_constantName  COMMA_SOURCE_FILE ("templateSyntax.galgas", 712)) ;
        switch (select_templateSyntax_26 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2C_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 714)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3A_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 716)) ;
      GALGAS_templateInstructionListAST var_instructionList = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 717)) ;
      {
      routine_enterTemplateString (var_instructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 718)) ;
      }
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_templateSyntax_27 (inCompiler)) {
        case 2: {
          nt_template_5F_instruction_ (var_instructionList, inCompiler) ;
          {
          routine_enterTemplateString (var_instructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 722)) ;
          }
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      var_templateInstructionSwitchBranchList.addAssign_operation (var_constantList, var_instructionList  COMMA_SOURCE_FILE ("templateSyntax.galgas", 724)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_end) COMMA_SOURCE_FILE ("templateSyntax.galgas", 727)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchAST::constructor_new (var_switchExpression, var_endOfSwitchExpression, var_templateInstructionSwitchBranchList  COMMA_SOURCE_FILE ("templateSyntax.galgas", 728))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 728)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i29_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_switch) COMMA_SOURCE_FILE ("templateSyntax.galgas", 700)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_case) COMMA_SOURCE_FILE ("templateSyntax.galgas", 708)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_identifier) COMMA_SOURCE_FILE ("templateSyntax.galgas", 711)) ;
        switch (select_templateSyntax_26 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__2C_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 714)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken__3A_) COMMA_SOURCE_FILE ("templateSyntax.galgas", 716)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_templateSyntax_27 (inCompiler)) {
        case 2: {
          nt_template_5F_instruction_parse (inCompiler) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgasTemplateScanner::kToken_end) COMMA_SOURCE_FILE ("templateSyntax.galgas", 727)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i30_ (GALGAS_templateInstructionListAST & outArgument_outResultingInstructionList,
                                                                                             C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outResultingInstructionList.drop () ; // Release 'out' argument
  outArgument_outResultingInstructionList = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 738)) ;
  {
  routine_enterTemplateString (outArgument_outResultingInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 739)) ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_28 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_ (outArgument_outResultingInstructionList, inCompiler) ;
      {
      routine_enterTemplateString (outArgument_outResultingInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 744)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i30_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_28 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@templateInstructionListForGeneration' list                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_templateInstructionListForGeneration : public cCollectionElement {
  public : GALGAS_templateInstructionListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_templateInstructionListForGeneration (const GALGAS_templateInstructionForGeneration & in_mInstruction
                                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_templateInstructionListForGeneration::cCollectionElement_templateInstructionListForGeneration (const GALGAS_templateInstructionForGeneration & in_mInstruction
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_templateInstructionListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_templateInstructionListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionListForGeneration (mObject.mAttribute_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_templateInstructionListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mAttribute_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_templateInstructionListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionListForGeneration * operand = (cCollectionElement_templateInstructionListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration::GALGAS_templateInstructionListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration::GALGAS_templateInstructionListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_templateInstructionListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::constructor_listWithValue (const GALGAS_templateInstructionForGeneration & inOperand0
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionListForGeneration result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_templateInstructionForGeneration & in_mInstruction
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListForGeneration::addAssign_operation (const GALGAS_templateInstructionForGeneration & inOperand0
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListForGeneration::modifier_insertAtIndex (const GALGAS_templateInstructionForGeneration inOperand0,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListForGeneration::modifier_removeAtIndex (GALGAS_templateInstructionForGeneration & outOperand0,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListForGeneration::modifier_popFirst (GALGAS_templateInstructionForGeneration & outOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListForGeneration::modifier_popLast (GALGAS_templateInstructionForGeneration & outOperand0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListForGeneration::method_first (GALGAS_templateInstructionForGeneration & outOperand0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListForGeneration::method_last (GALGAS_templateInstructionForGeneration & outOperand0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::add_operation (const GALGAS_templateInstructionListForGeneration & inOperand,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result = GALGAS_templateInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result = GALGAS_templateInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result = GALGAS_templateInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListForGeneration::plusAssign_operation (const GALGAS_templateInstructionListForGeneration inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForGeneration GALGAS_templateInstructionListForGeneration::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  GALGAS_templateInstructionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    result = p->mObject.mAttribute_mInstruction ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateInstructionListForGeneration::cEnumerator_templateInstructionListForGeneration (const GALGAS_templateInstructionListForGeneration & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration_2D_element cEnumerator_templateInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionListForGeneration * p = (const cCollectionElement_templateInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForGeneration cEnumerator_templateInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionListForGeneration * p = (const cCollectionElement_templateInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
  return p->mObject.mAttribute_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @templateInstructionListForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionListForGeneration ("templateInstructionListForGeneration",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionListForGeneration result ;
  const GALGAS_templateInstructionListForGeneration * p = (const GALGAS_templateInstructionListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Class for element of '@templateInstructionIfBranchListForGeneration' list                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_templateInstructionIfBranchListForGeneration : public cCollectionElement {
  public : GALGAS_templateInstructionIfBranchListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_templateInstructionIfBranchListForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                            const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_templateInstructionIfBranchListForGeneration::cCollectionElement_templateInstructionIfBranchListForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                                                                  const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_templateInstructionIfBranchListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_templateInstructionIfBranchListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionIfBranchListForGeneration (mObject.mAttribute_mExpression, mObject.mAttribute_mInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_templateInstructionIfBranchListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mAttribute_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mAttribute_mInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_templateInstructionIfBranchListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionIfBranchListForGeneration * operand = (cCollectionElement_templateInstructionIfBranchListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration::GALGAS_templateInstructionIfBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration::GALGAS_templateInstructionIfBranchListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::constructor_listWithValue (const GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                                                    const GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionIfBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                     const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_templateInstructionIfBranchListForGeneration (in_mExpression,
                                                                                  in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListForGeneration::addAssign_operation (const GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                               const GALGAS_templateInstructionListForGeneration & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionIfBranchListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListForGeneration::modifier_insertAtIndex (const GALGAS_semanticExpressionForGeneration inOperand0,
                                                                                  const GALGAS_templateInstructionListForGeneration inOperand1,
                                                                                  const GALGAS_uint inInsertionIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionIfBranchListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListForGeneration::modifier_removeAtIndex (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                                  GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                                  const GALGAS_uint inRemoveIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mExpression ;
      outOperand1 = p->mObject.mAttribute_mInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListForGeneration::modifier_popFirst (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                             GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListForGeneration::modifier_popLast (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                            GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListForGeneration::method_first (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                        GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListForGeneration::method_last (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                       GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::add_operation (const GALGAS_templateInstructionIfBranchListForGeneration & inOperand,
                                                                                                                        C_Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListForGeneration result = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListForGeneration result = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListForGeneration result = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListForGeneration::plusAssign_operation (const GALGAS_templateInstructionIfBranchListForGeneration inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionIfBranchListForGeneration::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    result = p->mObject.mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                 C_Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    result = p->mObject.mAttribute_mInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateInstructionIfBranchListForGeneration::cEnumerator_templateInstructionIfBranchListForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration_2D_element cEnumerator_templateInstructionIfBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListForGeneration * p = (const cCollectionElement_templateInstructionIfBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cEnumerator_templateInstructionIfBranchListForGeneration::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListForGeneration * p = (const cCollectionElement_templateInstructionIfBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return p->mObject.mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration cEnumerator_templateInstructionIfBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListForGeneration * p = (const cCollectionElement_templateInstructionIfBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return p->mObject.mAttribute_mInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @templateInstructionIfBranchListForGeneration type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration ("templateInstructionIfBranchListForGeneration",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionIfBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionIfBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfBranchListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListForGeneration result ;
  const GALGAS_templateInstructionIfBranchListForGeneration * p = (const GALGAS_templateInstructionIfBranchListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfBranchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfBranchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Class for element of '@templateInstructionSwitchBranchListForGeneration' list                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_templateInstructionSwitchBranchListForGeneration : public cCollectionElement {
  public : GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GALGAS_lstringlist & in_mConstantList,
                                                                                const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_templateInstructionSwitchBranchListForGeneration::cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GALGAS_lstringlist & in_mConstantList,
                                                                                                                                          const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantList, in_mInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_templateInstructionSwitchBranchListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_templateInstructionSwitchBranchListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionSwitchBranchListForGeneration (mObject.mAttribute_mConstantList, mObject.mAttribute_mInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_templateInstructionSwitchBranchListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantList" ":" ;
  mObject.mAttribute_mConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mAttribute_mInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_templateInstructionSwitchBranchListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * operand = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration::GALGAS_templateInstructionSwitchBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration::GALGAS_templateInstructionSwitchBranchListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                                                                                            const GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionSwitchBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                         const GALGAS_lstringlist & in_mConstantList,
                                                                                         const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (in_mConstantList,
                                                                                      in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                                                   const GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::modifier_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                                                      const GALGAS_templateInstructionListForGeneration inOperand1,
                                                                                      const GALGAS_uint inInsertionIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::modifier_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                                                      GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                                      const GALGAS_uint inRemoveIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mConstantList ;
      outOperand1 = p->mObject.mAttribute_mInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::modifier_popFirst (GALGAS_lstringlist & outOperand0,
                                                                                 GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mConstantList ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::modifier_popLast (GALGAS_lstringlist & outOperand0,
                                                                                GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mConstantList ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::method_first (GALGAS_lstringlist & outOperand0,
                                                                            GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mConstantList ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::method_last (GALGAS_lstringlist & outOperand0,
                                                                           GALGAS_templateInstructionListForGeneration & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mConstantList ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::add_operation (const GALGAS_templateInstructionSwitchBranchListForGeneration & inOperand,
                                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration::plusAssign_operation (const GALGAS_templateInstructionSwitchBranchListForGeneration inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_templateInstructionSwitchBranchListForGeneration::getter_mConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mAttribute_mConstantList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mAttribute_mInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateInstructionSwitchBranchListForGeneration::cEnumerator_templateInstructionSwitchBranchListForGeneration (const GALGAS_templateInstructionSwitchBranchListForGeneration & inEnumeratedObject,
                                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element cEnumerator_templateInstructionSwitchBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_templateInstructionSwitchBranchListForGeneration::current_mConstantList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mAttribute_mConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration cEnumerator_templateInstructionSwitchBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mAttribute_mInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @templateInstructionSwitchBranchListForGeneration type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration ("templateInstructionSwitchBranchListForGeneration",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionSwitchBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchBranchListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  const GALGAS_templateInstructionSwitchBranchListForGeneration * p = (const GALGAS_templateInstructionSwitchBranchListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchBranchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_templateVariableMap::cMapElement_templateVariableMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                                  const GALGAS_string & in_mCppName
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mTypeProxy (in_mTypeProxy),
mAttribute_mCppName (in_mCppName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_templateVariableMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTypeProxy.isValid () && mAttribute_mCppName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_templateVariableMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_templateVariableMap (mAttribute_lkey, mAttribute_mTypeProxy, mAttribute_mCppName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_templateVariableMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeProxy" ":" ;
  mAttribute_mTypeProxy.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCppName" ":" ;
  mAttribute_mCppName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_templateVariableMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_templateVariableMap * operand = (cMapElement_templateVariableMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeProxy.objectCompare (operand->mAttribute_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCppName.objectCompare (operand->mAttribute_mCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap::GALGAS_templateVariableMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap::GALGAS_templateVariableMap (const GALGAS_templateVariableMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap & GALGAS_templateVariableMap::operator = (const GALGAS_templateVariableMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap GALGAS_templateVariableMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_templateVariableMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap GALGAS_templateVariableMap::constructor_mapWithMapToOverride (const GALGAS_templateVariableMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_templateVariableMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap GALGAS_templateVariableMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_templateVariableMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateVariableMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                                      const GALGAS_string & inArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_templateVariableMap * p = NULL ;
  macroMyNew (p, cMapElement_templateVariableMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@templateVariableMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateVariableMap::modifier_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                     GALGAS_string inArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_templateVariableMap * p = NULL ;
  macroMyNew (p, cMapElement_templateVariableMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' variable is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_templateVariableMap_searchKey = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateVariableMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   GALGAS_string & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_templateVariableMap_searchKey
                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    outArgument0 = p->mAttribute_mTypeProxy ;
    outArgument1 = p->mAttribute_mCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_templateVariableMap::getter_mTypeProxyForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    result = p->mAttribute_mTypeProxy ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_templateVariableMap::getter_mCppNameForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    result = p->mAttribute_mCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateVariableMap::modifier_setMTypeProxyForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_templateVariableMap * p = (cMapElement_templateVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    p->mAttribute_mTypeProxy = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateVariableMap::modifier_setMCppNameForKey (GALGAS_string inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_templateVariableMap * p = (cMapElement_templateVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    p->mAttribute_mCppName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_templateVariableMap * GALGAS_templateVariableMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_templateVariableMap * result = (cMapElement_templateVariableMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_templateVariableMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateVariableMap::cEnumerator_templateVariableMap (const GALGAS_templateVariableMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap_2D_element cEnumerator_templateVariableMap::current (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return GALGAS_templateVariableMap_2D_element (p->mAttribute_lkey, p->mAttribute_mTypeProxy, p->mAttribute_mCppName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateVariableMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_templateVariableMap::current_mTypeProxy (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return p->mAttribute_mTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_templateVariableMap::current_mCppName (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return p->mAttribute_mCppName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @templateVariableMap type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateVariableMap ("templateVariableMap",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateVariableMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVariableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateVariableMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateVariableMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap GALGAS_templateVariableMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateVariableMap result ;
  const GALGAS_templateVariableMap * p = (const GALGAS_templateVariableMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateVariableMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVariableMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@lexicalInstructionListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalInstructionListAST : public cCollectionElement {
  public : GALGAS_lexicalInstructionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionAST & in_mInstruction
                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_lexicalInstructionListAST::cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionAST & in_mInstruction
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalInstructionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalInstructionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalInstructionListAST (mObject.mAttribute_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalInstructionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mAttribute_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalInstructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalInstructionListAST * operand = (cCollectionElement_lexicalInstructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalInstructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST::GALGAS_lexicalInstructionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST::GALGAS_lexicalInstructionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::constructor_listWithValue (const GALGAS_lexicalInstructionAST & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalInstructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lexicalInstructionAST & in_mInstruction
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalInstructionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::addAssign_operation (const GALGAS_lexicalInstructionAST & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::modifier_insertAtIndex (const GALGAS_lexicalInstructionAST inOperand0,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::modifier_removeAtIndex (GALGAS_lexicalInstructionAST & outOperand0,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
      outOperand0 = p->mObject.mAttribute_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::modifier_popFirst (GALGAS_lexicalInstructionAST & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::modifier_popLast (GALGAS_lexicalInstructionAST & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::method_first (GALGAS_lexicalInstructionAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::method_last (GALGAS_lexicalInstructionAST & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::add_operation (const GALGAS_lexicalInstructionListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::plusAssign_operation (const GALGAS_lexicalInstructionListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalInstructionListAST::cEnumerator_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST_2D_element cEnumerator_lexicalInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionAST cEnumerator_lexicalInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject.mAttribute_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalInstructionListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionListAST ("lexicalInstructionListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalInstructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST result ;
  const GALGAS_lexicalInstructionListAST * p = (const GALGAS_lexicalInstructionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalInstructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@metamodelTemplateDelimitorListAST' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_metamodelTemplateDelimitorListAST : public cCollectionElement {
  public : GALGAS_metamodelTemplateDelimitorListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_metamodelTemplateDelimitorListAST (const GALGAS_lstring & in_mStartString,
                                                                 const GALGAS_lstringlist & in_mOptionList,
                                                                 const GALGAS_lstring & in_mEndString
                                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_metamodelTemplateDelimitorListAST::cCollectionElement_metamodelTemplateDelimitorListAST (const GALGAS_lstring & in_mStartString,
                                                                                                            const GALGAS_lstringlist & in_mOptionList,
                                                                                                            const GALGAS_lstring & in_mEndString
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartString, in_mOptionList, in_mEndString) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_metamodelTemplateDelimitorListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_metamodelTemplateDelimitorListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_metamodelTemplateDelimitorListAST (mObject.mAttribute_mStartString, mObject.mAttribute_mOptionList, mObject.mAttribute_mEndString COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_metamodelTemplateDelimitorListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStartString" ":" ;
  mObject.mAttribute_mStartString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionList" ":" ;
  mObject.mAttribute_mOptionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndString" ":" ;
  mObject.mAttribute_mEndString.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_metamodelTemplateDelimitorListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_metamodelTemplateDelimitorListAST * operand = (cCollectionElement_metamodelTemplateDelimitorListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST::GALGAS_metamodelTemplateDelimitorListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST::GALGAS_metamodelTemplateDelimitorListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstringlist & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_metamodelTemplateDelimitorListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mStartString,
                                                                          const GALGAS_lstringlist & in_mOptionList,
                                                                          const GALGAS_lstring & in_mEndString
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_metamodelTemplateDelimitorListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_metamodelTemplateDelimitorListAST (in_mStartString,
                                                                       in_mOptionList,
                                                                       in_mEndString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstringlist & inOperand1,
                                                                    const GALGAS_lstring & inOperand2
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_metamodelTemplateDelimitorListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                       const GALGAS_lstringlist inOperand1,
                                                                       const GALGAS_lstring inOperand2,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_metamodelTemplateDelimitorListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                       GALGAS_lstringlist & outOperand1,
                                                                       GALGAS_lstring & outOperand2,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
      outOperand0 = p->mObject.mAttribute_mStartString ;
      outOperand1 = p->mObject.mAttribute_mOptionList ;
      outOperand2 = p->mObject.mAttribute_mEndString ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                                  GALGAS_lstringlist & outOperand1,
                                                                  GALGAS_lstring & outOperand2,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mOptionList ;
    outOperand2 = p->mObject.mAttribute_mEndString ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstringlist & outOperand1,
                                                                 GALGAS_lstring & outOperand2,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mOptionList ;
    outOperand2 = p->mObject.mAttribute_mEndString ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstringlist & outOperand1,
                                                             GALGAS_lstring & outOperand2,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mOptionList ;
    outOperand2 = p->mObject.mAttribute_mEndString ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstringlist & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mOptionList ;
    outOperand2 = p->mObject.mAttribute_mEndString ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::add_operation (const GALGAS_metamodelTemplateDelimitorListAST & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::plusAssign_operation (const GALGAS_metamodelTemplateDelimitorListAST inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_metamodelTemplateDelimitorListAST::cEnumerator_metamodelTemplateDelimitorListAST (const GALGAS_metamodelTemplateDelimitorListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST_2D_element cEnumerator_metamodelTemplateDelimitorListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_metamodelTemplateDelimitorListAST::current_mStartString (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject.mAttribute_mStartString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_metamodelTemplateDelimitorListAST::current_mOptionList (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject.mAttribute_mOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_metamodelTemplateDelimitorListAST::current_mEndString (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject.mAttribute_mEndString ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @metamodelTemplateDelimitorListAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST ("metamodelTemplateDelimitorListAST",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_metamodelTemplateDelimitorListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_metamodelTemplateDelimitorListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_metamodelTemplateDelimitorListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  const GALGAS_metamodelTemplateDelimitorListAST * p = (const GALGAS_metamodelTemplateDelimitorListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_metamodelTemplateDelimitorListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("metamodelTemplateDelimitorListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@templateReplacementListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_templateReplacementListAST : public cCollectionElement {
  public : GALGAS_templateReplacementListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_templateReplacementListAST (const GALGAS_lstring & in_mMatchString,
                                                          const GALGAS_lstring & in_mReplacementString,
                                                          const GALGAS_lstring & in_mReplacementFunction
                                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_templateReplacementListAST::cCollectionElement_templateReplacementListAST (const GALGAS_lstring & in_mMatchString,
                                                                                              const GALGAS_lstring & in_mReplacementString,
                                                                                              const GALGAS_lstring & in_mReplacementFunction
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMatchString, in_mReplacementString, in_mReplacementFunction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_templateReplacementListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_templateReplacementListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateReplacementListAST (mObject.mAttribute_mMatchString, mObject.mAttribute_mReplacementString, mObject.mAttribute_mReplacementFunction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_templateReplacementListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMatchString" ":" ;
  mObject.mAttribute_mMatchString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReplacementString" ":" ;
  mObject.mAttribute_mReplacementString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReplacementFunction" ":" ;
  mObject.mAttribute_mReplacementFunction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_templateReplacementListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateReplacementListAST * operand = (cCollectionElement_templateReplacementListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateReplacementListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST::GALGAS_templateReplacementListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST::GALGAS_templateReplacementListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_templateReplacementListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateReplacementListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_templateReplacementListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mMatchString,
                                                                   const GALGAS_lstring & in_mReplacementString,
                                                                   const GALGAS_lstring & in_mReplacementFunction
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_templateReplacementListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_templateReplacementListAST (in_mMatchString,
                                                                in_mReplacementString,
                                                                in_mReplacementFunction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_lstring & inOperand1,
                                                             const GALGAS_lstring & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateReplacementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                const GALGAS_lstring inOperand1,
                                                                const GALGAS_lstring inOperand2,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateReplacementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_lstring & outOperand2,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
      outOperand0 = p->mObject.mAttribute_mMatchString ;
      outOperand1 = p->mObject.mAttribute_mReplacementString ;
      outOperand2 = p->mObject.mAttribute_mReplacementFunction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchString ;
    outOperand1 = p->mObject.mAttribute_mReplacementString ;
    outOperand2 = p->mObject.mAttribute_mReplacementFunction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchString ;
    outOperand1 = p->mObject.mAttribute_mReplacementString ;
    outOperand2 = p->mObject.mAttribute_mReplacementFunction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchString ;
    outOperand1 = p->mObject.mAttribute_mReplacementString ;
    outOperand2 = p->mObject.mAttribute_mReplacementFunction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchString ;
    outOperand1 = p->mObject.mAttribute_mReplacementString ;
    outOperand2 = p->mObject.mAttribute_mReplacementFunction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::add_operation (const GALGAS_templateReplacementListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result = GALGAS_templateReplacementListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result = GALGAS_templateReplacementListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result = GALGAS_templateReplacementListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::plusAssign_operation (const GALGAS_templateReplacementListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateReplacementListAST::cEnumerator_templateReplacementListAST (const GALGAS_templateReplacementListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST_2D_element cEnumerator_templateReplacementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateReplacementListAST::current_mMatchString (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mAttribute_mMatchString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateReplacementListAST::current_mReplacementString (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mAttribute_mReplacementString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateReplacementListAST::current_mReplacementFunction (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mAttribute_mReplacementFunction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @templateReplacementListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateReplacementListAST ("templateReplacementListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateReplacementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateReplacementListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateReplacementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateReplacementListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateReplacementListAST result ;
  const GALGAS_templateReplacementListAST * p = (const GALGAS_templateReplacementListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateReplacementListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateReplacementListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@lexicalRuleListAST' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalRuleListAST : public cCollectionElement {
  public : GALGAS_lexicalRuleListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalRuleListAST (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_lexicalRuleListAST::cCollectionElement_lexicalRuleListAST (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalRule) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalRuleListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalRuleListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalRuleListAST (mObject.mAttribute_mLexicalRule COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalRuleListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRule" ":" ;
  mObject.mAttribute_mLexicalRule.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalRuleListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalRuleListAST * operand = (cCollectionElement_lexicalRuleListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalRuleListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST::GALGAS_lexicalRuleListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST::GALGAS_lexicalRuleListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::constructor_listWithValue (const GALGAS_abstractLexicalRuleAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalRuleListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRuleListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalRuleListAST (in_mLexicalRule COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::addAssign_operation (const GALGAS_abstractLexicalRuleAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRuleListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::modifier_insertAtIndex (const GALGAS_abstractLexicalRuleAST inOperand0,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRuleListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::modifier_removeAtIndex (GALGAS_abstractLexicalRuleAST & outOperand0,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
      outOperand0 = p->mObject.mAttribute_mLexicalRule ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::modifier_popFirst (GALGAS_abstractLexicalRuleAST & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::modifier_popLast (GALGAS_abstractLexicalRuleAST & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::method_first (GALGAS_abstractLexicalRuleAST & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::method_last (GALGAS_abstractLexicalRuleAST & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::add_operation (const GALGAS_lexicalRuleListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::plusAssign_operation (const GALGAS_lexicalRuleListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalRuleListAST::cEnumerator_lexicalRuleListAST (const GALGAS_lexicalRuleListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST_2D_element cEnumerator_lexicalRuleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRuleAST cEnumerator_lexicalRuleListAST::current_mLexicalRule (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject.mAttribute_mLexicalRule ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexicalRuleListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRuleListAST ("lexicalRuleListAST",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRuleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRuleListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRuleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRuleListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST result ;
  const GALGAS_lexicalRuleListAST * p = (const GALGAS_lexicalRuleListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRuleListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRuleListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Class for element of '@lexicalMessageDeclarationListAST' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalMessageDeclarationListAST : public cCollectionElement {
  public : GALGAS_lexicalMessageDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lstring & in_mMessageName,
                                                                const GALGAS_lstring & in_mMessageValue
                                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_lexicalMessageDeclarationListAST::cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lstring & in_mMessageName,
                                                                                                          const GALGAS_lstring & in_mMessageValue
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMessageName, in_mMessageValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalMessageDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalMessageDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalMessageDeclarationListAST (mObject.mAttribute_mMessageName, mObject.mAttribute_mMessageValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalMessageDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessageName" ":" ;
  mObject.mAttribute_mMessageName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessageValue" ":" ;
  mObject.mAttribute_mMessageValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalMessageDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalMessageDeclarationListAST * operand = (cCollectionElement_lexicalMessageDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST::GALGAS_lexicalMessageDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST::GALGAS_lexicalMessageDeclarationListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalMessageDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mMessageName,
                                                                         const GALGAS_lstring & in_mMessageValue
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalMessageDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (in_mMessageName,
                                                                      in_mMessageValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_lstring inOperand1,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_lstring & outOperand1,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
      outOperand0 = p->mObject.mAttribute_mMessageName ;
      outOperand1 = p->mObject.mAttribute_mMessageValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mMessageName ;
    outOperand1 = p->mObject.mAttribute_mMessageValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mMessageName ;
    outOperand1 = p->mObject.mAttribute_mMessageValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mMessageName ;
    outOperand1 = p->mObject.mAttribute_mMessageValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mMessageName ;
    outOperand1 = p->mObject.mAttribute_mMessageValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::add_operation (const GALGAS_lexicalMessageDeclarationListAST & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::plusAssign_operation (const GALGAS_lexicalMessageDeclarationListAST inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalMessageDeclarationListAST::cEnumerator_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST_2D_element cEnumerator_lexicalMessageDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalMessageDeclarationListAST::current_mMessageName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mAttribute_mMessageName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalMessageDeclarationListAST::current_mMessageValue (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mAttribute_mMessageValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalMessageDeclarationListAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ("lexicalMessageDeclarationListAST",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalMessageDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalMessageDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalMessageDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST result ;
  const GALGAS_lexicalMessageDeclarationListAST * p = (const GALGAS_lexicalMessageDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalMessageDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@lexicalAttributeListAST' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalAttributeListAST : public cCollectionElement {
  public : GALGAS_lexicalAttributeListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalAttributeListAST (const GALGAS_lstring & in_mTypeName,
                                                       const GALGAS_lstring & in_mName
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_lexicalAttributeListAST::cCollectionElement_lexicalAttributeListAST (const GALGAS_lstring & in_mTypeName,
                                                                                        const GALGAS_lstring & in_mName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalAttributeListAST (mObject.mAttribute_mTypeName, mObject.mAttribute_mName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mAttribute_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalAttributeListAST * operand = (cCollectionElement_lexicalAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST::GALGAS_lexicalAttributeListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST::GALGAS_lexicalAttributeListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mTypeName,
                                                                const GALGAS_lstring & in_mName
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalAttributeListAST (in_mTypeName,
                                                             in_mName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_lstring inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
      outOperand0 = p->mObject.mAttribute_mTypeName ;
      outOperand1 = p->mObject.mAttribute_mName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::add_operation (const GALGAS_lexicalAttributeListAST & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result = GALGAS_lexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result = GALGAS_lexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result = GALGAS_lexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::plusAssign_operation (const GALGAS_lexicalAttributeListAST inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalAttributeListAST::cEnumerator_lexicalAttributeListAST (const GALGAS_lexicalAttributeListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST_2D_element cEnumerator_lexicalAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalAttributeListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject.mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalAttributeListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject.mAttribute_mName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalAttributeListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeListAST ("lexicalAttributeListAST",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST result ;
  const GALGAS_lexicalAttributeListAST * p = (const GALGAS_lexicalAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@lexicalStyleListAST' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalStyleListAST : public cCollectionElement {
  public : GALGAS_lexicalStyleListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalStyleListAST (const GALGAS_lstring & in_mName,
                                                   const GALGAS_lstring & in_mComment
                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_lexicalStyleListAST::cCollectionElement_lexicalStyleListAST (const GALGAS_lstring & in_mName,
                                                                                const GALGAS_lstring & in_mComment
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mComment) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalStyleListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalStyleListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalStyleListAST (mObject.mAttribute_mName, mObject.mAttribute_mComment COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalStyleListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mObject.mAttribute_mComment.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalStyleListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalStyleListAST * operand = (cCollectionElement_lexicalStyleListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalStyleListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST::GALGAS_lexicalStyleListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST::GALGAS_lexicalStyleListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalStyleListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_lstring & in_mName,
                                                            const GALGAS_lstring & in_mComment
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalStyleListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalStyleListAST (in_mName,
                                                         in_mComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalStyleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalStyleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
      outOperand0 = p->mObject.mAttribute_mName ;
      outOperand1 = p->mObject.mAttribute_mComment ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::method_first (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::method_last (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::add_operation (const GALGAS_lexicalStyleListAST & inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result = GALGAS_lexicalStyleListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result = GALGAS_lexicalStyleListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result = GALGAS_lexicalStyleListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::plusAssign_operation (const GALGAS_lexicalStyleListAST inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalStyleListAST::cEnumerator_lexicalStyleListAST (const GALGAS_lexicalStyleListAST & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST_2D_element cEnumerator_lexicalStyleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalStyleListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject.mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalStyleListAST::current_mComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject.mAttribute_mComment ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexicalStyleListAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStyleListAST ("lexicalStyleListAST",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalStyleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStyleListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalStyleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStyleListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST result ;
  const GALGAS_lexicalStyleListAST * p = (const GALGAS_lexicalStyleListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStyleListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStyleListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@terminalDeclarationListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_terminalDeclarationListAST : public cCollectionElement {
  public : GALGAS_terminalDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_terminalDeclarationListAST (const GALGAS_lstring & in_mName,
                                                          const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                          const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                          const GALGAS_lstring & in_mStyle,
                                                          const GALGAS_lstringlist & in_mOptionList
                                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_terminalDeclarationListAST::cCollectionElement_terminalDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                              const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                                              const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                                              const GALGAS_lstring & in_mStyle,
                                                                                              const GALGAS_lstringlist & in_mOptionList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mSentAttributeList, in_mSyntaxErrorMessage, in_mStyle, in_mOptionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_terminalDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_terminalDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_terminalDeclarationListAST (mObject.mAttribute_mName, mObject.mAttribute_mSentAttributeList, mObject.mAttribute_mSyntaxErrorMessage, mObject.mAttribute_mStyle, mObject.mAttribute_mOptionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_terminalDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSentAttributeList" ":" ;
  mObject.mAttribute_mSentAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxErrorMessage" ":" ;
  mObject.mAttribute_mSyntaxErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStyle" ":" ;
  mObject.mAttribute_mStyle.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionList" ":" ;
  mObject.mAttribute_mOptionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_terminalDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_terminalDeclarationListAST * operand = (cCollectionElement_terminalDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_terminalDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST::GALGAS_terminalDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST::GALGAS_terminalDeclarationListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2,
                                                                                                const GALGAS_lstring & inOperand3,
                                                                                                const GALGAS_lstringlist & inOperand4
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_terminalDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mName,
                                                                   const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                   const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                   const GALGAS_lstring & in_mStyle,
                                                                   const GALGAS_lstringlist & in_mOptionList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_terminalDeclarationListAST (in_mName,
                                                                in_mSentAttributeList,
                                                                in_mSyntaxErrorMessage,
                                                                in_mStyle,
                                                                in_mOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                             const GALGAS_lstring & inOperand2,
                                                             const GALGAS_lstring & inOperand3,
                                                             const GALGAS_lstringlist & inOperand4
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                const GALGAS_sentLexicalAttributeListAST inOperand1,
                                                                const GALGAS_lstring inOperand2,
                                                                const GALGAS_lstring inOperand3,
                                                                const GALGAS_lstringlist inOperand4,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                                GALGAS_lstring & outOperand2,
                                                                GALGAS_lstring & outOperand3,
                                                                GALGAS_lstringlist & outOperand4,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
      outOperand0 = p->mObject.mAttribute_mName ;
      outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
      outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
      outOperand3 = p->mObject.mAttribute_mStyle ;
      outOperand4 = p->mObject.mAttribute_mOptionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                           GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           GALGAS_lstring & outOperand3,
                                                           GALGAS_lstringlist & outOperand4,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mStyle ;
    outOperand4 = p->mObject.mAttribute_mOptionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                          GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_lstring & outOperand3,
                                                          GALGAS_lstringlist & outOperand4,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mStyle ;
    outOperand4 = p->mObject.mAttribute_mOptionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      GALGAS_lstring & outOperand3,
                                                      GALGAS_lstringlist & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mStyle ;
    outOperand4 = p->mObject.mAttribute_mOptionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     GALGAS_lstring & outOperand3,
                                                     GALGAS_lstringlist & outOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mStyle ;
    outOperand4 = p->mObject.mAttribute_mOptionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::add_operation (const GALGAS_terminalDeclarationListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result = GALGAS_terminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result = GALGAS_terminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result = GALGAS_terminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::plusAssign_operation (const GALGAS_terminalDeclarationListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_terminalDeclarationListAST::cEnumerator_terminalDeclarationListAST (const GALGAS_terminalDeclarationListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST_2D_element cEnumerator_terminalDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST cEnumerator_terminalDeclarationListAST::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mAttribute_mSentAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalDeclarationListAST::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mAttribute_mSyntaxErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalDeclarationListAST::current_mStyle (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mAttribute_mStyle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_terminalDeclarationListAST::current_mOptionList (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mAttribute_mOptionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @terminalDeclarationListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalDeclarationListAST ("terminalDeclarationListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST result ;
  const GALGAS_terminalDeclarationListAST * p = (const GALGAS_terminalDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@sentLexicalAttributeListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_sentLexicalAttributeListAST : public cCollectionElement {
  public : GALGAS_sentLexicalAttributeListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_sentLexicalAttributeListAST (const GALGAS_lstring & in_mFormalSelector,
                                                           const GALGAS_lstring & in_mAttributeName
                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_sentLexicalAttributeListAST::cCollectionElement_sentLexicalAttributeListAST (const GALGAS_lstring & in_mFormalSelector,
                                                                                                const GALGAS_lstring & in_mAttributeName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mAttributeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_sentLexicalAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_sentLexicalAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_sentLexicalAttributeListAST (mObject.mAttribute_mFormalSelector, mObject.mAttribute_mAttributeName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_sentLexicalAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mAttribute_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mAttribute_mAttributeName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_sentLexicalAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sentLexicalAttributeListAST * operand = (cCollectionElement_sentLexicalAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sentLexicalAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST::GALGAS_sentLexicalAttributeListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST::GALGAS_sentLexicalAttributeListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_sentLexicalAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mFormalSelector,
                                                                    const GALGAS_lstring & in_mAttributeName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_sentLexicalAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (in_mFormalSelector,
                                                                 in_mAttributeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_lstring inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
      outOperand0 = p->mObject.mAttribute_mFormalSelector ;
      outOperand1 = p->mObject.mAttribute_mAttributeName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::add_operation (const GALGAS_sentLexicalAttributeListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::plusAssign_operation (const GALGAS_sentLexicalAttributeListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sentLexicalAttributeListAST::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    result = p->mObject.mAttribute_mFormalSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sentLexicalAttributeListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    result = p->mObject.mAttribute_mAttributeName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_sentLexicalAttributeListAST::cEnumerator_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST_2D_element cEnumerator_sentLexicalAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_sentLexicalAttributeListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_sentLexicalAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mAttribute_mAttributeName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @sentLexicalAttributeListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ("sentLexicalAttributeListAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sentLexicalAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sentLexicalAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sentLexicalAttributeListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST result ;
  const GALGAS_sentLexicalAttributeListAST * p = (const GALGAS_sentLexicalAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sentLexicalAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sentLexicalAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@lexicalListEntryListAST' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalListEntryListAST : public cCollectionElement {
  public : GALGAS_lexicalListEntryListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalListEntryListAST (const GALGAS_lstring & in_mEntrySpelling,
                                                       const GALGAS_lstring & in_mTerminalSpelling,
                                                       const GALGAS_lstringlist & in_mFeatureList
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_lexicalListEntryListAST::cCollectionElement_lexicalListEntryListAST (const GALGAS_lstring & in_mEntrySpelling,
                                                                                        const GALGAS_lstring & in_mTerminalSpelling,
                                                                                        const GALGAS_lstringlist & in_mFeatureList
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEntrySpelling, in_mTerminalSpelling, in_mFeatureList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalListEntryListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalListEntryListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalListEntryListAST (mObject.mAttribute_mEntrySpelling, mObject.mAttribute_mTerminalSpelling, mObject.mAttribute_mFeatureList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalListEntryListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEntrySpelling" ":" ;
  mObject.mAttribute_mEntrySpelling.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalSpelling" ":" ;
  mObject.mAttribute_mTerminalSpelling.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureList" ":" ;
  mObject.mAttribute_mFeatureList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalListEntryListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalListEntryListAST * operand = (cCollectionElement_lexicalListEntryListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalListEntryListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST::GALGAS_lexicalListEntryListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST::GALGAS_lexicalListEntryListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_lstringlist & inOperand2
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalListEntryListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mEntrySpelling,
                                                                const GALGAS_lstring & in_mTerminalSpelling,
                                                                const GALGAS_lstringlist & in_mFeatureList
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalListEntryListAST (in_mEntrySpelling,
                                                             in_mTerminalSpelling,
                                                             in_mFeatureList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1,
                                                          const GALGAS_lstringlist & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalListEntryListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_lstring inOperand1,
                                                             const GALGAS_lstringlist inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalListEntryListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_lstringlist & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
      outOperand0 = p->mObject.mAttribute_mEntrySpelling ;
      outOperand1 = p->mObject.mAttribute_mTerminalSpelling ;
      outOperand2 = p->mObject.mAttribute_mFeatureList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_lstringlist & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mEntrySpelling ;
    outOperand1 = p->mObject.mAttribute_mTerminalSpelling ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstringlist & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mEntrySpelling ;
    outOperand1 = p->mObject.mAttribute_mTerminalSpelling ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_lstringlist & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mEntrySpelling ;
    outOperand1 = p->mObject.mAttribute_mTerminalSpelling ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstringlist & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mEntrySpelling ;
    outOperand1 = p->mObject.mAttribute_mTerminalSpelling ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::add_operation (const GALGAS_lexicalListEntryListAST & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::plusAssign_operation (const GALGAS_lexicalListEntryListAST inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalListEntryListAST::cEnumerator_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST_2D_element cEnumerator_lexicalListEntryListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalListEntryListAST::current_mEntrySpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mAttribute_mEntrySpelling ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalListEntryListAST::current_mTerminalSpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mAttribute_mTerminalSpelling ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_lexicalListEntryListAST::current_mFeatureList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mAttribute_mFeatureList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalListEntryListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListEntryListAST ("lexicalListEntryListAST",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalListEntryListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListEntryListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalListEntryListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListEntryListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST result ;
  const GALGAS_lexicalListEntryListAST * p = (const GALGAS_lexicalListEntryListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalListEntryListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListEntryListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@lexicalListDeclarationListAST' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalListDeclarationListAST : public cCollectionElement {
  public : GALGAS_lexicalListDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lstring & in_mName,
                                                             const GALGAS_lstring & in_mStyle,
                                                             const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                             const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                             const GALGAS_lexicalListEntryListAST & in_mEntryList
                                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_lexicalListDeclarationListAST::cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                                    const GALGAS_lstring & in_mStyle,
                                                                                                    const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                                                    const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                                                    const GALGAS_lexicalListEntryListAST & in_mEntryList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mStyle, in_mSyntaxErrorMessage, in_mSentAttributeList, in_mEntryList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalListDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalListDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalListDeclarationListAST (mObject.mAttribute_mName, mObject.mAttribute_mStyle, mObject.mAttribute_mSyntaxErrorMessage, mObject.mAttribute_mSentAttributeList, mObject.mAttribute_mEntryList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalListDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStyle" ":" ;
  mObject.mAttribute_mStyle.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxErrorMessage" ":" ;
  mObject.mAttribute_mSyntaxErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSentAttributeList" ":" ;
  mObject.mAttribute_mSentAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEntryList" ":" ;
  mObject.mAttribute_mEntryList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalListDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalListDeclarationListAST * operand = (cCollectionElement_lexicalListDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalListDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST::GALGAS_lexicalListDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST::GALGAS_lexicalListDeclarationListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_lstring & inOperand2,
                                                                                                      const GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                                      const GALGAS_lexicalListEntryListAST & inOperand4
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalListDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mName,
                                                                      const GALGAS_lstring & in_mStyle,
                                                                      const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                      const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                      const GALGAS_lexicalListEntryListAST & in_mEntryList
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (in_mName,
                                                                   in_mStyle,
                                                                   in_mSyntaxErrorMessage,
                                                                   in_mSentAttributeList,
                                                                   in_mEntryList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstring & inOperand1,
                                                                const GALGAS_lstring & inOperand2,
                                                                const GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                const GALGAS_lexicalListEntryListAST & inOperand4
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                   const GALGAS_lstring inOperand1,
                                                                   const GALGAS_lstring inOperand2,
                                                                   const GALGAS_sentLexicalAttributeListAST inOperand3,
                                                                   const GALGAS_lexicalListEntryListAST inOperand4,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                   GALGAS_lstring & outOperand1,
                                                                   GALGAS_lstring & outOperand2,
                                                                   GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                                   GALGAS_lexicalListEntryListAST & outOperand4,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
      outOperand0 = p->mObject.mAttribute_mName ;
      outOperand1 = p->mObject.mAttribute_mStyle ;
      outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
      outOperand3 = p->mObject.mAttribute_mSentAttributeList ;
      outOperand4 = p->mObject.mAttribute_mEntryList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                              GALGAS_lexicalListEntryListAST & outOperand4,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mStyle ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand4 = p->mObject.mAttribute_mEntryList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_lstring & outOperand2,
                                                             GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                             GALGAS_lexicalListEntryListAST & outOperand4,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mStyle ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand4 = p->mObject.mAttribute_mEntryList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                         GALGAS_lexicalListEntryListAST & outOperand4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mStyle ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand4 = p->mObject.mAttribute_mEntryList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                        GALGAS_lexicalListEntryListAST & outOperand4,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mStyle ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand4 = p->mObject.mAttribute_mEntryList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::add_operation (const GALGAS_lexicalListDeclarationListAST & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::plusAssign_operation (const GALGAS_lexicalListDeclarationListAST inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalListDeclarationListAST::cEnumerator_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST_2D_element cEnumerator_lexicalListDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mStyle (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mAttribute_mStyle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mAttribute_mSyntaxErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST cEnumerator_lexicalListDeclarationListAST::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mAttribute_mSentAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST cEnumerator_lexicalListDeclarationListAST::current_mEntryList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mAttribute_mEntryList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalListDeclarationListAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ("lexicalListDeclarationListAST",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalListDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalListDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST result ;
  const GALGAS_lexicalListDeclarationListAST * p = (const GALGAS_lexicalListDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalListDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@lexicalSendSearchListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalSendSearchListAST : public cCollectionElement {
  public : GALGAS_lexicalSendSearchListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalSendSearchListAST (const GALGAS_lstring & in_mAttributeName,
                                                        const GALGAS_lstring & in_mSearchListName
                                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_lexicalSendSearchListAST::cCollectionElement_lexicalSendSearchListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                          const GALGAS_lstring & in_mSearchListName
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mSearchListName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalSendSearchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalSendSearchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalSendSearchListAST (mObject.mAttribute_mAttributeName, mObject.mAttribute_mSearchListName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalSendSearchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mAttribute_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSearchListName" ":" ;
  mObject.mAttribute_mSearchListName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalSendSearchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalSendSearchListAST * operand = (cCollectionElement_lexicalSendSearchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalSendSearchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST::GALGAS_lexicalSendSearchListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST::GALGAS_lexicalSendSearchListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalSendSearchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mAttributeName,
                                                                 const GALGAS_lstring & in_mSearchListName
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSendSearchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (in_mAttributeName,
                                                              in_mSearchListName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_lstring & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
      outOperand0 = p->mObject.mAttribute_mAttributeName ;
      outOperand1 = p->mObject.mAttribute_mSearchListName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mSearchListName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mSearchListName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mSearchListName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mSearchListName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::add_operation (const GALGAS_lexicalSendSearchListAST & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::plusAssign_operation (const GALGAS_lexicalSendSearchListAST inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalSendSearchListAST::cEnumerator_lexicalSendSearchListAST (const GALGAS_lexicalSendSearchListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST_2D_element cEnumerator_lexicalSendSearchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalSendSearchListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject.mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalSendSearchListAST::current_mSearchListName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject.mAttribute_mSearchListName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalSendSearchListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendSearchListAST ("lexicalSendSearchListAST",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSendSearchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendSearchListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSendSearchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendSearchListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST result ;
  const GALGAS_lexicalSendSearchListAST * p = (const GALGAS_lexicalSendSearchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSendSearchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendSearchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@lexicalWhileBranchListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalWhileBranchListAST : public cCollectionElement {
  public : GALGAS_lexicalWhileBranchListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                         const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_lexicalWhileBranchListAST::cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                                                            const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mWhileExpression, in_mWhileInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalWhileBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalWhileBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalWhileBranchListAST (mObject.mAttribute_mWhileExpression, mObject.mAttribute_mWhileInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalWhileBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWhileExpression" ":" ;
  mObject.mAttribute_mWhileExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWhileInstructionList" ":" ;
  mObject.mAttribute_mWhileInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalWhileBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalWhileBranchListAST * operand = (cCollectionElement_lexicalWhileBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalWhileBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST::GALGAS_lexicalWhileBranchListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST::GALGAS_lexicalWhileBranchListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::constructor_listWithValue (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                              const GALGAS_lexicalInstructionListAST & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalWhileBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                                  const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalWhileBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (in_mWhileExpression,
                                                               in_mWhileInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::addAssign_operation (const GALGAS_lexicalExpressionAST & inOperand0,
                                                            const GALGAS_lexicalInstructionListAST & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::modifier_insertAtIndex (const GALGAS_lexicalExpressionAST inOperand0,
                                                               const GALGAS_lexicalInstructionListAST inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::modifier_removeAtIndex (GALGAS_lexicalExpressionAST & outOperand0,
                                                               GALGAS_lexicalInstructionListAST & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
      outOperand0 = p->mObject.mAttribute_mWhileExpression ;
      outOperand1 = p->mObject.mAttribute_mWhileInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::modifier_popFirst (GALGAS_lexicalExpressionAST & outOperand0,
                                                          GALGAS_lexicalInstructionListAST & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mWhileExpression ;
    outOperand1 = p->mObject.mAttribute_mWhileInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::modifier_popLast (GALGAS_lexicalExpressionAST & outOperand0,
                                                         GALGAS_lexicalInstructionListAST & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mWhileExpression ;
    outOperand1 = p->mObject.mAttribute_mWhileInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::method_first (GALGAS_lexicalExpressionAST & outOperand0,
                                                     GALGAS_lexicalInstructionListAST & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mWhileExpression ;
    outOperand1 = p->mObject.mAttribute_mWhileInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::method_last (GALGAS_lexicalExpressionAST & outOperand0,
                                                    GALGAS_lexicalInstructionListAST & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mWhileExpression ;
    outOperand1 = p->mObject.mAttribute_mWhileInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::add_operation (const GALGAS_lexicalWhileBranchListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::plusAssign_operation (const GALGAS_lexicalWhileBranchListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalWhileBranchListAST::cEnumerator_lexicalWhileBranchListAST (const GALGAS_lexicalWhileBranchListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST_2D_element cEnumerator_lexicalWhileBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST cEnumerator_lexicalWhileBranchListAST::current_mWhileExpression (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject.mAttribute_mWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST cEnumerator_lexicalWhileBranchListAST::current_mWhileInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject.mAttribute_mWhileInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalWhileBranchListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ("lexicalWhileBranchListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalWhileBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalWhileBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalWhileBranchListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST result ;
  const GALGAS_lexicalWhileBranchListAST * p = (const GALGAS_lexicalWhileBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalWhileBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWhileBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@lexicalSelectBranchListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalSelectBranchListAST : public cCollectionElement {
  public : GALGAS_lexicalSelectBranchListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                          const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_lexicalSelectBranchListAST::cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                                                              const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelectExpression, in_mSelectInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalSelectBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalSelectBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalSelectBranchListAST (mObject.mAttribute_mSelectExpression, mObject.mAttribute_mSelectInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalSelectBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectExpression" ":" ;
  mObject.mAttribute_mSelectExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectInstructionList" ":" ;
  mObject.mAttribute_mSelectInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalSelectBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalSelectBranchListAST * operand = (cCollectionElement_lexicalSelectBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalSelectBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST::GALGAS_lexicalSelectBranchListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST::GALGAS_lexicalSelectBranchListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::constructor_listWithValue (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                                const GALGAS_lexicalInstructionListAST & inOperand1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalSelectBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                                   const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSelectBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (in_mSelectExpression,
                                                                in_mSelectInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::addAssign_operation (const GALGAS_lexicalExpressionAST & inOperand0,
                                                             const GALGAS_lexicalInstructionListAST & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::modifier_insertAtIndex (const GALGAS_lexicalExpressionAST inOperand0,
                                                                const GALGAS_lexicalInstructionListAST inOperand1,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::modifier_removeAtIndex (GALGAS_lexicalExpressionAST & outOperand0,
                                                                GALGAS_lexicalInstructionListAST & outOperand1,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
      outOperand0 = p->mObject.mAttribute_mSelectExpression ;
      outOperand1 = p->mObject.mAttribute_mSelectInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::modifier_popFirst (GALGAS_lexicalExpressionAST & outOperand0,
                                                           GALGAS_lexicalInstructionListAST & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mSelectExpression ;
    outOperand1 = p->mObject.mAttribute_mSelectInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::modifier_popLast (GALGAS_lexicalExpressionAST & outOperand0,
                                                          GALGAS_lexicalInstructionListAST & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mSelectExpression ;
    outOperand1 = p->mObject.mAttribute_mSelectInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::method_first (GALGAS_lexicalExpressionAST & outOperand0,
                                                      GALGAS_lexicalInstructionListAST & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mSelectExpression ;
    outOperand1 = p->mObject.mAttribute_mSelectInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::method_last (GALGAS_lexicalExpressionAST & outOperand0,
                                                     GALGAS_lexicalInstructionListAST & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mSelectExpression ;
    outOperand1 = p->mObject.mAttribute_mSelectInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::add_operation (const GALGAS_lexicalSelectBranchListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::plusAssign_operation (const GALGAS_lexicalSelectBranchListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalSelectBranchListAST::cEnumerator_lexicalSelectBranchListAST (const GALGAS_lexicalSelectBranchListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST_2D_element cEnumerator_lexicalSelectBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST cEnumerator_lexicalSelectBranchListAST::current_mSelectExpression (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject.mAttribute_mSelectExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST cEnumerator_lexicalSelectBranchListAST::current_mSelectInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject.mAttribute_mSelectInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalSelectBranchListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ("lexicalSelectBranchListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSelectBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSelectBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSelectBranchListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST result ;
  const GALGAS_lexicalSelectBranchListAST * p = (const GALGAS_lexicalSelectBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSelectBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

