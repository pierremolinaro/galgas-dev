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
  return "../build/indexes" ;
}

//----------------------------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//----------------------------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_galgasTemplateScanner_ASCIIcodeTooLargeError = "ASCII code > 255" ;

static const char * gLexicalMessage_galgasTemplateScanner_attributeError = "in an attribute name, a letter or a digit should follow the '%' character" ;

static const char * gLexicalMessage_galgasTemplateScanner_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_galgasTemplateScanner_floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_galgasTemplateScanner_hexDigitError = "0x should be followed by a hexadecimal digit" ;

static const char * gLexicalMessage_galgasTemplateScanner_incorrectCharConstant = "incorrect literal character" ;

static const char * gLexicalMessage_galgasTemplateScanner_incorrectHTMLescapeSequence = "Invalid HTML sequence, should be '&...;'" ;

static const char * gLexicalMessage_galgasTemplateScanner_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_galgasTemplateScanner_incorrectTypeNameError = "in a type name, a letter, a digit or the underscore character should follow the '@' character" ;

static const char * gLexicalMessage_galgasTemplateScanner_incorrect_terminal_end = "terminal does not end with '$'" ;

static const char * gLexicalMessage_galgasTemplateScanner_incorrect_terminal_start = "incorrect terminal start" ;

static const char * gLexicalMessage_galgasTemplateScanner_internalError = "internal error" ;

static const char * gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition4 = "\\u should be followed by exactly four hexadecimal digits" ;

static const char * gLexicalMessage_galgasTemplateScanner_invalideUnicodeDefinition8 = "\\U should be followed by exactly eight hexadecimal digits" ;

static const char * gLexicalMessage_galgasTemplateScanner_obsoleteStringConstruction = "\\ followed by digits is obsolete: now, use \\u.... or \\U........" ;

static const char * gLexicalMessage_galgasTemplateScanner_unassignedUnicodeValue = "this value does not correspond to an assigned Unicode point" ;

static const char * gLexicalMessage_galgasTemplateScanner_unknownHTMLescapeSequence = "Invalid &...; HTML sequence" ;

//----------------------------------------------------------------------------------------------------------------------
//          Syntax error messages, for every terminal symbol                                     
//----------------------------------------------------------------------------------------------------------------------

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_identifier = "an identifier" ;

//--- Syntax error message for terminal '$double.xxx$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_double_2E_xxx = "a float number" ;

//--- Syntax error message for terminal '$uint32$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_uint_33__32_ = "a literal integer" ;

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

//--- Syntax error message for terminal '$...$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2E__2E__2E_ = "the '...' delimitor" ;

//--- Syntax error message for terminal '$..<$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2E__2E__3C_ = "the '..<' delimitor" ;

//--- Syntax error message for terminal '$@type$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__40_type = "a type name (@...)" ;

//--- Syntax error message for terminal '$%attribute$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__25_attribute = "an attribute (%...)" ;

//--- Syntax error message for terminal '$'char'$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__27_char_27_ = "a character constant" ;

//--- Syntax error message for terminal '$$terminal$$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__24_terminal_24_ = "a terminal symbol ($...$)" ;

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

//--- Syntax error message for terminal '$<non_terminal>$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3C_non_5F_terminal_3E_ = "a non terminal symbol <...>" ;

//--- Syntax error message for terminal '$"string"$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__22_string_22_ = "a character string constant \"...\"" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_comment = "a comment" ;

//--- Syntax error message for terminal '$commentMark$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_commentMark = "a comment" ;

//--- Syntax error message for terminal '$abstract$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_abstract = "the 'abstract' keyword" ;

//--- Syntax error message for terminal '$after$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_after = "the 'after' keyword" ;

//--- Syntax error message for terminal '$array$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_array = "the 'array' keyword" ;

//--- Syntax error message for terminal '$as$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_as = "the 'as' keyword" ;

//--- Syntax error message for terminal '$before$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_before = "the 'before' keyword" ;

//--- Syntax error message for terminal '$between$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_between = "the 'between' keyword" ;

//--- Syntax error message for terminal '$block$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_block = "the 'block' keyword" ;

//--- Syntax error message for terminal '$boolset$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_boolset = "the 'boolset' keyword" ;

//--- Syntax error message for terminal '$cast$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_cast = "the 'cast' keyword" ;

//--- Syntax error message for terminal '$case$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_case = "the 'case' keyword" ;

//--- Syntax error message for terminal '$class$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_class = "the 'class' keyword" ;

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

//--- Syntax error message for terminal '$for$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_for = "the 'for' keyword" ;

//--- Syntax error message for terminal '$fixit$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_fixit = "the 'fixit' keyword" ;

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

//--- Syntax error message for terminal '$if$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_if = "the 'if' keyword" ;

//--- Syntax error message for terminal '$in$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_in = "the 'in' keyword" ;

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

//--- Syntax error message for terminal '$message$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_message = "the 'message' keyword" ;

//--- Syntax error message for terminal '$method$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_method = "the 'method' keyword" ;

//--- Syntax error message for terminal '$mod$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_mod = "the 'mod' keyword" ;

//--- Syntax error message for terminal '$mutating$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_mutating = "the 'mutating' keyword" ;

//--- Syntax error message for terminal '$not$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_not = "the 'not' keyword" ;

//--- Syntax error message for terminal '$on$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_on = "the 'on' keyword" ;

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

//--- Syntax error message for terminal '$public$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_public = "the 'public' keyword" ;

//--- Syntax error message for terminal '$private$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_private = "the 'private' keyword" ;

//--- Syntax error message for terminal '$proc$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_proc = "the 'proc' keyword" ;

//--- Syntax error message for terminal '$project$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_project = "the 'project' keyword" ;

//--- Syntax error message for terminal '$refclass$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_refclass = "the 'refclass' keyword" ;

//--- Syntax error message for terminal '$remove$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_remove = "the 'remove' keyword" ;

//--- Syntax error message for terminal '$replace$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_replace = "the 'replace' keyword" ;

//--- Syntax error message for terminal '$repeat$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_repeat = "the 'repeat' keyword" ;

//--- Syntax error message for terminal '$rewind$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_rewind = "the 'rewind' keyword" ;

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

//--- Syntax error message for terminal '$unused$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_unused = "the 'unused' keyword" ;

//--- Syntax error message for terminal '$var$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_var = "the 'var' keyword" ;

//--- Syntax error message for terminal '$valueclass$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_valueclass = "the 'valueclass' keyword" ;

//--- Syntax error message for terminal '$warning$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_warning = "the 'warning' keyword" ;

//--- Syntax error message for terminal '$while$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_while = "the 'while' keyword" ;

//--- Syntax error message for terminal '$with$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner_with = "the 'with' keyword" ;

//--- Syntax error message for terminal '$*$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2A_ = "the '*' delimitor" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2C_ = "the ',' delimitor" ;

//--- Syntax error message for terminal '$+$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2B_ = "the '+' delimitor" ;

//--- Syntax error message for terminal '$&+$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__26__2B_ = "the '&+' delimitor" ;

//--- Syntax error message for terminal '$&-$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__26__2D_ = "the '&-' delimitor" ;

//--- Syntax error message for terminal '$&*$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__26__2A_ = "the '&*' delimitor" ;

//--- Syntax error message for terminal '$&/$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__26__2F_ = "the '&/' delimitor" ;

//--- Syntax error message for terminal '$>$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3E_ = "the '>' delimitor" ;

//--- Syntax error message for terminal '$;$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3B_ = "the ';' delimitor" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3A_ = "the ':' delimitor" ;

//--- Syntax error message for terminal '$:>$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3A__3E_ = "the ':>' delimitor" ;

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

//--- Syntax error message for terminal '$=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3D_ = "the '=' delimitor" ;

//--- Syntax error message for terminal '$&&$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__26__26_ = "the '&&' delimitor" ;

//--- Syntax error message for terminal '$[$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__5B_ = "the '[' delimitor" ;

//--- Syntax error message for terminal '$]$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__5D_ = "the ']' delimitor" ;

//--- Syntax error message for terminal '$+=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2B__3D_ = "the '+=' delimitor" ;

//--- Syntax error message for terminal '$-=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2D__3D_ = "the '-=' delimitor" ;

//--- Syntax error message for terminal '$*=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2A__3D_ = "the '*=' delimitor" ;

//--- Syntax error message for terminal '$/=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2F__3D_ = "the '/=' delimitor" ;

//--- Syntax error message for terminal '$/$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2F_ = "the '/' delimitor" ;

//--- Syntax error message for terminal '$!=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__21__3D_ = "the '!=' delimitor" ;

//--- Syntax error message for terminal '$>=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3E__3D_ = "the '>=' delimitor" ;

//--- Syntax error message for terminal '$&$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__26_ = "the '&' delimitor" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__7B_ = "the '{' delimitor" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__7D_ = "the '}' delimitor" ;

//--- Syntax error message for terminal '$`$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__60_ = "the '`' delimitor" ;

//--- Syntax error message for terminal '$||$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__7C__7C_ = "the '||' delimitor" ;

//--- Syntax error message for terminal '$|$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__7C_ = "the '|' delimitor" ;

//--- Syntax error message for terminal '$^$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__5E_ = "the '^' delimitor" ;

//--- Syntax error message for terminal '$>>$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3E__3E_ = "the '>>' delimitor" ;

//--- Syntax error message for terminal '$~$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__7E_ = "the '~' delimitor" ;

//--- Syntax error message for terminal '$--$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2D__2D_ = "the '--' delimitor" ;

//--- Syntax error message for terminal '$++$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__2B__2B_ = "the '++' delimitor" ;

//--- Syntax error message for terminal '$&--$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__26__2D__2D_ = "the '&--' delimitor" ;

//--- Syntax error message for terminal '$&++$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__26__2B__2B_ = "the '&++' delimitor" ;

//--- Syntax error message for terminal '$°$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__B0_ = "the '\xC2""\xB0""' delimitor" ;

//--- Syntax error message for terminal '$===$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3D__3D__3D_ = "the '===' delimitor" ;

//--- Syntax error message for terminal '$!==$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__21__3D__3D_ = "the '!==' delimitor" ;

//--- Syntax error message for terminal '$?^$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__3F__5E_ = "the '\?^' delimitor" ;

//--- Syntax error message for terminal '$!^$' :
static const char * gSyntaxErrorMessage_galgasTemplateScanner__21__5E_ = "the '!^' delimitor" ;

//----------------------------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasTemplateScanner::getMessageForTerminal (const int16_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 157)) {
    static const char * syntaxErrorMessageArray [157] = {kEndOfSourceLexicalErrorMessage,
        gSyntaxErrorMessage_galgasTemplateScanner_identifier,
        gSyntaxErrorMessage_galgasTemplateScanner_double_2E_xxx,
        gSyntaxErrorMessage_galgasTemplateScanner_uint_33__32_,
        gSyntaxErrorMessage_galgasTemplateScanner_sint_33__32__5F_S,
        gSyntaxErrorMessage_galgasTemplateScanner_uint_36__34__5F_L,
        gSyntaxErrorMessage_galgasTemplateScanner_sint_36__34__5F_LS,
        gSyntaxErrorMessage_galgasTemplateScanner_bigint_5F_G,
        gSyntaxErrorMessage_galgasTemplateScanner__2E_,
        gSyntaxErrorMessage_galgasTemplateScanner__2E__2E__2E_,
        gSyntaxErrorMessage_galgasTemplateScanner__2E__2E__3C_,
        gSyntaxErrorMessage_galgasTemplateScanner__40_type,
        gSyntaxErrorMessage_galgasTemplateScanner__25_attribute,
        gSyntaxErrorMessage_galgasTemplateScanner__27_char_27_,
        gSyntaxErrorMessage_galgasTemplateScanner__24_terminal_24_,
        gSyntaxErrorMessage_galgasTemplateScanner__3F_,
        gSyntaxErrorMessage_galgasTemplateScanner__3F__21_,
        gSyntaxErrorMessage_galgasTemplateScanner__21_,
        gSyntaxErrorMessage_galgasTemplateScanner__21__3F_,
        gSyntaxErrorMessage_galgasTemplateScanner__3C_,
        gSyntaxErrorMessage_galgasTemplateScanner__3C__3D_,
        gSyntaxErrorMessage_galgasTemplateScanner__3C__3C_,
        gSyntaxErrorMessage_galgasTemplateScanner__3C_non_5F_terminal_3E_,
        gSyntaxErrorMessage_galgasTemplateScanner__22_string_22_,
        gSyntaxErrorMessage_galgasTemplateScanner_comment,
        gSyntaxErrorMessage_galgasTemplateScanner_commentMark,
        gSyntaxErrorMessage_galgasTemplateScanner_abstract,
        gSyntaxErrorMessage_galgasTemplateScanner_after,
        gSyntaxErrorMessage_galgasTemplateScanner_array,
        gSyntaxErrorMessage_galgasTemplateScanner_as,
        gSyntaxErrorMessage_galgasTemplateScanner_before,
        gSyntaxErrorMessage_galgasTemplateScanner_between,
        gSyntaxErrorMessage_galgasTemplateScanner_block,
        gSyntaxErrorMessage_galgasTemplateScanner_boolset,
        gSyntaxErrorMessage_galgasTemplateScanner_cast,
        gSyntaxErrorMessage_galgasTemplateScanner_case,
        gSyntaxErrorMessage_galgasTemplateScanner_class,
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
        gSyntaxErrorMessage_galgasTemplateScanner_for,
        gSyntaxErrorMessage_galgasTemplateScanner_fixit,
        gSyntaxErrorMessage_galgasTemplateScanner_func,
        gSyntaxErrorMessage_galgasTemplateScanner_getter,
        gSyntaxErrorMessage_galgasTemplateScanner_grammar,
        gSyntaxErrorMessage_galgasTemplateScanner_graph,
        gSyntaxErrorMessage_galgasTemplateScanner_gui,
        gSyntaxErrorMessage_galgasTemplateScanner_if,
        gSyntaxErrorMessage_galgasTemplateScanner_in,
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
        gSyntaxErrorMessage_galgasTemplateScanner_message,
        gSyntaxErrorMessage_galgasTemplateScanner_method,
        gSyntaxErrorMessage_galgasTemplateScanner_mod,
        gSyntaxErrorMessage_galgasTemplateScanner_mutating,
        gSyntaxErrorMessage_galgasTemplateScanner_not,
        gSyntaxErrorMessage_galgasTemplateScanner_on,
        gSyntaxErrorMessage_galgasTemplateScanner_operator,
        gSyntaxErrorMessage_galgasTemplateScanner_option,
        gSyntaxErrorMessage_galgasTemplateScanner_or,
        gSyntaxErrorMessage_galgasTemplateScanner_override,
        gSyntaxErrorMessage_galgasTemplateScanner_parse,
        gSyntaxErrorMessage_galgasTemplateScanner_public,
        gSyntaxErrorMessage_galgasTemplateScanner_private,
        gSyntaxErrorMessage_galgasTemplateScanner_proc,
        gSyntaxErrorMessage_galgasTemplateScanner_project,
        gSyntaxErrorMessage_galgasTemplateScanner_refclass,
        gSyntaxErrorMessage_galgasTemplateScanner_remove,
        gSyntaxErrorMessage_galgasTemplateScanner_replace,
        gSyntaxErrorMessage_galgasTemplateScanner_repeat,
        gSyntaxErrorMessage_galgasTemplateScanner_rewind,
        gSyntaxErrorMessage_galgasTemplateScanner_rule,
        gSyntaxErrorMessage_galgasTemplateScanner_search,
        gSyntaxErrorMessage_galgasTemplateScanner_select,
        gSyntaxErrorMessage_galgasTemplateScanner_self,
        gSyntaxErrorMessage_galgasTemplateScanner_send,
        gSyntaxErrorMessage_galgasTemplateScanner_setter,
        gSyntaxErrorMessage_galgasTemplateScanner_sortedlist,
        gSyntaxErrorMessage_galgasTemplateScanner_struct,
        gSyntaxErrorMessage_galgasTemplateScanner_style,
        gSyntaxErrorMessage_galgasTemplateScanner_switch,
        gSyntaxErrorMessage_galgasTemplateScanner_syntax,
        gSyntaxErrorMessage_galgasTemplateScanner_tag,
        gSyntaxErrorMessage_galgasTemplateScanner_template,
        gSyntaxErrorMessage_galgasTemplateScanner_then,
        gSyntaxErrorMessage_galgasTemplateScanner_true,
        gSyntaxErrorMessage_galgasTemplateScanner_unused,
        gSyntaxErrorMessage_galgasTemplateScanner_var,
        gSyntaxErrorMessage_galgasTemplateScanner_valueclass,
        gSyntaxErrorMessage_galgasTemplateScanner_warning,
        gSyntaxErrorMessage_galgasTemplateScanner_while,
        gSyntaxErrorMessage_galgasTemplateScanner_with,
        gSyntaxErrorMessage_galgasTemplateScanner__2A_,
        gSyntaxErrorMessage_galgasTemplateScanner__2C_,
        gSyntaxErrorMessage_galgasTemplateScanner__2B_,
        gSyntaxErrorMessage_galgasTemplateScanner__26__2B_,
        gSyntaxErrorMessage_galgasTemplateScanner__26__2D_,
        gSyntaxErrorMessage_galgasTemplateScanner__26__2A_,
        gSyntaxErrorMessage_galgasTemplateScanner__26__2F_,
        gSyntaxErrorMessage_galgasTemplateScanner__3E_,
        gSyntaxErrorMessage_galgasTemplateScanner__3B_,
        gSyntaxErrorMessage_galgasTemplateScanner__3A_,
        gSyntaxErrorMessage_galgasTemplateScanner__3A__3E_,
        gSyntaxErrorMessage_galgasTemplateScanner__2D_,
        gSyntaxErrorMessage_galgasTemplateScanner__28_,
        gSyntaxErrorMessage_galgasTemplateScanner__29_,
        gSyntaxErrorMessage_galgasTemplateScanner__2D__3E_,
        gSyntaxErrorMessage_galgasTemplateScanner__3D__3D_,
        gSyntaxErrorMessage_galgasTemplateScanner__3D_,
        gSyntaxErrorMessage_galgasTemplateScanner__26__26_,
        gSyntaxErrorMessage_galgasTemplateScanner__5B_,
        gSyntaxErrorMessage_galgasTemplateScanner__5D_,
        gSyntaxErrorMessage_galgasTemplateScanner__2B__3D_,
        gSyntaxErrorMessage_galgasTemplateScanner__2D__3D_,
        gSyntaxErrorMessage_galgasTemplateScanner__2A__3D_,
        gSyntaxErrorMessage_galgasTemplateScanner__2F__3D_,
        gSyntaxErrorMessage_galgasTemplateScanner__2F_,
        gSyntaxErrorMessage_galgasTemplateScanner__21__3D_,
        gSyntaxErrorMessage_galgasTemplateScanner__3E__3D_,
        gSyntaxErrorMessage_galgasTemplateScanner__26_,
        gSyntaxErrorMessage_galgasTemplateScanner__7B_,
        gSyntaxErrorMessage_galgasTemplateScanner__7D_,
        gSyntaxErrorMessage_galgasTemplateScanner__60_,
        gSyntaxErrorMessage_galgasTemplateScanner__7C__7C_,
        gSyntaxErrorMessage_galgasTemplateScanner__7C_,
        gSyntaxErrorMessage_galgasTemplateScanner__5E_,
        gSyntaxErrorMessage_galgasTemplateScanner__3E__3E_,
        gSyntaxErrorMessage_galgasTemplateScanner__7E_,
        gSyntaxErrorMessage_galgasTemplateScanner__2D__2D_,
        gSyntaxErrorMessage_galgasTemplateScanner__2B__2B_,
        gSyntaxErrorMessage_galgasTemplateScanner__26__2D__2D_,
        gSyntaxErrorMessage_galgasTemplateScanner__26__2B__2B_,
        gSyntaxErrorMessage_galgasTemplateScanner__B0_,
        gSyntaxErrorMessage_galgasTemplateScanner__3D__3D__3D_,
        gSyntaxErrorMessage_galgasTemplateScanner__21__3D__3D_,
        gSyntaxErrorMessage_galgasTemplateScanner__3F__5E_,
        gSyntaxErrorMessage_galgasTemplateScanner__21__5E_
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

//--- Unicode string for '$_21__3D__3D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__21__3D__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
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

//--- Unicode string for '$_26__26_$'
static const utf32 kUnicodeString_galgasTemplateScanner__26__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2A_$'
static const utf32 kUnicodeString_galgasTemplateScanner__26__2A_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('*'),
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

//--- Unicode string for '$_26__2D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__26__2D_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('-'),
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

//--- Unicode string for '$_2A__3D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__2A__3D_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE ('='),
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

//--- Unicode string for '$_2D__3D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__2D__3D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('='),
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

//--- Unicode string for '$_2F__3D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__2F__3D_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE ('='),
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

//--- Unicode string for '$_3D__3D__3D_$'
static const utf32 kUnicodeString_galgasTemplateScanner__3D__3D__3D_ [] = {
  TO_UNICODE ('='),
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

//--- Unicode string for '$_5C__24_$'
static const utf32 kUnicodeString_galgasTemplateScanner__5C__24_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('$'),
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

//--- Unicode string for '$_60_$'
static const utf32 kUnicodeString_galgasTemplateScanner__60_ [] = {
  TO_UNICODE ('`'),
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

//--- Unicode string for '$as$'
static const utf32 kUnicodeString_galgasTemplateScanner_as [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
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

//--- Unicode string for '$mutating$'
static const utf32 kUnicodeString_galgasTemplateScanner_mutating [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
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

//--- Unicode string for '$public$'
static const utf32 kUnicodeString_galgasTemplateScanner_public [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$refclass$'
static const utf32 kUnicodeString_galgasTemplateScanner_refclass [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
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

//--- Unicode string for '$valueclass$'
static const utf32 kUnicodeString_galgasTemplateScanner_valueclass [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
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

//--- Unicode string for '$_7C__7C_$'
static const utf32 kUnicodeString_galgasTemplateScanner__7C__7C_ [] = {
  TO_UNICODE ('|'),
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

//--- Unicode string for '$_B0_$'
static const utf32 kUnicodeString_galgasTemplateScanner__B0_ [] = {
  TO_UNICODE (176),
  TO_UNICODE (0)
} ;

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'galgasDelimitorsList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasTemplateScanner_galgasDelimitorsList = 45 ;

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
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3D_, 1, C_Lexique_galgasTemplateScanner::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3E_, 1, C_Lexique_galgasTemplateScanner::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__5B_, 1, C_Lexique_galgasTemplateScanner::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__5D_, 1, C_Lexique_galgasTemplateScanner::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__5E_, 1, C_Lexique_galgasTemplateScanner::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__60_, 1, C_Lexique_galgasTemplateScanner::kToken__60_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__7B_, 1, C_Lexique_galgasTemplateScanner::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__7C_, 1, C_Lexique_galgasTemplateScanner::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__7D_, 1, C_Lexique_galgasTemplateScanner::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__7E_, 1, C_Lexique_galgasTemplateScanner::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__B0_, 1, C_Lexique_galgasTemplateScanner::kToken__B0_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__21__3D_, 2, C_Lexique_galgasTemplateScanner::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__21__5E_, 2, C_Lexique_galgasTemplateScanner::kToken__21__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__26__26_, 2, C_Lexique_galgasTemplateScanner::kToken__26__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__26__2A_, 2, C_Lexique_galgasTemplateScanner::kToken__26__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__26__2B_, 2, C_Lexique_galgasTemplateScanner::kToken__26__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__26__2D_, 2, C_Lexique_galgasTemplateScanner::kToken__26__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__26__2F_, 2, C_Lexique_galgasTemplateScanner::kToken__26__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2A__3D_, 2, C_Lexique_galgasTemplateScanner::kToken__2A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2B__2B_, 2, C_Lexique_galgasTemplateScanner::kToken__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2B__3D_, 2, C_Lexique_galgasTemplateScanner::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2D__2D_, 2, C_Lexique_galgasTemplateScanner::kToken__2D__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2D__3D_, 2, C_Lexique_galgasTemplateScanner::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2D__3E_, 2, C_Lexique_galgasTemplateScanner::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__2F__3D_, 2, C_Lexique_galgasTemplateScanner::kToken__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3A__3E_, 2, C_Lexique_galgasTemplateScanner::kToken__3A__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3D__3D_, 2, C_Lexique_galgasTemplateScanner::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3E__3D_, 2, C_Lexique_galgasTemplateScanner::kToken__3E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3E__3E_, 2, C_Lexique_galgasTemplateScanner::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3F__5E_, 2, C_Lexique_galgasTemplateScanner::kToken__3F__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__7C__7C_, 2, C_Lexique_galgasTemplateScanner::kToken__7C__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__21__3D__3D_, 3, C_Lexique_galgasTemplateScanner::kToken__21__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__26__2B__2B_, 3, C_Lexique_galgasTemplateScanner::kToken__26__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__26__2D__2D_, 3, C_Lexique_galgasTemplateScanner::kToken__26__2D__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner__3D__3D__3D_, 3, C_Lexique_galgasTemplateScanner::kToken__3D__3D__3D_)
} ;

int16_t C_Lexique_galgasTemplateScanner::search_into_galgasDelimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasTemplateScanner_galgasDelimitorsList, ktable_size_galgasTemplateScanner_galgasDelimitorsList) ;
}

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'galgasKeyWordList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasTemplateScanner_galgasKeyWordList = 86 ;

static const C_unicode_lexique_table_entry ktable_for_galgasTemplateScanner_galgasKeyWordList [ktable_size_galgasTemplateScanner_galgasKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_as, 2, C_Lexique_galgasTemplateScanner::kToken_as),
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
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_list, 4, C_Lexique_galgasTemplateScanner::kToken_list),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_loop, 4, C_Lexique_galgasTemplateScanner::kToken_loop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_proc, 4, C_Lexique_galgasTemplateScanner::kToken_proc),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_rule, 4, C_Lexique_galgasTemplateScanner::kToken_rule),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_self, 4, C_Lexique_galgasTemplateScanner::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_send, 4, C_Lexique_galgasTemplateScanner::kToken_send),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_then, 4, C_Lexique_galgasTemplateScanner::kToken_then),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_true, 4, C_Lexique_galgasTemplateScanner::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_with, 4, C_Lexique_galgasTemplateScanner::kToken_with),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_after, 5, C_Lexique_galgasTemplateScanner::kToken_after),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_array, 5, C_Lexique_galgasTemplateScanner::kToken_array),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_block, 5, C_Lexique_galgasTemplateScanner::kToken_block),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_class, 5, C_Lexique_galgasTemplateScanner::kToken_class),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_elsif, 5, C_Lexique_galgasTemplateScanner::kToken_elsif),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_error, 5, C_Lexique_galgasTemplateScanner::kToken_error),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_false, 5, C_Lexique_galgasTemplateScanner::kToken_false),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_fixit, 5, C_Lexique_galgasTemplateScanner::kToken_fixit),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_graph, 5, C_Lexique_galgasTemplateScanner::kToken_graph),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_label, 5, C_Lexique_galgasTemplateScanner::kToken_label),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_parse, 5, C_Lexique_galgasTemplateScanner::kToken_parse),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_style, 5, C_Lexique_galgasTemplateScanner::kToken_style),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_while, 5, C_Lexique_galgasTemplateScanner::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_before, 6, C_Lexique_galgasTemplateScanner::kToken_before),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_extern, 6, C_Lexique_galgasTemplateScanner::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_getter, 6, C_Lexique_galgasTemplateScanner::kToken_getter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_insert, 6, C_Lexique_galgasTemplateScanner::kToken_insert),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_method, 6, C_Lexique_galgasTemplateScanner::kToken_method),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_option, 6, C_Lexique_galgasTemplateScanner::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_public, 6, C_Lexique_galgasTemplateScanner::kToken_public),
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
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_boolset, 7, C_Lexique_galgasTemplateScanner::kToken_boolset),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_default, 7, C_Lexique_galgasTemplateScanner::kToken_default),
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
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_mutating, 8, C_Lexique_galgasTemplateScanner::kToken_mutating),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_operator, 8, C_Lexique_galgasTemplateScanner::kToken_operator),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_override, 8, C_Lexique_galgasTemplateScanner::kToken_override),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_refclass, 8, C_Lexique_galgasTemplateScanner::kToken_refclass),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_template, 8, C_Lexique_galgasTemplateScanner::kToken_template),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_extension, 9, C_Lexique_galgasTemplateScanner::kToken_extension),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_sortedlist, 10, C_Lexique_galgasTemplateScanner::kToken_sortedlist),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScanner_valueclass, 10, C_Lexique_galgasTemplateScanner::kToken_valueclass),
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
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_bigintValue.decimalString ()) ;
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
    case kToken__40_type:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("@type") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__25_attribute:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("%attribute") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__27_char_27_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("'char'") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnicodeCharacter (ptr->mLexicalAttribute_charValue COMMA_HERE) ;
      break ;
    case kToken__24_terminal_24_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("$terminal$") ;
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
    case kToken__3C_non_5F_terminal_3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<non_terminal>") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__22_string_22_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\"string\"") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("comment") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_commentMark:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("commentMark") ;
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
    case kToken_as:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("as") ;
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
    case kToken_cast:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("cast") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_case:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("case") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_class:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("class") ;
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
    case kToken_for:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("for") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_fixit:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("fixit") ;
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
    case kToken_mutating:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("mutating") ;
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
    case kToken_public:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("public") ;
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
    case kToken_refclass:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("refclass") ;
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
    case kToken_valueclass:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("valueclass") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_warning:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("warning") ;
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
    case kToken__26__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&+") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&-") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&*") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&/") ;
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
    case kToken__3A__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":>") ;
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
    case kToken__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__26_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&&") ;
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
    case kToken__2D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("*=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2F__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("/=") ;
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
    case kToken__60_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("`") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("||") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("|") ;
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
    case kToken__2D__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("--") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("++") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2D__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&--") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2B__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&++") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__B0_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\xC2""\xB0""") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D__3D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("===") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__3D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!==") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F__5E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?^") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__5E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!^") ;
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

static const bool galgasTemplateScanner_kEndOfScriptInTemplateArray [156] = {
  false /* identifier */,
  false /* double.xxx */,
  false /* uint32 */,
  false /* sint32_S */,
  false /* uint64_L */,
  false /* sint64_LS */,
  false /* bigint_G */,
  false /* . */,
  false /* ... */,
  false /* ..< */,
  false /* @type */,
  false /* %attribute */,
  false /* 'char' */,
  false /* $terminal$ */,
  false /* ? */,
  false /* ?! */,
  false /* ! */,
  false /* !? */,
  false /* < */,
  false /* <= */,
  false /* << */,
  false /* <non_terminal> */,
  false /* "string" */,
  false /* comment */,
  false /* commentMark */,
  false /* abstract */,
  false /* after */,
  false /* array */,
  false /* as */,
  false /* before */,
  false /* between */,
  false /* block */,
  false /* boolset */,
  false /* cast */,
  false /* case */,
  false /* class */,
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
  false /* for */,
  false /* fixit */,
  false /* func */,
  false /* getter */,
  false /* grammar */,
  false /* graph */,
  false /* gui */,
  false /* if */,
  false /* in */,
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
  false /* message */,
  false /* method */,
  false /* mod */,
  false /* mutating */,
  false /* not */,
  false /* on */,
  false /* operator */,
  false /* option */,
  false /* or */,
  false /* override */,
  false /* parse */,
  false /* public */,
  false /* private */,
  false /* proc */,
  false /* project */,
  false /* refclass */,
  false /* remove */,
  false /* replace */,
  false /* repeat */,
  false /* rewind */,
  false /* rule */,
  false /* search */,
  false /* select */,
  false /* self */,
  false /* send */,
  false /* setter */,
  false /* sortedlist */,
  false /* struct */,
  false /* style */,
  false /* switch */,
  false /* syntax */,
  false /* tag */,
  false /* template */,
  false /* then */,
  false /* true */,
  false /* unused */,
  false /* var */,
  false /* valueclass */,
  false /* warning */,
  false /* while */,
  false /* with */,
  false /* * */,
  false /* , */,
  false /* + */,
  false /* &+ */,
  false /* &- */,
  false /* &* */,
  false /* &/ */,
  false /* > */,
  false /* ; */,
  false /* : */,
  false /* :> */,
  false /* - */,
  false /* ( */,
  false /* ) */,
  false /* -> */,
  false /* == */,
  false /* = */,
  false /* && */,
  false /* [ */,
  false /* ] */,
  false /* += */,
  false /* -= */,
  false /* *= */,
  false /* /= */,
  false /* / */,
  false /* != */,
  false /* >= */,
  false /* & */,
  false /* { */,
  false /* } */,
  false /* ` */,
  false /* || */,
  false /* | */,
  false /* ^ */,
  false /* >> */,
  false /* ~ */,
  false /* -- */,
  false /* ++ */,
  false /* &-- */,
  false /* &++ */,
  false /* ° */,
  false /* === */,
  false /* !== */,
  false /* ?^ */,
  false /* !^ */
} ;

//----------------------------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_galgasTemplateScanner::internalParseLexicalToken (cTokenFor_galgasTemplateScanner & token) {
  bool loop = true ;
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
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (token.mTokenCode == -1) {
          token.mTokenCode = search_into_galgasKeyWordList (token.mLexicalAttribute_identifierString) ;
        }
        if (token.mTokenCode == -1) {
          token.mTokenCode = kToken_identifier ;
        }
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__30_x, 2, true)) {
        do {
          if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          do {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
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
            ::scanner_routine_convertHexStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasTemplateScanner_internalError) ;
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
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
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
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_galgasTemplateScanner_floatNumberConversionError) ;
          token.mTokenCode = kToken_double_2E_xxx ;
          enterToken (token) ;
        }else{
          ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasTemplateScanner_internalError) ;
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
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
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
          }else{
            token.mTokenCode = kToken__2E_ ;
            enterToken (token) ;
          }
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('@'))) {
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          if (testForInputUTF32Char (TO_UNICODE ('-'))) {
            do {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              }else{
                loop = false ;
              }
            }while (loop) ;
            loop = true ;
          }
          if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }
        }else{
          lexicalError (gLexicalMessage_galgasTemplateScanner_incorrectTypeNameError COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken__40_type ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('%'))) {
        if (testForCharWithFunction (isUnicodeLetter)) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('-')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
        }else{
          lexicalError (gLexicalMessage_galgasTemplateScanner_attributeError COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken__25_attribute ;
        enterToken (token) ;
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
          }else if (testForInputUTF32Char (TO_UNICODE ('&'))) {
            do {
              if (notTestForInputUTF32String (kUnicodeString_galgasTemplateScanner__3B_, 1, gLexicalMessage_galgasTemplateScanner_incorrectHTMLescapeSequence COMMA_LINE_AND_SOURCE_FILE)) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              }else{
                loop = false ;
              }
            }while (loop) ;
            loop = true ;
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
      }else if (testForInputUTF32Char (TO_UNICODE ('$'))) {
        if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__5C__5C_, 2, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          do {
            if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__5C__5C_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
            }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__5C__24_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
            }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__5C__24_, 2, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
          do {
            if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__5C__5C_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
            }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__5C__24_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
            }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
        }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          do {
            if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__5C__5C_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
            }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__5C__24_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
            }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
        }else{
          lexicalError (gLexicalMessage_galgasTemplateScanner_incorrect_terminal_start COMMA_LINE_AND_SOURCE_FILE) ;
        }
        if (testForInputUTF32Char (TO_UNICODE ('$'))) {
        }else{
          lexicalError (gLexicalMessage_galgasTemplateScanner_incorrect_terminal_end COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken__24_terminal_24_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__3D__3D__3D_, 3, true)) {
        token.mTokenCode = kToken__3D__3D__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__26__2D__2D_, 3, true)) {
        token.mTokenCode = kToken__26__2D__2D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__26__2B__2B_, 3, true)) {
        token.mTokenCode = kToken__26__2B__2B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__21__3D__3D_, 3, true)) {
        token.mTokenCode = kToken__21__3D__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__7C__7C_, 2, true)) {
        token.mTokenCode = kToken__7C__7C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__3F__5E_, 2, true)) {
        token.mTokenCode = kToken__3F__5E_ ;
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
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__2F__3D_, 2, true)) {
        token.mTokenCode = kToken__2F__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__2D__3E_, 2, true)) {
        token.mTokenCode = kToken__2D__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__2D__3D_, 2, true)) {
        token.mTokenCode = kToken__2D__3D_ ;
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
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__2A__3D_, 2, true)) {
        token.mTokenCode = kToken__2A__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__26__2F_, 2, true)) {
        token.mTokenCode = kToken__26__2F_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__26__2D_, 2, true)) {
        token.mTokenCode = kToken__26__2D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__26__2B_, 2, true)) {
        token.mTokenCode = kToken__26__2B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__26__2A_, 2, true)) {
        token.mTokenCode = kToken__26__2A_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__26__26_, 2, true)) {
        token.mTokenCode = kToken__26__26_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__21__5E_, 2, true)) {
        token.mTokenCode = kToken__21__5E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__21__3D_, 2, true)) {
        token.mTokenCode = kToken__21__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__B0_, 1, true)) {
        token.mTokenCode = kToken__B0_ ;
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
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__60_, 1, true)) {
        token.mTokenCode = kToken__60_ ;
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
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScanner__3D_, 1, true)) {
        token.mTokenCode = kToken__3D_ ;
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
                loop = false ;
              }
            }while (loop) ;
            loop = true ;
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
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
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
                loop = false ;
              }
            }while (loop) ;
            loop = true ;
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
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
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
        const C_LocationInSource currentLocationForTag_onlyInfDelimiter = mCurrentLocation ;
        const C_LocationInSource endLocationForTag_onlyInfDelimiter = mTokenEndLocation ;
        const utf32 currentCharForTag_onlyInfDelimiter = mCurrentChar ;
        if (testForInputUTF32Char (TO_UNICODE ('='))) {
          token.mTokenCode = kToken__3C__3D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('<'))) {
          token.mTokenCode = kToken__3C__3C_ ;
          enterToken (token) ;
        }else if (testForCharWithFunction (isUnicodeLetter)) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          if (testForInputUTF32Char (TO_UNICODE ('>'))) {
            token.mTokenCode = kToken__3C_non_5F_terminal_3E_ ;
            enterToken (token) ;
          }else{
            mCurrentLocation = currentLocationForTag_onlyInfDelimiter ;
            mTokenEndLocation = endLocationForTag_onlyInfDelimiter ;
            mCurrentChar = currentCharForTag_onlyInfDelimiter ;
            token.mTokenCode = kToken__3C_ ;
            enterToken (token) ;
          }
        }else{
          token.mTokenCode = kToken__3C_ ;
          enterToken (token) ;
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
                  loop = false ;
                }
              }while (loop) ;
              loop = true ;
              ::scanner_routine_convertHTMLSequenceToUnicodeCharacter (*this, token.mLexicalAttribute_identifierString, token.mLexicalAttribute_charValue, gLexicalMessage_galgasTemplateScanner_unknownHTMLescapeSequence) ;
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
            }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              lexicalWarning (gLexicalMessage_galgasTemplateScanner_obsoleteStringConstruction COMMA_LINE_AND_SOURCE_FILE) ;
              do {
                ::scanner_routine_enterHexDigitIntoASCIIcharacter (*this, token.mLexicalAttribute_charValue, previousChar (), gLexicalMessage_galgasTemplateScanner_ASCIIcodeTooLargeError, gLexicalMessage_galgasTemplateScanner_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
                }else{
                  loop = false ;
                }
              }while (loop) ;
              loop = true ;
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
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
          token.mTokenCode = kToken__22_string_22_ ;
          enterToken (token) ;
        }else{
          lexicalError (gLexicalMessage_galgasTemplateScanner_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
        if (testForInputUTF32Char (TO_UNICODE ('!'))) {
          do {
            if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          enterDroppedTerminal (kToken_commentMark) ;
        }else{
          do {
            if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (1114111))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          enterDroppedTerminal (kToken_comment) ;
        }
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

//----------------------------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//----------------------------------------------------------------------------------------------------------------------

bool C_Lexique_galgasTemplateScanner::parseLexicalToken (void) {
  cTokenFor_galgasTemplateScanner token ;
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
      internalParseLexicalToken (token) ;
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
  result.addAssign_operation (GALGAS_string ("double.xxx") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("uint32") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sint32_S") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("uint64_L") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sint64_LS") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bigint_G") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("...") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("..<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("@type") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%attribute") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("'char'") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("$terminal$") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<non_terminal>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\"string\"") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("commentMark") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("abstract") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("after") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("array") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("as") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("before") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("between") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("block") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("boolset") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("cast") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("class") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("for") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("fixit") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("func") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("getter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("grammar") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("graph") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("gui") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("in") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("message") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("method") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mod") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mutating") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("not") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("on") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("operator") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("option") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("or") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("override") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("parse") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("public") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("private") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("proc") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("project") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("refclass") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("remove") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("replace") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("repeat") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rewind") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rule") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("search") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("select") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("send") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("setter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sortedlist") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("style") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("switch") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("syntax") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("tag") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("template") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("then") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("true") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("unused") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("var") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("valueclass") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("warning") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("while") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("with") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&*") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&/") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("->") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("/=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("/") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("`") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("||") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("--") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("++") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&--") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&++") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\xC2""\xB0""") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("===") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!==") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!^") COMMA_THERE) ;
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
    ioList.appendObject ("=") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("`") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("~") ;
    ioList.appendObject ("\xC2""\xB0""") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("!^") ;
    ioList.appendObject ("&&") ;
    ioList.appendObject ("&*") ;
    ioList.appendObject ("&+") ;
    ioList.appendObject ("&-") ;
    ioList.appendObject ("&/") ;
    ioList.appendObject ("*=") ;
    ioList.appendObject ("++") ;
    ioList.appendObject ("+=") ;
    ioList.appendObject ("--") ;
    ioList.appendObject ("-=") ;
    ioList.appendObject ("->") ;
    ioList.appendObject ("/=") ;
    ioList.appendObject (":>") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">=") ;
    ioList.appendObject (">>") ;
    ioList.appendObject ("\?^") ;
    ioList.appendObject ("||") ;
    ioList.appendObject ("!==") ;
    ioList.appendObject ("&++") ;
    ioList.appendObject ("&--") ;
    ioList.appendObject ("===") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "galgasTemplateScanner:galgasKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("as") ;
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
    ioList.appendObject ("list") ;
    ioList.appendObject ("loop") ;
    ioList.appendObject ("proc") ;
    ioList.appendObject ("rule") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("send") ;
    ioList.appendObject ("then") ;
    ioList.appendObject ("true") ;
    ioList.appendObject ("with") ;
    ioList.appendObject ("after") ;
    ioList.appendObject ("array") ;
    ioList.appendObject ("block") ;
    ioList.appendObject ("class") ;
    ioList.appendObject ("elsif") ;
    ioList.appendObject ("error") ;
    ioList.appendObject ("false") ;
    ioList.appendObject ("fixit") ;
    ioList.appendObject ("graph") ;
    ioList.appendObject ("label") ;
    ioList.appendObject ("parse") ;
    ioList.appendObject ("style") ;
    ioList.appendObject ("while") ;
    ioList.appendObject ("before") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("getter") ;
    ioList.appendObject ("insert") ;
    ioList.appendObject ("method") ;
    ioList.appendObject ("option") ;
    ioList.appendObject ("public") ;
    ioList.appendObject ("remove") ;
    ioList.appendObject ("repeat") ;
    ioList.appendObject ("rewind") ;
    ioList.appendObject ("search") ;
    ioList.appendObject ("select") ;
    ioList.appendObject ("setter") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("switch") ;
    ioList.appendObject ("syntax") ;
    ioList.appendObject ("unused") ;
    ioList.appendObject ("between") ;
    ioList.appendObject ("boolset") ;
    ioList.appendObject ("default") ;
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
    ioList.appendObject ("mutating") ;
    ioList.appendObject ("operator") ;
    ioList.appendObject ("override") ;
    ioList.appendObject ("refclass") ;
    ioList.appendObject ("template") ;
    ioList.appendObject ("extension") ;
    ioList.appendObject ("sortedlist") ;
    ioList.appendObject ("valueclass") ;
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
  static const uint32_t kTerminalSymbolStyles [157] = {0,
    0 /* galgasTemplateScanner_1_identifier */,
    8 /* galgasTemplateScanner_1_double_2E_xxx */,
    6 /* galgasTemplateScanner_1_uint_33__32_ */,
    6 /* galgasTemplateScanner_1_sint_33__32__5F_S */,
    6 /* galgasTemplateScanner_1_uint_36__34__5F_L */,
    6 /* galgasTemplateScanner_1_sint_36__34__5F_LS */,
    7 /* galgasTemplateScanner_1_bigint_5F_G */,
    2 /* galgasTemplateScanner_1__2E_ */,
    2 /* galgasTemplateScanner_1__2E__2E__2E_ */,
    2 /* galgasTemplateScanner_1__2E__2E__3C_ */,
    11 /* galgasTemplateScanner_1__40_type */,
    12 /* galgasTemplateScanner_1__25_attribute */,
    9 /* galgasTemplateScanner_1__27_char_27_ */,
    4 /* galgasTemplateScanner_1__24_terminal_24_ */,
    3 /* galgasTemplateScanner_1__3F_ */,
    3 /* galgasTemplateScanner_1__3F__21_ */,
    3 /* galgasTemplateScanner_1__21_ */,
    3 /* galgasTemplateScanner_1__21__3F_ */,
    2 /* galgasTemplateScanner_1__3C_ */,
    2 /* galgasTemplateScanner_1__3C__3D_ */,
    2 /* galgasTemplateScanner_1__3C__3C_ */,
    5 /* galgasTemplateScanner_1__3C_non_5F_terminal_3E_ */,
    10 /* galgasTemplateScanner_1__22_string_22_ */,
    13 /* galgasTemplateScanner_1_comment */,
    13 /* galgasTemplateScanner_1_commentMark */,
    1 /* galgasTemplateScanner_1_abstract */,
    1 /* galgasTemplateScanner_1_after */,
    1 /* galgasTemplateScanner_1_array */,
    1 /* galgasTemplateScanner_1_as */,
    1 /* galgasTemplateScanner_1_before */,
    1 /* galgasTemplateScanner_1_between */,
    1 /* galgasTemplateScanner_1_block */,
    1 /* galgasTemplateScanner_1_boolset */,
    1 /* galgasTemplateScanner_1_cast */,
    1 /* galgasTemplateScanner_1_case */,
    1 /* galgasTemplateScanner_1_class */,
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
    1 /* galgasTemplateScanner_1_for */,
    1 /* galgasTemplateScanner_1_fixit */,
    1 /* galgasTemplateScanner_1_func */,
    1 /* galgasTemplateScanner_1_getter */,
    1 /* galgasTemplateScanner_1_grammar */,
    1 /* galgasTemplateScanner_1_graph */,
    1 /* galgasTemplateScanner_1_gui */,
    1 /* galgasTemplateScanner_1_if */,
    1 /* galgasTemplateScanner_1_in */,
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
    1 /* galgasTemplateScanner_1_message */,
    1 /* galgasTemplateScanner_1_method */,
    1 /* galgasTemplateScanner_1_mod */,
    1 /* galgasTemplateScanner_1_mutating */,
    1 /* galgasTemplateScanner_1_not */,
    1 /* galgasTemplateScanner_1_on */,
    1 /* galgasTemplateScanner_1_operator */,
    1 /* galgasTemplateScanner_1_option */,
    1 /* galgasTemplateScanner_1_or */,
    1 /* galgasTemplateScanner_1_override */,
    1 /* galgasTemplateScanner_1_parse */,
    1 /* galgasTemplateScanner_1_public */,
    1 /* galgasTemplateScanner_1_private */,
    1 /* galgasTemplateScanner_1_proc */,
    1 /* galgasTemplateScanner_1_project */,
    1 /* galgasTemplateScanner_1_refclass */,
    1 /* galgasTemplateScanner_1_remove */,
    1 /* galgasTemplateScanner_1_replace */,
    1 /* galgasTemplateScanner_1_repeat */,
    1 /* galgasTemplateScanner_1_rewind */,
    1 /* galgasTemplateScanner_1_rule */,
    1 /* galgasTemplateScanner_1_search */,
    1 /* galgasTemplateScanner_1_select */,
    1 /* galgasTemplateScanner_1_self */,
    1 /* galgasTemplateScanner_1_send */,
    1 /* galgasTemplateScanner_1_setter */,
    1 /* galgasTemplateScanner_1_sortedlist */,
    1 /* galgasTemplateScanner_1_struct */,
    1 /* galgasTemplateScanner_1_style */,
    1 /* galgasTemplateScanner_1_switch */,
    1 /* galgasTemplateScanner_1_syntax */,
    1 /* galgasTemplateScanner_1_tag */,
    1 /* galgasTemplateScanner_1_template */,
    1 /* galgasTemplateScanner_1_then */,
    1 /* galgasTemplateScanner_1_true */,
    1 /* galgasTemplateScanner_1_unused */,
    1 /* galgasTemplateScanner_1_var */,
    1 /* galgasTemplateScanner_1_valueclass */,
    1 /* galgasTemplateScanner_1_warning */,
    1 /* galgasTemplateScanner_1_while */,
    1 /* galgasTemplateScanner_1_with */,
    2 /* galgasTemplateScanner_1__2A_ */,
    2 /* galgasTemplateScanner_1__2C_ */,
    2 /* galgasTemplateScanner_1__2B_ */,
    2 /* galgasTemplateScanner_1__26__2B_ */,
    2 /* galgasTemplateScanner_1__26__2D_ */,
    2 /* galgasTemplateScanner_1__26__2A_ */,
    2 /* galgasTemplateScanner_1__26__2F_ */,
    2 /* galgasTemplateScanner_1__3E_ */,
    2 /* galgasTemplateScanner_1__3B_ */,
    2 /* galgasTemplateScanner_1__3A_ */,
    2 /* galgasTemplateScanner_1__3A__3E_ */,
    2 /* galgasTemplateScanner_1__2D_ */,
    2 /* galgasTemplateScanner_1__28_ */,
    2 /* galgasTemplateScanner_1__29_ */,
    2 /* galgasTemplateScanner_1__2D__3E_ */,
    2 /* galgasTemplateScanner_1__3D__3D_ */,
    2 /* galgasTemplateScanner_1__3D_ */,
    2 /* galgasTemplateScanner_1__26__26_ */,
    2 /* galgasTemplateScanner_1__5B_ */,
    2 /* galgasTemplateScanner_1__5D_ */,
    2 /* galgasTemplateScanner_1__2B__3D_ */,
    2 /* galgasTemplateScanner_1__2D__3D_ */,
    2 /* galgasTemplateScanner_1__2A__3D_ */,
    2 /* galgasTemplateScanner_1__2F__3D_ */,
    2 /* galgasTemplateScanner_1__2F_ */,
    2 /* galgasTemplateScanner_1__21__3D_ */,
    2 /* galgasTemplateScanner_1__3E__3D_ */,
    2 /* galgasTemplateScanner_1__26_ */,
    2 /* galgasTemplateScanner_1__7B_ */,
    2 /* galgasTemplateScanner_1__7D_ */,
    2 /* galgasTemplateScanner_1__60_ */,
    2 /* galgasTemplateScanner_1__7C__7C_ */,
    2 /* galgasTemplateScanner_1__7C_ */,
    2 /* galgasTemplateScanner_1__5E_ */,
    2 /* galgasTemplateScanner_1__3E__3E_ */,
    2 /* galgasTemplateScanner_1__7E_ */,
    2 /* galgasTemplateScanner_1__2D__2D_ */,
    2 /* galgasTemplateScanner_1__2B__2B_ */,
    2 /* galgasTemplateScanner_1__26__2D__2D_ */,
    2 /* galgasTemplateScanner_1__26__2B__2B_ */,
    2 /* galgasTemplateScanner_1__B0_ */,
    2 /* galgasTemplateScanner_1__3D__3D__3D_ */,
    2 /* galgasTemplateScanner_1__21__3D__3D_ */,
    2 /* galgasTemplateScanner_1__3F__5E_ */,
    2 /* galgasTemplateScanner_1__21__5E_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasTemplateScanner::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
  if (inStyleIndex < 14) {
    static const char * kStyleArray [14] = {
      "",
      "keywordsStyle",
      "delimitersStyle",
      "selectorStyle",
      "terminalStyle",
      "nonTerminalStyle",
      "integerStyle",
      "bigintStyle",
      "floatStyle",
      "characterStyle",
      "stringStyle",
      "typeNameStyle",
      "attributeStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//----------------------------------------------------------------------------------------------------------------------

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//----------------------------------------------------------------------------------------------------------------------

cTokenFor_galgasTemplateScannerNew::cTokenFor_galgasTemplateScannerNew (void) :
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

C_Lexique_galgasTemplateScannerNew::C_Lexique_galgasTemplateScannerNew (C_Compiler * inCallerCompiler,
                                                                        const C_String & inSourceFileName
                                                                        COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_galgasTemplateScannerNew::C_Lexique_galgasTemplateScannerNew (C_Compiler * inCallerCompiler,
                                                                        const C_String & inSourceString,
                                                                        const C_String & inStringForError
                                                                        COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//----------------------------------------------------------------------------------------------------------------------
//                 I N D E X I N G    D I R E C T O R Y                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasTemplateScannerNew::indexingDirectory (void) const {
  return "../build/indexes" ;
}

//----------------------------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//----------------------------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_galgasTemplateScannerNew_ASCIIcodeTooLargeError = "ASCII code > 255" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_attributeError = "in an attribute name, a letter or a digit should follow the '%' character" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_hexDigitError = "0x should be followed by a hexadecimal digit" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_incorrectCharConstant = "incorrect literal character" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_incorrectHTMLescapeSequence = "Invalid HTML sequence, should be '&...;'" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_incorrectTypeNameError = "in a type name, a letter, a digit or the underscore character should follow the '@' character" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_incorrect_terminal_end = "terminal does not end with '$'" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_incorrect_terminal_start = "incorrect terminal start" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_internalError = "internal error" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition4 = "\\u should be followed by exactly four hexadecimal digits" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 = "\\U should be followed by exactly eight hexadecimal digits" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_obsoleteStringConstruction = "\\ followed by digits is obsolete: now, use \\u.... or \\U........" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_unassignedUnicodeValue = "this value does not correspond to an assigned Unicode point" ;

static const char * gLexicalMessage_galgasTemplateScannerNew_unknownHTMLescapeSequence = "Invalid &...; HTML sequence" ;

//----------------------------------------------------------------------------------------------------------------------
//          Syntax error messages, for every terminal symbol                                     
//----------------------------------------------------------------------------------------------------------------------

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_identifier = "an identifier" ;

//--- Syntax error message for terminal '$double.xxx$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_double_2E_xxx = "a float number" ;

//--- Syntax error message for terminal '$uint32$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_uint_33__32_ = "a literal integer" ;

//--- Syntax error message for terminal '$sint32_S$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_sint_33__32__5F_S = "a 32-bit signed decimal number" ;

//--- Syntax error message for terminal '$uint64_L$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_uint_36__34__5F_L = "a 64-bit unsigned decimal number" ;

//--- Syntax error message for terminal '$sint64_LS$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_sint_36__34__5F_LS = "a 64-bit signed decimal number" ;

//--- Syntax error message for terminal '$bigint_G$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_bigint_5F_G = "a big integer number" ;

//--- Syntax error message for terminal '$.$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__2E_ = "the '.' delimitor" ;

//--- Syntax error message for terminal '$...$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__2E__2E__2E_ = "the '...' delimitor" ;

//--- Syntax error message for terminal '$..<$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__2E__2E__3C_ = "the '..<' delimitor" ;

//--- Syntax error message for terminal '$@type$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__40_type = "a type name (@...)" ;

//--- Syntax error message for terminal '$%attribute$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__25_attribute = "an attribute (%...)" ;

//--- Syntax error message for terminal '$'char'$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__27_char_27_ = "a character constant" ;

//--- Syntax error message for terminal '$$terminal$$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__24_terminal_24_ = "a terminal symbol ($...$)" ;

//--- Syntax error message for terminal '$?$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3F_ = "the '\?' or '\?selector:' delimitor" ;

//--- Syntax error message for terminal '$?!$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3F__21_ = "the '\?!' or '\?!selector:' delimitor" ;

//--- Syntax error message for terminal '$!$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__21_ = "the '!' or '!selector:' delimitor" ;

//--- Syntax error message for terminal '$!?$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__21__3F_ = "the '!\?' or '!\?selector:' delimitor" ;

//--- Syntax error message for terminal '$<$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3C_ = "the '<' delimitor" ;

//--- Syntax error message for terminal '$<=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3C__3D_ = "the '<=' delimitor" ;

//--- Syntax error message for terminal '$<<$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3C__3C_ = "the '<<' delimitor" ;

//--- Syntax error message for terminal '$<non_terminal>$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3C_non_5F_terminal_3E_ = "a non terminal symbol <...>" ;

//--- Syntax error message for terminal '$"string"$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__22_string_22_ = "a character string constant \"...\"" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_comment = "a comment" ;

//--- Syntax error message for terminal '$commentMark$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_commentMark = "a comment" ;

//--- Syntax error message for terminal '$abstract$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_abstract = "the 'abstract' keyword" ;

//--- Syntax error message for terminal '$after$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_after = "the 'after' keyword" ;

//--- Syntax error message for terminal '$array$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_array = "the 'array' keyword" ;

//--- Syntax error message for terminal '$as$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_as = "the 'as' keyword" ;

//--- Syntax error message for terminal '$before$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_before = "the 'before' keyword" ;

//--- Syntax error message for terminal '$between$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_between = "the 'between' keyword" ;

//--- Syntax error message for terminal '$block$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_block = "the 'block' keyword" ;

//--- Syntax error message for terminal '$boolset$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_boolset = "the 'boolset' keyword" ;

//--- Syntax error message for terminal '$cast$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_cast = "the 'cast' keyword" ;

//--- Syntax error message for terminal '$case$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_case = "the 'case' keyword" ;

//--- Syntax error message for terminal '$class$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_class = "the 'class' keyword" ;

//--- Syntax error message for terminal '$constructor$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_constructor = "the 'constructor' keyword" ;

//--- Syntax error message for terminal '$default$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_default = "the 'default' keyword" ;

//--- Syntax error message for terminal '$dict$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_dict = "the 'dict' keyword" ;

//--- Syntax error message for terminal '$do$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_do = "the 'do' keyword" ;

//--- Syntax error message for terminal '$drop$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_drop = "the 'drop' keyword" ;

//--- Syntax error message for terminal '$else$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_else = "the 'else' keyword" ;

//--- Syntax error message for terminal '$elsif$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_elsif = "the 'elsif' keyword" ;

//--- Syntax error message for terminal '$end$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_end = "the 'end' keyword" ;

//--- Syntax error message for terminal '$enum$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_enum = "the 'enum' keyword" ;

//--- Syntax error message for terminal '$error$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_error = "the 'error' keyword" ;

//--- Syntax error message for terminal '$extension$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_extension = "the 'extension' keyword" ;

//--- Syntax error message for terminal '$extern$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_extern = "the 'extern' keyword" ;

//--- Syntax error message for terminal '$false$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_false = "the 'false' keyword" ;

//--- Syntax error message for terminal '$filewrapper$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_filewrapper = "the 'filewrapper' keyword" ;

//--- Syntax error message for terminal '$for$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_for = "the 'for' keyword" ;

//--- Syntax error message for terminal '$fixit$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_fixit = "the 'fixit' keyword" ;

//--- Syntax error message for terminal '$func$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_func = "the 'func' keyword" ;

//--- Syntax error message for terminal '$getter$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_getter = "the 'getter' keyword" ;

//--- Syntax error message for terminal '$grammar$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_grammar = "the 'grammar' keyword" ;

//--- Syntax error message for terminal '$graph$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_graph = "the 'graph' keyword" ;

//--- Syntax error message for terminal '$gui$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_gui = "the 'gui' keyword" ;

//--- Syntax error message for terminal '$if$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_if = "the 'if' keyword" ;

//--- Syntax error message for terminal '$in$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_in = "the 'in' keyword" ;

//--- Syntax error message for terminal '$indexing$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_indexing = "the 'indexing' keyword" ;

//--- Syntax error message for terminal '$insert$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_insert = "the 'insert' keyword" ;

//--- Syntax error message for terminal '$is$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_is = "the 'is' keyword" ;

//--- Syntax error message for terminal '$label$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_label = "the 'label' keyword" ;

//--- Syntax error message for terminal '$let$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_let = "the 'let' keyword" ;

//--- Syntax error message for terminal '$lexique$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_lexique = "the 'lexique' keyword" ;

//--- Syntax error message for terminal '$list$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_list = "the 'list' keyword" ;

//--- Syntax error message for terminal '$listmap$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_listmap = "the 'listmap' keyword" ;

//--- Syntax error message for terminal '$log$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_log = "the 'log' keyword" ;

//--- Syntax error message for terminal '$loop$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_loop = "the 'loop' keyword" ;

//--- Syntax error message for terminal '$map$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_map = "the 'map' keyword" ;

//--- Syntax error message for terminal '$message$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_message = "the 'message' keyword" ;

//--- Syntax error message for terminal '$method$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_method = "the 'method' keyword" ;

//--- Syntax error message for terminal '$mod$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_mod = "the 'mod' keyword" ;

//--- Syntax error message for terminal '$mutating$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_mutating = "the 'mutating' keyword" ;

//--- Syntax error message for terminal '$not$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_not = "the 'not' keyword" ;

//--- Syntax error message for terminal '$on$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_on = "the 'on' keyword" ;

//--- Syntax error message for terminal '$operator$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_operator = "the 'operator' keyword" ;

//--- Syntax error message for terminal '$option$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_option = "the 'option' keyword" ;

//--- Syntax error message for terminal '$or$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_or = "the 'or' keyword" ;

//--- Syntax error message for terminal '$override$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_override = "the 'override' keyword" ;

//--- Syntax error message for terminal '$parse$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_parse = "the 'parse' keyword" ;

//--- Syntax error message for terminal '$public$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_public = "the 'public' keyword" ;

//--- Syntax error message for terminal '$private$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_private = "the 'private' keyword" ;

//--- Syntax error message for terminal '$proc$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_proc = "the 'proc' keyword" ;

//--- Syntax error message for terminal '$project$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_project = "the 'project' keyword" ;

//--- Syntax error message for terminal '$refclass$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_refclass = "the 'refclass' keyword" ;

//--- Syntax error message for terminal '$remove$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_remove = "the 'remove' keyword" ;

//--- Syntax error message for terminal '$replace$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_replace = "the 'replace' keyword" ;

//--- Syntax error message for terminal '$repeat$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_repeat = "the 'repeat' keyword" ;

//--- Syntax error message for terminal '$rewind$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_rewind = "the 'rewind' keyword" ;

//--- Syntax error message for terminal '$rule$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_rule = "the 'rule' keyword" ;

//--- Syntax error message for terminal '$search$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_search = "the 'search' keyword" ;

//--- Syntax error message for terminal '$select$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_select = "the 'select' keyword" ;

//--- Syntax error message for terminal '$self$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_self = "the 'self' keyword" ;

//--- Syntax error message for terminal '$send$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_send = "the 'send' keyword" ;

//--- Syntax error message for terminal '$setter$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_setter = "the 'setter' keyword" ;

//--- Syntax error message for terminal '$sortedlist$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_sortedlist = "the 'sortedlist' keyword" ;

//--- Syntax error message for terminal '$struct$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_struct = "the 'struct' keyword" ;

//--- Syntax error message for terminal '$style$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_style = "the 'style' keyword" ;

//--- Syntax error message for terminal '$switch$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_switch = "the 'switch' keyword" ;

//--- Syntax error message for terminal '$syntax$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_syntax = "the 'syntax' keyword" ;

//--- Syntax error message for terminal '$tag$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_tag = "the 'tag' keyword" ;

//--- Syntax error message for terminal '$template$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_template = "the 'template' keyword" ;

//--- Syntax error message for terminal '$then$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_then = "the 'then' keyword" ;

//--- Syntax error message for terminal '$true$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_true = "the 'true' keyword" ;

//--- Syntax error message for terminal '$unused$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_unused = "the 'unused' keyword" ;

//--- Syntax error message for terminal '$var$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_var = "the 'var' keyword" ;

//--- Syntax error message for terminal '$valueclass$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_valueclass = "the 'valueclass' keyword" ;

//--- Syntax error message for terminal '$warning$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_warning = "the 'warning' keyword" ;

//--- Syntax error message for terminal '$while$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_while = "the 'while' keyword" ;

//--- Syntax error message for terminal '$with$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew_with = "the 'with' keyword" ;

//--- Syntax error message for terminal '$*$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__2A_ = "the '*' delimitor" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__2C_ = "the ',' delimitor" ;

//--- Syntax error message for terminal '$+$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__2B_ = "the '+' delimitor" ;

//--- Syntax error message for terminal '$&+$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__26__2B_ = "the '&+' delimitor" ;

//--- Syntax error message for terminal '$&-$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__26__2D_ = "the '&-' delimitor" ;

//--- Syntax error message for terminal '$&*$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__26__2A_ = "the '&*' delimitor" ;

//--- Syntax error message for terminal '$&/$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__26__2F_ = "the '&/' delimitor" ;

//--- Syntax error message for terminal '$>$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3E_ = "the '>' delimitor" ;

//--- Syntax error message for terminal '$;$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3B_ = "the ';' delimitor" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3A_ = "the ':' delimitor" ;

//--- Syntax error message for terminal '$:>$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3A__3E_ = "the ':>' delimitor" ;

//--- Syntax error message for terminal '$-$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__2D_ = "the '-' delimitor" ;

//--- Syntax error message for terminal '$($' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__28_ = "the '(' delimitor" ;

//--- Syntax error message for terminal '$)$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__29_ = "the ')' delimitor" ;

//--- Syntax error message for terminal '$->$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__2D__3E_ = "the '->' delimitor" ;

//--- Syntax error message for terminal '$==$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3D__3D_ = "the '==' delimitor" ;

//--- Syntax error message for terminal '$=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3D_ = "the '=' delimitor" ;

//--- Syntax error message for terminal '$&&$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__26__26_ = "the '&&' delimitor" ;

//--- Syntax error message for terminal '$[$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__5B_ = "the '[' delimitor" ;

//--- Syntax error message for terminal '$]$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__5D_ = "the ']' delimitor" ;

//--- Syntax error message for terminal '$+=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__2B__3D_ = "the '+=' delimitor" ;

//--- Syntax error message for terminal '$-=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__2D__3D_ = "the '-=' delimitor" ;

//--- Syntax error message for terminal '$*=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__2A__3D_ = "the '*=' delimitor" ;

//--- Syntax error message for terminal '$/=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__2F__3D_ = "the '/=' delimitor" ;

//--- Syntax error message for terminal '$/$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__2F_ = "the '/' delimitor" ;

//--- Syntax error message for terminal '$!=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__21__3D_ = "the '!=' delimitor" ;

//--- Syntax error message for terminal '$>=$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3E__3D_ = "the '>=' delimitor" ;

//--- Syntax error message for terminal '$&$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__26_ = "the '&' delimitor" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__7B_ = "the '{' delimitor" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__7D_ = "the '}' delimitor" ;

//--- Syntax error message for terminal '$`$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__60_ = "the '`' delimitor" ;

//--- Syntax error message for terminal '$||$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__7C__7C_ = "the '||' delimitor" ;

//--- Syntax error message for terminal '$|$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__7C_ = "the '|' delimitor" ;

//--- Syntax error message for terminal '$^$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__5E_ = "the '^' delimitor" ;

//--- Syntax error message for terminal '$>>$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3E__3E_ = "the '>>' delimitor" ;

//--- Syntax error message for terminal '$~$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__7E_ = "the '~' delimitor" ;

//--- Syntax error message for terminal '$--$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__2D__2D_ = "the '--' delimitor" ;

//--- Syntax error message for terminal '$++$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__2B__2B_ = "the '++' delimitor" ;

//--- Syntax error message for terminal '$&--$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__26__2D__2D_ = "the '&--' delimitor" ;

//--- Syntax error message for terminal '$&++$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__26__2B__2B_ = "the '&++' delimitor" ;

//--- Syntax error message for terminal '$°$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__B0_ = "the '\xC2""\xB0""' delimitor" ;

//--- Syntax error message for terminal '$===$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3D__3D__3D_ = "the '===' delimitor" ;

//--- Syntax error message for terminal '$!==$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__21__3D__3D_ = "the '!==' delimitor" ;

//--- Syntax error message for terminal '$?^$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__3F__5E_ = "the '\?^' delimitor" ;

//--- Syntax error message for terminal '$!^$' :
static const char * gSyntaxErrorMessage_galgasTemplateScannerNew__21__5E_ = "the '!^' delimitor" ;

//----------------------------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasTemplateScannerNew::getMessageForTerminal (const int16_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 157)) {
    static const char * syntaxErrorMessageArray [157] = {kEndOfSourceLexicalErrorMessage,
        gSyntaxErrorMessage_galgasTemplateScannerNew_identifier,
        gSyntaxErrorMessage_galgasTemplateScannerNew_double_2E_xxx,
        gSyntaxErrorMessage_galgasTemplateScannerNew_uint_33__32_,
        gSyntaxErrorMessage_galgasTemplateScannerNew_sint_33__32__5F_S,
        gSyntaxErrorMessage_galgasTemplateScannerNew_uint_36__34__5F_L,
        gSyntaxErrorMessage_galgasTemplateScannerNew_sint_36__34__5F_LS,
        gSyntaxErrorMessage_galgasTemplateScannerNew_bigint_5F_G,
        gSyntaxErrorMessage_galgasTemplateScannerNew__2E_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__2E__2E__2E_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__2E__2E__3C_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__40_type,
        gSyntaxErrorMessage_galgasTemplateScannerNew__25_attribute,
        gSyntaxErrorMessage_galgasTemplateScannerNew__27_char_27_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__24_terminal_24_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3F_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3F__21_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__21_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__21__3F_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3C_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3C__3D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3C__3C_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3C_non_5F_terminal_3E_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__22_string_22_,
        gSyntaxErrorMessage_galgasTemplateScannerNew_comment,
        gSyntaxErrorMessage_galgasTemplateScannerNew_commentMark,
        gSyntaxErrorMessage_galgasTemplateScannerNew_abstract,
        gSyntaxErrorMessage_galgasTemplateScannerNew_after,
        gSyntaxErrorMessage_galgasTemplateScannerNew_array,
        gSyntaxErrorMessage_galgasTemplateScannerNew_as,
        gSyntaxErrorMessage_galgasTemplateScannerNew_before,
        gSyntaxErrorMessage_galgasTemplateScannerNew_between,
        gSyntaxErrorMessage_galgasTemplateScannerNew_block,
        gSyntaxErrorMessage_galgasTemplateScannerNew_boolset,
        gSyntaxErrorMessage_galgasTemplateScannerNew_cast,
        gSyntaxErrorMessage_galgasTemplateScannerNew_case,
        gSyntaxErrorMessage_galgasTemplateScannerNew_class,
        gSyntaxErrorMessage_galgasTemplateScannerNew_constructor,
        gSyntaxErrorMessage_galgasTemplateScannerNew_default,
        gSyntaxErrorMessage_galgasTemplateScannerNew_dict,
        gSyntaxErrorMessage_galgasTemplateScannerNew_do,
        gSyntaxErrorMessage_galgasTemplateScannerNew_drop,
        gSyntaxErrorMessage_galgasTemplateScannerNew_else,
        gSyntaxErrorMessage_galgasTemplateScannerNew_elsif,
        gSyntaxErrorMessage_galgasTemplateScannerNew_end,
        gSyntaxErrorMessage_galgasTemplateScannerNew_enum,
        gSyntaxErrorMessage_galgasTemplateScannerNew_error,
        gSyntaxErrorMessage_galgasTemplateScannerNew_extension,
        gSyntaxErrorMessage_galgasTemplateScannerNew_extern,
        gSyntaxErrorMessage_galgasTemplateScannerNew_false,
        gSyntaxErrorMessage_galgasTemplateScannerNew_filewrapper,
        gSyntaxErrorMessage_galgasTemplateScannerNew_for,
        gSyntaxErrorMessage_galgasTemplateScannerNew_fixit,
        gSyntaxErrorMessage_galgasTemplateScannerNew_func,
        gSyntaxErrorMessage_galgasTemplateScannerNew_getter,
        gSyntaxErrorMessage_galgasTemplateScannerNew_grammar,
        gSyntaxErrorMessage_galgasTemplateScannerNew_graph,
        gSyntaxErrorMessage_galgasTemplateScannerNew_gui,
        gSyntaxErrorMessage_galgasTemplateScannerNew_if,
        gSyntaxErrorMessage_galgasTemplateScannerNew_in,
        gSyntaxErrorMessage_galgasTemplateScannerNew_indexing,
        gSyntaxErrorMessage_galgasTemplateScannerNew_insert,
        gSyntaxErrorMessage_galgasTemplateScannerNew_is,
        gSyntaxErrorMessage_galgasTemplateScannerNew_label,
        gSyntaxErrorMessage_galgasTemplateScannerNew_let,
        gSyntaxErrorMessage_galgasTemplateScannerNew_lexique,
        gSyntaxErrorMessage_galgasTemplateScannerNew_list,
        gSyntaxErrorMessage_galgasTemplateScannerNew_listmap,
        gSyntaxErrorMessage_galgasTemplateScannerNew_log,
        gSyntaxErrorMessage_galgasTemplateScannerNew_loop,
        gSyntaxErrorMessage_galgasTemplateScannerNew_map,
        gSyntaxErrorMessage_galgasTemplateScannerNew_message,
        gSyntaxErrorMessage_galgasTemplateScannerNew_method,
        gSyntaxErrorMessage_galgasTemplateScannerNew_mod,
        gSyntaxErrorMessage_galgasTemplateScannerNew_mutating,
        gSyntaxErrorMessage_galgasTemplateScannerNew_not,
        gSyntaxErrorMessage_galgasTemplateScannerNew_on,
        gSyntaxErrorMessage_galgasTemplateScannerNew_operator,
        gSyntaxErrorMessage_galgasTemplateScannerNew_option,
        gSyntaxErrorMessage_galgasTemplateScannerNew_or,
        gSyntaxErrorMessage_galgasTemplateScannerNew_override,
        gSyntaxErrorMessage_galgasTemplateScannerNew_parse,
        gSyntaxErrorMessage_galgasTemplateScannerNew_public,
        gSyntaxErrorMessage_galgasTemplateScannerNew_private,
        gSyntaxErrorMessage_galgasTemplateScannerNew_proc,
        gSyntaxErrorMessage_galgasTemplateScannerNew_project,
        gSyntaxErrorMessage_galgasTemplateScannerNew_refclass,
        gSyntaxErrorMessage_galgasTemplateScannerNew_remove,
        gSyntaxErrorMessage_galgasTemplateScannerNew_replace,
        gSyntaxErrorMessage_galgasTemplateScannerNew_repeat,
        gSyntaxErrorMessage_galgasTemplateScannerNew_rewind,
        gSyntaxErrorMessage_galgasTemplateScannerNew_rule,
        gSyntaxErrorMessage_galgasTemplateScannerNew_search,
        gSyntaxErrorMessage_galgasTemplateScannerNew_select,
        gSyntaxErrorMessage_galgasTemplateScannerNew_self,
        gSyntaxErrorMessage_galgasTemplateScannerNew_send,
        gSyntaxErrorMessage_galgasTemplateScannerNew_setter,
        gSyntaxErrorMessage_galgasTemplateScannerNew_sortedlist,
        gSyntaxErrorMessage_galgasTemplateScannerNew_struct,
        gSyntaxErrorMessage_galgasTemplateScannerNew_style,
        gSyntaxErrorMessage_galgasTemplateScannerNew_switch,
        gSyntaxErrorMessage_galgasTemplateScannerNew_syntax,
        gSyntaxErrorMessage_galgasTemplateScannerNew_tag,
        gSyntaxErrorMessage_galgasTemplateScannerNew_template,
        gSyntaxErrorMessage_galgasTemplateScannerNew_then,
        gSyntaxErrorMessage_galgasTemplateScannerNew_true,
        gSyntaxErrorMessage_galgasTemplateScannerNew_unused,
        gSyntaxErrorMessage_galgasTemplateScannerNew_var,
        gSyntaxErrorMessage_galgasTemplateScannerNew_valueclass,
        gSyntaxErrorMessage_galgasTemplateScannerNew_warning,
        gSyntaxErrorMessage_galgasTemplateScannerNew_while,
        gSyntaxErrorMessage_galgasTemplateScannerNew_with,
        gSyntaxErrorMessage_galgasTemplateScannerNew__2A_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__2C_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__2B_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__26__2B_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__26__2D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__26__2A_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__26__2F_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3E_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3B_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3A_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3A__3E_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__2D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__28_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__29_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__2D__3E_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3D__3D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__26__26_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__5B_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__5D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__2B__3D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__2D__3D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__2A__3D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__2F__3D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__2F_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__21__3D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3E__3D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__26_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__7B_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__7D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__60_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__7C__7C_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__7C_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__5E_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3E__3E_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__7E_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__2D__2D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__2B__2B_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__26__2D__2D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__26__2B__2B_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__B0_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3D__3D__3D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__21__3D__3D_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__3F__5E_,
        gSyntaxErrorMessage_galgasTemplateScannerNew__21__5E_
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//----------------------------------------------------------------------------------------------------------------------

//--- Unicode string for '$_A_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__A_ [] = {
  TO_UNICODE (10),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__3D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__21__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__3D__3D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__21__3D__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__5E_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__21__5E_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_25_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__25_ [] = {
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__26_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__26__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2A_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__26__2A_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2B_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__26__2B_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2B__2B_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__26__2B__2B_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('+'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__26__2D_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2D__2D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__26__2D__2D_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('-'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2F_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__26__2F_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_28_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__28_ [] = {
  TO_UNICODE ('('),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_29_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__29_ [] = {
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__2A_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A__3D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__2A__3D_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__2B_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__2B__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__3D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__2B__3D_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__2D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__2D__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__2D__3D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3E_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__2D__3E_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__2E_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__2E__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__3C_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__2E__3C_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F__3D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__2F__3D_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_30_x$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__30_x [] = {
  TO_UNICODE ('0'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A__3E_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__3A__3E_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D__3D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__3D__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D__3D__3D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__3D__3D__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__3E__3D_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3E_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__3E__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3F__5E_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__3F__5E_ [] = {
  TO_UNICODE ('\?'),
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$LS$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_LS [] = {
  TO_UNICODE ('L'),
  TO_UNICODE ('S'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__5C_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__24_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__5C__24_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('$'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__25_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__5C__25_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__5C_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__5C__5C_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('\\'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C_n$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__5C_n [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__5E_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_60_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__60_ [] = {
  TO_UNICODE ('`'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$abstract$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_abstract [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_after [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('f'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$array$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_array [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$as$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_as [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$before$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_before [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$between$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_between [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_block [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$boolset$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_boolset [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_case [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$cast$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_cast [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$class$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_class [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$constructor$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_constructor [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_default [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_dict [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$do$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_do [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$drop$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_drop [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$else$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_else [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$elsif$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_elsif [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$end$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_end [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$enum$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_enum [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$error$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_error [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extension$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_extension [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_extern [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$false$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_false [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$filewrapper$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_filewrapper [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_fixit [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$for$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_for [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$func$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_func [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$getter$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_getter [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$grammar$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_grammar [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_graph [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$gui$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_gui [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('u'),
  TO_UNICODE ('i'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$if$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_if [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$in$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_in [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$indexing$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_indexing [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_insert [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$is$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_is [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$label$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_label [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$let$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_let [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$lexique$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_lexique [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_list [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$listmap$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_listmap [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_log [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$loop$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_loop [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$map$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_map [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$message$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_message [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_method [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mod$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_mod [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mutating$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_mutating [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$not$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_not [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$on$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_on [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$operator$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_operator [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_option [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$or$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_or [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$override$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_override [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_parse [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$private$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_private [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_proc [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$project$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_project [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('j'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$public$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_public [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$refclass$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_refclass [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$remove$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_remove [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$repeat$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_repeat [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$replace$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_replace [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_rewind [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rule$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_rule [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$search$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_search [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$select$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_select [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$self$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_self [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$send$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_send [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$setter$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_setter [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$sortedlist$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_sortedlist [] = {
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

//--- Unicode string for '$struct$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_struct [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$style$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_style [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$switch$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_switch [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$syntax$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_syntax [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('y'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$tag$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_tag [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$template$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_template [] = {
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
static const utf32 kUnicodeString_galgasTemplateScannerNew_then [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$true$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_true [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$unused$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_unused [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$valueclass$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_valueclass [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$var$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_var [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$warning$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_warning [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$while$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_while [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$with$'
static const utf32 kUnicodeString_galgasTemplateScannerNew_with [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C__7C_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__7C__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7E_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__7E_ [] = {
  TO_UNICODE ('~'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_B0_$'
static const utf32 kUnicodeString_galgasTemplateScannerNew__B0_ [] = {
  TO_UNICODE (176),
  TO_UNICODE (0)
} ;

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'galgasDelimitorsList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasTemplateScannerNew_galgasDelimitorsList = 45 ;

static const C_unicode_lexique_table_entry ktable_for_galgasTemplateScannerNew_galgasDelimitorsList [ktable_size_galgasTemplateScannerNew_galgasDelimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__26_, 1, C_Lexique_galgasTemplateScannerNew::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__28_, 1, C_Lexique_galgasTemplateScannerNew::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__29_, 1, C_Lexique_galgasTemplateScannerNew::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__2A_, 1, C_Lexique_galgasTemplateScannerNew::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__2B_, 1, C_Lexique_galgasTemplateScannerNew::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__2C_, 1, C_Lexique_galgasTemplateScannerNew::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__2D_, 1, C_Lexique_galgasTemplateScannerNew::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__2F_, 1, C_Lexique_galgasTemplateScannerNew::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__3A_, 1, C_Lexique_galgasTemplateScannerNew::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__3B_, 1, C_Lexique_galgasTemplateScannerNew::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__3D_, 1, C_Lexique_galgasTemplateScannerNew::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__3E_, 1, C_Lexique_galgasTemplateScannerNew::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__5B_, 1, C_Lexique_galgasTemplateScannerNew::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__5D_, 1, C_Lexique_galgasTemplateScannerNew::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__5E_, 1, C_Lexique_galgasTemplateScannerNew::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__60_, 1, C_Lexique_galgasTemplateScannerNew::kToken__60_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__7B_, 1, C_Lexique_galgasTemplateScannerNew::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__7C_, 1, C_Lexique_galgasTemplateScannerNew::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__7D_, 1, C_Lexique_galgasTemplateScannerNew::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__7E_, 1, C_Lexique_galgasTemplateScannerNew::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__B0_, 1, C_Lexique_galgasTemplateScannerNew::kToken__B0_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__21__3D_, 2, C_Lexique_galgasTemplateScannerNew::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__21__5E_, 2, C_Lexique_galgasTemplateScannerNew::kToken__21__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__26__26_, 2, C_Lexique_galgasTemplateScannerNew::kToken__26__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__26__2A_, 2, C_Lexique_galgasTemplateScannerNew::kToken__26__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__26__2B_, 2, C_Lexique_galgasTemplateScannerNew::kToken__26__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__26__2D_, 2, C_Lexique_galgasTemplateScannerNew::kToken__26__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__26__2F_, 2, C_Lexique_galgasTemplateScannerNew::kToken__26__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__2A__3D_, 2, C_Lexique_galgasTemplateScannerNew::kToken__2A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__2B__2B_, 2, C_Lexique_galgasTemplateScannerNew::kToken__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__2B__3D_, 2, C_Lexique_galgasTemplateScannerNew::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__2D__2D_, 2, C_Lexique_galgasTemplateScannerNew::kToken__2D__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__2D__3D_, 2, C_Lexique_galgasTemplateScannerNew::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__2D__3E_, 2, C_Lexique_galgasTemplateScannerNew::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__2F__3D_, 2, C_Lexique_galgasTemplateScannerNew::kToken__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__3A__3E_, 2, C_Lexique_galgasTemplateScannerNew::kToken__3A__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__3D__3D_, 2, C_Lexique_galgasTemplateScannerNew::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__3E__3D_, 2, C_Lexique_galgasTemplateScannerNew::kToken__3E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__3E__3E_, 2, C_Lexique_galgasTemplateScannerNew::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__3F__5E_, 2, C_Lexique_galgasTemplateScannerNew::kToken__3F__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__7C__7C_, 2, C_Lexique_galgasTemplateScannerNew::kToken__7C__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__21__3D__3D_, 3, C_Lexique_galgasTemplateScannerNew::kToken__21__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__26__2B__2B_, 3, C_Lexique_galgasTemplateScannerNew::kToken__26__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__26__2D__2D_, 3, C_Lexique_galgasTemplateScannerNew::kToken__26__2D__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew__3D__3D__3D_, 3, C_Lexique_galgasTemplateScannerNew::kToken__3D__3D__3D_)
} ;

int16_t C_Lexique_galgasTemplateScannerNew::search_into_galgasDelimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasTemplateScannerNew_galgasDelimitorsList, ktable_size_galgasTemplateScannerNew_galgasDelimitorsList) ;
}

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'galgasKeyWordList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasTemplateScannerNew_galgasKeyWordList = 86 ;

static const C_unicode_lexique_table_entry ktable_for_galgasTemplateScannerNew_galgasKeyWordList [ktable_size_galgasTemplateScannerNew_galgasKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_as, 2, C_Lexique_galgasTemplateScannerNew::kToken_as),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_do, 2, C_Lexique_galgasTemplateScannerNew::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_if, 2, C_Lexique_galgasTemplateScannerNew::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_in, 2, C_Lexique_galgasTemplateScannerNew::kToken_in),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_is, 2, C_Lexique_galgasTemplateScannerNew::kToken_is),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_on, 2, C_Lexique_galgasTemplateScannerNew::kToken_on),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_or, 2, C_Lexique_galgasTemplateScannerNew::kToken_or),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_end, 3, C_Lexique_galgasTemplateScannerNew::kToken_end),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_for, 3, C_Lexique_galgasTemplateScannerNew::kToken_for),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_gui, 3, C_Lexique_galgasTemplateScannerNew::kToken_gui),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_let, 3, C_Lexique_galgasTemplateScannerNew::kToken_let),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_log, 3, C_Lexique_galgasTemplateScannerNew::kToken_log),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_map, 3, C_Lexique_galgasTemplateScannerNew::kToken_map),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_mod, 3, C_Lexique_galgasTemplateScannerNew::kToken_mod),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_not, 3, C_Lexique_galgasTemplateScannerNew::kToken_not),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_tag, 3, C_Lexique_galgasTemplateScannerNew::kToken_tag),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_var, 3, C_Lexique_galgasTemplateScannerNew::kToken_var),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_case, 4, C_Lexique_galgasTemplateScannerNew::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_cast, 4, C_Lexique_galgasTemplateScannerNew::kToken_cast),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_dict, 4, C_Lexique_galgasTemplateScannerNew::kToken_dict),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_drop, 4, C_Lexique_galgasTemplateScannerNew::kToken_drop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_else, 4, C_Lexique_galgasTemplateScannerNew::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_enum, 4, C_Lexique_galgasTemplateScannerNew::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_func, 4, C_Lexique_galgasTemplateScannerNew::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_list, 4, C_Lexique_galgasTemplateScannerNew::kToken_list),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_loop, 4, C_Lexique_galgasTemplateScannerNew::kToken_loop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_proc, 4, C_Lexique_galgasTemplateScannerNew::kToken_proc),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_rule, 4, C_Lexique_galgasTemplateScannerNew::kToken_rule),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_self, 4, C_Lexique_galgasTemplateScannerNew::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_send, 4, C_Lexique_galgasTemplateScannerNew::kToken_send),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_then, 4, C_Lexique_galgasTemplateScannerNew::kToken_then),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_true, 4, C_Lexique_galgasTemplateScannerNew::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_with, 4, C_Lexique_galgasTemplateScannerNew::kToken_with),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_after, 5, C_Lexique_galgasTemplateScannerNew::kToken_after),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_array, 5, C_Lexique_galgasTemplateScannerNew::kToken_array),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_block, 5, C_Lexique_galgasTemplateScannerNew::kToken_block),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_class, 5, C_Lexique_galgasTemplateScannerNew::kToken_class),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_elsif, 5, C_Lexique_galgasTemplateScannerNew::kToken_elsif),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_error, 5, C_Lexique_galgasTemplateScannerNew::kToken_error),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_false, 5, C_Lexique_galgasTemplateScannerNew::kToken_false),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_fixit, 5, C_Lexique_galgasTemplateScannerNew::kToken_fixit),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_graph, 5, C_Lexique_galgasTemplateScannerNew::kToken_graph),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_label, 5, C_Lexique_galgasTemplateScannerNew::kToken_label),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_parse, 5, C_Lexique_galgasTemplateScannerNew::kToken_parse),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_style, 5, C_Lexique_galgasTemplateScannerNew::kToken_style),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_while, 5, C_Lexique_galgasTemplateScannerNew::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_before, 6, C_Lexique_galgasTemplateScannerNew::kToken_before),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_extern, 6, C_Lexique_galgasTemplateScannerNew::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_getter, 6, C_Lexique_galgasTemplateScannerNew::kToken_getter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_insert, 6, C_Lexique_galgasTemplateScannerNew::kToken_insert),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_method, 6, C_Lexique_galgasTemplateScannerNew::kToken_method),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_option, 6, C_Lexique_galgasTemplateScannerNew::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_public, 6, C_Lexique_galgasTemplateScannerNew::kToken_public),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_remove, 6, C_Lexique_galgasTemplateScannerNew::kToken_remove),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_repeat, 6, C_Lexique_galgasTemplateScannerNew::kToken_repeat),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_rewind, 6, C_Lexique_galgasTemplateScannerNew::kToken_rewind),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_search, 6, C_Lexique_galgasTemplateScannerNew::kToken_search),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_select, 6, C_Lexique_galgasTemplateScannerNew::kToken_select),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_setter, 6, C_Lexique_galgasTemplateScannerNew::kToken_setter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_struct, 6, C_Lexique_galgasTemplateScannerNew::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_switch, 6, C_Lexique_galgasTemplateScannerNew::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_syntax, 6, C_Lexique_galgasTemplateScannerNew::kToken_syntax),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_unused, 6, C_Lexique_galgasTemplateScannerNew::kToken_unused),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_between, 7, C_Lexique_galgasTemplateScannerNew::kToken_between),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_boolset, 7, C_Lexique_galgasTemplateScannerNew::kToken_boolset),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_default, 7, C_Lexique_galgasTemplateScannerNew::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_grammar, 7, C_Lexique_galgasTemplateScannerNew::kToken_grammar),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_lexique, 7, C_Lexique_galgasTemplateScannerNew::kToken_lexique),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_listmap, 7, C_Lexique_galgasTemplateScannerNew::kToken_listmap),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_message, 7, C_Lexique_galgasTemplateScannerNew::kToken_message),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_private, 7, C_Lexique_galgasTemplateScannerNew::kToken_private),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_project, 7, C_Lexique_galgasTemplateScannerNew::kToken_project),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_replace, 7, C_Lexique_galgasTemplateScannerNew::kToken_replace),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_warning, 7, C_Lexique_galgasTemplateScannerNew::kToken_warning),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_abstract, 8, C_Lexique_galgasTemplateScannerNew::kToken_abstract),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_indexing, 8, C_Lexique_galgasTemplateScannerNew::kToken_indexing),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_mutating, 8, C_Lexique_galgasTemplateScannerNew::kToken_mutating),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_operator, 8, C_Lexique_galgasTemplateScannerNew::kToken_operator),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_override, 8, C_Lexique_galgasTemplateScannerNew::kToken_override),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_refclass, 8, C_Lexique_galgasTemplateScannerNew::kToken_refclass),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_template, 8, C_Lexique_galgasTemplateScannerNew::kToken_template),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_extension, 9, C_Lexique_galgasTemplateScannerNew::kToken_extension),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_sortedlist, 10, C_Lexique_galgasTemplateScannerNew::kToken_sortedlist),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_valueclass, 10, C_Lexique_galgasTemplateScannerNew::kToken_valueclass),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_constructor, 11, C_Lexique_galgasTemplateScannerNew::kToken_constructor),
  C_unicode_lexique_table_entry (kUnicodeString_galgasTemplateScannerNew_filewrapper, 11, C_Lexique_galgasTemplateScannerNew::kToken_filewrapper)
} ;

int16_t C_Lexique_galgasTemplateScannerNew::search_into_galgasKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasTemplateScannerNew_galgasKeyWordList, ktable_size_galgasTemplateScannerNew_galgasKeyWordList) ;
}


//----------------------------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasTemplateScannerNew::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_galgasTemplateScannerNew * ptr = (const cTokenFor_galgasTemplateScannerNew *) inTokenPtr ;
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
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_bigintValue.decimalString ()) ;
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
    case kToken__40_type:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("@type") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__25_attribute:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("%attribute") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__27_char_27_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("'char'") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnicodeCharacter (ptr->mLexicalAttribute_charValue COMMA_HERE) ;
      break ;
    case kToken__24_terminal_24_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("$terminal$") ;
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
    case kToken__3C_non_5F_terminal_3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<non_terminal>") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__22_string_22_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\"string\"") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("comment") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_commentMark:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("commentMark") ;
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
    case kToken_as:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("as") ;
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
    case kToken_cast:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("cast") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_case:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("case") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_class:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("class") ;
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
    case kToken_for:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("for") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_fixit:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("fixit") ;
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
    case kToken_mutating:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("mutating") ;
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
    case kToken_public:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("public") ;
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
    case kToken_refclass:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("refclass") ;
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
    case kToken_valueclass:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("valueclass") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_warning:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("warning") ;
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
    case kToken__26__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&+") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&-") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&*") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&/") ;
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
    case kToken__3A__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":>") ;
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
    case kToken__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__26_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&&") ;
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
    case kToken__2D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("*=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2F__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("/=") ;
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
    case kToken__60_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("`") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("||") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("|") ;
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
    case kToken__2D__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("--") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("++") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2D__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&--") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2B__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&++") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__B0_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\xC2""\xB0""") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D__3D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("===") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__3D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!==") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F__5E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?^") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__5E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!^") ;
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

static const cTemplateDelimiter galgasTemplateScannerNew_kTemplateDefinitionArray [1] = {
  cTemplateDelimiter (kUnicodeString_galgasTemplateScannerNew__25_, 1, kUnicodeString_galgasTemplateScannerNew__25_, 1, NULL, true)
} ;

//----------------------------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//----------------------------------------------------------------------------------------------------------------------

static const cTemplateDelimiter galgasTemplateScannerNew_kTemplateReplacementArray [3] = {
  cTemplateDelimiter (kUnicodeString_galgasTemplateScannerNew__5C__25_, 2, kUnicodeString_galgasTemplateScannerNew__25_, 1, NULL, true),
  cTemplateDelimiter (kUnicodeString_galgasTemplateScannerNew__5C_n, 2, kUnicodeString_galgasTemplateScannerNew__A_, 1, NULL, true),
  cTemplateDelimiter (kUnicodeString_galgasTemplateScannerNew__5C__5C_, 2, kUnicodeString_galgasTemplateScannerNew__5C_, 1, NULL, true)
} ;

//----------------------------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//----------------------------------------------------------------------------------------------------------------------

static const bool galgasTemplateScannerNew_kEndOfScriptInTemplateArray [156] = {
  false /* identifier */,
  false /* double.xxx */,
  false /* uint32 */,
  false /* sint32_S */,
  false /* uint64_L */,
  false /* sint64_LS */,
  false /* bigint_G */,
  false /* . */,
  false /* ... */,
  false /* ..< */,
  false /* @type */,
  false /* %attribute */,
  false /* 'char' */,
  false /* $terminal$ */,
  false /* ? */,
  false /* ?! */,
  false /* ! */,
  false /* !? */,
  false /* < */,
  false /* <= */,
  false /* << */,
  false /* <non_terminal> */,
  false /* "string" */,
  false /* comment */,
  false /* commentMark */,
  false /* abstract */,
  false /* after */,
  false /* array */,
  false /* as */,
  false /* before */,
  false /* between */,
  false /* block */,
  false /* boolset */,
  false /* cast */,
  false /* case */,
  false /* class */,
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
  false /* for */,
  false /* fixit */,
  false /* func */,
  false /* getter */,
  false /* grammar */,
  false /* graph */,
  false /* gui */,
  false /* if */,
  false /* in */,
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
  false /* message */,
  false /* method */,
  false /* mod */,
  false /* mutating */,
  false /* not */,
  false /* on */,
  false /* operator */,
  false /* option */,
  false /* or */,
  false /* override */,
  false /* parse */,
  false /* public */,
  false /* private */,
  false /* proc */,
  false /* project */,
  false /* refclass */,
  false /* remove */,
  false /* replace */,
  false /* repeat */,
  false /* rewind */,
  false /* rule */,
  false /* search */,
  false /* select */,
  false /* self */,
  false /* send */,
  false /* setter */,
  false /* sortedlist */,
  false /* struct */,
  false /* style */,
  false /* switch */,
  false /* syntax */,
  false /* tag */,
  false /* template */,
  false /* then */,
  false /* true */,
  false /* unused */,
  false /* var */,
  false /* valueclass */,
  false /* warning */,
  false /* while */,
  false /* with */,
  false /* * */,
  false /* , */,
  false /* + */,
  false /* &+ */,
  false /* &- */,
  false /* &* */,
  false /* &/ */,
  false /* > */,
  false /* ; */,
  false /* : */,
  false /* :> */,
  false /* - */,
  false /* ( */,
  false /* ) */,
  false /* -> */,
  false /* == */,
  false /* = */,
  false /* && */,
  false /* [ */,
  false /* ] */,
  false /* += */,
  false /* -= */,
  false /* *= */,
  false /* /= */,
  false /* / */,
  false /* != */,
  false /* >= */,
  false /* & */,
  false /* { */,
  false /* } */,
  false /* ` */,
  false /* || */,
  false /* | */,
  false /* ^ */,
  false /* >> */,
  false /* ~ */,
  false /* -- */,
  false /* ++ */,
  false /* &-- */,
  false /* &++ */,
  false /* ° */,
  false /* === */,
  false /* !== */,
  false /* ?^ */,
  false /* !^ */
} ;

//----------------------------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_galgasTemplateScannerNew::internalParseLexicalToken (cTokenFor_galgasTemplateScannerNew & token) {
  bool loop = true ;
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
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (token.mTokenCode == -1) {
          token.mTokenCode = search_into_galgasKeyWordList (token.mLexicalAttribute_identifierString) ;
        }
        if (token.mTokenCode == -1) {
          token.mTokenCode = kToken_identifier ;
        }
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__30_x, 2, true)) {
        do {
          if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          do {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew_LS, 2, true)) {
            ::scanner_routine_convertHexStringIntoSInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_36__34_value, gLexicalMessage_galgasTemplateScannerNew_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
            token.mTokenCode = kToken_sint_36__34__5F_LS ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('S')) || testForInputUTF32Char (TO_UNICODE ('s'))) {
            ::scanner_routine_convertHexStringIntoSInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
            token.mTokenCode = kToken_sint_33__32__5F_S ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('L'))) {
            ::scanner_routine_convertHexStringIntoUInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_36__34_value, gLexicalMessage_galgasTemplateScannerNew_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
            token.mTokenCode = kToken_uint_36__34__5F_L ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('G'))) {
            ::scanner_routine_convertHexStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
            token.mTokenCode = kToken_bigint_5F_G ;
            enterToken (token) ;
          }else{
            ::scanner_routine_convertHexStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
            token.mTokenCode = kToken_uint_33__32_ ;
            enterToken (token) ;
          }
        }else{
          lexicalError (gLexicalMessage_galgasTemplateScannerNew_hexDigitError COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('S')) || testForInputUTF32Char (TO_UNICODE ('s'))) {
          ::scanner_routine_convertDecimalStringIntoSInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
          token.mTokenCode = kToken_sint_33__32__5F_S ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew_LS, 2, true)) {
          ::scanner_routine_convertDecimalStringIntoSInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_36__34_value, gLexicalMessage_galgasTemplateScannerNew_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
          token.mTokenCode = kToken_sint_36__34__5F_LS ;
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('L'))) {
          ::scanner_routine_convertDecimalStringIntoUInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_36__34_value, gLexicalMessage_galgasTemplateScannerNew_decimalNumberTooLarge, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
          token.mTokenCode = kToken_uint_36__34__5F_L ;
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('G'))) {
          ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
          token.mTokenCode = kToken_bigint_5F_G ;
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('.'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('.')) ;
          do {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_galgasTemplateScannerNew_floatNumberConversionError) ;
          token.mTokenCode = kToken_double_2E_xxx ;
          enterToken (token) ;
        }else{
          ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
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
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_galgasTemplateScannerNew_floatNumberConversionError) ;
          token.mTokenCode = kToken_double_2E_xxx ;
          enterToken (token) ;
        }else{
          if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__2E__2E_, 2, true)) {
            token.mTokenCode = kToken__2E__2E__2E_ ;
            enterToken (token) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__2E__3C_, 2, true)) {
            token.mTokenCode = kToken__2E__2E__3C_ ;
            enterToken (token) ;
          }else{
            token.mTokenCode = kToken__2E_ ;
            enterToken (token) ;
          }
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('@'))) {
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          if (testForInputUTF32Char (TO_UNICODE ('-'))) {
            do {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              }else{
                loop = false ;
              }
            }while (loop) ;
            loop = true ;
          }
          if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }
        }else{
          lexicalError (gLexicalMessage_galgasTemplateScannerNew_incorrectTypeNameError COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken__40_type ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('%'))) {
        if (testForCharWithFunction (isUnicodeLetter)) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('-')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
        }else{
          lexicalError (gLexicalMessage_galgasTemplateScannerNew_attributeError COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken__25_attribute ;
        enterToken (token) ;
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
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                    ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasTemplateScannerNew_unassignedUnicodeValue) ;
                  }else{
                    lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32Char (TO_UNICODE ('U'))) {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                            ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasTemplateScannerNew_unassignedUnicodeValue) ;
                          }else{
                            lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                          }
                        }else{
                          lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32Char (TO_UNICODE ('&'))) {
            do {
              if (notTestForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__3B_, 1, gLexicalMessage_galgasTemplateScannerNew_incorrectHTMLescapeSequence COMMA_LINE_AND_SOURCE_FILE)) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              }else{
                loop = false ;
              }
            }while (loop) ;
            loop = true ;
            ::scanner_routine_convertHTMLSequenceToUnicodeCharacter (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue, gLexicalMessage_galgasTemplateScannerNew_unknownHTMLescapeSequence) ;
          }else{
            lexicalError (gLexicalMessage_galgasTemplateScannerNew_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32CharRange (TO_UNICODE (' '), TO_UNICODE (65533))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, previousChar ()) ;
        }else{
          lexicalError (gLexicalMessage_galgasTemplateScannerNew_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
        }
        if (testForInputUTF32Char (TO_UNICODE ('\''))) {
          token.mTokenCode = kToken__27_char_27_ ;
          enterToken (token) ;
        }else{
          lexicalError (gLexicalMessage_galgasTemplateScannerNew_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('$'))) {
        if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__5C__5C_, 2, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          do {
            if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__5C__5C_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
            }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__5C__24_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
            }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
        }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__5C__24_, 2, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
          do {
            if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__5C__5C_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
            }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__5C__24_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
            }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
        }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          do {
            if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__5C__5C_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
            }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__5C__24_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
            }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
        }else{
          lexicalError (gLexicalMessage_galgasTemplateScannerNew_incorrect_terminal_start COMMA_LINE_AND_SOURCE_FILE) ;
        }
        if (testForInputUTF32Char (TO_UNICODE ('$'))) {
        }else{
          lexicalError (gLexicalMessage_galgasTemplateScannerNew_incorrect_terminal_end COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken__24_terminal_24_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__3D__3D__3D_, 3, true)) {
        token.mTokenCode = kToken__3D__3D__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__26__2D__2D_, 3, true)) {
        token.mTokenCode = kToken__26__2D__2D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__26__2B__2B_, 3, true)) {
        token.mTokenCode = kToken__26__2B__2B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__21__3D__3D_, 3, true)) {
        token.mTokenCode = kToken__21__3D__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__7C__7C_, 2, true)) {
        token.mTokenCode = kToken__7C__7C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__3F__5E_, 2, true)) {
        token.mTokenCode = kToken__3F__5E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__3E__3E_, 2, true)) {
        token.mTokenCode = kToken__3E__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__3E__3D_, 2, true)) {
        token.mTokenCode = kToken__3E__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__3D__3D_, 2, true)) {
        token.mTokenCode = kToken__3D__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__3A__3E_, 2, true)) {
        token.mTokenCode = kToken__3A__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__2F__3D_, 2, true)) {
        token.mTokenCode = kToken__2F__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__2D__3E_, 2, true)) {
        token.mTokenCode = kToken__2D__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__2D__3D_, 2, true)) {
        token.mTokenCode = kToken__2D__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__2D__2D_, 2, true)) {
        token.mTokenCode = kToken__2D__2D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__2B__3D_, 2, true)) {
        token.mTokenCode = kToken__2B__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__2B__2B_, 2, true)) {
        token.mTokenCode = kToken__2B__2B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__2A__3D_, 2, true)) {
        token.mTokenCode = kToken__2A__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__26__2F_, 2, true)) {
        token.mTokenCode = kToken__26__2F_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__26__2D_, 2, true)) {
        token.mTokenCode = kToken__26__2D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__26__2B_, 2, true)) {
        token.mTokenCode = kToken__26__2B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__26__2A_, 2, true)) {
        token.mTokenCode = kToken__26__2A_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__26__26_, 2, true)) {
        token.mTokenCode = kToken__26__26_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__21__5E_, 2, true)) {
        token.mTokenCode = kToken__21__5E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__21__3D_, 2, true)) {
        token.mTokenCode = kToken__21__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__B0_, 1, true)) {
        token.mTokenCode = kToken__B0_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__7E_, 1, true)) {
        token.mTokenCode = kToken__7E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__7D_, 1, true)) {
        token.mTokenCode = kToken__7D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__7C_, 1, true)) {
        token.mTokenCode = kToken__7C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__7B_, 1, true)) {
        token.mTokenCode = kToken__7B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__60_, 1, true)) {
        token.mTokenCode = kToken__60_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__5E_, 1, true)) {
        token.mTokenCode = kToken__5E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__5D_, 1, true)) {
        token.mTokenCode = kToken__5D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__5B_, 1, true)) {
        token.mTokenCode = kToken__5B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__3E_, 1, true)) {
        token.mTokenCode = kToken__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__3D_, 1, true)) {
        token.mTokenCode = kToken__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__3B_, 1, true)) {
        token.mTokenCode = kToken__3B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__3A_, 1, true)) {
        token.mTokenCode = kToken__3A_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__2F_, 1, true)) {
        token.mTokenCode = kToken__2F_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__2D_, 1, true)) {
        token.mTokenCode = kToken__2D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__2C_, 1, true)) {
        token.mTokenCode = kToken__2C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__2B_, 1, true)) {
        token.mTokenCode = kToken__2B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__2A_, 1, true)) {
        token.mTokenCode = kToken__2A_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__29_, 1, true)) {
        token.mTokenCode = kToken__29_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__28_, 1, true)) {
        token.mTokenCode = kToken__28_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__26_, 1, true)) {
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
                loop = false ;
              }
            }while (loop) ;
            loop = true ;
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
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
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
                loop = false ;
              }
            }while (loop) ;
            loop = true ;
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
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
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
        const C_LocationInSource currentLocationForTag_onlyInfDelimiter = mCurrentLocation ;
        const C_LocationInSource endLocationForTag_onlyInfDelimiter = mTokenEndLocation ;
        const utf32 currentCharForTag_onlyInfDelimiter = mCurrentChar ;
        if (testForInputUTF32Char (TO_UNICODE ('='))) {
          token.mTokenCode = kToken__3C__3D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('<'))) {
          token.mTokenCode = kToken__3C__3C_ ;
          enterToken (token) ;
        }else if (testForCharWithFunction (isUnicodeLetter)) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          if (testForInputUTF32Char (TO_UNICODE ('>'))) {
            token.mTokenCode = kToken__3C_non_5F_terminal_3E_ ;
            enterToken (token) ;
          }else{
            mCurrentLocation = currentLocationForTag_onlyInfDelimiter ;
            mTokenEndLocation = endLocationForTag_onlyInfDelimiter ;
            mCurrentChar = currentCharForTag_onlyInfDelimiter ;
            token.mTokenCode = kToken__3C_ ;
            enterToken (token) ;
          }
        }else{
          token.mTokenCode = kToken__3C_ ;
          enterToken (token) ;
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
                if (notTestForInputUTF32String (kUnicodeString_galgasTemplateScannerNew__3B_, 1, gLexicalMessage_galgasTemplateScannerNew_incorrectHTMLescapeSequence COMMA_LINE_AND_SOURCE_FILE)) {
                  ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, previousChar ()) ;
                }else{
                  loop = false ;
                }
              }while (loop) ;
              loop = true ;
              ::scanner_routine_convertHTMLSequenceToUnicodeCharacter (*this, token.mLexicalAttribute_identifierString, token.mLexicalAttribute_charValue, gLexicalMessage_galgasTemplateScannerNew_unknownHTMLescapeSequence) ;
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
            }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              lexicalWarning (gLexicalMessage_galgasTemplateScannerNew_obsoleteStringConstruction COMMA_LINE_AND_SOURCE_FILE) ;
              do {
                ::scanner_routine_enterHexDigitIntoASCIIcharacter (*this, token.mLexicalAttribute_charValue, previousChar (), gLexicalMessage_galgasTemplateScannerNew_ASCIIcodeTooLargeError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
                }else{
                  loop = false ;
                }
              }while (loop) ;
              loop = true ;
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('u'))) {
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                      ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasTemplateScannerNew_unassignedUnicodeValue) ;
                      ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                    }else{
                      lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else if (testForInputUTF32Char (TO_UNICODE ('U'))) {
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasTemplateScannerNew_internalError, gLexicalMessage_galgasTemplateScannerNew_internalError) ;
                              ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasTemplateScannerNew_unassignedUnicodeValue) ;
                              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                            }else{
                              lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                            }
                          }else{
                            lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                          }
                        }else{
                          lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasTemplateScannerNew_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasTemplateScannerNew_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
          token.mTokenCode = kToken__22_string_22_ ;
          enterToken (token) ;
        }else{
          lexicalError (gLexicalMessage_galgasTemplateScannerNew_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
        if (testForInputUTF32Char (TO_UNICODE ('!'))) {
          do {
            if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          enterDroppedTerminal (kToken_commentMark) ;
        }else{
          do {
            if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (1114111))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          enterDroppedTerminal (kToken_comment) ;
        }
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

//----------------------------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//----------------------------------------------------------------------------------------------------------------------

bool C_Lexique_galgasTemplateScannerNew::parseLexicalToken (void) {
  cTokenFor_galgasTemplateScannerNew token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    if ((mMatchedTemplateDelimiterIndex >= 0)
     && (galgasTemplateScannerNew_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)
     && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      const bool foundEndDelimitor = testForInputUTF32String (galgasTemplateScannerNew_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,
                                                              galgasTemplateScannerNew_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength,
                                                              true) ;
      if (foundEndDelimitor) {
        mMatchedTemplateDelimiterIndex = -1 ;
      }
    }
    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      int32_t replacementIndex = 0 ;
      while (replacementIndex >= 0) {
        replacementIndex = findTemplateDelimiterIndex (galgasTemplateScannerNew_kTemplateReplacementArray, 3) ;
        if (replacementIndex >= 0) {
          if (galgasTemplateScannerNew_kTemplateReplacementArray [replacementIndex].mReplacementFunction == NULL) {
            token.mTemplateStringBeforeToken << galgasTemplateScannerNew_kTemplateReplacementArray [replacementIndex].mEndString ;
          }else{
            C_String s ;
            while (notTestForInputUTF32String (galgasTemplateScannerNew_kTemplateReplacementArray [replacementIndex].mEndString,
                                               galgasTemplateScannerNew_kTemplateReplacementArray [replacementIndex].mEndStringLength,
                                               kEndOfSourceLexicalErrorMessage
                                               COMMA_HERE)) {
              s.appendUnicodeCharacter (previousChar () COMMA_HERE) ;
            }
            galgasTemplateScannerNew_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;
          }
        }
      }
      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (galgasTemplateScannerNew_kTemplateDefinitionArray, 1) ;
      if (mMatchedTemplateDelimiterIndex < 0) {
        token.mTemplateStringBeforeToken.appendUnicodeCharacter (mCurrentChar COMMA_HERE) ;
        advance () ;
      }
    }
    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      internalParseLexicalToken (token) ;
    }
    if ((token.mTokenCode > 0) && galgasTemplateScannerNew_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {
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

void C_Lexique_galgasTemplateScannerNew::enterToken (cTokenFor_galgasTemplateScannerNew & ioToken) {
  cTokenFor_galgasTemplateScannerNew * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_galgasTemplateScannerNew ()) ;
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

C_BigInt C_Lexique_galgasTemplateScannerNew::attributeValue_bigintValue (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_bigintValue ;
}

//----------------------------------------------------------------------------------------------------------------------

utf32 C_Lexique_galgasTemplateScannerNew::attributeValue_charValue (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_charValue ;
}

//----------------------------------------------------------------------------------------------------------------------

double C_Lexique_galgasTemplateScannerNew::attributeValue_floatValue (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_floatValue ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasTemplateScannerNew::attributeValue_identifierString (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//----------------------------------------------------------------------------------------------------------------------

int32_t C_Lexique_galgasTemplateScannerNew::attributeValue_sint_33__32_value (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_sint_33__32_value ;
}

//----------------------------------------------------------------------------------------------------------------------

int64_t C_Lexique_galgasTemplateScannerNew::attributeValue_sint_36__34_value (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_sint_36__34_value ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasTemplateScannerNew::attributeValue_tokenString (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_galgasTemplateScannerNew::attributeValue_uint_33__32_value (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//----------------------------------------------------------------------------------------------------------------------

uint64_t C_Lexique_galgasTemplateScannerNew::attributeValue_uint_36__34_value (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_36__34_value ;
}

//----------------------------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint C_Lexique_galgasTemplateScannerNew::synthetizedAttribute_bigintValue (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScannerNew) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_bigint value (ptr->mLexicalAttribute_bigintValue) ;
  GALGAS_lbigint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar C_Lexique_galgasTemplateScannerNew::synthetizedAttribute_charValue (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScannerNew) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_char value (ptr->mLexicalAttribute_charValue) ;
  GALGAS_lchar result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ldouble C_Lexique_galgasTemplateScannerNew::synthetizedAttribute_floatValue (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScannerNew) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_double value (ptr->mLexicalAttribute_floatValue) ;
  GALGAS_ldouble result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_galgasTemplateScannerNew::synthetizedAttribute_identifierString (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScannerNew) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint C_Lexique_galgasTemplateScannerNew::synthetizedAttribute_sint_33__32_value (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScannerNew) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint value (ptr->mLexicalAttribute_sint_33__32_value) ;
  GALGAS_lsint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint_36__34_ C_Lexique_galgasTemplateScannerNew::synthetizedAttribute_sint_36__34_value (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScannerNew) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint_36__34_ value (ptr->mLexicalAttribute_sint_36__34_value) ;
  GALGAS_lsint_36__34_ result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_galgasTemplateScannerNew::synthetizedAttribute_tokenString (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScannerNew) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint C_Lexique_galgasTemplateScannerNew::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScannerNew) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint_36__34_ C_Lexique_galgasTemplateScannerNew::synthetizedAttribute_uint_36__34_value (void) const {
  cTokenFor_galgasTemplateScannerNew * ptr = (cTokenFor_galgasTemplateScannerNew *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasTemplateScannerNew) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint_36__34_ value (ptr->mLexicalAttribute_uint_36__34_value) ;
  GALGAS_luint_36__34_ result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist C_Lexique_galgasTemplateScannerNew::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("double.xxx") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("uint32") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sint32_S") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("uint64_L") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sint64_LS") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bigint_G") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("...") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("..<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("@type") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%attribute") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("'char'") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("$terminal$") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<non_terminal>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\"string\"") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("commentMark") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("abstract") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("after") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("array") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("as") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("before") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("between") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("block") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("boolset") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("cast") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("class") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("for") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("fixit") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("func") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("getter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("grammar") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("graph") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("gui") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("in") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("message") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("method") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mod") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mutating") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("not") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("on") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("operator") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("option") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("or") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("override") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("parse") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("public") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("private") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("proc") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("project") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("refclass") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("remove") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("replace") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("repeat") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rewind") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rule") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("search") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("select") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("send") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("setter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sortedlist") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("style") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("switch") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("syntax") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("tag") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("template") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("then") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("true") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("unused") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("var") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("valueclass") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("warning") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("while") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("with") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&*") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&/") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("->") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("/=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("/") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("`") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("||") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("--") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("++") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&--") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&++") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\xC2""\xB0""") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("===") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!==") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!^") COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordLists_galgasTemplateScannerNew (TC_UniqueArray <C_String> & ioList) {
  ioList.appendObject ("galgasTemplateScannerNew:galgasDelimitorsList") ;
  ioList.appendObject ("galgasTemplateScannerNew:galgasKeyWordList") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_galgasTemplateScannerNew (const C_String & inIdentifier,
                                                               bool & ioFound,
                                                               TC_UniqueArray <C_String> & ioList) {
  if (inIdentifier == "galgasTemplateScannerNew:galgasDelimitorsList") {
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
    ioList.appendObject ("=") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("`") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("~") ;
    ioList.appendObject ("\xC2""\xB0""") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("!^") ;
    ioList.appendObject ("&&") ;
    ioList.appendObject ("&*") ;
    ioList.appendObject ("&+") ;
    ioList.appendObject ("&-") ;
    ioList.appendObject ("&/") ;
    ioList.appendObject ("*=") ;
    ioList.appendObject ("++") ;
    ioList.appendObject ("+=") ;
    ioList.appendObject ("--") ;
    ioList.appendObject ("-=") ;
    ioList.appendObject ("->") ;
    ioList.appendObject ("/=") ;
    ioList.appendObject (":>") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">=") ;
    ioList.appendObject (">>") ;
    ioList.appendObject ("\?^") ;
    ioList.appendObject ("||") ;
    ioList.appendObject ("!==") ;
    ioList.appendObject ("&++") ;
    ioList.appendObject ("&--") ;
    ioList.appendObject ("===") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "galgasTemplateScannerNew:galgasKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("as") ;
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
    ioList.appendObject ("list") ;
    ioList.appendObject ("loop") ;
    ioList.appendObject ("proc") ;
    ioList.appendObject ("rule") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("send") ;
    ioList.appendObject ("then") ;
    ioList.appendObject ("true") ;
    ioList.appendObject ("with") ;
    ioList.appendObject ("after") ;
    ioList.appendObject ("array") ;
    ioList.appendObject ("block") ;
    ioList.appendObject ("class") ;
    ioList.appendObject ("elsif") ;
    ioList.appendObject ("error") ;
    ioList.appendObject ("false") ;
    ioList.appendObject ("fixit") ;
    ioList.appendObject ("graph") ;
    ioList.appendObject ("label") ;
    ioList.appendObject ("parse") ;
    ioList.appendObject ("style") ;
    ioList.appendObject ("while") ;
    ioList.appendObject ("before") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("getter") ;
    ioList.appendObject ("insert") ;
    ioList.appendObject ("method") ;
    ioList.appendObject ("option") ;
    ioList.appendObject ("public") ;
    ioList.appendObject ("remove") ;
    ioList.appendObject ("repeat") ;
    ioList.appendObject ("rewind") ;
    ioList.appendObject ("search") ;
    ioList.appendObject ("select") ;
    ioList.appendObject ("setter") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("switch") ;
    ioList.appendObject ("syntax") ;
    ioList.appendObject ("unused") ;
    ioList.appendObject ("between") ;
    ioList.appendObject ("boolset") ;
    ioList.appendObject ("default") ;
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
    ioList.appendObject ("mutating") ;
    ioList.appendObject ("operator") ;
    ioList.appendObject ("override") ;
    ioList.appendObject ("refclass") ;
    ioList.appendObject ("template") ;
    ioList.appendObject ("extension") ;
    ioList.appendObject ("sortedlist") ;
    ioList.appendObject ("valueclass") ;
    ioList.appendObject ("constructor") ;
    ioList.appendObject ("filewrapper") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_galgasTemplateScannerNew
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_galgasTemplateScannerNew, getKeywordsForIdentifier_galgasTemplateScannerNew) ;

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_galgasTemplateScannerNew::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [157] = {0,
    0 /* galgasTemplateScannerNew_1_identifier */,
    8 /* galgasTemplateScannerNew_1_double_2E_xxx */,
    6 /* galgasTemplateScannerNew_1_uint_33__32_ */,
    6 /* galgasTemplateScannerNew_1_sint_33__32__5F_S */,
    6 /* galgasTemplateScannerNew_1_uint_36__34__5F_L */,
    6 /* galgasTemplateScannerNew_1_sint_36__34__5F_LS */,
    7 /* galgasTemplateScannerNew_1_bigint_5F_G */,
    2 /* galgasTemplateScannerNew_1__2E_ */,
    2 /* galgasTemplateScannerNew_1__2E__2E__2E_ */,
    2 /* galgasTemplateScannerNew_1__2E__2E__3C_ */,
    11 /* galgasTemplateScannerNew_1__40_type */,
    12 /* galgasTemplateScannerNew_1__25_attribute */,
    9 /* galgasTemplateScannerNew_1__27_char_27_ */,
    4 /* galgasTemplateScannerNew_1__24_terminal_24_ */,
    3 /* galgasTemplateScannerNew_1__3F_ */,
    3 /* galgasTemplateScannerNew_1__3F__21_ */,
    3 /* galgasTemplateScannerNew_1__21_ */,
    3 /* galgasTemplateScannerNew_1__21__3F_ */,
    2 /* galgasTemplateScannerNew_1__3C_ */,
    2 /* galgasTemplateScannerNew_1__3C__3D_ */,
    2 /* galgasTemplateScannerNew_1__3C__3C_ */,
    5 /* galgasTemplateScannerNew_1__3C_non_5F_terminal_3E_ */,
    10 /* galgasTemplateScannerNew_1__22_string_22_ */,
    13 /* galgasTemplateScannerNew_1_comment */,
    13 /* galgasTemplateScannerNew_1_commentMark */,
    1 /* galgasTemplateScannerNew_1_abstract */,
    1 /* galgasTemplateScannerNew_1_after */,
    1 /* galgasTemplateScannerNew_1_array */,
    1 /* galgasTemplateScannerNew_1_as */,
    1 /* galgasTemplateScannerNew_1_before */,
    1 /* galgasTemplateScannerNew_1_between */,
    1 /* galgasTemplateScannerNew_1_block */,
    1 /* galgasTemplateScannerNew_1_boolset */,
    1 /* galgasTemplateScannerNew_1_cast */,
    1 /* galgasTemplateScannerNew_1_case */,
    1 /* galgasTemplateScannerNew_1_class */,
    1 /* galgasTemplateScannerNew_1_constructor */,
    1 /* galgasTemplateScannerNew_1_default */,
    1 /* galgasTemplateScannerNew_1_dict */,
    1 /* galgasTemplateScannerNew_1_do */,
    1 /* galgasTemplateScannerNew_1_drop */,
    1 /* galgasTemplateScannerNew_1_else */,
    1 /* galgasTemplateScannerNew_1_elsif */,
    1 /* galgasTemplateScannerNew_1_end */,
    1 /* galgasTemplateScannerNew_1_enum */,
    1 /* galgasTemplateScannerNew_1_error */,
    1 /* galgasTemplateScannerNew_1_extension */,
    1 /* galgasTemplateScannerNew_1_extern */,
    1 /* galgasTemplateScannerNew_1_false */,
    1 /* galgasTemplateScannerNew_1_filewrapper */,
    1 /* galgasTemplateScannerNew_1_for */,
    1 /* galgasTemplateScannerNew_1_fixit */,
    1 /* galgasTemplateScannerNew_1_func */,
    1 /* galgasTemplateScannerNew_1_getter */,
    1 /* galgasTemplateScannerNew_1_grammar */,
    1 /* galgasTemplateScannerNew_1_graph */,
    1 /* galgasTemplateScannerNew_1_gui */,
    1 /* galgasTemplateScannerNew_1_if */,
    1 /* galgasTemplateScannerNew_1_in */,
    1 /* galgasTemplateScannerNew_1_indexing */,
    1 /* galgasTemplateScannerNew_1_insert */,
    1 /* galgasTemplateScannerNew_1_is */,
    1 /* galgasTemplateScannerNew_1_label */,
    1 /* galgasTemplateScannerNew_1_let */,
    1 /* galgasTemplateScannerNew_1_lexique */,
    1 /* galgasTemplateScannerNew_1_list */,
    1 /* galgasTemplateScannerNew_1_listmap */,
    1 /* galgasTemplateScannerNew_1_log */,
    1 /* galgasTemplateScannerNew_1_loop */,
    1 /* galgasTemplateScannerNew_1_map */,
    1 /* galgasTemplateScannerNew_1_message */,
    1 /* galgasTemplateScannerNew_1_method */,
    1 /* galgasTemplateScannerNew_1_mod */,
    1 /* galgasTemplateScannerNew_1_mutating */,
    1 /* galgasTemplateScannerNew_1_not */,
    1 /* galgasTemplateScannerNew_1_on */,
    1 /* galgasTemplateScannerNew_1_operator */,
    1 /* galgasTemplateScannerNew_1_option */,
    1 /* galgasTemplateScannerNew_1_or */,
    1 /* galgasTemplateScannerNew_1_override */,
    1 /* galgasTemplateScannerNew_1_parse */,
    1 /* galgasTemplateScannerNew_1_public */,
    1 /* galgasTemplateScannerNew_1_private */,
    1 /* galgasTemplateScannerNew_1_proc */,
    1 /* galgasTemplateScannerNew_1_project */,
    1 /* galgasTemplateScannerNew_1_refclass */,
    1 /* galgasTemplateScannerNew_1_remove */,
    1 /* galgasTemplateScannerNew_1_replace */,
    1 /* galgasTemplateScannerNew_1_repeat */,
    1 /* galgasTemplateScannerNew_1_rewind */,
    1 /* galgasTemplateScannerNew_1_rule */,
    1 /* galgasTemplateScannerNew_1_search */,
    1 /* galgasTemplateScannerNew_1_select */,
    1 /* galgasTemplateScannerNew_1_self */,
    1 /* galgasTemplateScannerNew_1_send */,
    1 /* galgasTemplateScannerNew_1_setter */,
    1 /* galgasTemplateScannerNew_1_sortedlist */,
    1 /* galgasTemplateScannerNew_1_struct */,
    1 /* galgasTemplateScannerNew_1_style */,
    1 /* galgasTemplateScannerNew_1_switch */,
    1 /* galgasTemplateScannerNew_1_syntax */,
    1 /* galgasTemplateScannerNew_1_tag */,
    1 /* galgasTemplateScannerNew_1_template */,
    1 /* galgasTemplateScannerNew_1_then */,
    1 /* galgasTemplateScannerNew_1_true */,
    1 /* galgasTemplateScannerNew_1_unused */,
    1 /* galgasTemplateScannerNew_1_var */,
    1 /* galgasTemplateScannerNew_1_valueclass */,
    1 /* galgasTemplateScannerNew_1_warning */,
    1 /* galgasTemplateScannerNew_1_while */,
    1 /* galgasTemplateScannerNew_1_with */,
    2 /* galgasTemplateScannerNew_1__2A_ */,
    2 /* galgasTemplateScannerNew_1__2C_ */,
    2 /* galgasTemplateScannerNew_1__2B_ */,
    2 /* galgasTemplateScannerNew_1__26__2B_ */,
    2 /* galgasTemplateScannerNew_1__26__2D_ */,
    2 /* galgasTemplateScannerNew_1__26__2A_ */,
    2 /* galgasTemplateScannerNew_1__26__2F_ */,
    2 /* galgasTemplateScannerNew_1__3E_ */,
    2 /* galgasTemplateScannerNew_1__3B_ */,
    2 /* galgasTemplateScannerNew_1__3A_ */,
    2 /* galgasTemplateScannerNew_1__3A__3E_ */,
    2 /* galgasTemplateScannerNew_1__2D_ */,
    2 /* galgasTemplateScannerNew_1__28_ */,
    2 /* galgasTemplateScannerNew_1__29_ */,
    2 /* galgasTemplateScannerNew_1__2D__3E_ */,
    2 /* galgasTemplateScannerNew_1__3D__3D_ */,
    2 /* galgasTemplateScannerNew_1__3D_ */,
    2 /* galgasTemplateScannerNew_1__26__26_ */,
    2 /* galgasTemplateScannerNew_1__5B_ */,
    2 /* galgasTemplateScannerNew_1__5D_ */,
    2 /* galgasTemplateScannerNew_1__2B__3D_ */,
    2 /* galgasTemplateScannerNew_1__2D__3D_ */,
    2 /* galgasTemplateScannerNew_1__2A__3D_ */,
    2 /* galgasTemplateScannerNew_1__2F__3D_ */,
    2 /* galgasTemplateScannerNew_1__2F_ */,
    2 /* galgasTemplateScannerNew_1__21__3D_ */,
    2 /* galgasTemplateScannerNew_1__3E__3D_ */,
    2 /* galgasTemplateScannerNew_1__26_ */,
    2 /* galgasTemplateScannerNew_1__7B_ */,
    2 /* galgasTemplateScannerNew_1__7D_ */,
    2 /* galgasTemplateScannerNew_1__60_ */,
    2 /* galgasTemplateScannerNew_1__7C__7C_ */,
    2 /* galgasTemplateScannerNew_1__7C_ */,
    2 /* galgasTemplateScannerNew_1__5E_ */,
    2 /* galgasTemplateScannerNew_1__3E__3E_ */,
    2 /* galgasTemplateScannerNew_1__7E_ */,
    2 /* galgasTemplateScannerNew_1__2D__2D_ */,
    2 /* galgasTemplateScannerNew_1__2B__2B_ */,
    2 /* galgasTemplateScannerNew_1__26__2D__2D_ */,
    2 /* galgasTemplateScannerNew_1__26__2B__2B_ */,
    2 /* galgasTemplateScannerNew_1__B0_ */,
    2 /* galgasTemplateScannerNew_1__3D__3D__3D_ */,
    2 /* galgasTemplateScannerNew_1__21__3D__3D_ */,
    2 /* galgasTemplateScannerNew_1__3F__5E_ */,
    2 /* galgasTemplateScannerNew_1__21__5E_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasTemplateScannerNew::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
  if (inStyleIndex < 14) {
    static const char * kStyleArray [14] = {
      "",
      "keywordsStyle",
      "delimitersStyle",
      "selectorStyle",
      "terminalStyle",
      "nonTerminalStyle",
      "integerStyle",
      "bigintStyle",
      "floatStyle",
      "characterStyle",
      "stringStyle",
      "typeNameStyle",
      "attributeStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_templateInstructionAST::objectCompare (const GALGAS_templateInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionAST::GALGAS_templateInstructionAST (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionAST::GALGAS_templateInstructionAST (const cPtr_templateInstructionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionAST::cPtr_templateInstructionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
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

typeComparisonResult GALGAS_templateInstructionAST_2D_weak::objectCompare (const GALGAS_templateInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionAST_2D_weak::GALGAS_templateInstructionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionAST_2D_weak & GALGAS_templateInstructionAST_2D_weak::operator = (const GALGAS_templateInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionAST_2D_weak::GALGAS_templateInstructionAST_2D_weak (const GALGAS_templateInstructionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionAST_2D_weak GALGAS_templateInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionAST GALGAS_templateInstructionAST_2D_weak::bang_templateInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionAST) ;
      result = GALGAS_templateInstructionAST ((cPtr_templateInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionAST_2D_weak ("templateInstructionAST-weak",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionAST_2D_weak GALGAS_templateInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionAST_2D_weak result ;
  const GALGAS_templateInstructionAST_2D_weak * p = (const GALGAS_templateInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  public: GALGAS_templateInstructionListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_templateInstructionListAST (const GALGAS_templateInstructionAST & in_mInstruction
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateInstructionListAST (const GALGAS_templateInstructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST::setter_append (GALGAS_templateInstructionListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST::setter_insertAtIndex (const GALGAS_templateInstructionAST inOperand0,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST::setter_removeAtIndex (GALGAS_templateInstructionAST & outOperand0,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_templateInstructionListAST * p = (cCollectionElement_templateInstructionListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_templateInstructionListAST) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
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
// @templateExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_templateExpressionAST::objectCompare (const GALGAS_templateExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST::GALGAS_templateExpressionAST (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST::GALGAS_templateExpressionAST (const cPtr_templateExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateExpressionAST::cPtr_templateExpressionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
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

typeComparisonResult GALGAS_templateExpressionAST_2D_weak::objectCompare (const GALGAS_templateExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST_2D_weak::GALGAS_templateExpressionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST_2D_weak & GALGAS_templateExpressionAST_2D_weak::operator = (const GALGAS_templateExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST_2D_weak::GALGAS_templateExpressionAST_2D_weak (const GALGAS_templateExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST_2D_weak GALGAS_templateExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateExpressionAST_2D_weak::bang_templateExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateExpressionAST) ;
      result = GALGAS_templateExpressionAST ((cPtr_templateExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak ("templateExpressionAST-weak",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST_2D_weak GALGAS_templateExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateExpressionAST_2D_weak result ;
  const GALGAS_templateExpressionAST_2D_weak * p = (const GALGAS_templateExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  public: GALGAS_templateExpressionListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_templateExpressionListAST (const GALGAS_lstring & in_mActualSelector,
                                                        const GALGAS_templateExpressionAST & in_mExpression,
                                                        const GALGAS_location & in_mEndOfExpressionLocation
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateExpressionListAST (const GALGAS_templateExpressionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateExpressionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateExpressionListAST::setter_append (GALGAS_templateExpressionListAST_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateExpressionListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateExpressionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_templateExpressionAST inOperand1,
                                                             const GALGAS_location inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateExpressionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateExpressionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_templateExpressionAST & outOperand1,
                                                             GALGAS_location & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_templateExpressionListAST * p = (cCollectionElement_templateExpressionListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_templateExpressionListAST) ;
        outOperand0 = p->mObject.mProperty_mActualSelector ;
        outOperand1 = p->mObject.mProperty_mExpression ;
        outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
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

typeComparisonResult GALGAS_templateConstructorAST_2D_weak::objectCompare (const GALGAS_templateConstructorAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST_2D_weak::GALGAS_templateConstructorAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST_2D_weak & GALGAS_templateConstructorAST_2D_weak::operator = (const GALGAS_templateConstructorAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST_2D_weak::GALGAS_templateConstructorAST_2D_weak (const GALGAS_templateConstructorAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST_2D_weak GALGAS_templateConstructorAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateConstructorAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST GALGAS_templateConstructorAST_2D_weak::bang_templateConstructorAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateConstructorAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateConstructorAST) ;
      result = GALGAS_templateConstructorAST ((cPtr_templateConstructorAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateConstructorAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateConstructorAST_2D_weak ("templateConstructorAST-weak",
                                                       & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateConstructorAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateConstructorAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateConstructorAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateConstructorAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST_2D_weak GALGAS_templateConstructorAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateConstructorAST_2D_weak result ;
  const GALGAS_templateConstructorAST_2D_weak * p = (const GALGAS_templateConstructorAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateConstructorAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateConstructorAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateFileWrapperTemplateCallAST_2D_weak::objectCompare (const GALGAS_templateFileWrapperTemplateCallAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST_2D_weak::GALGAS_templateFileWrapperTemplateCallAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST_2D_weak & GALGAS_templateFileWrapperTemplateCallAST_2D_weak::operator = (const GALGAS_templateFileWrapperTemplateCallAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST_2D_weak::GALGAS_templateFileWrapperTemplateCallAST_2D_weak (const GALGAS_templateFileWrapperTemplateCallAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST_2D_weak GALGAS_templateFileWrapperTemplateCallAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateFileWrapperTemplateCallAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST_2D_weak::bang_templateFileWrapperTemplateCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateFileWrapperTemplateCallAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateFileWrapperTemplateCallAST) ;
      result = GALGAS_templateFileWrapperTemplateCallAST ((cPtr_templateFileWrapperTemplateCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateFileWrapperTemplateCallAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST_2D_weak ("templateFileWrapperTemplateCallAST-weak",
                                                                   & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateFileWrapperTemplateCallAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateFileWrapperTemplateCallAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFileWrapperTemplateCallAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST_2D_weak GALGAS_templateFileWrapperTemplateCallAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateFileWrapperTemplateCallAST_2D_weak result ;
  const GALGAS_templateFileWrapperTemplateCallAST_2D_weak * p = (const GALGAS_templateFileWrapperTemplateCallAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateFileWrapperTemplateCallAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFileWrapperTemplateCallAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateExtensionTemplateCallAST_2D_weak::objectCompare (const GALGAS_templateExtensionTemplateCallAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST_2D_weak::GALGAS_templateExtensionTemplateCallAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST_2D_weak & GALGAS_templateExtensionTemplateCallAST_2D_weak::operator = (const GALGAS_templateExtensionTemplateCallAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST_2D_weak::GALGAS_templateExtensionTemplateCallAST_2D_weak (const GALGAS_templateExtensionTemplateCallAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST_2D_weak GALGAS_templateExtensionTemplateCallAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateExtensionTemplateCallAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST GALGAS_templateExtensionTemplateCallAST_2D_weak::bang_templateExtensionTemplateCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateExtensionTemplateCallAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateExtensionTemplateCallAST) ;
      result = GALGAS_templateExtensionTemplateCallAST ((cPtr_templateExtensionTemplateCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateExtensionTemplateCallAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST_2D_weak ("templateExtensionTemplateCallAST-weak",
                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateExtensionTemplateCallAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateExtensionTemplateCallAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateExtensionTemplateCallAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST_2D_weak GALGAS_templateExtensionTemplateCallAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateExtensionTemplateCallAST_2D_weak result ;
  const GALGAS_templateExtensionTemplateCallAST_2D_weak * p = (const GALGAS_templateExtensionTemplateCallAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateExtensionTemplateCallAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExtensionTemplateCallAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateAndOperationAST reference class
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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
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

GALGAS_location GALGAS_templateAndOperationAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateAndOperationAST * p = (cPtr_templateAndOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAndOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateAndOperationAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateAndOperationAST * p = (cPtr_templateAndOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAndOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateAndOperationAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateAndOperationAST * p = (cPtr_templateAndOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAndOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
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

typeComparisonResult GALGAS_templateAndOperationAST_2D_weak::objectCompare (const GALGAS_templateAndOperationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAndOperationAST_2D_weak::GALGAS_templateAndOperationAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAndOperationAST_2D_weak & GALGAS_templateAndOperationAST_2D_weak::operator = (const GALGAS_templateAndOperationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAndOperationAST_2D_weak::GALGAS_templateAndOperationAST_2D_weak (const GALGAS_templateAndOperationAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAndOperationAST_2D_weak GALGAS_templateAndOperationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateAndOperationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAndOperationAST GALGAS_templateAndOperationAST_2D_weak::bang_templateAndOperationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateAndOperationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateAndOperationAST) ;
      result = GALGAS_templateAndOperationAST ((cPtr_templateAndOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateAndOperationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateAndOperationAST_2D_weak ("templateAndOperationAST-weak",
                                                        & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateAndOperationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAndOperationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateAndOperationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateAndOperationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAndOperationAST_2D_weak GALGAS_templateAndOperationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateAndOperationAST_2D_weak result ;
  const GALGAS_templateAndOperationAST_2D_weak * p = (const GALGAS_templateAndOperationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateAndOperationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateAndOperationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateOrOperationAST reference class
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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
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

GALGAS_location GALGAS_templateOrOperationAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateOrOperationAST * p = (cPtr_templateOrOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOrOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateOrOperationAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateOrOperationAST * p = (cPtr_templateOrOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOrOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateOrOperationAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateOrOperationAST * p = (cPtr_templateOrOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOrOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
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

typeComparisonResult GALGAS_templateOrOperationAST_2D_weak::objectCompare (const GALGAS_templateOrOperationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOrOperationAST_2D_weak::GALGAS_templateOrOperationAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOrOperationAST_2D_weak & GALGAS_templateOrOperationAST_2D_weak::operator = (const GALGAS_templateOrOperationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOrOperationAST_2D_weak::GALGAS_templateOrOperationAST_2D_weak (const GALGAS_templateOrOperationAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOrOperationAST_2D_weak GALGAS_templateOrOperationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateOrOperationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOrOperationAST GALGAS_templateOrOperationAST_2D_weak::bang_templateOrOperationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateOrOperationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateOrOperationAST) ;
      result = GALGAS_templateOrOperationAST ((cPtr_templateOrOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateOrOperationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateOrOperationAST_2D_weak ("templateOrOperationAST-weak",
                                                       & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateOrOperationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOrOperationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateOrOperationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateOrOperationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOrOperationAST_2D_weak GALGAS_templateOrOperationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateOrOperationAST_2D_weak result ;
  const GALGAS_templateOrOperationAST_2D_weak * p = (const GALGAS_templateOrOperationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateOrOperationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateOrOperationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateXorOperationAST reference class
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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
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

GALGAS_location GALGAS_templateXorOperationAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateXorOperationAST * p = (cPtr_templateXorOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateXorOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateXorOperationAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateXorOperationAST * p = (cPtr_templateXorOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateXorOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateXorOperationAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateXorOperationAST * p = (cPtr_templateXorOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateXorOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
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

typeComparisonResult GALGAS_templateXorOperationAST_2D_weak::objectCompare (const GALGAS_templateXorOperationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateXorOperationAST_2D_weak::GALGAS_templateXorOperationAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateXorOperationAST_2D_weak & GALGAS_templateXorOperationAST_2D_weak::operator = (const GALGAS_templateXorOperationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateXorOperationAST_2D_weak::GALGAS_templateXorOperationAST_2D_weak (const GALGAS_templateXorOperationAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateXorOperationAST_2D_weak GALGAS_templateXorOperationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateXorOperationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateXorOperationAST GALGAS_templateXorOperationAST_2D_weak::bang_templateXorOperationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateXorOperationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateXorOperationAST) ;
      result = GALGAS_templateXorOperationAST ((cPtr_templateXorOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateXorOperationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateXorOperationAST_2D_weak ("templateXorOperationAST-weak",
                                                        & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateXorOperationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateXorOperationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateXorOperationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateXorOperationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateXorOperationAST_2D_weak GALGAS_templateXorOperationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateXorOperationAST_2D_weak result ;
  const GALGAS_templateXorOperationAST_2D_weak * p = (const GALGAS_templateXorOperationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateXorOperationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateXorOperationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateTrueBoolAST reference class
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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
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

GALGAS_location GALGAS_templateTrueBoolAST::readProperty_mLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateTrueBoolAST * p = (cPtr_templateTrueBoolAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTrueBoolAST) ;
    return p->mProperty_mLocation ;
  }
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

typeComparisonResult GALGAS_templateTrueBoolAST_2D_weak::objectCompare (const GALGAS_templateTrueBoolAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTrueBoolAST_2D_weak::GALGAS_templateTrueBoolAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTrueBoolAST_2D_weak & GALGAS_templateTrueBoolAST_2D_weak::operator = (const GALGAS_templateTrueBoolAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTrueBoolAST_2D_weak::GALGAS_templateTrueBoolAST_2D_weak (const GALGAS_templateTrueBoolAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTrueBoolAST_2D_weak GALGAS_templateTrueBoolAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateTrueBoolAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTrueBoolAST GALGAS_templateTrueBoolAST_2D_weak::bang_templateTrueBoolAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateTrueBoolAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateTrueBoolAST) ;
      result = GALGAS_templateTrueBoolAST ((cPtr_templateTrueBoolAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateTrueBoolAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateTrueBoolAST_2D_weak ("templateTrueBoolAST-weak",
                                                    & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateTrueBoolAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTrueBoolAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateTrueBoolAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateTrueBoolAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTrueBoolAST_2D_weak GALGAS_templateTrueBoolAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateTrueBoolAST_2D_weak result ;
  const GALGAS_templateTrueBoolAST_2D_weak * p = (const GALGAS_templateTrueBoolAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateTrueBoolAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateTrueBoolAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateFalseBoolAST reference class
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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
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

GALGAS_location GALGAS_templateFalseBoolAST::readProperty_mLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateFalseBoolAST * p = (cPtr_templateFalseBoolAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFalseBoolAST) ;
    return p->mProperty_mLocation ;
  }
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

typeComparisonResult GALGAS_templateFalseBoolAST_2D_weak::objectCompare (const GALGAS_templateFalseBoolAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFalseBoolAST_2D_weak::GALGAS_templateFalseBoolAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFalseBoolAST_2D_weak & GALGAS_templateFalseBoolAST_2D_weak::operator = (const GALGAS_templateFalseBoolAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFalseBoolAST_2D_weak::GALGAS_templateFalseBoolAST_2D_weak (const GALGAS_templateFalseBoolAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFalseBoolAST_2D_weak GALGAS_templateFalseBoolAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateFalseBoolAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFalseBoolAST GALGAS_templateFalseBoolAST_2D_weak::bang_templateFalseBoolAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateFalseBoolAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateFalseBoolAST) ;
      result = GALGAS_templateFalseBoolAST ((cPtr_templateFalseBoolAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateFalseBoolAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateFalseBoolAST_2D_weak ("templateFalseBoolAST-weak",
                                                     & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateFalseBoolAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFalseBoolAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateFalseBoolAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFalseBoolAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFalseBoolAST_2D_weak GALGAS_templateFalseBoolAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateFalseBoolAST_2D_weak result ;
  const GALGAS_templateFalseBoolAST_2D_weak * p = (const GALGAS_templateFalseBoolAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateFalseBoolAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFalseBoolAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateLiteralStringExpressionAST_2D_weak::objectCompare (const GALGAS_templateLiteralStringExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST_2D_weak::GALGAS_templateLiteralStringExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST_2D_weak & GALGAS_templateLiteralStringExpressionAST_2D_weak::operator = (const GALGAS_templateLiteralStringExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST_2D_weak::GALGAS_templateLiteralStringExpressionAST_2D_weak (const GALGAS_templateLiteralStringExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST_2D_weak GALGAS_templateLiteralStringExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLiteralStringExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST_2D_weak::bang_templateLiteralStringExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLiteralStringExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralStringExpressionAST) ;
      result = GALGAS_templateLiteralStringExpressionAST ((cPtr_templateLiteralStringExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralStringExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST_2D_weak ("templateLiteralStringExpressionAST-weak",
                                                                   & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralStringExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralStringExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralStringExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST_2D_weak GALGAS_templateLiteralStringExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralStringExpressionAST_2D_weak result ;
  const GALGAS_templateLiteralStringExpressionAST_2D_weak * p = (const GALGAS_templateLiteralStringExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralStringExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralStringExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateLiteralUIntExpressionAST_2D_weak::objectCompare (const GALGAS_templateLiteralUIntExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST_2D_weak::GALGAS_templateLiteralUIntExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST_2D_weak & GALGAS_templateLiteralUIntExpressionAST_2D_weak::operator = (const GALGAS_templateLiteralUIntExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST_2D_weak::GALGAS_templateLiteralUIntExpressionAST_2D_weak (const GALGAS_templateLiteralUIntExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST_2D_weak GALGAS_templateLiteralUIntExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLiteralUIntExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST GALGAS_templateLiteralUIntExpressionAST_2D_weak::bang_templateLiteralUIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLiteralUIntExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralUIntExpressionAST) ;
      result = GALGAS_templateLiteralUIntExpressionAST ((cPtr_templateLiteralUIntExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralUIntExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST_2D_weak ("templateLiteralUIntExpressionAST-weak",
                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralUIntExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralUIntExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralUIntExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST_2D_weak GALGAS_templateLiteralUIntExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUIntExpressionAST_2D_weak result ;
  const GALGAS_templateLiteralUIntExpressionAST_2D_weak * p = (const GALGAS_templateLiteralUIntExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralUIntExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralUIntExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateLiteralSIntExpressionAST_2D_weak::objectCompare (const GALGAS_templateLiteralSIntExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST_2D_weak::GALGAS_templateLiteralSIntExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST_2D_weak & GALGAS_templateLiteralSIntExpressionAST_2D_weak::operator = (const GALGAS_templateLiteralSIntExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST_2D_weak::GALGAS_templateLiteralSIntExpressionAST_2D_weak (const GALGAS_templateLiteralSIntExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST_2D_weak GALGAS_templateLiteralSIntExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLiteralSIntExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST GALGAS_templateLiteralSIntExpressionAST_2D_weak::bang_templateLiteralSIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLiteralSIntExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralSIntExpressionAST) ;
      result = GALGAS_templateLiteralSIntExpressionAST ((cPtr_templateLiteralSIntExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralSIntExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST_2D_weak ("templateLiteralSIntExpressionAST-weak",
                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralSIntExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralSIntExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralSIntExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST_2D_weak GALGAS_templateLiteralSIntExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralSIntExpressionAST_2D_weak result ;
  const GALGAS_templateLiteralSIntExpressionAST_2D_weak * p = (const GALGAS_templateLiteralSIntExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralSIntExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralSIntExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::objectCompare (const GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak & GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::operator = (const GALGAS_templateLiteralUInt_36__34_ExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak (const GALGAS_templateLiteralUInt_36__34_ExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::bang_templateLiteralUInt_36__34_ExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLiteralUInt_36__34_ExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
      result = GALGAS_templateLiteralUInt_36__34_ExpressionAST ((cPtr_templateLiteralUInt_36__34_ExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralUInt64ExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak ("templateLiteralUInt64ExpressionAST-weak",
                                                                         & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak result ;
  const GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak * p = (const GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralUInt64ExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::objectCompare (const GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak & GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::operator = (const GALGAS_templateLiteralSInt_36__34_ExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak (const GALGAS_templateLiteralSInt_36__34_ExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::bang_templateLiteralSInt_36__34_ExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLiteralSInt_36__34_ExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
      result = GALGAS_templateLiteralSInt_36__34_ExpressionAST ((cPtr_templateLiteralSInt_36__34_ExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralSInt64ExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak ("templateLiteralSInt64ExpressionAST-weak",
                                                                         & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak result ;
  const GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak * p = (const GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralSInt64ExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateLiteralCharExpressionAST_2D_weak::objectCompare (const GALGAS_templateLiteralCharExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST_2D_weak::GALGAS_templateLiteralCharExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST_2D_weak & GALGAS_templateLiteralCharExpressionAST_2D_weak::operator = (const GALGAS_templateLiteralCharExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST_2D_weak::GALGAS_templateLiteralCharExpressionAST_2D_weak (const GALGAS_templateLiteralCharExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST_2D_weak GALGAS_templateLiteralCharExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLiteralCharExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST GALGAS_templateLiteralCharExpressionAST_2D_weak::bang_templateLiteralCharExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLiteralCharExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralCharExpressionAST) ;
      result = GALGAS_templateLiteralCharExpressionAST ((cPtr_templateLiteralCharExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralCharExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST_2D_weak ("templateLiteralCharExpressionAST-weak",
                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralCharExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralCharExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralCharExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST_2D_weak GALGAS_templateLiteralCharExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralCharExpressionAST_2D_weak result ;
  const GALGAS_templateLiteralCharExpressionAST_2D_weak * p = (const GALGAS_templateLiteralCharExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralCharExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralCharExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateLiteralDoubleExpressionAST_2D_weak::objectCompare (const GALGAS_templateLiteralDoubleExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST_2D_weak::GALGAS_templateLiteralDoubleExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST_2D_weak & GALGAS_templateLiteralDoubleExpressionAST_2D_weak::operator = (const GALGAS_templateLiteralDoubleExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST_2D_weak::GALGAS_templateLiteralDoubleExpressionAST_2D_weak (const GALGAS_templateLiteralDoubleExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST_2D_weak GALGAS_templateLiteralDoubleExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLiteralDoubleExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST GALGAS_templateLiteralDoubleExpressionAST_2D_weak::bang_templateLiteralDoubleExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLiteralDoubleExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralDoubleExpressionAST) ;
      result = GALGAS_templateLiteralDoubleExpressionAST ((cPtr_templateLiteralDoubleExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralDoubleExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST_2D_weak ("templateLiteralDoubleExpressionAST-weak",
                                                                   & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralDoubleExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralDoubleExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralDoubleExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST_2D_weak GALGAS_templateLiteralDoubleExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralDoubleExpressionAST_2D_weak result ;
  const GALGAS_templateLiteralDoubleExpressionAST_2D_weak * p = (const GALGAS_templateLiteralDoubleExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralDoubleExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralDoubleExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::objectCompare (const GALGAS_structFieldAccessTemplateExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::GALGAS_structFieldAccessTemplateExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST_2D_weak & GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::operator = (const GALGAS_structFieldAccessTemplateExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::GALGAS_structFieldAccessTemplateExpressionAST_2D_weak (const GALGAS_structFieldAccessTemplateExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST_2D_weak GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_structFieldAccessTemplateExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::bang_structFieldAccessTemplateExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structFieldAccessTemplateExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structFieldAccessTemplateExpressionAST) ;
      result = GALGAS_structFieldAccessTemplateExpressionAST ((cPtr_structFieldAccessTemplateExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@structFieldAccessTemplateExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST_2D_weak ("structFieldAccessTemplateExpressionAST-weak",
                                                                       & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structFieldAccessTemplateExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST_2D_weak GALGAS_structFieldAccessTemplateExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessTemplateExpressionAST_2D_weak result ;
  const GALGAS_structFieldAccessTemplateExpressionAST_2D_weak * p = (const GALGAS_structFieldAccessTemplateExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structFieldAccessTemplateExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structFieldAccessTemplateExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateNotOperatorAST reference class
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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
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

GALGAS_location GALGAS_templateNotOperatorAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateNotOperatorAST * p = (cPtr_templateNotOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNotOperatorAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateNotOperatorAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateNotOperatorAST * p = (cPtr_templateNotOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNotOperatorAST) ;
    return p->mProperty_mExpression ;
  }
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

typeComparisonResult GALGAS_templateNotOperatorAST_2D_weak::objectCompare (const GALGAS_templateNotOperatorAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNotOperatorAST_2D_weak::GALGAS_templateNotOperatorAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNotOperatorAST_2D_weak & GALGAS_templateNotOperatorAST_2D_weak::operator = (const GALGAS_templateNotOperatorAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNotOperatorAST_2D_weak::GALGAS_templateNotOperatorAST_2D_weak (const GALGAS_templateNotOperatorAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNotOperatorAST_2D_weak GALGAS_templateNotOperatorAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateNotOperatorAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNotOperatorAST GALGAS_templateNotOperatorAST_2D_weak::bang_templateNotOperatorAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateNotOperatorAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateNotOperatorAST) ;
      result = GALGAS_templateNotOperatorAST ((cPtr_templateNotOperatorAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateNotOperatorAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateNotOperatorAST_2D_weak ("templateNotOperatorAST-weak",
                                                       & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateNotOperatorAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNotOperatorAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateNotOperatorAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateNotOperatorAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNotOperatorAST_2D_weak GALGAS_templateNotOperatorAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateNotOperatorAST_2D_weak result ;
  const GALGAS_templateNotOperatorAST_2D_weak * p = (const GALGAS_templateNotOperatorAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateNotOperatorAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateNotOperatorAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateLogicalNegateAST reference class
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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
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

GALGAS_location GALGAS_templateLogicalNegateAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateLogicalNegateAST * p = (cPtr_templateLogicalNegateAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLogicalNegateAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateLogicalNegateAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateLogicalNegateAST * p = (cPtr_templateLogicalNegateAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLogicalNegateAST) ;
    return p->mProperty_mExpression ;
  }
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

typeComparisonResult GALGAS_templateLogicalNegateAST_2D_weak::objectCompare (const GALGAS_templateLogicalNegateAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLogicalNegateAST_2D_weak::GALGAS_templateLogicalNegateAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLogicalNegateAST_2D_weak & GALGAS_templateLogicalNegateAST_2D_weak::operator = (const GALGAS_templateLogicalNegateAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLogicalNegateAST_2D_weak::GALGAS_templateLogicalNegateAST_2D_weak (const GALGAS_templateLogicalNegateAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLogicalNegateAST_2D_weak GALGAS_templateLogicalNegateAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLogicalNegateAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLogicalNegateAST GALGAS_templateLogicalNegateAST_2D_weak::bang_templateLogicalNegateAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLogicalNegateAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLogicalNegateAST) ;
      result = GALGAS_templateLogicalNegateAST ((cPtr_templateLogicalNegateAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLogicalNegateAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLogicalNegateAST_2D_weak ("templateLogicalNegateAST-weak",
                                                         & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLogicalNegateAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLogicalNegateAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLogicalNegateAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLogicalNegateAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLogicalNegateAST_2D_weak GALGAS_templateLogicalNegateAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLogicalNegateAST_2D_weak result ;
  const GALGAS_templateLogicalNegateAST_2D_weak * p = (const GALGAS_templateLogicalNegateAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLogicalNegateAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLogicalNegateAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateOptionAccessAST_2D_weak::objectCompare (const GALGAS_templateOptionAccessAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST_2D_weak::GALGAS_templateOptionAccessAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST_2D_weak & GALGAS_templateOptionAccessAST_2D_weak::operator = (const GALGAS_templateOptionAccessAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST_2D_weak::GALGAS_templateOptionAccessAST_2D_weak (const GALGAS_templateOptionAccessAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST_2D_weak GALGAS_templateOptionAccessAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateOptionAccessAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST_2D_weak::bang_templateOptionAccessAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateOptionAccessAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateOptionAccessAST) ;
      result = GALGAS_templateOptionAccessAST ((cPtr_templateOptionAccessAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateOptionAccessAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateOptionAccessAST_2D_weak ("templateOptionAccessAST-weak",
                                                        & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateOptionAccessAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateOptionAccessAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateOptionAccessAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST_2D_weak GALGAS_templateOptionAccessAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateOptionAccessAST_2D_weak result ;
  const GALGAS_templateOptionAccessAST_2D_weak * p = (const GALGAS_templateOptionAccessAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateOptionAccessAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateOptionAccessAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult GALGAS_templateTestDynamicClassAST_2D_weak::objectCompare (const GALGAS_templateTestDynamicClassAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST_2D_weak::GALGAS_templateTestDynamicClassAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST_2D_weak & GALGAS_templateTestDynamicClassAST_2D_weak::operator = (const GALGAS_templateTestDynamicClassAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST_2D_weak::GALGAS_templateTestDynamicClassAST_2D_weak (const GALGAS_templateTestDynamicClassAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST_2D_weak GALGAS_templateTestDynamicClassAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateTestDynamicClassAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST GALGAS_templateTestDynamicClassAST_2D_weak::bang_templateTestDynamicClassAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateTestDynamicClassAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateTestDynamicClassAST) ;
      result = GALGAS_templateTestDynamicClassAST ((cPtr_templateTestDynamicClassAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateTestDynamicClassAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateTestDynamicClassAST_2D_weak ("templateTestDynamicClassAST-weak",
                                                            & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateTestDynamicClassAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateTestDynamicClassAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateTestDynamicClassAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST_2D_weak GALGAS_templateTestDynamicClassAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateTestDynamicClassAST_2D_weak result ;
  const GALGAS_templateTestDynamicClassAST_2D_weak * p = (const GALGAS_templateTestDynamicClassAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateTestDynamicClassAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateTestDynamicClassAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateFunctionCallAST_2D_weak::objectCompare (const GALGAS_templateFunctionCallAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST_2D_weak::GALGAS_templateFunctionCallAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST_2D_weak & GALGAS_templateFunctionCallAST_2D_weak::operator = (const GALGAS_templateFunctionCallAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST_2D_weak::GALGAS_templateFunctionCallAST_2D_weak (const GALGAS_templateFunctionCallAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST_2D_weak GALGAS_templateFunctionCallAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateFunctionCallAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST GALGAS_templateFunctionCallAST_2D_weak::bang_templateFunctionCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateFunctionCallAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateFunctionCallAST) ;
      result = GALGAS_templateFunctionCallAST ((cPtr_templateFunctionCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateFunctionCallAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateFunctionCallAST_2D_weak ("templateFunctionCallAST-weak",
                                                        & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateFunctionCallAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateFunctionCallAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFunctionCallAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST_2D_weak GALGAS_templateFunctionCallAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateFunctionCallAST_2D_weak result ;
  const GALGAS_templateFunctionCallAST_2D_weak * p = (const GALGAS_templateFunctionCallAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateFunctionCallAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFunctionCallAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateVarInExpressionAST_2D_weak::objectCompare (const GALGAS_templateVarInExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST_2D_weak::GALGAS_templateVarInExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST_2D_weak & GALGAS_templateVarInExpressionAST_2D_weak::operator = (const GALGAS_templateVarInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST_2D_weak::GALGAS_templateVarInExpressionAST_2D_weak (const GALGAS_templateVarInExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST_2D_weak GALGAS_templateVarInExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateVarInExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST GALGAS_templateVarInExpressionAST_2D_weak::bang_templateVarInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateVarInExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateVarInExpressionAST) ;
      result = GALGAS_templateVarInExpressionAST ((cPtr_templateVarInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateVarInExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateVarInExpressionAST_2D_weak ("templateVarInExpressionAST-weak",
                                                           & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateVarInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateVarInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateVarInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST_2D_weak GALGAS_templateVarInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateVarInExpressionAST_2D_weak result ;
  const GALGAS_templateVarInExpressionAST_2D_weak * p = (const GALGAS_templateVarInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateVarInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVarInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateAddOperationAST reference class
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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
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

GALGAS_location GALGAS_templateAddOperationAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateAddOperationAST * p = (cPtr_templateAddOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateAddOperationAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateAddOperationAST * p = (cPtr_templateAddOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateAddOperationAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateAddOperationAST * p = (cPtr_templateAddOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
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

typeComparisonResult GALGAS_templateAddOperationAST_2D_weak::objectCompare (const GALGAS_templateAddOperationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAddOperationAST_2D_weak::GALGAS_templateAddOperationAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAddOperationAST_2D_weak & GALGAS_templateAddOperationAST_2D_weak::operator = (const GALGAS_templateAddOperationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAddOperationAST_2D_weak::GALGAS_templateAddOperationAST_2D_weak (const GALGAS_templateAddOperationAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAddOperationAST_2D_weak GALGAS_templateAddOperationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateAddOperationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAddOperationAST GALGAS_templateAddOperationAST_2D_weak::bang_templateAddOperationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateAddOperationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateAddOperationAST) ;
      result = GALGAS_templateAddOperationAST ((cPtr_templateAddOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateAddOperationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateAddOperationAST_2D_weak ("templateAddOperationAST-weak",
                                                        & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateAddOperationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAddOperationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateAddOperationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateAddOperationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAddOperationAST_2D_weak GALGAS_templateAddOperationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateAddOperationAST_2D_weak result ;
  const GALGAS_templateAddOperationAST_2D_weak * p = (const GALGAS_templateAddOperationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateAddOperationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateAddOperationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateSubOperationAST reference class
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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
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

GALGAS_location GALGAS_templateSubOperationAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateSubOperationAST * p = (cPtr_templateSubOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateSubOperationAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateSubOperationAST * p = (cPtr_templateSubOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateSubOperationAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateSubOperationAST * p = (cPtr_templateSubOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
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

typeComparisonResult GALGAS_templateSubOperationAST_2D_weak::objectCompare (const GALGAS_templateSubOperationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSubOperationAST_2D_weak::GALGAS_templateSubOperationAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSubOperationAST_2D_weak & GALGAS_templateSubOperationAST_2D_weak::operator = (const GALGAS_templateSubOperationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSubOperationAST_2D_weak::GALGAS_templateSubOperationAST_2D_weak (const GALGAS_templateSubOperationAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSubOperationAST_2D_weak GALGAS_templateSubOperationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateSubOperationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSubOperationAST GALGAS_templateSubOperationAST_2D_weak::bang_templateSubOperationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateSubOperationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateSubOperationAST) ;
      result = GALGAS_templateSubOperationAST ((cPtr_templateSubOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateSubOperationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateSubOperationAST_2D_weak ("templateSubOperationAST-weak",
                                                        & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateSubOperationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSubOperationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateSubOperationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateSubOperationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSubOperationAST_2D_weak GALGAS_templateSubOperationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateSubOperationAST_2D_weak result ;
  const GALGAS_templateSubOperationAST_2D_weak * p = (const GALGAS_templateSubOperationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateSubOperationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateSubOperationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateMultiplyOperationAST reference class
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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
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

GALGAS_location GALGAS_templateMultiplyOperationAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateMultiplyOperationAST * p = (cPtr_templateMultiplyOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateMultiplyOperationAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateMultiplyOperationAST * p = (cPtr_templateMultiplyOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateMultiplyOperationAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateMultiplyOperationAST * p = (cPtr_templateMultiplyOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
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

typeComparisonResult GALGAS_templateMultiplyOperationAST_2D_weak::objectCompare (const GALGAS_templateMultiplyOperationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateMultiplyOperationAST_2D_weak::GALGAS_templateMultiplyOperationAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateMultiplyOperationAST_2D_weak & GALGAS_templateMultiplyOperationAST_2D_weak::operator = (const GALGAS_templateMultiplyOperationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateMultiplyOperationAST_2D_weak::GALGAS_templateMultiplyOperationAST_2D_weak (const GALGAS_templateMultiplyOperationAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateMultiplyOperationAST_2D_weak GALGAS_templateMultiplyOperationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateMultiplyOperationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateMultiplyOperationAST GALGAS_templateMultiplyOperationAST_2D_weak::bang_templateMultiplyOperationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateMultiplyOperationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateMultiplyOperationAST) ;
      result = GALGAS_templateMultiplyOperationAST ((cPtr_templateMultiplyOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateMultiplyOperationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateMultiplyOperationAST_2D_weak ("templateMultiplyOperationAST-weak",
                                                             & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateMultiplyOperationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateMultiplyOperationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateMultiplyOperationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateMultiplyOperationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateMultiplyOperationAST_2D_weak GALGAS_templateMultiplyOperationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateMultiplyOperationAST_2D_weak result ;
  const GALGAS_templateMultiplyOperationAST_2D_weak * p = (const GALGAS_templateMultiplyOperationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateMultiplyOperationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateMultiplyOperationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateDivideOperationAST reference class
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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
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

GALGAS_location GALGAS_templateDivideOperationAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateDivideOperationAST * p = (cPtr_templateDivideOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateDivideOperationAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateDivideOperationAST * p = (cPtr_templateDivideOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateDivideOperationAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateDivideOperationAST * p = (cPtr_templateDivideOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
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

typeComparisonResult GALGAS_templateDivideOperationAST_2D_weak::objectCompare (const GALGAS_templateDivideOperationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDivideOperationAST_2D_weak::GALGAS_templateDivideOperationAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDivideOperationAST_2D_weak & GALGAS_templateDivideOperationAST_2D_weak::operator = (const GALGAS_templateDivideOperationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDivideOperationAST_2D_weak::GALGAS_templateDivideOperationAST_2D_weak (const GALGAS_templateDivideOperationAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDivideOperationAST_2D_weak GALGAS_templateDivideOperationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateDivideOperationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDivideOperationAST GALGAS_templateDivideOperationAST_2D_weak::bang_templateDivideOperationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateDivideOperationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateDivideOperationAST) ;
      result = GALGAS_templateDivideOperationAST ((cPtr_templateDivideOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateDivideOperationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateDivideOperationAST_2D_weak ("templateDivideOperationAST-weak",
                                                           & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateDivideOperationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDivideOperationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateDivideOperationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateDivideOperationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateDivideOperationAST_2D_weak GALGAS_templateDivideOperationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateDivideOperationAST_2D_weak result ;
  const GALGAS_templateDivideOperationAST_2D_weak * p = (const GALGAS_templateDivideOperationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateDivideOperationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDivideOperationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateModuloOperationAST reference class
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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
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

GALGAS_location GALGAS_templateModuloOperationAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateModuloOperationAST * p = (cPtr_templateModuloOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateModuloOperationAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateModuloOperationAST * p = (cPtr_templateModuloOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateModuloOperationAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateModuloOperationAST * p = (cPtr_templateModuloOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
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

typeComparisonResult GALGAS_templateModuloOperationAST_2D_weak::objectCompare (const GALGAS_templateModuloOperationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateModuloOperationAST_2D_weak::GALGAS_templateModuloOperationAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateModuloOperationAST_2D_weak & GALGAS_templateModuloOperationAST_2D_weak::operator = (const GALGAS_templateModuloOperationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateModuloOperationAST_2D_weak::GALGAS_templateModuloOperationAST_2D_weak (const GALGAS_templateModuloOperationAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateModuloOperationAST_2D_weak GALGAS_templateModuloOperationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateModuloOperationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateModuloOperationAST GALGAS_templateModuloOperationAST_2D_weak::bang_templateModuloOperationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateModuloOperationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateModuloOperationAST) ;
      result = GALGAS_templateModuloOperationAST ((cPtr_templateModuloOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateModuloOperationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateModuloOperationAST_2D_weak ("templateModuloOperationAST-weak",
                                                           & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateModuloOperationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateModuloOperationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateModuloOperationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateModuloOperationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateModuloOperationAST_2D_weak GALGAS_templateModuloOperationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateModuloOperationAST_2D_weak result ;
  const GALGAS_templateModuloOperationAST_2D_weak * p = (const GALGAS_templateModuloOperationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateModuloOperationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateModuloOperationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateUnaryMinusOperationAST reference class
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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
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

GALGAS_location GALGAS_templateUnaryMinusOperationAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateUnaryMinusOperationAST * p = (cPtr_templateUnaryMinusOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateUnaryMinusOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateUnaryMinusOperationAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateUnaryMinusOperationAST * p = (cPtr_templateUnaryMinusOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateUnaryMinusOperationAST) ;
    return p->mProperty_mExpression ;
  }
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

typeComparisonResult GALGAS_templateUnaryMinusOperationAST_2D_weak::objectCompare (const GALGAS_templateUnaryMinusOperationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateUnaryMinusOperationAST_2D_weak::GALGAS_templateUnaryMinusOperationAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateUnaryMinusOperationAST_2D_weak & GALGAS_templateUnaryMinusOperationAST_2D_weak::operator = (const GALGAS_templateUnaryMinusOperationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateUnaryMinusOperationAST_2D_weak::GALGAS_templateUnaryMinusOperationAST_2D_weak (const GALGAS_templateUnaryMinusOperationAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateUnaryMinusOperationAST_2D_weak GALGAS_templateUnaryMinusOperationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateUnaryMinusOperationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateUnaryMinusOperationAST GALGAS_templateUnaryMinusOperationAST_2D_weak::bang_templateUnaryMinusOperationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateUnaryMinusOperationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateUnaryMinusOperationAST) ;
      result = GALGAS_templateUnaryMinusOperationAST ((cPtr_templateUnaryMinusOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateUnaryMinusOperationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST_2D_weak ("templateUnaryMinusOperationAST-weak",
                                                               & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateUnaryMinusOperationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateUnaryMinusOperationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateUnaryMinusOperationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateUnaryMinusOperationAST_2D_weak GALGAS_templateUnaryMinusOperationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateUnaryMinusOperationAST_2D_weak result ;
  const GALGAS_templateUnaryMinusOperationAST_2D_weak * p = (const GALGAS_templateUnaryMinusOperationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateUnaryMinusOperationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateUnaryMinusOperationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateEqualTestAST reference class
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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
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

GALGAS_location GALGAS_templateEqualTestAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateEqualTestAST * p = (cPtr_templateEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateEqualTestAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateEqualTestAST * p = (cPtr_templateEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateEqualTestAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateEqualTestAST * p = (cPtr_templateEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
    return p->mProperty_mRightExpression ;
  }
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

