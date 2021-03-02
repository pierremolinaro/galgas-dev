#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//----------------------------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//----------------------------------------------------------------------------------------------------------------------

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_galgasTemplateScanner::C_Lexique_galgasTemplateScanner (C_Compiler * inCallerCompiler,
                                                                  const C_String & inSourceFileName
                                                                  COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_galgasTemplateScanner::C_Lexique_galgasTemplateScanner (C_Compiler * inCallerCompiler,
                                                                  const C_String & inSourceString,
                                                                  const C_String & inStringForError
                                                                  COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//----------------------------------------------------------------------------------------------------------------------
//                 I N D E X I N G    D I R E C T O R Y                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasTemplateScanner::indexingDirectory (void) const {
  return "" ;
}

//----------------------------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//----------------------------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_galgasTemplateScanner_ASCIIcodeTooLargeError = "ASCII code > 255" ;

static const char * gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_galgasTemplateScanner_floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_galgasTemplateScanner_hexDigitError = "0x should be followed by a hexadecimal digit" ;

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

//----------------------------------------------------------------------------------------------------------------------
//          Syntax error messages, for every terminal symbol                                     
//----------------------------------------------------------------------------------------------------------------------

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_identifier = "an identifier" ;

//--- Syntax error message for terminal '$@type$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__40_type = "a type name (@...)" ;

//--- Syntax error message for terminal '$double.xxx$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_double_2E_xxx = "a float number" ;

//--- Syntax error message for terminal '$uint32$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_uint_33__32_ = "a 32-bit unsigned decimal number" ;

//--- Syntax error message for terminal '$sint32_S$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_sint_33__32__5F_S = "a 32-bit signed decimal number" ;

//--- Syntax error message for terminal '$uint64_L$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_uint_36__34__5F_L = "a 64-bit unsigned decimal number" ;

//--- Syntax error message for terminal '$sint64_LS$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_sint_36__34__5F_LS = "a 64-bit signed decimal number" ;

//--- Syntax error message for terminal '$bigint_G$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_bigint_5F_G = "a big integer number" ;

//--- Syntax error message for terminal '$.$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2E_ = "the '.' delimitor" ;

//--- Syntax error message for terminal '$.=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2E__3D_ = "the '.=' delimitor" ;

//--- Syntax error message for terminal '$...$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2E__2E__2E_ = "the '...' delimitor" ;

//--- Syntax error message for terminal '$..<$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2E__2E__3C_ = "the '..<' delimitor" ;

//--- Syntax error message for terminal '$'char'$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__27_char_27_ = "a character constant" ;

//--- Syntax error message for terminal '$"string"$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__22_string_22_ = "a character string constant \"...\"" ;

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

//--- Syntax error message for terminal '$boolset$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_boolset = "the 'boolset' keyword" ;

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

//--- Syntax error message for terminal '$dict$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_dict = "the 'dict' keyword" ;

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

//--- Syntax error message for terminal '$extern$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_extern = "the 'extern' keyword" ;

//--- Syntax error message for terminal '$false$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_false = "the 'false' keyword" ;

//--- Syntax error message for terminal '$filewrapper$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_filewrapper = "the 'filewrapper' keyword" ;

//--- Syntax error message for terminal '$fixit$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_fixit = "the 'fixit' keyword" ;

//--- Syntax error message for terminal '$for$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_for = "the 'for' keyword" ;

//--- Syntax error message for terminal '$foreach$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_foreach = "the 'foreach' keyword" ;

//--- Syntax error message for terminal '$func$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_func = "the 'func' keyword" ;

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

//--- Syntax error message for terminal '$rule$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_rule = "the 'rule' keyword" ;

//--- Syntax error message for terminal '$search$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_search = "the 'search' keyword" ;

//--- Syntax error message for terminal '$select$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_select = "the 'select' keyword" ;

//--- Syntax error message for terminal '$self$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_self = "the 'self' keyword" ;

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

//--- Syntax error message for terminal '$shared$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_shared = "the 'shared' keyword" ;

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

//----------------------------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasTemplateScanner::getMessageForTerminal (const int16_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 147)) {
    static const char * syntaxErrorMessageArray [147] = {kEndOfSourceLexicalErrorMessage,
        gSyntaxErrorMessage_galgasTemplateScanner_identifier,
        gSyntaxErrorMessage_galgasTemplateScanner__40_type,
        gSyntaxErrorMessage_galgasTemplateScanner_double_2E_xxx,
        gSyntaxErrorMessage_galgasTemplateScanner_uint_33__32_,
        gSyntaxErrorMessage_galgasTemplateScanner_sint_33__32__5F_S,
        gSyntaxErrorMessage_galgasTemplateScanner_uint_36__34__5F_L,
        gSyntaxErrorMessage_galgasTemplateScanner_sint_36__34__5F_LS,
        gSyntaxErrorMessage_galgasTemplateScanner_bigint_5F_G,
        gSyntaxErrorMessage_galgasTemplateScanner__2E_,
        gSyntaxErrorMessage_galgasTemplateScanner__2E__3D_,
        gSyntaxErrorMessage_galgasTemplateScanner__2E__2E__2E_,
        gSyntaxErrorMessage_galgasTemplateScanner__2E__2E__3C_,
        gSyntaxErrorMessage_galgasTemplateScanner__27_char_27_,
        gSyntaxErrorMessage_galgasTemplateScanner__22_string_22_,
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
        gSyntaxErrorMessage_galgasTemplateScanner_boolset,
        gSyntaxErrorMessage_galgasTemplateScanner_case,
        gSyntaxErrorMessage_galgasTemplateScanner_cast,
        gSyntaxErrorMessage_galgasTemplateScanner_class,
        gSyntaxErrorMessage_galgasTemplateScanner_const,
        gSyntaxErrorMessage_galgasTemplateScanner_constructor,
        gSyntaxErrorMessage_galgasTemplateScanner_default,
        gSyntaxErrorMessage_galgasTemplateScanner_dict,
        gSyntaxErrorMessage_galgasTemplateScanner_do,
        gSyntaxErrorMessage_galgasTemplateScanner_drop,
        gSyntaxErrorMessage_galgasTemplateScanner_else,
        gSyntaxErrorMessage_galgasTemplateScanner_elsif,
        gSyntaxErrorMessage_galgasTemplateScanner_end,
        gSyntaxErrorMessage_galgasTemplateScanner_enum,
        gSyntaxErrorMessage_galgasTemplateScanner_error,
        gSyntaxErrorMessage_galgasTemplateScanner_extension,
        gSyntaxErrorMessage_galgasTemplateScanner_extern,
        gSyntaxErrorMessage_galgasTemplateScanner_false,
        gSyntaxErrorMessage_galgasTemplateScanner_filewrapper,
        gSyntaxErrorMessage_galgasTemplateScanner_fixit,
        gSyntaxErrorMessage_galgasTemplateScanner_for,
        gSyntaxErrorMessage_galgasTemplateScanner_foreach,
        gSyntaxErrorMessage_galgasTemplateScanner_func,
        gSyntaxErrorMessage_galgasTemplateScanner_getter,
        gSyntaxErrorMessage_galgasTemplateScanner_grammar,
        gSyntaxErrorMessage_galgasTemplateScanner_graph,
        gSyntaxErrorMessage_galgasTemplateScanner_gui,
        gSyntaxErrorMessage_galgasTemplateScanner_here,
        gSyntaxErrorMessage_galgasTemplateScanner_if,
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
        gSyntaxErrorMessage_galgasTemplateScanner_log,
        gSyntaxErrorMessage_galgasTemplateScanner_loop,
        gSyntaxErrorMessage_galgasTemplateScanner_map,
        gSyntaxErrorMessage_galgasTemplateScanner_match,
        gSyntaxErrorMessage_galgasTemplateScanner_message,
        gSyntaxErrorMessage_galgasTemplateScanner_method,
        gSyntaxErrorMessage_galgasTemplateScanner_mod,
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
        gSyntaxErrorMessage_galgasTemplateScanner_rule,
        gSyntaxErrorMessage_galgasTemplateScanner_search,
        gSyntaxErrorMessage_galgasTemplateScanner_select,
        gSyntaxErrorMessage_galgasTemplateScanner_self,
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
        gSyntaxErrorMessage_galgasTemplateScanner_shared,
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
        gSyntaxErrorMessage_galgasTemplateScanner__26__2F_
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//----------------------------------------------------------------------------------------------------------------------

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

//--- Unicode string for '$boolset$'
static const utf32 kUnicodeString_galgasTemplateScanner_boolset [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
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

//--- Unicode string for '$dict$'
static const utf32 kUnicodeString_galgasTemplateScanner_dict [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
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

//--- Unicode string for '$fixit$'
static const utf32 kUnicodeString_galgasTemplateScanner_fixit [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
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

//--- Unicode string for '$shared$'
static const utf32 kUnicodeString_galgasTemplateScanner_shared [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('h'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
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

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'galgasDelimitorsList'      
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'galgasKeyWordList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasTemplateScanner_galgasKeyWordList = 89 ;

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
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_dict, 4, C_Lexique_galgasTemplateScanner::kToken_dict),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_drop, 4, C_Lexique_galgasTemplateScanner::kToken_drop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_else, 4, C_Lexique_galgasTemplateScanner::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_enum, 4, C_Lexique_galgasTemplateScanner::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_func, 4, C_Lexique_galgasTemplateScanner::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_here, 4, C_Lexique_galgasTemplateScanner::kToken_here),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_list, 4, C_Lexique_galgasTemplateScanner::kToken_list),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_loop, 4, C_Lexique_galgasTemplateScanner::kToken_loop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_once, 4, C_Lexique_galgasTemplateScanner::kToken_once),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_proc, 4, C_Lexique_galgasTemplateScanner::kToken_proc),
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
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_fixit, 5, C_Lexique_galgasTemplateScanner::kToken_fixit),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_graph, 5, C_Lexique_galgasTemplateScanner::kToken_graph),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_index, 5, C_Lexique_galgasTemplateScanner::kToken_index),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_label, 5, C_Lexique_galgasTemplateScanner::kToken_label),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_match, 5, C_Lexique_galgasTemplateScanner::kToken_match),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_parse, 5, C_Lexique_galgasTemplateScanner::kToken_parse),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_state, 5, C_Lexique_galgasTemplateScanner::kToken_state),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_style, 5, C_Lexique_galgasTemplateScanner::kToken_style),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_while, 5, C_Lexique_galgasTemplateScanner::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_before, 6, C_Lexique_galgasTemplateScanner::kToken_before),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_extern, 6, C_Lexique_galgasTemplateScanner::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_getter, 6, C_Lexique_galgasTemplateScanner::kToken_getter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_insert, 6, C_Lexique_galgasTemplateScanner::kToken_insert),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_method, 6, C_Lexique_galgasTemplateScanner::kToken_method),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_option, 6, C_Lexique_galgasTemplateScanner::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_remove, 6, C_Lexique_galgasTemplateScanner::kToken_remove),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_repeat, 6, C_Lexique_galgasTemplateScanner::kToken_repeat),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_search, 6, C_Lexique_galgasTemplateScanner::kToken_search),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_select, 6, C_Lexique_galgasTemplateScanner::kToken_select),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_setter, 6, C_Lexique_galgasTemplateScanner::kToken_setter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_shared, 6, C_Lexique_galgasTemplateScanner::kToken_shared),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_struct, 6, C_Lexique_galgasTemplateScanner::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_switch, 6, C_Lexique_galgasTemplateScanner::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_syntax, 6, C_Lexique_galgasTemplateScanner::kToken_syntax),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_unused, 6, C_Lexique_galgasTemplateScanner::kToken_unused),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_between, 7, C_Lexique_galgasTemplateScanner::kToken_between),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_boolset, 7, C_Lexique_galgasTemplateScanner::kToken_boolset),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_default, 7, C_Lexique_galgasTemplateScanner::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_foreach, 7, C_Lexique_galgasTemplateScanner::kToken_foreach),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_grammar, 7, C_Lexique_galgasTemplateScanner::kToken_grammar),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_lexique, 7, C_Lexique_galgasTemplateScanner::kToken_lexique),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_listmap, 7, C_Lexique_galgasTemplateScanner::kToken_listmap),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_message, 7, C_Lexique_galgasTemplateScanner::kToken_message),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_private, 7, C_Lexique_galgasTemplateScanner::kToken_private),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_project, 7, C_Lexique_galgasTemplateScanner::kToken_project),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_replace, 7, C_Lexique_galgasTemplateScanner::kToken_replace),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_warning, 7, C_Lexique_galgasTemplateScanner::kToken_warning),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_abstract, 8, C_Lexique_galgasTemplateScanner::kToken_abstract),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_indexing, 8, C_Lexique_galgasTemplateScanner::kToken_indexing),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_operator, 8, C_Lexique_galgasTemplateScanner::kToken_operator),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_override, 8, C_Lexique_galgasTemplateScanner::kToken_override),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_template, 8, C_Lexique_galgasTemplateScanner::kToken_template),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_extension, 9, C_Lexique_galgasTemplateScanner::kToken_extension),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_sortedlist, 10, C_Lexique_galgasTemplateScanner::kToken_sortedlist),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_constructor, 11, C_Lexique_galgasTemplateScanner::kToken_constructor),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_filewrapper, 11, C_Lexique_galgasTemplateScanner::kToken_filewrapper)
} ;

int16_t C_Lexique_galgasTemplateScanner::search_into_galgasKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasTemplateScanner_galgasKeyWordList, ktable_size_galgasTemplateScanner_galgasKeyWordList) ;
}


//----------------------------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//----------------------------------------------------------------------------------------------------------------------

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
    case kToken__40_type:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("@type") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_double_2E_xxx:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("double.xxx") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendDouble (ptr->mLexicalAttribute_floatValue) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_uint_33__32_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("uint32") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_sint_33__32__5F_S:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sint32_S") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendSigned (ptr->mLexicalAttribute_sint_33__32_value) ;
      break ;
    case kToken_uint_36__34__5F_L:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("uint64_L") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_36__34_value) ;
      break ;
    case kToken_sint_36__34__5F_LS:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sint64_LS") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendSigned (ptr->mLexicalAttribute_sint_36__34_value) ;
      break ;
    case kToken_bigint_5F_G:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bigint_G") ;
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
    case kToken__27_char_27_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("'char'") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnicodeCharacter (ptr->mLexicalAttribute_charValue COMMA_HERE) ;
      break ;
    case kToken__22_string_22_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\"string\"") ;
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
    case kToken_boolset:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("boolset") ;
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
    case kToken_dict:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("dict") ;
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
    case kToken_filewrapper:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("filewrapper") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_fixit:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("fixit") ;
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
    case kToken_shared:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("shared") ;
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

//----------------------------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//----------------------------------------------------------------------------------------------------------------------

static const cTemplateDelimiter galgasTemplateScanner_kTemplateDefinitionArray [1] = {
  cTemplateDelimiter (kUnicodeString_galgasTemplateScanner__25_, 1, kUnicodeString_galgasTemplateScanner__25_, 1, NULL, true)
} ;

//----------------------------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//----------------------------------------------------------------------------------------------------------------------

static const cTemplateDelimiter galgasTemplateScanner_kTemplateReplacementArray [3] = {
  cTemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C__25_, 2, kUnicodeString_galgasTemplateScanner__25_, 1, NULL, true),
  cTemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C_n, 2, kUnicodeString_galgasTemplateScanner__A_, 1, NULL, true),
  cTemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C__5C_, 2, kUnicodeString_galgasTemplateScanner__5C_, 1, NULL, true)
} ;

//----------------------------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//----------------------------------------------------------------------------------------------------------------------

static const bool galgasTemplateScanner_kEndOfScriptInTemplateArray [146] = {
  false /* identifier */,
  false /* @type */,
  false /* double.xxx */,
  false /* uint32 */,
  false /* sint32_S */,
  false /* uint64_L */,
  false /* sint64_LS */,
  false /* bigint_G */,
  false /* . */,
  false /* .= */,
  false /* ... */,
  false /* ..< */,
  false /* 'char' */,
  false /* "string" */,
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
  false /* boolset */,
  false /* case */,
  false /* cast */,
  false /* class */,
  false /* const */,
  false /* constructor */,
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
  false /* filewrapper */,
  false /* fixit */,
  false /* for */,
  false /* foreach */,
  false /* func */,
  false /* getter */,
  false /* grammar */,
  false /* graph */,
  false /* gui */,
  false /* here */,
  false /* if */,
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
  false /* log */,
  false /* loop */,
  false /* map */,
  false /* match */,
  false /* message */,
  false /* method */,
  false /* mod */,
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
  false /* rule */,
  false /* search */,
  false /* select */,
  false /* self */,
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
  false /* shared */,
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

//----------------------------------------------------------------------------------------------------------------------
//            Unicode test functions                                                             
//----------------------------------------------------------------------------------------------------------------------
 
//----------------------------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//----------------------------------------------------------------------------------------------------------------------

bool C_Lexique_galgasTemplateScanner::parseLexicalToken (void) {
  cTokenFor_galgasTemplateScanner token ;
  mLoop = true ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    if ((mMatchedTemplateDelimiterIndex >= 0)
     && (galgasTemplateScanner_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)
     && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      const bool foundEndDelimitor = testForInputUTF32String (galgasTemplateScanner_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,
                                                              galgasTemplateScanner_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength,
                                                              true) ;
      if (foundEndDelimitor) {
        mMatchedTemplateDelimiterIndex = -1 ;
      }
    }
    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      int32_t replacementIndex = 0 ;
      while (replacementIndex >= 0) {
        replacementIndex = findTemplateDelimiterIndex (galgasTemplateScanner_kTemplateReplacementArray, 3) ;
        if (replacementIndex >= 0) {
          if (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mReplacementFunction == NULL) {
            token.mTemplateStringBeforeToken << galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mEndString ;
          }else{
            C_String s ;
            while (notTestForInputUTF32String (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mEndString,
                                               galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mEndStringLength,
                                               kEndOfSourceLexicalErrorMessage
                                               COMMA_HERE)) {
              s.appendUnicodeCharacter (previousChar () COMMA_HERE) ;
            }
            galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;
          }
        }
      }
      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (galgasTemplateScanner_kTemplateDefinitionArray, 1) ;
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
      if (testForCharWithFunction (isUnicodeLetter)) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
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
        if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (testForInputUTF32Char (TO_UNICODE ('-'))) {
            do {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
          }
        }else{
          lexicalError (gLexicalMessage_galgasTemplateScanner_incorrectTypeNameError COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken__40_type ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__30_x, 2, true)) {
        do {
          if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
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
            token.mTokenCode = kToken_sint_36__34__5F_LS ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('S')) || testForInputUTF32Char (TO_UNICODE ('s'))) {
            ::scanner_routine_convertHexStringIntoSInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_33__32_value, gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScanner_internalError) ;
            token.mTokenCode = kToken_sint_33__32__5F_S ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('L'))) {
            ::scanner_routine_convertHexStringIntoUInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_36__34_value, gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScanner_internalError) ;
            token.mTokenCode = kToken_uint_36__34__5F_L ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('G'))) {
            ::scanner_routine_convertHexStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasTemplateScanner_internalError) ;
            token.mTokenCode = kToken_bigint_5F_G ;
            enterToken (token) ;
          }else{
            ::scanner_routine_convertHexStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScanner_internalError) ;
            token.mTokenCode = kToken_uint_33__32_ ;
            enterToken (token) ;
          }
        }else{
          lexicalError (gLexicalMessage_galgasTemplateScanner_hexDigitError COMMA_LINE_AND_SOURCE_FILE) ;
        }
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
          token.mTokenCode = kToken_sint_33__32__5F_S ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner_LS, 2, true)) {
          ::scanner_routine_convertDecimalStringIntoSInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_36__34_value, gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScanner_internalError) ;
          token.mTokenCode = kToken_sint_36__34__5F_LS ;
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('L'))) {
          ::scanner_routine_convertDecimalStringIntoUInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_36__34_value, gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScanner_internalError) ;
          token.mTokenCode = kToken_uint_36__34__5F_L ;
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('G'))) {
          ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasTemplateScanner_internalError) ;
          token.mTokenCode = kToken_bigint_5F_G ;
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
          token.mTokenCode = kToken_double_2E_xxx ;
          enterToken (token) ;
        }else{
          ::scanner_routine_convertDecimalStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScanner_internalError) ;
          token.mTokenCode = kToken_uint_33__32_ ;
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
          token.mTokenCode = kToken_double_2E_xxx ;
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
          token.mTokenCode = kToken__27_char_27_ ;
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
          token.mTokenCode = kToken__22_string_22_ ;
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
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
    }catch (const C_lexicalErrorException &) {
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
    }
    if ((token.mTokenCode > 0) && galgasTemplateScanner_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {
      mMatchedTemplateDelimiterIndex = -1 ;
    }
  
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_galgasTemplateScanner::enterToken (cTokenFor_galgasTemplateScanner & ioToken) {
  cTokenFor_galgasTemplateScanner * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_galgasTemplateScanner ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  // ptr->mIsOptional = ioToken.mIsOptional ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_bigintValue = ioToken.mLexicalAttribute_bigintValue ;
  ptr->mLexicalAttribute_charValue = ioToken.mLexicalAttribute_charValue ;
  ptr->mLexicalAttribute_floatValue = ioToken.mLexicalAttribute_floatValue ;
  ptr->mLexicalAttribute_identifierString = ioToken.mLexicalAttribute_identifierString ;
  ptr->mLexicalAttribute_sint_33__32_value = ioToken.mLexicalAttribute_sint_33__32_value ;
  ptr->mLexicalAttribute_sint_36__34_value = ioToken.mLexicalAttribute_sint_36__34_value ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  ptr->mLexicalAttribute_uint_36__34_value = ioToken.mLexicalAttribute_uint_36__34_value ;
  enterTokenFromPointer (ptr) ;
}

//----------------------------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//----------------------------------------------------------------------------------------------------------------------

C_BigInt C_Lexique_galgasTemplateScanner::attributeValue_bigintValue (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_bigintValue ;
}

//----------------------------------------------------------------------------------------------------------------------

utf32 C_Lexique_galgasTemplateScanner::attributeValue_charValue (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_charValue ;
}

//----------------------------------------------------------------------------------------------------------------------

double C_Lexique_galgasTemplateScanner::attributeValue_floatValue (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_floatValue ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasTemplateScanner::attributeValue_identifierString (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//----------------------------------------------------------------------------------------------------------------------

int32_t C_Lexique_galgasTemplateScanner::attributeValue_sint_33__32_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_sint_33__32_value ;
}

//----------------------------------------------------------------------------------------------------------------------

int64_t C_Lexique_galgasTemplateScanner::attributeValue_sint_36__34_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_sint_36__34_value ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasTemplateScanner::attributeValue_tokenString (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_galgasTemplateScanner::attributeValue_uint_33__32_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//----------------------------------------------------------------------------------------------------------------------

uint64_t C_Lexique_galgasTemplateScanner::attributeValue_uint_36__34_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_36__34_value ;
}

//----------------------------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint C_Lexique_galgasTemplateScanner::synthetizedAttribute_bigintValue (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_bigint value (ptr->mLexicalAttribute_bigintValue) ;
  GALGAS_lbigint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar C_Lexique_galgasTemplateScanner::synthetizedAttribute_charValue (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_char value (ptr->mLexicalAttribute_charValue) ;
  GALGAS_lchar result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ldouble C_Lexique_galgasTemplateScanner::synthetizedAttribute_floatValue (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_double value (ptr->mLexicalAttribute_floatValue) ;
  GALGAS_ldouble result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_galgasTemplateScanner::synthetizedAttribute_identifierString (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint C_Lexique_galgasTemplateScanner::synthetizedAttribute_sint_33__32_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint value (ptr->mLexicalAttribute_sint_33__32_value) ;
  GALGAS_lsint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint_36__34_ C_Lexique_galgasTemplateScanner::synthetizedAttribute_sint_36__34_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint_36__34_ value (ptr->mLexicalAttribute_sint_36__34_value) ;
  GALGAS_lsint_36__34_ result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_galgasTemplateScanner::synthetizedAttribute_tokenString (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint C_Lexique_galgasTemplateScanner::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint_36__34_ C_Lexique_galgasTemplateScanner::synthetizedAttribute_uint_36__34_value (void) const {
  cTokenFor_galgasTemplateScanner * ptr = (cTokenFor_galgasTemplateScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint_36__34_ value (ptr->mLexicalAttribute_uint_36__34_value) ;
  GALGAS_luint_36__34_ result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist C_Lexique_galgasTemplateScanner::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("@type") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("double.xxx") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("uint32") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sint32_S") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("uint64_L") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sint64_LS") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bigint_G") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("...") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("..<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("'char'") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\"string\"") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("boolset") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("cast") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("class") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("const") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("constructor") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("default") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("dict") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("do") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("drop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("else") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("elsif") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("end") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("error") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extension") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extern") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("false") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("filewrapper") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("fixit") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("for") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("foreach") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("func") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("getter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("grammar") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("graph") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("gui") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("here") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("log") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("loop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("map") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("match") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("message") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("method") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mod") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("rule") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("search") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("select") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("shared") COMMA_THERE) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordLists_galgasTemplateScanner (TC_UniqueArray <C_String> & ioList) {
  ioList.appendObject ("galgasTemplateScanner:galgasDelimitorsList") ;
  ioList.appendObject ("galgasTemplateScanner:galgasKeyWordList") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_galgasTemplateScanner (const C_String & inIdentifier,
                                                            bool & ioFound,
                                                            TC_UniqueArray <C_String> & ioList) {
  if (inIdentifier == "galgasTemplateScanner:galgasDelimitorsList") {
    ioFound = true ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject ("*") ;
    ioList.appendObject ("+") ;
    ioList.appendObject (",") ;
    ioList.appendObject ("-") ;
    ioList.appendObject ("/") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("~") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("!^") ;
    ioList.appendObject ("&+") ;
    ioList.appendObject ("&/") ;
    ioList.appendObject ("++") ;
    ioList.appendObject ("+=") ;
    ioList.appendObject ("--") ;
    ioList.appendObject ("->") ;
    ioList.appendObject (":=") ;
    ioList.appendObject (":>") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">=") ;
    ioList.appendObject (">>") ;
    ioList.appendObject ("\?\?") ;
    ioList.appendObject ("\?^") ;
    ioList.appendObject ("&++") ;
    ioList.appendObject ("&--") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "galgasTemplateScanner:galgasKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("do") ;
    ioList.appendObject ("if") ;
    ioList.appendObject ("in") ;
    ioList.appendObject ("is") ;
    ioList.appendObject ("on") ;
    ioList.appendObject ("or") ;
    ioList.appendObject ("end") ;
    ioList.appendObject ("for") ;
    ioList.appendObject ("gui") ;
    ioList.appendObject ("let") ;
    ioList.appendObject ("log") ;
    ioList.appendObject ("map") ;
    ioList.appendObject ("mod") ;
    ioList.appendObject ("not") ;
    ioList.appendObject ("tag") ;
    ioList.appendObject ("var") ;
    ioList.appendObject ("case") ;
    ioList.appendObject ("cast") ;
    ioList.appendObject ("dict") ;
    ioList.appendObject ("drop") ;
    ioList.appendObject ("else") ;
    ioList.appendObject ("enum") ;
    ioList.appendObject ("func") ;
    ioList.appendObject ("here") ;
    ioList.appendObject ("list") ;
    ioList.appendObject ("loop") ;
    ioList.appendObject ("once") ;
    ioList.appendObject ("proc") ;
    ioList.appendObject ("rule") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("send") ;
    ioList.appendObject ("then") ;
    ioList.appendObject ("true") ;
    ioList.appendObject ("when") ;
    ioList.appendObject ("with") ;
    ioList.appendObject ("after") ;
    ioList.appendObject ("array") ;
    ioList.appendObject ("block") ;
    ioList.appendObject ("class") ;
    ioList.appendObject ("const") ;
    ioList.appendObject ("elsif") ;
    ioList.appendObject ("error") ;
    ioList.appendObject ("false") ;
    ioList.appendObject ("fixit") ;
    ioList.appendObject ("graph") ;
    ioList.appendObject ("index") ;
    ioList.appendObject ("label") ;
    ioList.appendObject ("match") ;
    ioList.appendObject ("parse") ;
    ioList.appendObject ("state") ;
    ioList.appendObject ("style") ;
    ioList.appendObject ("while") ;
    ioList.appendObject ("before") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("getter") ;
    ioList.appendObject ("insert") ;
    ioList.appendObject ("method") ;
    ioList.appendObject ("option") ;
    ioList.appendObject ("remove") ;
    ioList.appendObject ("repeat") ;
    ioList.appendObject ("search") ;
    ioList.appendObject ("select") ;
    ioList.appendObject ("setter") ;
    ioList.appendObject ("shared") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("switch") ;
    ioList.appendObject ("syntax") ;
    ioList.appendObject ("unused") ;
    ioList.appendObject ("between") ;
    ioList.appendObject ("boolset") ;
    ioList.appendObject ("default") ;
    ioList.appendObject ("foreach") ;
    ioList.appendObject ("grammar") ;
    ioList.appendObject ("lexique") ;
    ioList.appendObject ("listmap") ;
    ioList.appendObject ("message") ;
    ioList.appendObject ("private") ;
    ioList.appendObject ("project") ;
    ioList.appendObject ("replace") ;
    ioList.appendObject ("warning") ;
    ioList.appendObject ("abstract") ;
    ioList.appendObject ("indexing") ;
    ioList.appendObject ("operator") ;
    ioList.appendObject ("override") ;
    ioList.appendObject ("template") ;
    ioList.appendObject ("extension") ;
    ioList.appendObject ("sortedlist") ;
    ioList.appendObject ("constructor") ;
    ioList.appendObject ("filewrapper") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_galgasTemplateScanner
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_galgasTemplateScanner, getKeywordsForIdentifier_galgasTemplateScanner) ;

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_galgasTemplateScanner::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [147] = {0,
    0 /* galgasTemplateScanner_1_identifier */,
    10 /* galgasTemplateScanner_1__40_type */,
    7 /* galgasTemplateScanner_1_double_2E_xxx */,
    5 /* galgasTemplateScanner_1_uint_33__32_ */,
    5 /* galgasTemplateScanner_1_sint_33__32__5F_S */,
    5 /* galgasTemplateScanner_1_uint_36__34__5F_L */,
    5 /* galgasTemplateScanner_1_sint_36__34__5F_LS */,
    6 /* galgasTemplateScanner_1_bigint_5F_G */,
    2 /* galgasTemplateScanner_1__2E_ */,
    2 /* galgasTemplateScanner_1__2E__3D_ */,
    2 /* galgasTemplateScanner_1__2E__2E__2E_ */,
    2 /* galgasTemplateScanner_1__2E__2E__3C_ */,
    9 /* galgasTemplateScanner_1__27_char_27_ */,
    8 /* galgasTemplateScanner_1__22_string_22_ */,
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
    1 /* galgasTemplateScanner_1_boolset */,
    1 /* galgasTemplateScanner_1_case */,
    1 /* galgasTemplateScanner_1_cast */,
    1 /* galgasTemplateScanner_1_class */,
    1 /* galgasTemplateScanner_1_const */,
    1 /* galgasTemplateScanner_1_constructor */,
    1 /* galgasTemplateScanner_1_default */,
    1 /* galgasTemplateScanner_1_dict */,
    1 /* galgasTemplateScanner_1_do */,
    1 /* galgasTemplateScanner_1_drop */,
    1 /* galgasTemplateScanner_1_else */,
    1 /* galgasTemplateScanner_1_elsif */,
    1 /* galgasTemplateScanner_1_end */,
    1 /* galgasTemplateScanner_1_enum */,
    1 /* galgasTemplateScanner_1_error */,
    1 /* galgasTemplateScanner_1_extension */,
    1 /* galgasTemplateScanner_1_extern */,
    1 /* galgasTemplateScanner_1_false */,
    1 /* galgasTemplateScanner_1_filewrapper */,
    1 /* galgasTemplateScanner_1_fixit */,
    1 /* galgasTemplateScanner_1_for */,
    1 /* galgasTemplateScanner_1_foreach */,
    1 /* galgasTemplateScanner_1_func */,
    1 /* galgasTemplateScanner_1_getter */,
    1 /* galgasTemplateScanner_1_grammar */,
    1 /* galgasTemplateScanner_1_graph */,
    1 /* galgasTemplateScanner_1_gui */,
    1 /* galgasTemplateScanner_1_here */,
    1 /* galgasTemplateScanner_1_if */,
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
    1 /* galgasTemplateScanner_1_log */,
    1 /* galgasTemplateScanner_1_loop */,
    1 /* galgasTemplateScanner_1_map */,
    1 /* galgasTemplateScanner_1_match */,
    1 /* galgasTemplateScanner_1_message */,
    1 /* galgasTemplateScanner_1_method */,
    1 /* galgasTemplateScanner_1_mod */,
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
    1 /* galgasTemplateScanner_1_rule */,
    1 /* galgasTemplateScanner_1_search */,
    1 /* galgasTemplateScanner_1_select */,
    1 /* galgasTemplateScanner_1_self */,
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
    1 /* galgasTemplateScanner_1_shared */,
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

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_templateInstructionAST::objectCompare (const GALGAS_templateInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionAST::GALGAS_templateInstructionAST (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionAST::GALGAS_templateInstructionAST (const cPtr_templateInstructionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionAST::cPtr_templateInstructionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionAST ("templateInstructionAST",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionAST GALGAS_templateInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionAST result ;
  const GALGAS_templateInstructionAST * p = (const GALGAS_templateInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@templateInstructionListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_templateInstructionListAST : public cCollectionElement {
  public : GALGAS_templateInstructionListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_templateInstructionListAST (const GALGAS_templateInstructionAST & in_mInstruction
                                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_templateInstructionListAST (const GALGAS_templateInstructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionListAST::cCollectionElement_templateInstructionListAST (const GALGAS_templateInstructionAST & in_mInstruction
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionListAST::cCollectionElement_templateInstructionListAST (const GALGAS_templateInstructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_templateInstructionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateInstructionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_templateInstructionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_templateInstructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionListAST * operand = (cCollectionElement_templateInstructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST::GALGAS_templateInstructionListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST::GALGAS_templateInstructionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionListAST::constructor_listWithValue (const GALGAS_templateInstructionAST & inOperand0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_templateInstructionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_templateInstructionAST & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_templateInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST::addAssign_operation (const GALGAS_templateInstructionAST & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST::setter_append (GALGAS_templateInstructionListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST::setter_insertAtIndex (const GALGAS_templateInstructionAST inOperand0,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST::setter_removeAtIndex (GALGAS_templateInstructionAST & outOperand0,
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
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST::setter_popFirst (GALGAS_templateInstructionAST & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListAST * p = (cCollectionElement_templateInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST::setter_popLast (GALGAS_templateInstructionAST & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListAST * p = (cCollectionElement_templateInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result = GALGAS_templateInstructionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result = GALGAS_templateInstructionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result = GALGAS_templateInstructionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST::plusAssign_operation (const GALGAS_templateInstructionListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST::setter_setMInstructionAtIndex (GALGAS_templateInstructionAST inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionListAST * p = (cCollectionElement_templateInstructionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionAST GALGAS_templateInstructionListAST::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListAST * p = (cCollectionElement_templateInstructionListAST *) attributes.ptr () ;
  GALGAS_templateInstructionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionListAST) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateInstructionListAST::cEnumerator_templateInstructionListAST (const GALGAS_templateInstructionListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST_2D_element cEnumerator_templateInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionListAST * p = (const cCollectionElement_templateInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionAST cEnumerator_templateInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionListAST * p = (const cCollectionElement_templateInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionListAST) ;
  return p->mObject.mProperty_mInstruction ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionListAST ("templateInstructionListAST",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_templateExpressionAST::objectCompare (const GALGAS_templateExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST::GALGAS_templateExpressionAST (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST::GALGAS_templateExpressionAST (const cPtr_templateExpressionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateExpressionAST::cPtr_templateExpressionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateExpressionAST ("templateExpressionAST",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateExpressionAST result ;
  const GALGAS_templateExpressionAST * p = (const GALGAS_templateExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@templateExpressionListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_templateExpressionListAST : public cCollectionElement {
  public : GALGAS_templateExpressionListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_templateExpressionListAST (const GALGAS_lstring & in_mActualSelector,
                                                         const GALGAS_templateExpressionAST & in_mExpression,
                                                         const GALGAS_location & in_mEndOfExpressionLocation
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_templateExpressionListAST (const GALGAS_templateExpressionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateExpressionListAST::cCollectionElement_templateExpressionListAST (const GALGAS_lstring & in_mActualSelector,
                                                                                            const GALGAS_templateExpressionAST & in_mExpression,
                                                                                            const GALGAS_location & in_mEndOfExpressionLocation
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActualSelector, in_mExpression, in_mEndOfExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateExpressionListAST::cCollectionElement_templateExpressionListAST (const GALGAS_templateExpressionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mActualSelector, inElement.mProperty_mExpression, inElement.mProperty_mEndOfExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_templateExpressionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateExpressionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateExpressionListAST (mObject.mProperty_mActualSelector, mObject.mProperty_mExpression, mObject.mProperty_mEndOfExpressionLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_templateExpressionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActualSelector" ":" ;
  mObject.mProperty_mActualSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfExpressionLocation" ":" ;
  mObject.mProperty_mEndOfExpressionLocation.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_templateExpressionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateExpressionListAST * operand = (cCollectionElement_templateExpressionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateExpressionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST::GALGAS_templateExpressionListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST::GALGAS_templateExpressionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateExpressionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateExpressionListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateExpressionListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_templateExpressionAST & inOperand1,
                                                                                              const GALGAS_location & inOperand2
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateExpressionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateExpressionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_templateExpressionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateExpressionListAST::setter_append (GALGAS_templateExpressionListAST_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateExpressionListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateExpressionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateExpressionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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
      outOperand0 = p->mObject.mProperty_mActualSelector ;
      outOperand1 = p->mObject.mProperty_mExpression ;
      outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateExpressionListAST::setter_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateExpressionListAST::setter_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateExpressionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result = GALGAS_templateExpressionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateExpressionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result = GALGAS_templateExpressionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateExpressionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result = GALGAS_templateExpressionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateExpressionListAST::plusAssign_operation (const GALGAS_templateExpressionListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateExpressionListAST::setter_setMActualSelectorAtIndex (GALGAS_lstring inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_templateExpressionListAST * p = (cCollectionElement_templateExpressionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActualSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateExpressionListAST::getter_mActualSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateExpressionListAST * p = (cCollectionElement_templateExpressionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
    result = p->mObject.mProperty_mActualSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateExpressionListAST::setter_setMExpressionAtIndex (GALGAS_templateExpressionAST inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_templateExpressionListAST * p = (cCollectionElement_templateExpressionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateExpressionListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateExpressionListAST * p = (cCollectionElement_templateExpressionListAST *) attributes.ptr () ;
  GALGAS_templateExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateExpressionListAST::setter_setMEndOfExpressionLocationAtIndex (GALGAS_location inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_templateExpressionListAST * p = (cCollectionElement_templateExpressionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfExpressionLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateExpressionListAST::getter_mEndOfExpressionLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateExpressionListAST * p = (cCollectionElement_templateExpressionListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
    result = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateExpressionListAST::cEnumerator_templateExpressionListAST (const GALGAS_templateExpressionListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST_2D_element cEnumerator_templateExpressionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateExpressionListAST * p = (const cCollectionElement_templateExpressionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_templateExpressionListAST::current_mActualSelector (LOCATION_ARGS) const {
  const cCollectionElement_templateExpressionListAST * p = (const cCollectionElement_templateExpressionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
  return p->mObject.mProperty_mActualSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cEnumerator_templateExpressionListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_templateExpressionListAST * p = (const cCollectionElement_templateExpressionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
  return p->mObject.mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_templateExpressionListAST::current_mEndOfExpressionLocation (LOCATION_ARGS) const {
  const cCollectionElement_templateExpressionListAST * p = (const cCollectionElement_templateExpressionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
  return p->mObject.mProperty_mEndOfExpressionLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@templateExpressionListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateExpressionListAST ("templateExpressionListAST",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateExpressionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExpressionListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateExpressionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateExpressionListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateAndOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateAndOperationAST * p = (const cPtr_templateAndOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateAndOperationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateAndOperationAST::objectCompare (const GALGAS_templateAndOperationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAndOperationAST::GALGAS_templateAndOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAndOperationAST::GALGAS_templateAndOperationAST (const cPtr_templateAndOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateAndOperationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAndOperationAST GALGAS_templateAndOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateAndOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateAndOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateAndOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateAndOperationAST * p = (const cPtr_templateAndOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAndOperationAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateAndOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateAndOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateAndOperationAST * p = (const cPtr_templateAndOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAndOperationAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateAndOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateAndOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateAndOperationAST * p = (const cPtr_templateAndOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAndOperationAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateAndOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateAndOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateAndOperationAST * p = (cPtr_templateAndOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAndOperationAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateAndOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateAndOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateAndOperationAST * p = (cPtr_templateAndOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAndOperationAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateAndOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateAndOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateAndOperationAST * p = (cPtr_templateAndOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAndOperationAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateAndOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateAndOperationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateAndOperationAST::cPtr_templateAndOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                            const GALGAS_templateExpressionAST & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateAndOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAndOperationAST ;
}

void cPtr_templateAndOperationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateAndOperationAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateAndOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateAndOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateAndOperationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateAndOperationAST ("templateAndOperationAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateAndOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAndOperationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateAndOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateAndOperationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAndOperationAST GALGAS_templateAndOperationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateAndOperationAST result ;
  const GALGAS_templateAndOperationAST * p = (const GALGAS_templateAndOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateAndOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateAndOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateOrOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateOrOperationAST * p = (const cPtr_templateOrOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateOrOperationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateOrOperationAST::objectCompare (const GALGAS_templateOrOperationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOrOperationAST::GALGAS_templateOrOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOrOperationAST::GALGAS_templateOrOperationAST (const cPtr_templateOrOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateOrOperationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOrOperationAST GALGAS_templateOrOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                              const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                              const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateOrOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateOrOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateOrOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateOrOperationAST * p = (const cPtr_templateOrOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOrOperationAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateOrOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateOrOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateOrOperationAST * p = (const cPtr_templateOrOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOrOperationAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateOrOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateOrOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateOrOperationAST * p = (const cPtr_templateOrOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOrOperationAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateOrOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateOrOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateOrOperationAST * p = (cPtr_templateOrOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOrOperationAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateOrOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateOrOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateOrOperationAST * p = (cPtr_templateOrOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOrOperationAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateOrOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateOrOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateOrOperationAST * p = (cPtr_templateOrOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOrOperationAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateOrOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateOrOperationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateOrOperationAST::cPtr_templateOrOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                          const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                          const GALGAS_templateExpressionAST & in_mRightExpression
                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateOrOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOrOperationAST ;
}

void cPtr_templateOrOperationAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@templateOrOperationAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateOrOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateOrOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateOrOperationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateOrOperationAST ("templateOrOperationAST",
                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateOrOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOrOperationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateOrOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateOrOperationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOrOperationAST GALGAS_templateOrOperationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateOrOperationAST result ;
  const GALGAS_templateOrOperationAST * p = (const GALGAS_templateOrOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateOrOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateOrOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateXorOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateXorOperationAST * p = (const cPtr_templateXorOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateXorOperationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateXorOperationAST::objectCompare (const GALGAS_templateXorOperationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateXorOperationAST::GALGAS_templateXorOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateXorOperationAST::GALGAS_templateXorOperationAST (const cPtr_templateXorOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateXorOperationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateXorOperationAST GALGAS_templateXorOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateXorOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateXorOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateXorOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateXorOperationAST * p = (const cPtr_templateXorOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateXorOperationAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateXorOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateXorOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateXorOperationAST * p = (const cPtr_templateXorOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateXorOperationAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateXorOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateXorOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateXorOperationAST * p = (const cPtr_templateXorOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateXorOperationAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateXorOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateXorOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateXorOperationAST * p = (cPtr_templateXorOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateXorOperationAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateXorOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateXorOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateXorOperationAST * p = (cPtr_templateXorOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateXorOperationAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateXorOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateXorOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateXorOperationAST * p = (cPtr_templateXorOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateXorOperationAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateXorOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateXorOperationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateXorOperationAST::cPtr_templateXorOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                            const GALGAS_templateExpressionAST & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateXorOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateXorOperationAST ;
}

void cPtr_templateXorOperationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateXorOperationAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateXorOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateXorOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateXorOperationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateXorOperationAST ("templateXorOperationAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateXorOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateXorOperationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateXorOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateXorOperationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateXorOperationAST GALGAS_templateXorOperationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateXorOperationAST result ;
  const GALGAS_templateXorOperationAST * p = (const GALGAS_templateXorOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateXorOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateXorOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateTrueBoolAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateTrueBoolAST * p = (const cPtr_templateTrueBoolAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateTrueBoolAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateTrueBoolAST::objectCompare (const GALGAS_templateTrueBoolAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTrueBoolAST::GALGAS_templateTrueBoolAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTrueBoolAST GALGAS_templateTrueBoolAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateTrueBoolAST::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTrueBoolAST::GALGAS_templateTrueBoolAST (const cPtr_templateTrueBoolAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateTrueBoolAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTrueBoolAST GALGAS_templateTrueBoolAST::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateTrueBoolAST result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateTrueBoolAST (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateTrueBoolAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateTrueBoolAST * p = (const cPtr_templateTrueBoolAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTrueBoolAST) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateTrueBoolAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateTrueBoolAST::setter_setMLocation (GALGAS_location inValue
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateTrueBoolAST * p = (cPtr_templateTrueBoolAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTrueBoolAST) ;
    p->mProperty_mLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateTrueBoolAST::setter_setMLocation (GALGAS_location inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateTrueBoolAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateTrueBoolAST::cPtr_templateTrueBoolAST (const GALGAS_location & in_mLocation
                                                    COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mLocation (in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateTrueBoolAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTrueBoolAST ;
}

void cPtr_templateTrueBoolAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@templateTrueBoolAST:" ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateTrueBoolAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateTrueBoolAST (mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateTrueBoolAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateTrueBoolAST ("templateTrueBoolAST",
                                            & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateTrueBoolAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTrueBoolAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateTrueBoolAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateTrueBoolAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTrueBoolAST GALGAS_templateTrueBoolAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateTrueBoolAST result ;
  const GALGAS_templateTrueBoolAST * p = (const GALGAS_templateTrueBoolAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateTrueBoolAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateTrueBoolAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateFalseBoolAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateFalseBoolAST * p = (const cPtr_templateFalseBoolAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateFalseBoolAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateFalseBoolAST::objectCompare (const GALGAS_templateFalseBoolAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFalseBoolAST::GALGAS_templateFalseBoolAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFalseBoolAST GALGAS_templateFalseBoolAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateFalseBoolAST::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFalseBoolAST::GALGAS_templateFalseBoolAST (const cPtr_templateFalseBoolAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFalseBoolAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFalseBoolAST GALGAS_templateFalseBoolAST::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateFalseBoolAST result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateFalseBoolAST (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateFalseBoolAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFalseBoolAST * p = (const cPtr_templateFalseBoolAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFalseBoolAST) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateFalseBoolAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateFalseBoolAST::setter_setMLocation (GALGAS_location inValue
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateFalseBoolAST * p = (cPtr_templateFalseBoolAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFalseBoolAST) ;
    p->mProperty_mLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateFalseBoolAST::setter_setMLocation (GALGAS_location inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateFalseBoolAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateFalseBoolAST::cPtr_templateFalseBoolAST (const GALGAS_location & in_mLocation
                                                      COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mLocation (in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateFalseBoolAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFalseBoolAST ;
}

void cPtr_templateFalseBoolAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@templateFalseBoolAST:" ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateFalseBoolAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateFalseBoolAST (mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateFalseBoolAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateFalseBoolAST ("templateFalseBoolAST",
                                             & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateFalseBoolAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFalseBoolAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateFalseBoolAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFalseBoolAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFalseBoolAST GALGAS_templateFalseBoolAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateFalseBoolAST result ;
  const GALGAS_templateFalseBoolAST * p = (const GALGAS_templateFalseBoolAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateFalseBoolAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFalseBoolAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateNotOperatorAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateNotOperatorAST * p = (const cPtr_templateNotOperatorAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateNotOperatorAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateNotOperatorAST::objectCompare (const GALGAS_templateNotOperatorAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNotOperatorAST::GALGAS_templateNotOperatorAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNotOperatorAST::GALGAS_templateNotOperatorAST (const cPtr_templateNotOperatorAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateNotOperatorAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNotOperatorAST GALGAS_templateNotOperatorAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                              const GALGAS_templateExpressionAST & inAttribute_mExpression
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateNotOperatorAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateNotOperatorAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateNotOperatorAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateNotOperatorAST * p = (const cPtr_templateNotOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNotOperatorAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateNotOperatorAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateNotOperatorAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateNotOperatorAST * p = (const cPtr_templateNotOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNotOperatorAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateNotOperatorAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateNotOperatorAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateNotOperatorAST * p = (cPtr_templateNotOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNotOperatorAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateNotOperatorAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateNotOperatorAST::setter_setMExpression (GALGAS_templateExpressionAST inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateNotOperatorAST * p = (cPtr_templateNotOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNotOperatorAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateNotOperatorAST::setter_setMExpression (GALGAS_templateExpressionAST inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateNotOperatorAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateNotOperatorAST::cPtr_templateNotOperatorAST (const GALGAS_location & in_mOperatorLocation,
                                                          const GALGAS_templateExpressionAST & in_mExpression
                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateNotOperatorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNotOperatorAST ;
}

void cPtr_templateNotOperatorAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@templateNotOperatorAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateNotOperatorAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateNotOperatorAST (mProperty_mOperatorLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateNotOperatorAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateNotOperatorAST ("templateNotOperatorAST",
                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateNotOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNotOperatorAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateNotOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateNotOperatorAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNotOperatorAST GALGAS_templateNotOperatorAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateNotOperatorAST result ;
  const GALGAS_templateNotOperatorAST * p = (const GALGAS_templateNotOperatorAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateNotOperatorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateNotOperatorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateLogicalNegateAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLogicalNegateAST * p = (const cPtr_templateLogicalNegateAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLogicalNegateAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateLogicalNegateAST::objectCompare (const GALGAS_templateLogicalNegateAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLogicalNegateAST::GALGAS_templateLogicalNegateAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLogicalNegateAST::GALGAS_templateLogicalNegateAST (const cPtr_templateLogicalNegateAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLogicalNegateAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLogicalNegateAST GALGAS_templateLogicalNegateAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                  const GALGAS_templateExpressionAST & inAttribute_mExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateLogicalNegateAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLogicalNegateAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateLogicalNegateAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLogicalNegateAST * p = (const cPtr_templateLogicalNegateAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLogicalNegateAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateLogicalNegateAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateLogicalNegateAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLogicalNegateAST * p = (const cPtr_templateLogicalNegateAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLogicalNegateAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateLogicalNegateAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateLogicalNegateAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateLogicalNegateAST * p = (cPtr_templateLogicalNegateAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLogicalNegateAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateLogicalNegateAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateLogicalNegateAST::setter_setMExpression (GALGAS_templateExpressionAST inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateLogicalNegateAST * p = (cPtr_templateLogicalNegateAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLogicalNegateAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateLogicalNegateAST::setter_setMExpression (GALGAS_templateExpressionAST inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateLogicalNegateAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateLogicalNegateAST::cPtr_templateLogicalNegateAST (const GALGAS_location & in_mOperatorLocation,
                                                              const GALGAS_templateExpressionAST & in_mExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLogicalNegateAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLogicalNegateAST ;
}

void cPtr_templateLogicalNegateAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@templateLogicalNegateAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLogicalNegateAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLogicalNegateAST (mProperty_mOperatorLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateLogicalNegateAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLogicalNegateAST ("templateLogicalNegateAST",
                                                 & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLogicalNegateAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLogicalNegateAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLogicalNegateAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLogicalNegateAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLogicalNegateAST GALGAS_templateLogicalNegateAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLogicalNegateAST result ;
  const GALGAS_templateLogicalNegateAST * p = (const GALGAS_templateLogicalNegateAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLogicalNegateAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLogicalNegateAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind::GALGAS_dynamicTypeComparisonKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_dynamicTypeComparisonKind::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_dynamicTypeComparisonKind result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_dynamicTypeComparisonKind::constructor_inherited (UNUSED_LOCATION_ARGS) {
  GALGAS_dynamicTypeComparisonKind result ;
  result.mEnum = kEnum_inherited ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (UNUSED_LOCATION_ARGS) {
  GALGAS_dynamicTypeComparisonKind result ;
  result.mEnum = kEnum_strictlyInherited ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_dynamicTypeComparisonKind::optional_equal () const {
  const bool ok = mEnum == kEnum_equal ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_dynamicTypeComparisonKind::optional_inherited () const {
  const bool ok = mEnum == kEnum_inherited ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_dynamicTypeComparisonKind::optional_strictlyInherited () const {
  const bool ok = mEnum == kEnum_strictlyInherited ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_dynamicTypeComparisonKind [4] = {
  "(not built)",
  "equal",
  "inherited",
  "strictlyInherited"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dynamicTypeComparisonKind::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dynamicTypeComparisonKind::getter_isInherited (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_inherited == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dynamicTypeComparisonKind::getter_isStrictlyInherited (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_strictlyInherited == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dynamicTypeComparisonKind::description (C_String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString << "<enum @dynamicTypeComparisonKind: " << gEnumNameArrayFor_dynamicTypeComparisonKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynamicTypeComparisonKind::objectCompare (const GALGAS_dynamicTypeComparisonKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dynamicTypeComparisonKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynamicTypeComparisonKind ("dynamicTypeComparisonKind",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynamicTypeComparisonKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicTypeComparisonKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynamicTypeComparisonKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynamicTypeComparisonKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_dynamicTypeComparisonKind::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_dynamicTypeComparisonKind result ;
  const GALGAS_dynamicTypeComparisonKind * p = (const GALGAS_dynamicTypeComparisonKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynamicTypeComparisonKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicTypeComparisonKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateAddOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateAddOperationAST * p = (const cPtr_templateAddOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateAddOperationAST::objectCompare (const GALGAS_templateAddOperationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAddOperationAST::GALGAS_templateAddOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAddOperationAST::GALGAS_templateAddOperationAST (const cPtr_templateAddOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateAddOperationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAddOperationAST GALGAS_templateAddOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateAddOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateAddOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateAddOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateAddOperationAST * p = (const cPtr_templateAddOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateAddOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateAddOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateAddOperationAST * p = (const cPtr_templateAddOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateAddOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateAddOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateAddOperationAST * p = (const cPtr_templateAddOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateAddOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateAddOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateAddOperationAST * p = (cPtr_templateAddOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateAddOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateAddOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateAddOperationAST * p = (cPtr_templateAddOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateAddOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateAddOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateAddOperationAST * p = (cPtr_templateAddOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateAddOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateAddOperationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateAddOperationAST::cPtr_templateAddOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                            const GALGAS_templateExpressionAST & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateAddOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAddOperationAST ;
}

void cPtr_templateAddOperationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateAddOperationAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateAddOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateAddOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateAddOperationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateAddOperationAST ("templateAddOperationAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateAddOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAddOperationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateAddOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateAddOperationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAddOperationAST GALGAS_templateAddOperationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateAddOperationAST result ;
  const GALGAS_templateAddOperationAST * p = (const GALGAS_templateAddOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateAddOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateAddOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateSubOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateSubOperationAST * p = (const cPtr_templateSubOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateSubOperationAST::objectCompare (const GALGAS_templateSubOperationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSubOperationAST::GALGAS_templateSubOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSubOperationAST::GALGAS_templateSubOperationAST (const cPtr_templateSubOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateSubOperationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSubOperationAST GALGAS_templateSubOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateSubOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateSubOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateSubOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateSubOperationAST * p = (const cPtr_templateSubOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateSubOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateSubOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateSubOperationAST * p = (const cPtr_templateSubOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateSubOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateSubOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateSubOperationAST * p = (const cPtr_templateSubOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateSubOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateSubOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateSubOperationAST * p = (cPtr_templateSubOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateSubOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateSubOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateSubOperationAST * p = (cPtr_templateSubOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateSubOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateSubOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateSubOperationAST * p = (cPtr_templateSubOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateSubOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateSubOperationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateSubOperationAST::cPtr_templateSubOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                            const GALGAS_templateExpressionAST & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateSubOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSubOperationAST ;
}

void cPtr_templateSubOperationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateSubOperationAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateSubOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateSubOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateSubOperationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateSubOperationAST ("templateSubOperationAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateSubOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSubOperationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateSubOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateSubOperationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSubOperationAST GALGAS_templateSubOperationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateSubOperationAST result ;
  const GALGAS_templateSubOperationAST * p = (const GALGAS_templateSubOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateSubOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateSubOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateMultiplyOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateMultiplyOperationAST * p = (const cPtr_templateMultiplyOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateMultiplyOperationAST::objectCompare (const GALGAS_templateMultiplyOperationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateMultiplyOperationAST::GALGAS_templateMultiplyOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateMultiplyOperationAST::GALGAS_templateMultiplyOperationAST (const cPtr_templateMultiplyOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateMultiplyOperationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateMultiplyOperationAST GALGAS_templateMultiplyOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                          const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                          const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateMultiplyOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateMultiplyOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateMultiplyOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateMultiplyOperationAST * p = (const cPtr_templateMultiplyOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateMultiplyOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateMultiplyOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateMultiplyOperationAST * p = (const cPtr_templateMultiplyOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateMultiplyOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateMultiplyOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateMultiplyOperationAST * p = (const cPtr_templateMultiplyOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateMultiplyOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateMultiplyOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateMultiplyOperationAST * p = (cPtr_templateMultiplyOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateMultiplyOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateMultiplyOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateMultiplyOperationAST * p = (cPtr_templateMultiplyOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateMultiplyOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateMultiplyOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateMultiplyOperationAST * p = (cPtr_templateMultiplyOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateMultiplyOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateMultiplyOperationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateMultiplyOperationAST::cPtr_templateMultiplyOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                                      const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                                      const GALGAS_templateExpressionAST & in_mRightExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateMultiplyOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateMultiplyOperationAST ;
}

void cPtr_templateMultiplyOperationAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@templateMultiplyOperationAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateMultiplyOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateMultiplyOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateMultiplyOperationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateMultiplyOperationAST ("templateMultiplyOperationAST",
                                                     & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateMultiplyOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateMultiplyOperationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateMultiplyOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateMultiplyOperationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateMultiplyOperationAST GALGAS_templateMultiplyOperationAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateMultiplyOperationAST result ;
  const GALGAS_templateMultiplyOperationAST * p = (const GALGAS_templateMultiplyOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateMultiplyOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateMultiplyOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateDivideOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateDivideOperationAST * p = (const cPtr_templateDivideOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateDivideOperationAST::objectCompare (const GALGAS_templateDivideOperationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDivideOperationAST::GALGAS_templateDivideOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDivideOperationAST::GALGAS_templateDivideOperationAST (const cPtr_templateDivideOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateDivideOperationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDivideOperationAST GALGAS_templateDivideOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                      const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                      const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateDivideOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateDivideOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateDivideOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateDivideOperationAST * p = (const cPtr_templateDivideOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateDivideOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateDivideOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateDivideOperationAST * p = (const cPtr_templateDivideOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateDivideOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateDivideOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateDivideOperationAST * p = (const cPtr_templateDivideOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateDivideOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDivideOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateDivideOperationAST * p = (cPtr_templateDivideOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateDivideOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDivideOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateDivideOperationAST * p = (cPtr_templateDivideOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateDivideOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateDivideOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateDivideOperationAST * p = (cPtr_templateDivideOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateDivideOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateDivideOperationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateDivideOperationAST::cPtr_templateDivideOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                                  const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                                  const GALGAS_templateExpressionAST & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateDivideOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDivideOperationAST ;
}

void cPtr_templateDivideOperationAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@templateDivideOperationAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateDivideOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateDivideOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateDivideOperationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateDivideOperationAST ("templateDivideOperationAST",
                                                   & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateDivideOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDivideOperationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateDivideOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateDivideOperationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDivideOperationAST GALGAS_templateDivideOperationAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateDivideOperationAST result ;
  const GALGAS_templateDivideOperationAST * p = (const GALGAS_templateDivideOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateDivideOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDivideOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateModuloOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateModuloOperationAST * p = (const cPtr_templateModuloOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateModuloOperationAST::objectCompare (const GALGAS_templateModuloOperationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateModuloOperationAST::GALGAS_templateModuloOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateModuloOperationAST::GALGAS_templateModuloOperationAST (const cPtr_templateModuloOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateModuloOperationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateModuloOperationAST GALGAS_templateModuloOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                      const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                      const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateModuloOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateModuloOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateModuloOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateModuloOperationAST * p = (const cPtr_templateModuloOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateModuloOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateModuloOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateModuloOperationAST * p = (const cPtr_templateModuloOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateModuloOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateModuloOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateModuloOperationAST * p = (const cPtr_templateModuloOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateModuloOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateModuloOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateModuloOperationAST * p = (cPtr_templateModuloOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateModuloOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateModuloOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateModuloOperationAST * p = (cPtr_templateModuloOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateModuloOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateModuloOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateModuloOperationAST * p = (cPtr_templateModuloOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateModuloOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateModuloOperationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateModuloOperationAST::cPtr_templateModuloOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                                  const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                                  const GALGAS_templateExpressionAST & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateModuloOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateModuloOperationAST ;
}

void cPtr_templateModuloOperationAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@templateModuloOperationAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateModuloOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateModuloOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateModuloOperationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateModuloOperationAST ("templateModuloOperationAST",
                                                   & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateModuloOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateModuloOperationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateModuloOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateModuloOperationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateModuloOperationAST GALGAS_templateModuloOperationAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateModuloOperationAST result ;
  const GALGAS_templateModuloOperationAST * p = (const GALGAS_templateModuloOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateModuloOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateModuloOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateUnaryMinusOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateUnaryMinusOperationAST * p = (const cPtr_templateUnaryMinusOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateUnaryMinusOperationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateUnaryMinusOperationAST::objectCompare (const GALGAS_templateUnaryMinusOperationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateUnaryMinusOperationAST::GALGAS_templateUnaryMinusOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateUnaryMinusOperationAST::GALGAS_templateUnaryMinusOperationAST (const cPtr_templateUnaryMinusOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateUnaryMinusOperationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateUnaryMinusOperationAST GALGAS_templateUnaryMinusOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                              const GALGAS_templateExpressionAST & inAttribute_mExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateUnaryMinusOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateUnaryMinusOperationAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateUnaryMinusOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateUnaryMinusOperationAST * p = (const cPtr_templateUnaryMinusOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateUnaryMinusOperationAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateUnaryMinusOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateUnaryMinusOperationAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateUnaryMinusOperationAST * p = (const cPtr_templateUnaryMinusOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateUnaryMinusOperationAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateUnaryMinusOperationAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateUnaryMinusOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateUnaryMinusOperationAST * p = (cPtr_templateUnaryMinusOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateUnaryMinusOperationAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateUnaryMinusOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateUnaryMinusOperationAST::setter_setMExpression (GALGAS_templateExpressionAST inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateUnaryMinusOperationAST * p = (cPtr_templateUnaryMinusOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateUnaryMinusOperationAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateUnaryMinusOperationAST::setter_setMExpression (GALGAS_templateExpressionAST inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateUnaryMinusOperationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateUnaryMinusOperationAST::cPtr_templateUnaryMinusOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                                          const GALGAS_templateExpressionAST & in_mExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateUnaryMinusOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST ;
}

void cPtr_templateUnaryMinusOperationAST::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@templateUnaryMinusOperationAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateUnaryMinusOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateUnaryMinusOperationAST (mProperty_mOperatorLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateUnaryMinusOperationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST ("templateUnaryMinusOperationAST",
                                                       & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateUnaryMinusOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateUnaryMinusOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateUnaryMinusOperationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateUnaryMinusOperationAST GALGAS_templateUnaryMinusOperationAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateUnaryMinusOperationAST result ;
  const GALGAS_templateUnaryMinusOperationAST * p = (const GALGAS_templateUnaryMinusOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateUnaryMinusOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateUnaryMinusOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateEqualTestAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateEqualTestAST * p = (const cPtr_templateEqualTestAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateEqualTestAST::objectCompare (const GALGAS_templateEqualTestAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateEqualTestAST::GALGAS_templateEqualTestAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateEqualTestAST::GALGAS_templateEqualTestAST (const cPtr_templateEqualTestAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateEqualTestAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateEqualTestAST GALGAS_templateEqualTestAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                          const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                          const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateEqualTestAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateEqualTestAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateEqualTestAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateEqualTestAST * p = (const cPtr_templateEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateEqualTestAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateEqualTestAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateEqualTestAST * p = (const cPtr_templateEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateEqualTestAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateEqualTestAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateEqualTestAST * p = (const cPtr_templateEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateEqualTestAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateEqualTestAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateEqualTestAST * p = (cPtr_templateEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateEqualTestAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateEqualTestAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateEqualTestAST * p = (cPtr_templateEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateEqualTestAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateEqualTestAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateEqualTestAST * p = (cPtr_templateEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateEqualTestAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateEqualTestAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateEqualTestAST::cPtr_templateEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                                      const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                      const GALGAS_templateExpressionAST & in_mRightExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateEqualTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateEqualTestAST ;
}

void cPtr_templateEqualTestAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@templateEqualTestAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateEqualTestAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateEqualTestAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateEqualTestAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateEqualTestAST ("templateEqualTestAST",
                                             & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateEqualTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateEqualTestAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateEqualTestAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateEqualTestAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateEqualTestAST GALGAS_templateEqualTestAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateEqualTestAST result ;
  const GALGAS_templateEqualTestAST * p = (const GALGAS_templateEqualTestAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateEqualTestAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateEqualTestAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateNonEqualTestAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateNonEqualTestAST * p = (const cPtr_templateNonEqualTestAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateNonEqualTestAST::objectCompare (const GALGAS_templateNonEqualTestAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNonEqualTestAST::GALGAS_templateNonEqualTestAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNonEqualTestAST::GALGAS_templateNonEqualTestAST (const cPtr_templateNonEqualTestAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateNonEqualTestAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNonEqualTestAST GALGAS_templateNonEqualTestAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateNonEqualTestAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateNonEqualTestAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateNonEqualTestAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateNonEqualTestAST * p = (const cPtr_templateNonEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateNonEqualTestAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateNonEqualTestAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateNonEqualTestAST * p = (const cPtr_templateNonEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateNonEqualTestAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateNonEqualTestAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateNonEqualTestAST * p = (const cPtr_templateNonEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateNonEqualTestAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateNonEqualTestAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateNonEqualTestAST * p = (cPtr_templateNonEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateNonEqualTestAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateNonEqualTestAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateNonEqualTestAST * p = (cPtr_templateNonEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateNonEqualTestAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateNonEqualTestAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateNonEqualTestAST * p = (cPtr_templateNonEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateNonEqualTestAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateNonEqualTestAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateNonEqualTestAST::cPtr_templateNonEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                            const GALGAS_templateExpressionAST & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateNonEqualTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNonEqualTestAST ;
}

void cPtr_templateNonEqualTestAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateNonEqualTestAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateNonEqualTestAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateNonEqualTestAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateNonEqualTestAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateNonEqualTestAST ("templateNonEqualTestAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateNonEqualTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNonEqualTestAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateNonEqualTestAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateNonEqualTestAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNonEqualTestAST GALGAS_templateNonEqualTestAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateNonEqualTestAST result ;
  const GALGAS_templateNonEqualTestAST * p = (const GALGAS_templateNonEqualTestAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateNonEqualTestAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateNonEqualTestAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateStrictInfTestAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateStrictInfTestAST * p = (const cPtr_templateStrictInfTestAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateStrictInfTestAST::objectCompare (const GALGAS_templateStrictInfTestAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictInfTestAST::GALGAS_templateStrictInfTestAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictInfTestAST::GALGAS_templateStrictInfTestAST (const cPtr_templateStrictInfTestAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateStrictInfTestAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictInfTestAST GALGAS_templateStrictInfTestAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                  const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                  const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateStrictInfTestAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateStrictInfTestAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateStrictInfTestAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateStrictInfTestAST * p = (const cPtr_templateStrictInfTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateStrictInfTestAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateStrictInfTestAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateStrictInfTestAST * p = (const cPtr_templateStrictInfTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateStrictInfTestAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateStrictInfTestAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateStrictInfTestAST * p = (const cPtr_templateStrictInfTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateStrictInfTestAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateStrictInfTestAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateStrictInfTestAST * p = (cPtr_templateStrictInfTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateStrictInfTestAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateStrictInfTestAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateStrictInfTestAST * p = (cPtr_templateStrictInfTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateStrictInfTestAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateStrictInfTestAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateStrictInfTestAST * p = (cPtr_templateStrictInfTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateStrictInfTestAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateStrictInfTestAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateStrictInfTestAST::cPtr_templateStrictInfTestAST (const GALGAS_location & in_mOperatorLocation,
                                                              const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                              const GALGAS_templateExpressionAST & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateStrictInfTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictInfTestAST ;
}

void cPtr_templateStrictInfTestAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@templateStrictInfTestAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateStrictInfTestAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateStrictInfTestAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateStrictInfTestAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateStrictInfTestAST ("templateStrictInfTestAST",
                                                 & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateStrictInfTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictInfTestAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateStrictInfTestAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateStrictInfTestAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictInfTestAST GALGAS_templateStrictInfTestAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateStrictInfTestAST result ;
  const GALGAS_templateStrictInfTestAST * p = (const GALGAS_templateStrictInfTestAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateStrictInfTestAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateStrictInfTestAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInfOrEqualTestAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInfOrEqualTestAST * p = (const cPtr_templateInfOrEqualTestAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInfOrEqualTestAST::objectCompare (const GALGAS_templateInfOrEqualTestAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInfOrEqualTestAST::GALGAS_templateInfOrEqualTestAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInfOrEqualTestAST::GALGAS_templateInfOrEqualTestAST (const cPtr_templateInfOrEqualTestAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInfOrEqualTestAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInfOrEqualTestAST GALGAS_templateInfOrEqualTestAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                    const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                    const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInfOrEqualTestAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInfOrEqualTestAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateInfOrEqualTestAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInfOrEqualTestAST * p = (const cPtr_templateInfOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateInfOrEqualTestAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateInfOrEqualTestAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInfOrEqualTestAST * p = (const cPtr_templateInfOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateInfOrEqualTestAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateInfOrEqualTestAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInfOrEqualTestAST * p = (const cPtr_templateInfOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateInfOrEqualTestAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInfOrEqualTestAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateInfOrEqualTestAST * p = (cPtr_templateInfOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInfOrEqualTestAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInfOrEqualTestAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateInfOrEqualTestAST * p = (cPtr_templateInfOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInfOrEqualTestAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInfOrEqualTestAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateInfOrEqualTestAST * p = (cPtr_templateInfOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInfOrEqualTestAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInfOrEqualTestAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInfOrEqualTestAST::cPtr_templateInfOrEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                                                const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                                const GALGAS_templateExpressionAST & in_mRightExpression
                                                                COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInfOrEqualTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInfOrEqualTestAST ;
}

void cPtr_templateInfOrEqualTestAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@templateInfOrEqualTestAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInfOrEqualTestAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInfOrEqualTestAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInfOrEqualTestAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInfOrEqualTestAST ("templateInfOrEqualTestAST",
                                                  & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInfOrEqualTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInfOrEqualTestAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInfOrEqualTestAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInfOrEqualTestAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInfOrEqualTestAST GALGAS_templateInfOrEqualTestAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInfOrEqualTestAST result ;
  const GALGAS_templateInfOrEqualTestAST * p = (const GALGAS_templateInfOrEqualTestAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInfOrEqualTestAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInfOrEqualTestAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateStrictSupTestAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateStrictSupTestAST * p = (const cPtr_templateStrictSupTestAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateStrictSupTestAST::objectCompare (const GALGAS_templateStrictSupTestAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictSupTestAST::GALGAS_templateStrictSupTestAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictSupTestAST::GALGAS_templateStrictSupTestAST (const cPtr_templateStrictSupTestAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateStrictSupTestAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictSupTestAST GALGAS_templateStrictSupTestAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                  const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                  const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateStrictSupTestAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateStrictSupTestAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateStrictSupTestAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateStrictSupTestAST * p = (const cPtr_templateStrictSupTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateStrictSupTestAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateStrictSupTestAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateStrictSupTestAST * p = (const cPtr_templateStrictSupTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateStrictSupTestAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateStrictSupTestAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateStrictSupTestAST * p = (const cPtr_templateStrictSupTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateStrictSupTestAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateStrictSupTestAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateStrictSupTestAST * p = (cPtr_templateStrictSupTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateStrictSupTestAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateStrictSupTestAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateStrictSupTestAST * p = (cPtr_templateStrictSupTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateStrictSupTestAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateStrictSupTestAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateStrictSupTestAST * p = (cPtr_templateStrictSupTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateStrictSupTestAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateStrictSupTestAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateStrictSupTestAST::cPtr_templateStrictSupTestAST (const GALGAS_location & in_mOperatorLocation,
                                                              const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                              const GALGAS_templateExpressionAST & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateStrictSupTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictSupTestAST ;
}

void cPtr_templateStrictSupTestAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@templateStrictSupTestAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateStrictSupTestAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateStrictSupTestAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateStrictSupTestAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateStrictSupTestAST ("templateStrictSupTestAST",
                                                 & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateStrictSupTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictSupTestAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateStrictSupTestAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateStrictSupTestAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictSupTestAST GALGAS_templateStrictSupTestAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateStrictSupTestAST result ;
  const GALGAS_templateStrictSupTestAST * p = (const GALGAS_templateStrictSupTestAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateStrictSupTestAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateStrictSupTestAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateSupOrEqualTestAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateSupOrEqualTestAST * p = (const cPtr_templateSupOrEqualTestAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateSupOrEqualTestAST::objectCompare (const GALGAS_templateSupOrEqualTestAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSupOrEqualTestAST::GALGAS_templateSupOrEqualTestAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSupOrEqualTestAST::GALGAS_templateSupOrEqualTestAST (const cPtr_templateSupOrEqualTestAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateSupOrEqualTestAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSupOrEqualTestAST GALGAS_templateSupOrEqualTestAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                    const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                    const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateSupOrEqualTestAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateSupOrEqualTestAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateSupOrEqualTestAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateSupOrEqualTestAST * p = (const cPtr_templateSupOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateSupOrEqualTestAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateSupOrEqualTestAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateSupOrEqualTestAST * p = (const cPtr_templateSupOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateSupOrEqualTestAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateSupOrEqualTestAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateSupOrEqualTestAST * p = (const cPtr_templateSupOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateSupOrEqualTestAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateSupOrEqualTestAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateSupOrEqualTestAST * p = (cPtr_templateSupOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateSupOrEqualTestAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateSupOrEqualTestAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateSupOrEqualTestAST * p = (cPtr_templateSupOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateSupOrEqualTestAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateSupOrEqualTestAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateSupOrEqualTestAST * p = (cPtr_templateSupOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateSupOrEqualTestAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateSupOrEqualTestAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateSupOrEqualTestAST::cPtr_templateSupOrEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                                                const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                                const GALGAS_templateExpressionAST & in_mRightExpression
                                                                COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateSupOrEqualTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSupOrEqualTestAST ;
}

void cPtr_templateSupOrEqualTestAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@templateSupOrEqualTestAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateSupOrEqualTestAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateSupOrEqualTestAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateSupOrEqualTestAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateSupOrEqualTestAST ("templateSupOrEqualTestAST",
                                                  & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateSupOrEqualTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSupOrEqualTestAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateSupOrEqualTestAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateSupOrEqualTestAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSupOrEqualTestAST GALGAS_templateSupOrEqualTestAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateSupOrEqualTestAST result ;
  const GALGAS_templateSupOrEqualTestAST * p = (const GALGAS_templateSupOrEqualTestAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateSupOrEqualTestAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateSupOrEqualTestAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateLeftShiftOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLeftShiftOperationAST * p = (const cPtr_templateLeftShiftOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateLeftShiftOperationAST::objectCompare (const GALGAS_templateLeftShiftOperationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLeftShiftOperationAST::GALGAS_templateLeftShiftOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLeftShiftOperationAST::GALGAS_templateLeftShiftOperationAST (const cPtr_templateLeftShiftOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLeftShiftOperationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLeftShiftOperationAST GALGAS_templateLeftShiftOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                            const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                            const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateLeftShiftOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLeftShiftOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateLeftShiftOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLeftShiftOperationAST * p = (const cPtr_templateLeftShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateLeftShiftOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateLeftShiftOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLeftShiftOperationAST * p = (const cPtr_templateLeftShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateLeftShiftOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateLeftShiftOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLeftShiftOperationAST * p = (const cPtr_templateLeftShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateLeftShiftOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateLeftShiftOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateLeftShiftOperationAST * p = (cPtr_templateLeftShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateLeftShiftOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateLeftShiftOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateLeftShiftOperationAST * p = (cPtr_templateLeftShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateLeftShiftOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateLeftShiftOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateLeftShiftOperationAST * p = (cPtr_templateLeftShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateLeftShiftOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateLeftShiftOperationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateLeftShiftOperationAST::cPtr_templateLeftShiftOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                                        const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                                        const GALGAS_templateExpressionAST & in_mRightExpression
                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLeftShiftOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLeftShiftOperationAST ;
}

void cPtr_templateLeftShiftOperationAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@templateLeftShiftOperationAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLeftShiftOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLeftShiftOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateLeftShiftOperationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLeftShiftOperationAST ("templateLeftShiftOperationAST",
                                                      & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLeftShiftOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLeftShiftOperationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLeftShiftOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLeftShiftOperationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLeftShiftOperationAST GALGAS_templateLeftShiftOperationAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateLeftShiftOperationAST result ;
  const GALGAS_templateLeftShiftOperationAST * p = (const GALGAS_templateLeftShiftOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLeftShiftOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLeftShiftOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateRightShiftOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateRightShiftOperationAST * p = (const cPtr_templateRightShiftOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateRightShiftOperationAST::objectCompare (const GALGAS_templateRightShiftOperationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateRightShiftOperationAST::GALGAS_templateRightShiftOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateRightShiftOperationAST::GALGAS_templateRightShiftOperationAST (const cPtr_templateRightShiftOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateRightShiftOperationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateRightShiftOperationAST GALGAS_templateRightShiftOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                              const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                              const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateRightShiftOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateRightShiftOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateRightShiftOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateRightShiftOperationAST * p = (const cPtr_templateRightShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateRightShiftOperationAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateRightShiftOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateRightShiftOperationAST * p = (const cPtr_templateRightShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateRightShiftOperationAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateRightShiftOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateRightShiftOperationAST * p = (const cPtr_templateRightShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateRightShiftOperationAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateRightShiftOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateRightShiftOperationAST * p = (cPtr_templateRightShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateRightShiftOperationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateRightShiftOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateRightShiftOperationAST * p = (cPtr_templateRightShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateRightShiftOperationAST::setter_setMLeftExpression (GALGAS_templateExpressionAST inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateRightShiftOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateRightShiftOperationAST * p = (cPtr_templateRightShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateRightShiftOperationAST::setter_setMRightExpression (GALGAS_templateExpressionAST inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateRightShiftOperationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateRightShiftOperationAST::cPtr_templateRightShiftOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                                          const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                                          const GALGAS_templateExpressionAST & in_mRightExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateRightShiftOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateRightShiftOperationAST ;
}

void cPtr_templateRightShiftOperationAST::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@templateRightShiftOperationAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateRightShiftOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateRightShiftOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateRightShiftOperationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateRightShiftOperationAST ("templateRightShiftOperationAST",
                                                       & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateRightShiftOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateRightShiftOperationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateRightShiftOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateRightShiftOperationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateRightShiftOperationAST GALGAS_templateRightShiftOperationAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateRightShiftOperationAST result ;
  const GALGAS_templateRightShiftOperationAST * p = (const GALGAS_templateRightShiftOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateRightShiftOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateRightShiftOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionExpressionAST * p = (const cPtr_templateInstructionExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionExpressionAST::objectCompare (const GALGAS_templateInstructionExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionAST::GALGAS_templateInstructionExpressionAST (void) :
GALGAS_templateInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionAST::GALGAS_templateInstructionExpressionAST (const cPtr_templateInstructionExpressionAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionAST GALGAS_templateInstructionExpressionAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mExpression,
                                                                                                  const GALGAS_location & inAttribute_mLocation
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionExpressionAST (inAttribute_mExpression, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateInstructionExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionExpressionAST * p = (const cPtr_templateInstructionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateInstructionExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateInstructionExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionExpressionAST * p = (const cPtr_templateInstructionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionAST) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateInstructionExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionExpressionAST::setter_setMExpression (GALGAS_templateExpressionAST inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateInstructionExpressionAST * p = (cPtr_templateInstructionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionAST::setter_setMExpression (GALGAS_templateExpressionAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionExpressionAST::setter_setMLocation (GALGAS_location inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateInstructionExpressionAST * p = (cPtr_templateInstructionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionAST) ;
    p->mProperty_mLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionAST::setter_setMLocation (GALGAS_location inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionExpressionAST::cPtr_templateInstructionExpressionAST (const GALGAS_templateExpressionAST & in_mExpression,
                                                                              const GALGAS_location & in_mLocation
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mLocation (in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionAST ;
}

void cPtr_templateInstructionExpressionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@templateInstructionExpressionAST:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionExpressionAST (mProperty_mExpression, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionExpressionAST ("templateInstructionExpressionAST",
                                                         & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionAST GALGAS_templateInstructionExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionAST result ;
  const GALGAS_templateInstructionExpressionAST * p = (const GALGAS_templateInstructionExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateBlockInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateBlockInstructionAST * p = (const cPtr_templateBlockInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBlockInstructionList.objectCompare (p->mProperty_mBlockInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateBlockInstructionAST::objectCompare (const GALGAS_templateBlockInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionAST::GALGAS_templateBlockInstructionAST (void) :
GALGAS_templateInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionAST::GALGAS_templateBlockInstructionAST (const cPtr_templateBlockInstructionAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateBlockInstructionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionAST GALGAS_templateBlockInstructionAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mExpression,
                                                                                        const GALGAS_location & inAttribute_mLocation,
                                                                                        const GALGAS_templateInstructionListAST & inAttribute_mBlockInstructionList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateBlockInstructionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mLocation.isValid () && inAttribute_mBlockInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateBlockInstructionAST (inAttribute_mExpression, inAttribute_mLocation, inAttribute_mBlockInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateBlockInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateBlockInstructionAST * p = (const cPtr_templateBlockInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateBlockInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateBlockInstructionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateBlockInstructionAST * p = (const cPtr_templateBlockInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateBlockInstructionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateBlockInstructionAST::getter_mBlockInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateBlockInstructionAST * p = (const cPtr_templateBlockInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
    result = p->mProperty_mBlockInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST cPtr_templateBlockInstructionAST::getter_mBlockInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBlockInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateBlockInstructionAST::setter_setMExpression (GALGAS_templateExpressionAST inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateBlockInstructionAST * p = (cPtr_templateBlockInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionAST::setter_setMExpression (GALGAS_templateExpressionAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateBlockInstructionAST::setter_setMLocation (GALGAS_location inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateBlockInstructionAST * p = (cPtr_templateBlockInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
    p->mProperty_mLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionAST::setter_setMLocation (GALGAS_location inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateBlockInstructionAST::setter_setMBlockInstructionList (GALGAS_templateInstructionListAST inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateBlockInstructionAST * p = (cPtr_templateBlockInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
    p->mProperty_mBlockInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionAST::setter_setMBlockInstructionList (GALGAS_templateInstructionListAST inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBlockInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateBlockInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateBlockInstructionAST::cPtr_templateBlockInstructionAST (const GALGAS_templateExpressionAST & in_mExpression,
                                                                    const GALGAS_location & in_mLocation,
                                                                    const GALGAS_templateInstructionListAST & in_mBlockInstructionList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mLocation (in_mLocation),
mProperty_mBlockInstructionList (in_mBlockInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateBlockInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionAST ;
}

void cPtr_templateBlockInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@templateBlockInstructionAST:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBlockInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateBlockInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateBlockInstructionAST (mProperty_mExpression, mProperty_mLocation, mProperty_mBlockInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateBlockInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateBlockInstructionAST ("templateBlockInstructionAST",
                                                    & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateBlockInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateBlockInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateBlockInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionAST GALGAS_templateBlockInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateBlockInstructionAST result ;
  const GALGAS_templateBlockInstructionAST * p = (const GALGAS_templateBlockInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateBlockInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateBlockInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionGetColumnLocationAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionGetColumnLocationAST::objectCompare (const GALGAS_templateInstructionGetColumnLocationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationAST::GALGAS_templateInstructionGetColumnLocationAST (void) :
GALGAS_templateInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationAST GALGAS_templateInstructionGetColumnLocationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionGetColumnLocationAST::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationAST::GALGAS_templateInstructionGetColumnLocationAST (const cPtr_templateInstructionGetColumnLocationAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGetColumnLocationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationAST GALGAS_templateInstructionGetColumnLocationAST::constructor_new (LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionGetColumnLocationAST (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionGetColumnLocationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionGetColumnLocationAST::cPtr_templateInstructionGetColumnLocationAST (LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionGetColumnLocationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST ;
}

void cPtr_templateInstructionGetColumnLocationAST::description (C_String & ioString,
                                                                const int32_t /* inIndentation */) const {
  ioString << "[@templateInstructionGetColumnLocationAST]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionGetColumnLocationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionGetColumnLocationAST (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionGetColumnLocationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST ("templateInstructionGetColumnLocationAST",
                                                                & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionGetColumnLocationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionGetColumnLocationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionGetColumnLocationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationAST GALGAS_templateInstructionGetColumnLocationAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationAST result ;
  const GALGAS_templateInstructionGetColumnLocationAST * p = (const GALGAS_templateInstructionGetColumnLocationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionGetColumnLocationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGetColumnLocationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionGotoColumnLocationAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionGotoColumnLocationAST::objectCompare (const GALGAS_templateInstructionGotoColumnLocationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationAST::GALGAS_templateInstructionGotoColumnLocationAST (void) :
GALGAS_templateInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationAST GALGAS_templateInstructionGotoColumnLocationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionGotoColumnLocationAST::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationAST::GALGAS_templateInstructionGotoColumnLocationAST (const cPtr_templateInstructionGotoColumnLocationAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGotoColumnLocationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationAST GALGAS_templateInstructionGotoColumnLocationAST::constructor_new (LOCATION_ARGS) {
  GALGAS_templateInstructionGotoColumnLocationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionGotoColumnLocationAST (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionGotoColumnLocationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionGotoColumnLocationAST::cPtr_templateInstructionGotoColumnLocationAST (LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionGotoColumnLocationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST ;
}

void cPtr_templateInstructionGotoColumnLocationAST::description (C_String & ioString,
                                                                 const int32_t /* inIndentation */) const {
  ioString << "[@templateInstructionGotoColumnLocationAST]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionGotoColumnLocationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionGotoColumnLocationAST (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionGotoColumnLocationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST ("templateInstructionGotoColumnLocationAST",
                                                                 & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionGotoColumnLocationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionGotoColumnLocationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionGotoColumnLocationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationAST GALGAS_templateInstructionGotoColumnLocationAST::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionGotoColumnLocationAST result ;
  const GALGAS_templateInstructionGotoColumnLocationAST * p = (const GALGAS_templateInstructionGotoColumnLocationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionGotoColumnLocationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGotoColumnLocationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@templateInstructionIfBranchListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_templateInstructionIfBranchListAST : public cCollectionElement {
  public : GALGAS_templateInstructionIfBranchListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_templateInstructionIfBranchListAST (const GALGAS_templateExpressionAST & in_mExpression,
                                                                  const GALGAS_templateInstructionListAST & in_mInstructionList
                                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_templateInstructionIfBranchListAST (const GALGAS_templateInstructionIfBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionIfBranchListAST::cCollectionElement_templateInstructionIfBranchListAST (const GALGAS_templateExpressionAST & in_mExpression,
                                                                                                              const GALGAS_templateInstructionListAST & in_mInstructionList
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionIfBranchListAST::cCollectionElement_templateInstructionIfBranchListAST (const GALGAS_templateInstructionIfBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_templateInstructionIfBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateInstructionIfBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionIfBranchListAST (mObject.mProperty_mExpression, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_templateInstructionIfBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_templateInstructionIfBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionIfBranchListAST * operand = (cCollectionElement_templateInstructionIfBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionIfBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST::GALGAS_templateInstructionIfBranchListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST::GALGAS_templateInstructionIfBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfBranchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionIfBranchListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfBranchListAST::constructor_listWithValue (const GALGAS_templateExpressionAST & inOperand0,
                                                                                                                const GALGAS_templateInstructionListAST & inOperand1
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_templateInstructionIfBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionIfBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListAST::addAssign_operation (const GALGAS_templateExpressionAST & inOperand0,
                                                                     const GALGAS_templateInstructionListAST & inOperand1
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionIfBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListAST::setter_append (GALGAS_templateInstructionIfBranchListAST_2D_element inElement,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionIfBranchListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListAST::setter_insertAtIndex (const GALGAS_templateExpressionAST inOperand0,
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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListAST::setter_removeAtIndex (GALGAS_templateExpressionAST & outOperand0,
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
      outOperand0 = p->mObject.mProperty_mExpression ;
      outOperand1 = p->mObject.mProperty_mInstructionList ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListAST::setter_popFirst (GALGAS_templateExpressionAST & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListAST::setter_popLast (GALGAS_templateExpressionAST & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListAST result = GALGAS_templateInstructionIfBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListAST result = GALGAS_templateInstructionIfBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListAST result = GALGAS_templateInstructionIfBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListAST::plusAssign_operation (const GALGAS_templateInstructionIfBranchListAST inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListAST::setter_setMExpressionAtIndex (GALGAS_templateExpressionAST inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionIfBranchListAST * p = (cCollectionElement_templateInstructionIfBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateInstructionIfBranchListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListAST * p = (cCollectionElement_templateInstructionIfBranchListAST *) attributes.ptr () ;
  GALGAS_templateExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListAST::setter_setMInstructionListAtIndex (GALGAS_templateInstructionListAST inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionIfBranchListAST * p = (cCollectionElement_templateInstructionIfBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionIfBranchListAST::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListAST * p = (cCollectionElement_templateInstructionIfBranchListAST *) attributes.ptr () ;
  GALGAS_templateInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateInstructionIfBranchListAST::cEnumerator_templateInstructionIfBranchListAST (const GALGAS_templateInstructionIfBranchListAST & inEnumeratedObject,
                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST_2D_element cEnumerator_templateInstructionIfBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListAST * p = (const cCollectionElement_templateInstructionIfBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cEnumerator_templateInstructionIfBranchListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListAST * p = (const cCollectionElement_templateInstructionIfBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
  return p->mObject.mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST cEnumerator_templateInstructionIfBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListAST * p = (const cCollectionElement_templateInstructionIfBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionIfBranchListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST ("templateInstructionIfBranchListAST",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionIfBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionIfBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfBranchListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionIfAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionIfAST * p = (const cPtr_templateInstructionIfAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTemplateInstructionIfBranchList.objectCompare (p->mProperty_mTemplateInstructionIfBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionIfAST::objectCompare (const GALGAS_templateInstructionIfAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST::GALGAS_templateInstructionIfAST (void) :
GALGAS_templateInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST GALGAS_templateInstructionIfAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionIfAST::constructor_new (GALGAS_templateInstructionIfBranchListAST::constructor_emptyList (HERE),
                                                           GALGAS_templateInstructionListAST::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST::GALGAS_templateInstructionIfAST (const cPtr_templateInstructionIfAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionIfAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST GALGAS_templateInstructionIfAST::constructor_new (const GALGAS_templateInstructionIfBranchListAST & inAttribute_mTemplateInstructionIfBranchList,
                                                                                  const GALGAS_templateInstructionListAST & inAttribute_mElseInstructionList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfAST result ;
  if (inAttribute_mTemplateInstructionIfBranchList.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionIfAST (inAttribute_mTemplateInstructionIfBranchList, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfAST::getter_mTemplateInstructionIfBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionIfAST * p = (const cPtr_templateInstructionIfAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
    result = p->mProperty_mTemplateInstructionIfBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST cPtr_templateInstructionIfAST::getter_mTemplateInstructionIfBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTemplateInstructionIfBranchList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionIfAST::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionIfAST * p = (const cPtr_templateInstructionIfAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST cPtr_templateInstructionIfAST::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfAST::setter_setMTemplateInstructionIfBranchList (GALGAS_templateInstructionIfBranchListAST inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateInstructionIfAST * p = (cPtr_templateInstructionIfAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
    p->mProperty_mTemplateInstructionIfBranchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfAST::setter_setMTemplateInstructionIfBranchList (GALGAS_templateInstructionIfBranchListAST inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTemplateInstructionIfBranchList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfAST::setter_setMElseInstructionList (GALGAS_templateInstructionListAST inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateInstructionIfAST * p = (cPtr_templateInstructionIfAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfAST::setter_setMElseInstructionList (GALGAS_templateInstructionListAST inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElseInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionIfAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionIfAST::cPtr_templateInstructionIfAST (const GALGAS_templateInstructionIfBranchListAST & in_mTemplateInstructionIfBranchList,
                                                              const GALGAS_templateInstructionListAST & in_mElseInstructionList
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mProperty_mTemplateInstructionIfBranchList (in_mTemplateInstructionIfBranchList),
mProperty_mElseInstructionList (in_mElseInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionIfAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfAST ;
}

void cPtr_templateInstructionIfAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@templateInstructionIfAST:" ;
  mProperty_mTemplateInstructionIfBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionIfAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionIfAST (mProperty_mTemplateInstructionIfBranchList, mProperty_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionIfAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfAST ("templateInstructionIfAST",
                                                 & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionIfAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionIfAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST GALGAS_templateInstructionIfAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfAST result ;
  const GALGAS_templateInstructionIfAST * p = (const GALGAS_templateInstructionIfAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
      GALGAS_location var_operatorLocation_2731 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 31)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__7C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 32)) ;
      GALGAS_templateExpressionAST var_leftOperand_2795 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightOperand_2851 ;
      nt_relation_5F_term_ (var_rightOperand_2851, inCompiler) ;
      outArgument_outExpression = GALGAS_templateOrOperationAST::constructor_new (var_operatorLocation_2731, var_leftOperand_2795, var_rightOperand_2851  COMMA_SOURCE_FILE ("templateSyntax.galgas", 36)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_3019 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 38)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 39)) ;
      GALGAS_templateExpressionAST var_leftOperand_3083 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightOperand_3139 ;
      nt_relation_5F_term_ (var_rightOperand_3139, inCompiler) ;
      outArgument_outExpression = GALGAS_templateXorOperationAST::constructor_new (var_operatorLocation_3019, var_leftOperand_3083, var_rightOperand_3139  COMMA_SOURCE_FILE ("templateSyntax.galgas", 43)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__7C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 32)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 39)) ;
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
      GALGAS_location var_operatorLocation_4030 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 58)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__26_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 59)) ;
      GALGAS_templateExpressionAST var_leftOperand_4094 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightOperand_4150 ;
      nt_relation_5F_factor_ (var_rightOperand_4150, inCompiler) ;
      outArgument_outExpression = GALGAS_templateAndOperationAST::constructor_new (var_operatorLocation_4030, var_leftOperand_4094, var_rightOperand_4150  COMMA_SOURCE_FILE ("templateSyntax.galgas", 63)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__26_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 59)) ;
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
    GALGAS_location var_operatorLocation_5044 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 78)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 79)) ;
    GALGAS_templateExpressionAST var_leftExpression_5112 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_5171 ;
    nt_simple_5F_expression_ (var_rightExpression_5171, inCompiler) ;
    outArgument_outExpression = GALGAS_templateEqualTestAST::constructor_new (var_operatorLocation_5044, var_leftExpression_5112, var_rightExpression_5171  COMMA_SOURCE_FILE ("templateSyntax.galgas", 83)) ;
  } break ;
  case 3: {
    GALGAS_location var_operatorLocation_5347 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 85)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 86)) ;
    GALGAS_templateExpressionAST var_leftExpression_5415 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_5474 ;
    nt_simple_5F_expression_ (var_rightExpression_5474, inCompiler) ;
    outArgument_outExpression = GALGAS_templateNonEqualTestAST::constructor_new (var_operatorLocation_5347, var_leftExpression_5415, var_rightExpression_5474  COMMA_SOURCE_FILE ("templateSyntax.galgas", 90)) ;
  } break ;
  case 4: {
    GALGAS_location var_operatorLocation_5653 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 92)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 93)) ;
    GALGAS_templateExpressionAST var_leftExpression_5721 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_5780 ;
    nt_simple_5F_expression_ (var_rightExpression_5780, inCompiler) ;
    outArgument_outExpression = GALGAS_templateInfOrEqualTestAST::constructor_new (var_operatorLocation_5653, var_leftExpression_5721, var_rightExpression_5780  COMMA_SOURCE_FILE ("templateSyntax.galgas", 97)) ;
  } break ;
  case 5: {
    GALGAS_location var_operatorLocation_5961 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 99)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 100)) ;
    GALGAS_templateExpressionAST var_leftExpression_6029 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_6088 ;
    nt_simple_5F_expression_ (var_rightExpression_6088, inCompiler) ;
    outArgument_outExpression = GALGAS_templateSupOrEqualTestAST::constructor_new (var_operatorLocation_5961, var_leftExpression_6029, var_rightExpression_6088  COMMA_SOURCE_FILE ("templateSyntax.galgas", 104)) ;
  } break ;
  case 6: {
    GALGAS_location var_operatorLocation_6269 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 106)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 107)) ;
    GALGAS_templateExpressionAST var_leftExpression_6336 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_6395 ;
    nt_simple_5F_expression_ (var_rightExpression_6395, inCompiler) ;
    outArgument_outExpression = GALGAS_templateStrictSupTestAST::constructor_new (var_operatorLocation_6269, var_leftExpression_6336, var_rightExpression_6395  COMMA_SOURCE_FILE ("templateSyntax.galgas", 111)) ;
  } break ;
  case 7: {
    GALGAS_location var_operatorLocation_6575 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 113)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 114)) ;
    GALGAS_templateExpressionAST var_leftExpression_6642 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_6701 ;
    nt_simple_5F_expression_ (var_rightExpression_6701, inCompiler) ;
    outArgument_outExpression = GALGAS_templateStrictInfTestAST::constructor_new (var_operatorLocation_6575, var_leftExpression_6642, var_rightExpression_6701  COMMA_SOURCE_FILE ("templateSyntax.galgas", 118)) ;
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
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 79)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 86)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 93)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 100)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 107)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 114)) ;
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
      GALGAS_location var_operatorLocation_7600 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 133)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 134)) ;
      GALGAS_templateExpressionAST var_leftExpression_7668 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_7727 ;
      nt_term_ (var_rightExpression_7727, inCompiler) ;
      outArgument_outExpression = GALGAS_templateLeftShiftOperationAST::constructor_new (var_operatorLocation_7600, var_leftExpression_7668, var_rightExpression_7727  COMMA_SOURCE_FILE ("templateSyntax.galgas", 138)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_7903 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 140)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 141)) ;
      GALGAS_templateExpressionAST var_leftExpression_7971 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_8030 ;
      nt_term_ (var_rightExpression_8030, inCompiler) ;
      outArgument_outExpression = GALGAS_templateRightShiftOperationAST::constructor_new (var_operatorLocation_7903, var_leftExpression_7971, var_rightExpression_8030  COMMA_SOURCE_FILE ("templateSyntax.galgas", 145)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_8207 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 147)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 148)) ;
      GALGAS_templateExpressionAST var_leftExpression_8274 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_8333 ;
      nt_term_ (var_rightExpression_8333, inCompiler) ;
      outArgument_outExpression = GALGAS_templateAddOperationAST::constructor_new (var_operatorLocation_8207, var_leftExpression_8274, var_rightExpression_8333  COMMA_SOURCE_FILE ("templateSyntax.galgas", 152)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_8503 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 155)) ;
      GALGAS_templateExpressionAST var_leftExpression_8570 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_8629 ;
      nt_term_ (var_rightExpression_8629, inCompiler) ;
      outArgument_outExpression = GALGAS_templateSubOperationAST::constructor_new (var_operatorLocation_8503, var_leftExpression_8570, var_rightExpression_8629  COMMA_SOURCE_FILE ("templateSyntax.galgas", 159)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 134)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 141)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 148)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 155)) ;
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
      GALGAS_location var_operatorLocation_9503 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 174)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 175)) ;
      GALGAS_templateExpressionAST var_leftExpression_9570 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_9629 ;
      nt_factor_ (var_rightExpression_9629, inCompiler) ;
      outArgument_outExpression = GALGAS_templateMultiplyOperationAST::constructor_new (var_operatorLocation_9503, var_leftExpression_9570, var_rightExpression_9629  COMMA_SOURCE_FILE ("templateSyntax.galgas", 179)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_9806 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 181)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2F_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 182)) ;
      GALGAS_templateExpressionAST var_leftExpression_9873 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_9932 ;
      nt_factor_ (var_rightExpression_9932, inCompiler) ;
      outArgument_outExpression = GALGAS_templateDivideOperationAST::constructor_new (var_operatorLocation_9806, var_leftExpression_9873, var_rightExpression_9932  COMMA_SOURCE_FILE ("templateSyntax.galgas", 186)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_10107 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 188)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_mod COMMA_SOURCE_FILE ("templateSyntax.galgas", 189)) ;
      GALGAS_templateExpressionAST var_leftExpression_10176 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_10235 ;
      nt_factor_ (var_rightExpression_10235, inCompiler) ;
      outArgument_outExpression = GALGAS_templateModuloOperationAST::constructor_new (var_operatorLocation_10107, var_leftExpression_10176, var_rightExpression_10235  COMMA_SOURCE_FILE ("templateSyntax.galgas", 193)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 175)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2F_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 182)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_mod COMMA_SOURCE_FILE ("templateSyntax.galgas", 189)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 207)) ;
      GALGAS_lstring var_structFieldName_11138 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 208)) ;
      outArgument_outExpression = GALGAS_structFieldAccessTemplateExpressionAST::constructor_new (var_structFieldName_11138.getter_location (HERE), outArgument_outExpression, var_structFieldName_11138  COMMA_SOURCE_FILE ("templateSyntax.galgas", 209)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 207)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 208)) ;
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
  GALGAS_location var_operatorLocation_11962 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 221)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 222)) ;
  GALGAS_templateExpressionAST var_expression_12021 ;
  nt_factor_ (var_expression_12021, inCompiler) ;
  outArgument_outExpression = GALGAS_templateUnaryMinusOperationAST::constructor_new (var_operatorLocation_11962, var_expression_12021  COMMA_SOURCE_FILE ("templateSyntax.galgas", 225)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i6_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 222)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i7_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                             C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_12824 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 236)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_not COMMA_SOURCE_FILE ("templateSyntax.galgas", 237)) ;
  GALGAS_templateExpressionAST var_ifCondition_12886 ;
  nt_factor_ (var_ifCondition_12886, inCompiler) ;
  outArgument_outExpression = GALGAS_templateNotOperatorAST::constructor_new (var_operatorLocation_12824, var_ifCondition_12886  COMMA_SOURCE_FILE ("templateSyntax.galgas", 240)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i7_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_not COMMA_SOURCE_FILE ("templateSyntax.galgas", 237)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i8_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                             C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_13683 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 251)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__7E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 252)) ;
  GALGAS_templateExpressionAST var_ifCondition_13743 ;
  nt_factor_ (var_ifCondition_13743, inCompiler) ;
  outArgument_outExpression = GALGAS_templateLogicalNegateAST::constructor_new (var_operatorLocation_13683, var_ifCondition_13743  COMMA_SOURCE_FILE ("templateSyntax.galgas", 255)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_factor_i8_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__7E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 252)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i9_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                              C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_identifier_14553 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 265)) ;
  outArgument_outExpression = GALGAS_templateVarInExpressionAST::constructor_new (var_identifier_14553  COMMA_SOURCE_FILE ("templateSyntax.galgas", 266)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i9_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 265)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i10_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 276)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 278)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i10_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 276)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 278)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i11_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_true COMMA_SOURCE_FILE ("templateSyntax.galgas", 288)) ;
  outArgument_outExpression = GALGAS_templateTrueBoolAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 289))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 289)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i11_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_true COMMA_SOURCE_FILE ("templateSyntax.galgas", 288)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i12_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_false COMMA_SOURCE_FILE ("templateSyntax.galgas", 299)) ;
  outArgument_outExpression = GALGAS_templateFalseBoolAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 300))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 300)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i12_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_false COMMA_SOURCE_FILE ("templateSyntax.galgas", 299)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i13_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint var_literalInt_17477 ;
  var_literalInt_17477 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 311)) ;
  outArgument_outExpression = GALGAS_templateLiteralUIntExpressionAST::constructor_new (var_literalInt_17477  COMMA_SOURCE_FILE ("templateSyntax.galgas", 312)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i13_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 311)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i14_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint var_literalInt_18254 ;
  var_literalInt_18254 = inCompiler->synthetizedAttribute_sint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S COMMA_SOURCE_FILE ("templateSyntax.galgas", 323)) ;
  outArgument_outExpression = GALGAS_templateLiteralSIntExpressionAST::constructor_new (var_literalInt_18254  COMMA_SOURCE_FILE ("templateSyntax.galgas", 324)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i14_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S COMMA_SOURCE_FILE ("templateSyntax.galgas", 323)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i15_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint_36__34_ var_literalInt_19035 ;
  var_literalInt_19035 = inCompiler->synthetizedAttribute_uint_36__34_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L COMMA_SOURCE_FILE ("templateSyntax.galgas", 335)) ;
  outArgument_outExpression = GALGAS_templateLiteralUInt_36__34_ExpressionAST::constructor_new (var_literalInt_19035  COMMA_SOURCE_FILE ("templateSyntax.galgas", 336)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i15_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L COMMA_SOURCE_FILE ("templateSyntax.galgas", 335)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i16_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint_36__34_ var_literalInt_19818 ;
  var_literalInt_19818 = inCompiler->synthetizedAttribute_sint_36__34_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS COMMA_SOURCE_FILE ("templateSyntax.galgas", 347)) ;
  outArgument_outExpression = GALGAS_templateLiteralSInt_36__34_ExpressionAST::constructor_new (var_literalInt_19818  COMMA_SOURCE_FILE ("templateSyntax.galgas", 348)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i16_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS COMMA_SOURCE_FILE ("templateSyntax.galgas", 347)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i17_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalDouble_20605 ;
  var_literalDouble_20605 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("templateSyntax.galgas", 359)) ;
  outArgument_outExpression = GALGAS_templateLiteralDoubleExpressionAST::constructor_new (var_literalDouble_20605  COMMA_SOURCE_FILE ("templateSyntax.galgas", 360)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i17_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("templateSyntax.galgas", 359)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i18_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar_21413 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 370)) ;
  outArgument_outExpression = GALGAS_templateLiteralCharExpressionAST::constructor_new (var_literalChar_21413  COMMA_SOURCE_FILE ("templateSyntax.galgas", 371)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i18_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 370)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i19_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_stringlist var_literalStringList_22180 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 381)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString_22221 ;
    var_literalString_22221 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 384)) ;
    var_literalStringList_22180.addAssign_operation (var_literalString_22221.getter_string (SOURCE_FILE ("templateSyntax.galgas", 385))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 385)) ;
    switch (select_templateSyntax_6 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outExpression = GALGAS_templateLiteralStringExpressionAST::constructor_new (var_literalStringList_22180, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 388))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 388)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i19_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 384)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__5B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 404)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_template COMMA_SOURCE_FILE ("templateSyntax.galgas", 407)) ;
    GALGAS_templateExpressionAST var_receiverExpression_23921 ;
    nt_expression_ (var_receiverExpression_23921, inCompiler) ;
    GALGAS_lstring var_templateName_24003 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 410)) ;
    GALGAS_templateExpressionListAST var_expressionList_24049 ;
    nt_output_5F_expression_5F_list_ (var_expressionList_24049, inCompiler) ;
    outArgument_outExpression = GALGAS_templateExtensionTemplateCallAST::constructor_new (var_receiverExpression_23921, var_templateName_24003, var_expressionList_24049  COMMA_SOURCE_FILE ("templateSyntax.galgas", 413)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_typeName_24294 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 418)) ;
    GALGAS_lstring var_constructorName_24342 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 419)) ;
    GALGAS_templateExpressionListAST var_expressionList_24418 ;
    nt_output_5F_expression_5F_list_ (var_expressionList_24418, inCompiler) ;
    outArgument_outExpression = GALGAS_templateConstructorAST::constructor_new (var_typeName_24294, var_constructorName_24342, var_expressionList_24418  COMMA_SOURCE_FILE ("templateSyntax.galgas", 421)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_filewrapper COMMA_SOURCE_FILE ("templateSyntax.galgas", 426)) ;
    GALGAS_lstring var_filewrapperName_24647 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 427)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 428)) ;
    GALGAS_lstring var_templateName_24699 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 429)) ;
    GALGAS_templateExpressionListAST var_expressionList_24745 ;
    nt_output_5F_expression_5F_list_ (var_expressionList_24745, inCompiler) ;
    outArgument_outExpression = GALGAS_templateFileWrapperTemplateCallAST::constructor_new (var_filewrapperName_24647, var_templateName_24699, var_expressionList_24745  COMMA_SOURCE_FILE ("templateSyntax.galgas", 432)) ;
  } break ;
  case 4: {
    GALGAS_templateExpressionAST var_receiverExpression_24997 ;
    nt_expression_ (var_receiverExpression_24997, inCompiler) ;
    GALGAS_lstring var_getterName_25077 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 436)) ;
    GALGAS_templateExpressionListAST var_expressionList_25123 ;
    nt_output_5F_expression_5F_list_ (var_expressionList_25123, inCompiler) ;
    outArgument_outExpression = GALGAS_templateGetterCallInExpressionAST::constructor_new (var_receiverExpression_24997, var_getterName_25077, var_expressionList_25123  COMMA_SOURCE_FILE ("templateSyntax.galgas", 439)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_option COMMA_SOURCE_FILE ("templateSyntax.galgas", 444)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 446)) ;
      GALGAS_lstring var_optionName_25379 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 447)) ;
      GALGAS_lstring var_getterName_25423 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 448)) ;
      outArgument_outExpression = GALGAS_templateOptionAccessAST::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("galgas_builtin_options"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 449))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 449)), var_optionName_25379, var_getterName_25423  COMMA_SOURCE_FILE ("templateSyntax.galgas", 449)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_optionComponentName_25618 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 451)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 452)) ;
      GALGAS_lstring var_optionName_25672 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 453)) ;
      GALGAS_lstring var_getterName_25716 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 454)) ;
      outArgument_outExpression = GALGAS_templateOptionAccessAST::constructor_new (var_optionComponentName_25618, var_optionName_25672, var_getterName_25716  COMMA_SOURCE_FILE ("templateSyntax.galgas", 455)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 458)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i20_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__5B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 404)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_template COMMA_SOURCE_FILE ("templateSyntax.galgas", 407)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 410)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 418)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 419)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_filewrapper COMMA_SOURCE_FILE ("templateSyntax.galgas", 426)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 427)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 428)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 429)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
  } break ;
  case 4: {
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 436)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_option COMMA_SOURCE_FILE ("templateSyntax.galgas", 444)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 446)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 447)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 448)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 451)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 452)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 453)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 454)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 458)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i21_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_26661 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 469)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 470)) ;
  GALGAS_templateExpressionListAST var_expressionList_26741 ;
  nt_output_5F_expression_5F_list_ (var_expressionList_26741, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 472)) ;
  outArgument_outExpression = GALGAS_templateFunctionCallAST::constructor_new (var_functionName_26661, var_expressionList_26741  COMMA_SOURCE_FILE ("templateSyntax.galgas", 473)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i21_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 469)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 470)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 472)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i22_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfReceiverExpression_27073 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 480)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_is COMMA_SOURCE_FILE ("templateSyntax.galgas", 481)) ;
  GALGAS_dynamicTypeComparisonKind var_kind_27131 ;
  switch (select_templateSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 484)) ;
    var_kind_27131 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("templateSyntax.galgas", 485)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 487)) ;
    var_kind_27131 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("templateSyntax.galgas", 488)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 490)) ;
    var_kind_27131 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("templateSyntax.galgas", 491)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_typeName_27285 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 493)) ;
  outArgument_outExpression = GALGAS_templateTestDynamicClassAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_27073, var_kind_27131, var_typeName_27285  COMMA_SOURCE_FILE ("templateSyntax.galgas", 494)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_primary_i22_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_is COMMA_SOURCE_FILE ("templateSyntax.galgas", 481)) ;
  switch (select_templateSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 484)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 487)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 490)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 493)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_i23_ (GALGAS_templateExpressionListAST & outArgument_outExpressionList,
                                                                                    C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_templateExpressionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 509)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_10 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_28165 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 512)) ;
      GALGAS_templateExpressionAST var_expression_28203 ;
      nt_expression_ (var_expression_28203, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_28165, var_expression_28203, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 515))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 515)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_i23_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 512)) ;
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

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  GALGAS_lstring var_selector_29017 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 526)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_29017.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_29017.getter_location (SOURCE_FILE ("templateSyntax.galgas", 528)), GALGAS_string ("the selector should be '!'"), fixItArray1  COMMA_SOURCE_FILE ("templateSyntax.galgas", 528)) ;
    }
  }
  GALGAS_templateExpressionAST var_expression_29159 ;
  nt_expression_ (var_expression_29159, inCompiler) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionAST::constructor_new (var_expression_29159, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 531))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 531))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 531)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 526)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3F__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 537)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationAST::constructor_new (SOURCE_FILE ("templateSyntax.galgas", 538))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 538)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3F__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 537)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i26_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 544)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationAST::constructor_new (SOURCE_FILE ("templateSyntax.galgas", 545))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 545)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i26_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__21__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 544)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i27_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_block COMMA_SOURCE_FILE ("templateSyntax.galgas", 551)) ;
  GALGAS_templateExpressionAST var_expression_30113 ;
  nt_expression_ (var_expression_30113, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 554)) ;
  GALGAS_templateInstructionListAST var_blockInstructionList_30195 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 556)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    {
    routine_enterTemplateString (var_blockInstructionList_30195, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 558)) ;
    }
    switch (select_templateSyntax_11 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_ (var_blockInstructionList_30195, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 563)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateBlockInstructionAST::constructor_new (var_expression_30113, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 566)), var_blockInstructionList_30195  COMMA_SOURCE_FILE ("templateSyntax.galgas", 564))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 564)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i27_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_block COMMA_SOURCE_FILE ("templateSyntax.galgas", 551)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 554)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_11 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 563)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i28_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_for COMMA_SOURCE_FILE ("templateSyntax.galgas", 573)) ;
  GALGAS_bool var_ascending_30728 ;
  switch (select_templateSyntax_12 (inCompiler)) {
  case 1: {
    var_ascending_30728 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 578)) ;
    var_ascending_30728 = GALGAS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 581)) ;
    var_ascending_30728 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 584)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 585)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("templateSyntax.galgas", 586)) ;
  GALGAS_templateExpressionAST var_expression_30906 ;
  nt_expression_ (var_expression_30906, inCompiler) ;
  GALGAS_string var_foreachPrefix_30930 ;
  switch (select_templateSyntax_13 (inCompiler)) {
  case 1: {
    var_foreachPrefix_30930 = GALGAS_string::makeEmptyString () ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 592)) ;
    GALGAS_lstring var_prefixString_31020 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 593)) ;
    var_foreachPrefix_30930 = var_prefixString_31020.getter_string (SOURCE_FILE ("templateSyntax.galgas", 594)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_templateInstructionListAST var_beforeInstructionList_31138 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 597)) ;
  switch (select_templateSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_before COMMA_SOURCE_FILE ("templateSyntax.galgas", 600)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      {
      routine_enterTemplateString (var_beforeInstructionList_31138, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 602)) ;
      }
      switch (select_templateSyntax_15 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_ (var_beforeInstructionList_31138, inCompiler) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_do COMMA_SOURCE_FILE ("templateSyntax.galgas", 608)) ;
  GALGAS_lstring var_indexIdentifier_31358 ;
  switch (select_templateSyntax_16 (inCompiler)) {
  case 1: {
    var_indexIdentifier_31358 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 611))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 611)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_index COMMA_SOURCE_FILE ("templateSyntax.galgas", 613)) ;
    var_indexIdentifier_31358 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 614)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_templateInstructionListAST var_doInstructionList_31530 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 616)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    {
    routine_enterTemplateString (var_doInstructionList_31530, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 618)) ;
    }
    switch (select_templateSyntax_17 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_ (var_doInstructionList_31530, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  GALGAS_templateInstructionListAST var_betweenInstructionList_31723 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 623)) ;
  switch (select_templateSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_between COMMA_SOURCE_FILE ("templateSyntax.galgas", 626)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      {
      routine_enterTemplateString (var_betweenInstructionList_31723, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 628)) ;
      }
      switch (select_templateSyntax_19 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_ (var_betweenInstructionList_31723, inCompiler) ;
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
  GALGAS_templateInstructionListAST var_afterInstructionList_31966 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 634)) ;
  switch (select_templateSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_after COMMA_SOURCE_FILE ("templateSyntax.galgas", 637)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      {
      routine_enterTemplateString (var_afterInstructionList_31966, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 639)) ;
      }
      switch (select_templateSyntax_21 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_ (var_beforeInstructionList_31138, inCompiler) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 645)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionForeachAST::constructor_new (var_ascending_30728, var_expression_30906, var_foreachPrefix_30930, var_beforeInstructionList_31138, var_doInstructionList_31530, var_indexIdentifier_31358, var_betweenInstructionList_31723, var_afterInstructionList_31966  COMMA_SOURCE_FILE ("templateSyntax.galgas", 646))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 646)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i28_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_for COMMA_SOURCE_FILE ("templateSyntax.galgas", 573)) ;
  switch (select_templateSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 578)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 581)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 584)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 585)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("templateSyntax.galgas", 586)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_templateSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 592)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 593)) ;
  } break ;
  default:
    break ;
  }
  switch (select_templateSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_before COMMA_SOURCE_FILE ("templateSyntax.galgas", 600)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_templateSyntax_15 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_do COMMA_SOURCE_FILE ("templateSyntax.galgas", 608)) ;
  switch (select_templateSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_index COMMA_SOURCE_FILE ("templateSyntax.galgas", 613)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 614)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_templateSyntax_17 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  switch (select_templateSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_between COMMA_SOURCE_FILE ("templateSyntax.galgas", 626)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_templateSyntax_19 (inCompiler)) {
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
  switch (select_templateSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_after COMMA_SOURCE_FILE ("templateSyntax.galgas", 637)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      switch (select_templateSyntax_21 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 645)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i29_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_if COMMA_SOURCE_FILE ("templateSyntax.galgas", 660)) ;
  GALGAS_templateInstructionIfBranchListAST var_templateInstructionIfBranchList_32644 = GALGAS_templateInstructionIfBranchListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 661)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_templateExpressionAST var_expression_32726 ;
    nt_expression_ (var_expression_32726, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_then COMMA_SOURCE_FILE ("templateSyntax.galgas", 664)) ;
    GALGAS_templateInstructionListAST var_instructionList_32785 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 665)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      {
      routine_enterTemplateString (var_instructionList_32785, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 667)) ;
      }
      switch (select_templateSyntax_23 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_ (var_instructionList_32785, inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    var_templateInstructionIfBranchList_32644.addAssign_operation (var_expression_32726, var_instructionList_32785  COMMA_SOURCE_FILE ("templateSyntax.galgas", 671)) ;
    switch (select_templateSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_elsif COMMA_SOURCE_FILE ("templateSyntax.galgas", 673)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_templateInstructionListAST var_elseInstructionList_33066 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 676)) ;
  switch (select_templateSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_else COMMA_SOURCE_FILE ("templateSyntax.galgas", 679)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      {
      routine_enterTemplateString (var_elseInstructionList_33066, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 681)) ;
      }
      switch (select_templateSyntax_25 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_ (var_elseInstructionList_33066, inCompiler) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 687)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionIfAST::constructor_new (var_templateInstructionIfBranchList_32644, var_elseInstructionList_33066  COMMA_SOURCE_FILE ("templateSyntax.galgas", 688))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 688)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i29_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_if COMMA_SOURCE_FILE ("templateSyntax.galgas", 660)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_then COMMA_SOURCE_FILE ("templateSyntax.galgas", 664)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_23 (inCompiler)) {
      case 2: {
        nt_template_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_templateSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_elsif COMMA_SOURCE_FILE ("templateSyntax.galgas", 673)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_templateSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_else COMMA_SOURCE_FILE ("templateSyntax.galgas", 679)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_templateSyntax_25 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 687)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i30_ (GALGAS_templateInstructionListAST & outArgument_outResultingInstructionList,
                                                                                             C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outResultingInstructionList.drop () ; // Release 'out' argument
  outArgument_outResultingInstructionList = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("templateSyntax.galgas", 696)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    {
    routine_enterTemplateString (outArgument_outResultingInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 698)) ;
    }
    switch (select_templateSyntax_26 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_ (outArgument_outResultingInstructionList, inCompiler) ;
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
    switch (select_templateSyntax_26 (inCompiler)) {
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

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i31_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_switch COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 29)) ;
  GALGAS_templateExpressionAST var_switchExpression_1387 ;
  nt_expression_ (var_switchExpression_1387, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression_1427 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 32)) ;
  GALGAS_templateInstructionSwitchBranchListAST var_templateInstructionSwitchBranchList_1545 = GALGAS_templateInstructionSwitchBranchListAST::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_case COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 37)) ;
      GALGAS_lstringlist var_constantNameList_1647 ;
      GALGAS_switchExtractedValuesListAST var_associatedValuesExtraction_1717 ;
      nt_switch_5F_case_ (var_constantNameList_1647, var_associatedValuesExtraction_1717, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 41)) ;
      GALGAS_templateInstructionListAST var_instructionList_1777 = GALGAS_templateInstructionListAST::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 42)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        {
        routine_enterTemplateString (var_instructionList_1777, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 44)) ;
        }
        switch (select_templateSyntax_28 (inCompiler)) {
        case 2: {
          nt_template_5F_instruction_ (var_instructionList_1777, inCompiler) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      var_templateInstructionSwitchBranchList_1545.addAssign_operation (var_constantNameList_1647, var_associatedValuesExtraction_1717, var_instructionList_1777, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 48))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 48)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 50)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchAST::constructor_new (var_switchExpression_1387, var_endOfSwitchExpression_1427, var_templateInstructionSwitchBranchList_1545  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 52))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i31_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_switch COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_case COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 37)) ;
      nt_switch_5F_case_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 41)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_templateSyntax_28 (inCompiler)) {
        case 2: {
          nt_template_5F_instruction_parse (inCompiler) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_switch_5F_case_i32_ (GALGAS_lstringlist & outArgument_outConstantNameList,
                                                                      GALGAS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                      C_Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_2568 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 67)) ;
    outArgument_outConstantNameList.addAssign_operation (var_constantName_2568  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 68)) ;
    switch (select_templateSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2C_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 70)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GALGAS_switchExtractedValuesListAST::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 72)) ;
  switch (select_templateSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 75)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_32 (inCompiler)) {
      case 1: {
        GALGAS_luint var_n_2760 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 78)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 79)) ;
        cEnumerator_range enumerator_2806 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), var_n_2760.getter_uint (HERE).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 80))), kENUMERATION_UP) ;
        while (enumerator_2806.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-switch-instruction.galgas", 81)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-switch-instruction.galgas", 81)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 81)) ;
          enumerator_2806.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 84)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-switch-instruction.galgas", 85)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-switch-instruction.galgas", 85)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 85)) ;
      } break ;
      case 3: {
        GALGAS_lstring var_typeName_3047 ;
        switch (select_templateSyntax_33 (inCompiler)) {
        case 1: {
          var_typeName_3047 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 89)) ;
        } break ;
        case 2: {
          var_typeName_3047 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-switch-instruction.galgas", 91)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_bool var_constantMarkedAsUnused_3196 ;
        switch (select_templateSyntax_34 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_3196 = GALGAS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_unused COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 97)) ;
          var_constantMarkedAsUnused_3196 = GALGAS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_constantName_3396 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 100)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (var_typeName_3047, var_constantName_3396, var_constantMarkedAsUnused_3196  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 101)) ;
      } break ;
      default:
        break ;
      }
      switch (select_templateSyntax_31 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 105)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_templateSyntax::rule_templateSyntax_switch_5F_case_i32_parse (C_Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 67)) ;
    switch (select_templateSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2C_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 70)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_templateSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 75)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_32 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 78)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 79)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 84)) ;
      } break ;
      case 3: {
        switch (select_templateSyntax_33 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 89)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_templateSyntax_34 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_unused COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 97)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 100)) ;
      } break ;
      default:
        break ;
      }
      switch (select_templateSyntax_31 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 105)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_templateInstructionForGeneration::objectCompare (const GALGAS_templateInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration::GALGAS_templateInstructionForGeneration (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration::GALGAS_templateInstructionForGeneration (const cPtr_templateInstructionForGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionForGeneration::cPtr_templateInstructionForGeneration (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionForGeneration ("templateInstructionForGeneration",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration GALGAS_templateInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForGeneration result ;
  const GALGAS_templateInstructionForGeneration * p = (const GALGAS_templateInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@templateInstructionListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_templateInstructionListForGeneration : public cCollectionElement {
  public : GALGAS_templateInstructionListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_templateInstructionListForGeneration (const GALGAS_templateInstructionForGeneration & in_mInstruction
                                                                    COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_templateInstructionListForGeneration (const GALGAS_templateInstructionListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionListForGeneration::cCollectionElement_templateInstructionListForGeneration (const GALGAS_templateInstructionForGeneration & in_mInstruction
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionListForGeneration::cCollectionElement_templateInstructionListForGeneration (const GALGAS_templateInstructionListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_templateInstructionListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateInstructionListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionListForGeneration (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_templateInstructionListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_templateInstructionListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionListForGeneration * operand = (cCollectionElement_templateInstructionListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration::GALGAS_templateInstructionListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration::GALGAS_templateInstructionListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::constructor_listWithValue (const GALGAS_templateInstructionForGeneration & inOperand0
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_templateInstructionListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_templateInstructionForGeneration & in_mInstruction
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::addAssign_operation (const GALGAS_templateInstructionForGeneration & inOperand0
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::setter_append (GALGAS_templateInstructionListForGeneration_2D_element inElement,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::setter_insertAtIndex (const GALGAS_templateInstructionForGeneration inOperand0,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::setter_removeAtIndex (GALGAS_templateInstructionForGeneration & outOperand0,
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
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::setter_popFirst (GALGAS_templateInstructionForGeneration & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::setter_popLast (GALGAS_templateInstructionForGeneration & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result = GALGAS_templateInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result = GALGAS_templateInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result = GALGAS_templateInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::plusAssign_operation (const GALGAS_templateInstructionListForGeneration inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration::setter_setMInstructionAtIndex (GALGAS_templateInstructionForGeneration inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration GALGAS_templateInstructionListForGeneration::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  GALGAS_templateInstructionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateInstructionListForGeneration::cEnumerator_templateInstructionListForGeneration (const GALGAS_templateInstructionListForGeneration & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration_2D_element cEnumerator_templateInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionListForGeneration * p = (const cCollectionElement_templateInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration cEnumerator_templateInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionListForGeneration * p = (const cCollectionElement_templateInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
  return p->mObject.mProperty_mInstruction ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionListForGeneration ("templateInstructionListForGeneration",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionGetColumnLocationForGeneration::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionGetColumnLocationForGeneration::objectCompare (const GALGAS_templateInstructionGetColumnLocationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration::GALGAS_templateInstructionGetColumnLocationForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration::GALGAS_templateInstructionGetColumnLocationForGeneration (const cPtr_templateInstructionGetColumnLocationForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGetColumnLocationForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionGetColumnLocationForGeneration (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionGetColumnLocationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionGetColumnLocationForGeneration::cPtr_templateInstructionGetColumnLocationForGeneration (LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionGetColumnLocationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ;
}

void cPtr_templateInstructionGetColumnLocationForGeneration::description (C_String & ioString,
                                                                          const int32_t /* inIndentation */) const {
  ioString << "[@templateInstructionGetColumnLocationForGeneration]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionGetColumnLocationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionGetColumnLocationForGeneration (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionGetColumnLocationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ("templateInstructionGetColumnLocationForGeneration",
                                                                          & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionGetColumnLocationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionGetColumnLocationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionGetColumnLocationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration GALGAS_templateInstructionGetColumnLocationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationForGeneration result ;
  const GALGAS_templateInstructionGetColumnLocationForGeneration * p = (const GALGAS_templateInstructionGetColumnLocationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionGetColumnLocationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGetColumnLocationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionGotoColumnLocationForGeneration::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionGotoColumnLocationForGeneration::objectCompare (const GALGAS_templateInstructionGotoColumnLocationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration::GALGAS_templateInstructionGotoColumnLocationForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration::GALGAS_templateInstructionGotoColumnLocationForGeneration (const cPtr_templateInstructionGotoColumnLocationForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGotoColumnLocationForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (LOCATION_ARGS) {
  GALGAS_templateInstructionGotoColumnLocationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionGotoColumnLocationForGeneration (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionGotoColumnLocationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionGotoColumnLocationForGeneration::cPtr_templateInstructionGotoColumnLocationForGeneration (LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionGotoColumnLocationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ;
}

void cPtr_templateInstructionGotoColumnLocationForGeneration::description (C_String & ioString,
                                                                           const int32_t /* inIndentation */) const {
  ioString << "[@templateInstructionGotoColumnLocationForGeneration]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionGotoColumnLocationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionGotoColumnLocationForGeneration (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionGotoColumnLocationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ("templateInstructionGotoColumnLocationForGeneration",
                                                                           & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionGotoColumnLocationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionGotoColumnLocationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionGotoColumnLocationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationForGeneration GALGAS_templateInstructionGotoColumnLocationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionGotoColumnLocationForGeneration result ;
  const GALGAS_templateInstructionGotoColumnLocationForGeneration * p = (const GALGAS_templateInstructionGotoColumnLocationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionGotoColumnLocationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGotoColumnLocationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@templateInstructionIfBranchListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_templateInstructionIfBranchListForGeneration : public cCollectionElement {
  public : GALGAS_templateInstructionIfBranchListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_templateInstructionIfBranchListForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                            const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_templateInstructionIfBranchListForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionIfBranchListForGeneration::cCollectionElement_templateInstructionIfBranchListForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                                                                  const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionIfBranchListForGeneration::cCollectionElement_templateInstructionIfBranchListForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_templateInstructionIfBranchListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateInstructionIfBranchListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionIfBranchListForGeneration (mObject.mProperty_mExpression, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_templateInstructionIfBranchListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_templateInstructionIfBranchListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionIfBranchListForGeneration * operand = (cCollectionElement_templateInstructionIfBranchListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration::GALGAS_templateInstructionIfBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration::GALGAS_templateInstructionIfBranchListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionIfBranchListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::constructor_listWithValue (const GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                                                    const GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_templateInstructionIfBranchListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionIfBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::addAssign_operation (const GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                               const GALGAS_templateInstructionListForGeneration & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionIfBranchListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::setter_append (GALGAS_templateInstructionIfBranchListForGeneration_2D_element inElement,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionIfBranchListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::setter_insertAtIndex (const GALGAS_semanticExpressionForGeneration inOperand0,
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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::setter_removeAtIndex (GALGAS_semanticExpressionForGeneration & outOperand0,
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
      outOperand0 = p->mObject.mProperty_mExpression ;
      outOperand1 = p->mObject.mProperty_mInstructionList ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::setter_popFirst (GALGAS_semanticExpressionForGeneration & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::setter_popLast (GALGAS_semanticExpressionForGeneration & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListForGeneration result = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListForGeneration result = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListForGeneration result = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::plusAssign_operation (const GALGAS_templateInstructionIfBranchListForGeneration inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::setter_setMExpressionAtIndex (GALGAS_semanticExpressionForGeneration inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionIfBranchListForGeneration::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListForGeneration::setter_setMInstructionListAtIndex (GALGAS_templateInstructionListForGeneration inOperand,
                                                                                             GALGAS_uint inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionIfBranchListForGeneration::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                 C_Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateInstructionIfBranchListForGeneration::cEnumerator_templateInstructionIfBranchListForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration_2D_element cEnumerator_templateInstructionIfBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListForGeneration * p = (const cCollectionElement_templateInstructionIfBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cEnumerator_templateInstructionIfBranchListForGeneration::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListForGeneration * p = (const cCollectionElement_templateInstructionIfBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return p->mObject.mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration cEnumerator_templateInstructionIfBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListForGeneration * p = (const cCollectionElement_templateInstructionIfBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionIfBranchListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration ("templateInstructionIfBranchListForGeneration",
                                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionIfBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionIfBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfBranchListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionIfForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionIfForGeneration * p = (const cPtr_templateInstructionIfForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTemplateInstructionIfBranchList.objectCompare (p->mProperty_mTemplateInstructionIfBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionIfForGeneration::objectCompare (const GALGAS_templateInstructionIfForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration::GALGAS_templateInstructionIfForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration GALGAS_templateInstructionIfForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionIfForGeneration::constructor_new (GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (HERE),
                                                                     GALGAS_templateInstructionListForGeneration::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration::GALGAS_templateInstructionIfForGeneration (const cPtr_templateInstructionIfForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionIfForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration GALGAS_templateInstructionIfForGeneration::constructor_new (const GALGAS_templateInstructionIfBranchListForGeneration & inAttribute_mTemplateInstructionIfBranchList,
                                                                                                      const GALGAS_templateInstructionListForGeneration & inAttribute_mElseInstructionList
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfForGeneration result ;
  if (inAttribute_mTemplateInstructionIfBranchList.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionIfForGeneration (inAttribute_mTemplateInstructionIfBranchList, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfForGeneration::getter_mTemplateInstructionIfBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionIfForGeneration * p = (const cPtr_templateInstructionIfForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
    result = p->mProperty_mTemplateInstructionIfBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListForGeneration cPtr_templateInstructionIfForGeneration::getter_mTemplateInstructionIfBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTemplateInstructionIfBranchList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionIfForGeneration::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionIfForGeneration * p = (const cPtr_templateInstructionIfForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration cPtr_templateInstructionIfForGeneration::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfForGeneration::setter_setMTemplateInstructionIfBranchList (GALGAS_templateInstructionIfBranchListForGeneration inValue
                                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateInstructionIfForGeneration * p = (cPtr_templateInstructionIfForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
    p->mProperty_mTemplateInstructionIfBranchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfForGeneration::setter_setMTemplateInstructionIfBranchList (GALGAS_templateInstructionIfBranchListForGeneration inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTemplateInstructionIfBranchList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfForGeneration::setter_setMElseInstructionList (GALGAS_templateInstructionListForGeneration inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateInstructionIfForGeneration * p = (cPtr_templateInstructionIfForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfForGeneration::setter_setMElseInstructionList (GALGAS_templateInstructionListForGeneration inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElseInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionIfForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionIfForGeneration::cPtr_templateInstructionIfForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
                                                                                  const GALGAS_templateInstructionListForGeneration & in_mElseInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mTemplateInstructionIfBranchList (in_mTemplateInstructionIfBranchList),
mProperty_mElseInstructionList (in_mElseInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionIfForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ;
}

void cPtr_templateInstructionIfForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@templateInstructionIfForGeneration:" ;
  mProperty_mTemplateInstructionIfBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionIfForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionIfForGeneration (mProperty_mTemplateInstructionIfBranchList, mProperty_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionIfForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ("templateInstructionIfForGeneration",
                                                           & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionIfForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionIfForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfForGeneration GALGAS_templateInstructionIfForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfForGeneration result ;
  const GALGAS_templateInstructionIfForGeneration * p = (const GALGAS_templateInstructionIfForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_templateVariableMap::cMapElement_templateVariableMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                                  const GALGAS_string & in_mCppName
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTypeProxy (in_mTypeProxy),
mProperty_mCppName (in_mCppName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_templateVariableMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTypeProxy.isValid () && mProperty_mCppName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_templateVariableMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_templateVariableMap (mProperty_lkey, mProperty_mTypeProxy, mProperty_mCppName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_templateVariableMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeProxy" ":" ;
  mProperty_mTypeProxy.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCppName" ":" ;
  mProperty_mCppName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_templateVariableMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_templateVariableMap * operand = (cMapElement_templateVariableMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (operand->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppName.objectCompare (operand->mProperty_mCppName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap::GALGAS_templateVariableMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap::GALGAS_templateVariableMap (const GALGAS_templateVariableMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap & GALGAS_templateVariableMap::operator = (const GALGAS_templateVariableMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap GALGAS_templateVariableMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_templateVariableMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap GALGAS_templateVariableMap::constructor_mapWithMapToOverride (const GALGAS_templateVariableMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_templateVariableMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap GALGAS_templateVariableMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_templateVariableMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateVariableMap::setter_insertKey (GALGAS_lstring inKey,
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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_templateVariableMap_searchKey = "the '%K' variable is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

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
    outArgument0 = p->mProperty_mTypeProxy ;
    outArgument1 = p->mProperty_mCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy GALGAS_templateVariableMap::getter_mTypeProxyForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    result = p->mProperty_mTypeProxy ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateVariableMap::getter_mCppNameForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    result = p->mProperty_mCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateVariableMap::setter_setMTypeProxyForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_templateVariableMap * p = (cMapElement_templateVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    p->mProperty_mTypeProxy = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateVariableMap::setter_setMCppNameForKey (GALGAS_string inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_templateVariableMap * p = (cMapElement_templateVariableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    p->mProperty_mCppName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_templateVariableMap * GALGAS_templateVariableMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_templateVariableMap * result = (cMapElement_templateVariableMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_templateVariableMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateVariableMap::cEnumerator_templateVariableMap (const GALGAS_templateVariableMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap_2D_element cEnumerator_templateVariableMap::current (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return GALGAS_templateVariableMap_2D_element (p->mProperty_lkey, p->mProperty_mTypeProxy, p->mProperty_mCppName) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_templateVariableMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_templateVariableMap::current_mTypeProxy (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return p->mProperty_mTypeProxy ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_templateVariableMap::current_mCppName (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return p->mProperty_mCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_templateVariableMap::optional_searchKey (const GALGAS_string & inKey,
                                                     GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                     GALGAS_string & outArgument1) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    outArgument0 = p->mProperty_mTypeProxy ;
    outArgument1 = p->mProperty_mCppName ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateVariableMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateVariableMap ("templateVariableMap",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateVariableMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVariableMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateVariableMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateVariableMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

