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

cTokenFor_galgasScanner::cTokenFor_galgasScanner (void) :
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

C_Lexique_galgasScanner::C_Lexique_galgasScanner (C_Compiler * inCallerCompiler,
                                                  const C_String & inSourceFileName
                                                  COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_galgasScanner::C_Lexique_galgasScanner (C_Compiler * inCallerCompiler,
                                                  const C_String & inSourceString,
                                                  const C_String & inStringForError
                                                  COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------
//                 I N D E X I N G    D I R E C T O R Y                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasScanner::indexingDirectory (void) const {
  return "../build/indexes" ;
}

//----------------------------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//----------------------------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_galgasScanner_attributeError = "in an attribute name, a letter or a digit should follow the '%' character" ;

static const char * gLexicalMessage_galgasScanner_floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_galgasScanner_hexDigitError = "0x should be followed by a hexadecimal digit" ;

static const char * gLexicalMessage_galgasScanner_incorrectCharConstant = "incorrect literal character" ;

static const char * gLexicalMessage_galgasScanner_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_galgasScanner_incorrectTypeNameError = "in a type name, a letter, a digit or the underscore character should follow the '@' character" ;

static const char * gLexicalMessage_galgasScanner_incorrect_terminal_end = "terminal does not end with '$'" ;

static const char * gLexicalMessage_galgasScanner_incorrect_terminal_start = "incorrect terminal start" ;

static const char * gLexicalMessage_galgasScanner_internalError = "internal error" ;

static const char * gLexicalMessage_galgasScanner_invalideUnicodeDefinition4 = "\\u should be followed by exactly four hexadecimal digits" ;

static const char * gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 = "\\U should be followed by exactly eight hexadecimal digits" ;

static const char * gLexicalMessage_galgasScanner_unassignedUnicodeValue = "this value does not correspond to an assigned Unicode point" ;

//----------------------------------------------------------------------------------------------------------------------
//          Syntax error messages, for every terminal symbol                                     
//----------------------------------------------------------------------------------------------------------------------

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_galgasScanner_identifier = "an identifier" ;

//--- Syntax error message for terminal '$double.xxx$' :
static const char * gSyntaxErrorMessage_galgasScanner_double_2E_xxx = "a float number" ;

//--- Syntax error message for terminal '$literalInt$' :
static const char * gSyntaxErrorMessage_galgasScanner_literalInt = "a big integer number" ;

//--- Syntax error message for terminal '$.$' :
static const char * gSyntaxErrorMessage_galgasScanner__2E_ = "the '.' delimitor" ;

//--- Syntax error message for terminal '$...$' :
static const char * gSyntaxErrorMessage_galgasScanner__2E__2E__2E_ = "the '...' delimitor" ;

//--- Syntax error message for terminal '$..<$' :
static const char * gSyntaxErrorMessage_galgasScanner__2E__2E__3C_ = "the '..<' delimitor" ;

//--- Syntax error message for terminal '$@type$' :
static const char * gSyntaxErrorMessage_galgasScanner__40_type = "a type name (@...)" ;

//--- Syntax error message for terminal '$%attribute$' :
static const char * gSyntaxErrorMessage_galgasScanner__25_attribute = "an attribute (%...)" ;

//--- Syntax error message for terminal '$'char'$' :
static const char * gSyntaxErrorMessage_galgasScanner__27_char_27_ = "a character constant" ;

//--- Syntax error message for terminal '$$terminal$$' :
static const char * gSyntaxErrorMessage_galgasScanner__24_terminal_24_ = "a terminal symbol ($...$)" ;

//--- Syntax error message for terminal '$?$' :
static const char * gSyntaxErrorMessage_galgasScanner__3F_ = "the '\?' or '\?selector:' delimitor" ;

//--- Syntax error message for terminal '$?!$' :
static const char * gSyntaxErrorMessage_galgasScanner__3F__21_ = "the '\?!' or '\?!selector:' delimitor" ;

//--- Syntax error message for terminal '$!$' :
static const char * gSyntaxErrorMessage_galgasScanner__21_ = "the '!' or '!selector:' delimitor" ;

//--- Syntax error message for terminal '$!?$' :
static const char * gSyntaxErrorMessage_galgasScanner__21__3F_ = "the '!\?' or '!\?selector:' delimitor" ;

//--- Syntax error message for terminal '$<$' :
static const char * gSyntaxErrorMessage_galgasScanner__3C_ = "the '<' delimitor" ;

//--- Syntax error message for terminal '$<=$' :
static const char * gSyntaxErrorMessage_galgasScanner__3C__3D_ = "the '<=' delimitor" ;

//--- Syntax error message for terminal '$<<$' :
static const char * gSyntaxErrorMessage_galgasScanner__3C__3C_ = "the '<<' delimitor" ;

//--- Syntax error message for terminal '$<non_terminal>$' :
static const char * gSyntaxErrorMessage_galgasScanner__3C_non_5F_terminal_3E_ = "a non terminal symbol <...>" ;

//--- Syntax error message for terminal '$"string"$' :
static const char * gSyntaxErrorMessage_galgasScanner__22_string_22_ = "a character string constant \"...\"" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_galgasScanner_comment = "a comment" ;

//--- Syntax error message for terminal '$commentMark$' :
static const char * gSyntaxErrorMessage_galgasScanner_commentMark = "a comment" ;

//--- Syntax error message for terminal '$abstract$' :
static const char * gSyntaxErrorMessage_galgasScanner_abstract = "the 'abstract' keyword" ;

//--- Syntax error message for terminal '$after$' :
static const char * gSyntaxErrorMessage_galgasScanner_after = "the 'after' keyword" ;

//--- Syntax error message for terminal '$array$' :
static const char * gSyntaxErrorMessage_galgasScanner_array = "the 'array' keyword" ;

//--- Syntax error message for terminal '$as$' :
static const char * gSyntaxErrorMessage_galgasScanner_as = "the 'as' keyword" ;

//--- Syntax error message for terminal '$bang$' :
static const char * gSyntaxErrorMessage_galgasScanner_bang = "the 'bang' keyword" ;

//--- Syntax error message for terminal '$before$' :
static const char * gSyntaxErrorMessage_galgasScanner_before = "the 'before' keyword" ;

//--- Syntax error message for terminal '$between$' :
static const char * gSyntaxErrorMessage_galgasScanner_between = "the 'between' keyword" ;

//--- Syntax error message for terminal '$block$' :
static const char * gSyntaxErrorMessage_galgasScanner_block = "the 'block' keyword" ;

//--- Syntax error message for terminal '$boolset$' :
static const char * gSyntaxErrorMessage_galgasScanner_boolset = "the 'boolset' keyword" ;

//--- Syntax error message for terminal '$cast$' :
static const char * gSyntaxErrorMessage_galgasScanner_cast = "the 'cast' keyword" ;

//--- Syntax error message for terminal '$case$' :
static const char * gSyntaxErrorMessage_galgasScanner_case = "the 'case' keyword" ;

//--- Syntax error message for terminal '$class$' :
static const char * gSyntaxErrorMessage_galgasScanner_class = "the 'class' keyword" ;

//--- Syntax error message for terminal '$constructor$' :
static const char * gSyntaxErrorMessage_galgasScanner_constructor = "the 'constructor' keyword" ;

//--- Syntax error message for terminal '$default$' :
static const char * gSyntaxErrorMessage_galgasScanner_default = "the 'default' keyword" ;

//--- Syntax error message for terminal '$dict$' :
static const char * gSyntaxErrorMessage_galgasScanner_dict = "the 'dict' keyword" ;

//--- Syntax error message for terminal '$do$' :
static const char * gSyntaxErrorMessage_galgasScanner_do = "the 'do' keyword" ;

//--- Syntax error message for terminal '$drop$' :
static const char * gSyntaxErrorMessage_galgasScanner_drop = "the 'drop' keyword" ;

//--- Syntax error message for terminal '$else$' :
static const char * gSyntaxErrorMessage_galgasScanner_else = "the 'else' keyword" ;

//--- Syntax error message for terminal '$elsif$' :
static const char * gSyntaxErrorMessage_galgasScanner_elsif = "the 'elsif' keyword" ;

//--- Syntax error message for terminal '$end$' :
static const char * gSyntaxErrorMessage_galgasScanner_end = "the 'end' keyword" ;

//--- Syntax error message for terminal '$enum$' :
static const char * gSyntaxErrorMessage_galgasScanner_enum = "the 'enum' keyword" ;

//--- Syntax error message for terminal '$error$' :
static const char * gSyntaxErrorMessage_galgasScanner_error = "the 'error' keyword" ;

//--- Syntax error message for terminal '$extension$' :
static const char * gSyntaxErrorMessage_galgasScanner_extension = "the 'extension' keyword" ;

//--- Syntax error message for terminal '$extern$' :
static const char * gSyntaxErrorMessage_galgasScanner_extern = "the 'extern' keyword" ;

//--- Syntax error message for terminal '$false$' :
static const char * gSyntaxErrorMessage_galgasScanner_false = "the 'false' keyword" ;

//--- Syntax error message for terminal '$filewrapper$' :
static const char * gSyntaxErrorMessage_galgasScanner_filewrapper = "the 'filewrapper' keyword" ;

//--- Syntax error message for terminal '$for$' :
static const char * gSyntaxErrorMessage_galgasScanner_for = "the 'for' keyword" ;

//--- Syntax error message for terminal '$fixit$' :
static const char * gSyntaxErrorMessage_galgasScanner_fixit = "the 'fixit' keyword" ;

//--- Syntax error message for terminal '$func$' :
static const char * gSyntaxErrorMessage_galgasScanner_func = "the 'func' keyword" ;

//--- Syntax error message for terminal '$getter$' :
static const char * gSyntaxErrorMessage_galgasScanner_getter = "the 'getter' keyword" ;

//--- Syntax error message for terminal '$grammar$' :
static const char * gSyntaxErrorMessage_galgasScanner_grammar = "the 'grammar' keyword" ;

//--- Syntax error message for terminal '$graph$' :
static const char * gSyntaxErrorMessage_galgasScanner_graph = "the 'graph' keyword" ;

//--- Syntax error message for terminal '$gui$' :
static const char * gSyntaxErrorMessage_galgasScanner_gui = "the 'gui' keyword" ;

//--- Syntax error message for terminal '$if$' :
static const char * gSyntaxErrorMessage_galgasScanner_if = "the 'if' keyword" ;

//--- Syntax error message for terminal '$in$' :
static const char * gSyntaxErrorMessage_galgasScanner_in = "the 'in' keyword" ;

//--- Syntax error message for terminal '$indexing$' :
static const char * gSyntaxErrorMessage_galgasScanner_indexing = "the 'indexing' keyword" ;

//--- Syntax error message for terminal '$insert$' :
static const char * gSyntaxErrorMessage_galgasScanner_insert = "the 'insert' keyword" ;

//--- Syntax error message for terminal '$is$' :
static const char * gSyntaxErrorMessage_galgasScanner_is = "the 'is' keyword" ;

//--- Syntax error message for terminal '$label$' :
static const char * gSyntaxErrorMessage_galgasScanner_label = "the 'label' keyword" ;

//--- Syntax error message for terminal '$let$' :
static const char * gSyntaxErrorMessage_galgasScanner_let = "the 'let' keyword" ;

//--- Syntax error message for terminal '$lexique$' :
static const char * gSyntaxErrorMessage_galgasScanner_lexique = "the 'lexique' keyword" ;

//--- Syntax error message for terminal '$list$' :
static const char * gSyntaxErrorMessage_galgasScanner_list = "the 'list' keyword" ;

//--- Syntax error message for terminal '$listmap$' :
static const char * gSyntaxErrorMessage_galgasScanner_listmap = "the 'listmap' keyword" ;

//--- Syntax error message for terminal '$log$' :
static const char * gSyntaxErrorMessage_galgasScanner_log = "the 'log' keyword" ;

//--- Syntax error message for terminal '$loop$' :
static const char * gSyntaxErrorMessage_galgasScanner_loop = "the 'loop' keyword" ;

//--- Syntax error message for terminal '$map$' :
static const char * gSyntaxErrorMessage_galgasScanner_map = "the 'map' keyword" ;

//--- Syntax error message for terminal '$message$' :
static const char * gSyntaxErrorMessage_galgasScanner_message = "the 'message' keyword" ;

//--- Syntax error message for terminal '$method$' :
static const char * gSyntaxErrorMessage_galgasScanner_method = "the 'method' keyword" ;

//--- Syntax error message for terminal '$mod$' :
static const char * gSyntaxErrorMessage_galgasScanner_mod = "the 'mod' keyword" ;

//--- Syntax error message for terminal '$mutating$' :
static const char * gSyntaxErrorMessage_galgasScanner_mutating = "the 'mutating' keyword" ;

//--- Syntax error message for terminal '$not$' :
static const char * gSyntaxErrorMessage_galgasScanner_not = "the 'not' keyword" ;

//--- Syntax error message for terminal '$on$' :
static const char * gSyntaxErrorMessage_galgasScanner_on = "the 'on' keyword" ;

//--- Syntax error message for terminal '$operator$' :
static const char * gSyntaxErrorMessage_galgasScanner_operator = "the 'operator' keyword" ;

//--- Syntax error message for terminal '$option$' :
static const char * gSyntaxErrorMessage_galgasScanner_option = "the 'option' keyword" ;

//--- Syntax error message for terminal '$or$' :
static const char * gSyntaxErrorMessage_galgasScanner_or = "the 'or' keyword" ;

//--- Syntax error message for terminal '$override$' :
static const char * gSyntaxErrorMessage_galgasScanner_override = "the 'override' keyword" ;

//--- Syntax error message for terminal '$parse$' :
static const char * gSyntaxErrorMessage_galgasScanner_parse = "the 'parse' keyword" ;

//--- Syntax error message for terminal '$public$' :
static const char * gSyntaxErrorMessage_galgasScanner_public = "the 'public' keyword" ;

//--- Syntax error message for terminal '$private$' :
static const char * gSyntaxErrorMessage_galgasScanner_private = "the 'private' keyword" ;

//--- Syntax error message for terminal '$proc$' :
static const char * gSyntaxErrorMessage_galgasScanner_proc = "the 'proc' keyword" ;

//--- Syntax error message for terminal '$project$' :
static const char * gSyntaxErrorMessage_galgasScanner_project = "the 'project' keyword" ;

//--- Syntax error message for terminal '$refclass$' :
static const char * gSyntaxErrorMessage_galgasScanner_refclass = "the 'refclass' keyword" ;

//--- Syntax error message for terminal '$remove$' :
static const char * gSyntaxErrorMessage_galgasScanner_remove = "the 'remove' keyword" ;

//--- Syntax error message for terminal '$replace$' :
static const char * gSyntaxErrorMessage_galgasScanner_replace = "the 'replace' keyword" ;

//--- Syntax error message for terminal '$repeat$' :
static const char * gSyntaxErrorMessage_galgasScanner_repeat = "the 'repeat' keyword" ;

//--- Syntax error message for terminal '$rewind$' :
static const char * gSyntaxErrorMessage_galgasScanner_rewind = "the 'rewind' keyword" ;

//--- Syntax error message for terminal '$rule$' :
static const char * gSyntaxErrorMessage_galgasScanner_rule = "the 'rule' keyword" ;

//--- Syntax error message for terminal '$search$' :
static const char * gSyntaxErrorMessage_galgasScanner_search = "the 'search' keyword" ;

//--- Syntax error message for terminal '$select$' :
static const char * gSyntaxErrorMessage_galgasScanner_select = "the 'select' keyword" ;

//--- Syntax error message for terminal '$self$' :
static const char * gSyntaxErrorMessage_galgasScanner_self = "the 'self' keyword" ;

//--- Syntax error message for terminal '$send$' :
static const char * gSyntaxErrorMessage_galgasScanner_send = "the 'send' keyword" ;

//--- Syntax error message for terminal '$setter$' :
static const char * gSyntaxErrorMessage_galgasScanner_setter = "the 'setter' keyword" ;

//--- Syntax error message for terminal '$sortedlist$' :
static const char * gSyntaxErrorMessage_galgasScanner_sortedlist = "the 'sortedlist' keyword" ;

//--- Syntax error message for terminal '$struct$' :
static const char * gSyntaxErrorMessage_galgasScanner_struct = "the 'struct' keyword" ;

//--- Syntax error message for terminal '$style$' :
static const char * gSyntaxErrorMessage_galgasScanner_style = "the 'style' keyword" ;

//--- Syntax error message for terminal '$switch$' :
static const char * gSyntaxErrorMessage_galgasScanner_switch = "the 'switch' keyword" ;

//--- Syntax error message for terminal '$syntax$' :
static const char * gSyntaxErrorMessage_galgasScanner_syntax = "the 'syntax' keyword" ;

//--- Syntax error message for terminal '$tag$' :
static const char * gSyntaxErrorMessage_galgasScanner_tag = "the 'tag' keyword" ;

//--- Syntax error message for terminal '$template$' :
static const char * gSyntaxErrorMessage_galgasScanner_template = "the 'template' keyword" ;

//--- Syntax error message for terminal '$then$' :
static const char * gSyntaxErrorMessage_galgasScanner_then = "the 'then' keyword" ;

//--- Syntax error message for terminal '$true$' :
static const char * gSyntaxErrorMessage_galgasScanner_true = "the 'true' keyword" ;

//--- Syntax error message for terminal '$unused$' :
static const char * gSyntaxErrorMessage_galgasScanner_unused = "the 'unused' keyword" ;

//--- Syntax error message for terminal '$var$' :
static const char * gSyntaxErrorMessage_galgasScanner_var = "the 'var' keyword" ;

//--- Syntax error message for terminal '$valueclass$' :
static const char * gSyntaxErrorMessage_galgasScanner_valueclass = "the 'valueclass' keyword" ;

//--- Syntax error message for terminal '$warning$' :
static const char * gSyntaxErrorMessage_galgasScanner_warning = "the 'warning' keyword" ;

//--- Syntax error message for terminal '$while$' :
static const char * gSyntaxErrorMessage_galgasScanner_while = "the 'while' keyword" ;

//--- Syntax error message for terminal '$with$' :
static const char * gSyntaxErrorMessage_galgasScanner_with = "the 'with' keyword" ;

//--- Syntax error message for terminal '$*$' :
static const char * gSyntaxErrorMessage_galgasScanner__2A_ = "the '*' delimitor" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_galgasScanner__2C_ = "the ',' delimitor" ;

//--- Syntax error message for terminal '$+$' :
static const char * gSyntaxErrorMessage_galgasScanner__2B_ = "the '+' delimitor" ;

//--- Syntax error message for terminal '$&+$' :
static const char * gSyntaxErrorMessage_galgasScanner__26__2B_ = "the '&+' delimitor" ;

//--- Syntax error message for terminal '$&-$' :
static const char * gSyntaxErrorMessage_galgasScanner__26__2D_ = "the '&-' delimitor" ;

//--- Syntax error message for terminal '$&*$' :
static const char * gSyntaxErrorMessage_galgasScanner__26__2A_ = "the '&*' delimitor" ;

//--- Syntax error message for terminal '$&/$' :
static const char * gSyntaxErrorMessage_galgasScanner__26__2F_ = "the '&/' delimitor" ;

//--- Syntax error message for terminal '$>$' :
static const char * gSyntaxErrorMessage_galgasScanner__3E_ = "the '>' delimitor" ;

//--- Syntax error message for terminal '$;$' :
static const char * gSyntaxErrorMessage_galgasScanner__3B_ = "the ';' delimitor" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_galgasScanner__3A_ = "the ':' delimitor" ;

//--- Syntax error message for terminal '$:>$' :
static const char * gSyntaxErrorMessage_galgasScanner__3A__3E_ = "the ':>' delimitor" ;

//--- Syntax error message for terminal '$-$' :
static const char * gSyntaxErrorMessage_galgasScanner__2D_ = "the '-' delimitor" ;

//--- Syntax error message for terminal '$($' :
static const char * gSyntaxErrorMessage_galgasScanner__28_ = "the '(' delimitor" ;

//--- Syntax error message for terminal '$)$' :
static const char * gSyntaxErrorMessage_galgasScanner__29_ = "the ')' delimitor" ;

//--- Syntax error message for terminal '$->$' :
static const char * gSyntaxErrorMessage_galgasScanner__2D__3E_ = "the '->' delimitor" ;

//--- Syntax error message for terminal '$==$' :
static const char * gSyntaxErrorMessage_galgasScanner__3D__3D_ = "the '==' delimitor" ;

//--- Syntax error message for terminal '$=$' :
static const char * gSyntaxErrorMessage_galgasScanner__3D_ = "the '=' delimitor" ;

//--- Syntax error message for terminal '$&&$' :
static const char * gSyntaxErrorMessage_galgasScanner__26__26_ = "the '&&' delimitor" ;

//--- Syntax error message for terminal '$[$' :
static const char * gSyntaxErrorMessage_galgasScanner__5B_ = "the '[' delimitor" ;

//--- Syntax error message for terminal '$]$' :
static const char * gSyntaxErrorMessage_galgasScanner__5D_ = "the ']' delimitor" ;

//--- Syntax error message for terminal '$+=$' :
static const char * gSyntaxErrorMessage_galgasScanner__2B__3D_ = "the '+=' delimitor" ;

//--- Syntax error message for terminal '$-=$' :
static const char * gSyntaxErrorMessage_galgasScanner__2D__3D_ = "the '-=' delimitor" ;

//--- Syntax error message for terminal '$*=$' :
static const char * gSyntaxErrorMessage_galgasScanner__2A__3D_ = "the '*=' delimitor" ;

//--- Syntax error message for terminal '$/=$' :
static const char * gSyntaxErrorMessage_galgasScanner__2F__3D_ = "the '/=' delimitor" ;

//--- Syntax error message for terminal '$/$' :
static const char * gSyntaxErrorMessage_galgasScanner__2F_ = "the '/' delimitor" ;

//--- Syntax error message for terminal '$!=$' :
static const char * gSyntaxErrorMessage_galgasScanner__21__3D_ = "the '!=' delimitor" ;

//--- Syntax error message for terminal '$>=$' :
static const char * gSyntaxErrorMessage_galgasScanner__3E__3D_ = "the '>=' delimitor" ;

//--- Syntax error message for terminal '$&$' :
static const char * gSyntaxErrorMessage_galgasScanner__26_ = "the '&' delimitor" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_galgasScanner__7B_ = "the '{' delimitor" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_galgasScanner__7D_ = "the '}' delimitor" ;

//--- Syntax error message for terminal '$`$' :
static const char * gSyntaxErrorMessage_galgasScanner__60_ = "the '`' delimitor" ;

//--- Syntax error message for terminal '$||$' :
static const char * gSyntaxErrorMessage_galgasScanner__7C__7C_ = "the '||' delimitor" ;

//--- Syntax error message for terminal '$|$' :
static const char * gSyntaxErrorMessage_galgasScanner__7C_ = "the '|' delimitor" ;

//--- Syntax error message for terminal '$^$' :
static const char * gSyntaxErrorMessage_galgasScanner__5E_ = "the '^' delimitor" ;

//--- Syntax error message for terminal '$>>$' :
static const char * gSyntaxErrorMessage_galgasScanner__3E__3E_ = "the '>>' delimitor" ;

//--- Syntax error message for terminal '$~$' :
static const char * gSyntaxErrorMessage_galgasScanner__7E_ = "the '~' delimitor" ;

//--- Syntax error message for terminal '$--$' :
static const char * gSyntaxErrorMessage_galgasScanner__2D__2D_ = "the '--' delimitor" ;

//--- Syntax error message for terminal '$++$' :
static const char * gSyntaxErrorMessage_galgasScanner__2B__2B_ = "the '++' delimitor" ;

//--- Syntax error message for terminal '$&--$' :
static const char * gSyntaxErrorMessage_galgasScanner__26__2D__2D_ = "the '&--' delimitor" ;

//--- Syntax error message for terminal '$&++$' :
static const char * gSyntaxErrorMessage_galgasScanner__26__2B__2B_ = "the '&++' delimitor" ;

//--- Syntax error message for terminal '$===$' :
static const char * gSyntaxErrorMessage_galgasScanner__3D__3D__3D_ = "the '===' delimitor" ;

//--- Syntax error message for terminal '$!==$' :
static const char * gSyntaxErrorMessage_galgasScanner__21__3D__3D_ = "the '!==' delimitor" ;

//--- Syntax error message for terminal '$?^$' :
static const char * gSyntaxErrorMessage_galgasScanner__3F__5E_ = "the '\?^' delimitor" ;

//--- Syntax error message for terminal '$!^$' :
static const char * gSyntaxErrorMessage_galgasScanner__21__5E_ = "the '!^' delimitor" ;

//----------------------------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasScanner::getMessageForTerminal (const int16_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 153)) {
    static const char * syntaxErrorMessageArray [153] = {kEndOfSourceLexicalErrorMessage,
        gSyntaxErrorMessage_galgasScanner_identifier,
        gSyntaxErrorMessage_galgasScanner_double_2E_xxx,
        gSyntaxErrorMessage_galgasScanner_literalInt,
        gSyntaxErrorMessage_galgasScanner__2E_,
        gSyntaxErrorMessage_galgasScanner__2E__2E__2E_,
        gSyntaxErrorMessage_galgasScanner__2E__2E__3C_,
        gSyntaxErrorMessage_galgasScanner__40_type,
        gSyntaxErrorMessage_galgasScanner__25_attribute,
        gSyntaxErrorMessage_galgasScanner__27_char_27_,
        gSyntaxErrorMessage_galgasScanner__24_terminal_24_,
        gSyntaxErrorMessage_galgasScanner__3F_,
        gSyntaxErrorMessage_galgasScanner__3F__21_,
        gSyntaxErrorMessage_galgasScanner__21_,
        gSyntaxErrorMessage_galgasScanner__21__3F_,
        gSyntaxErrorMessage_galgasScanner__3C_,
        gSyntaxErrorMessage_galgasScanner__3C__3D_,
        gSyntaxErrorMessage_galgasScanner__3C__3C_,
        gSyntaxErrorMessage_galgasScanner__3C_non_5F_terminal_3E_,
        gSyntaxErrorMessage_galgasScanner__22_string_22_,
        gSyntaxErrorMessage_galgasScanner_comment,
        gSyntaxErrorMessage_galgasScanner_commentMark,
        gSyntaxErrorMessage_galgasScanner_abstract,
        gSyntaxErrorMessage_galgasScanner_after,
        gSyntaxErrorMessage_galgasScanner_array,
        gSyntaxErrorMessage_galgasScanner_as,
        gSyntaxErrorMessage_galgasScanner_bang,
        gSyntaxErrorMessage_galgasScanner_before,
        gSyntaxErrorMessage_galgasScanner_between,
        gSyntaxErrorMessage_galgasScanner_block,
        gSyntaxErrorMessage_galgasScanner_boolset,
        gSyntaxErrorMessage_galgasScanner_cast,
        gSyntaxErrorMessage_galgasScanner_case,
        gSyntaxErrorMessage_galgasScanner_class,
        gSyntaxErrorMessage_galgasScanner_constructor,
        gSyntaxErrorMessage_galgasScanner_default,
        gSyntaxErrorMessage_galgasScanner_dict,
        gSyntaxErrorMessage_galgasScanner_do,
        gSyntaxErrorMessage_galgasScanner_drop,
        gSyntaxErrorMessage_galgasScanner_else,
        gSyntaxErrorMessage_galgasScanner_elsif,
        gSyntaxErrorMessage_galgasScanner_end,
        gSyntaxErrorMessage_galgasScanner_enum,
        gSyntaxErrorMessage_galgasScanner_error,
        gSyntaxErrorMessage_galgasScanner_extension,
        gSyntaxErrorMessage_galgasScanner_extern,
        gSyntaxErrorMessage_galgasScanner_false,
        gSyntaxErrorMessage_galgasScanner_filewrapper,
        gSyntaxErrorMessage_galgasScanner_for,
        gSyntaxErrorMessage_galgasScanner_fixit,
        gSyntaxErrorMessage_galgasScanner_func,
        gSyntaxErrorMessage_galgasScanner_getter,
        gSyntaxErrorMessage_galgasScanner_grammar,
        gSyntaxErrorMessage_galgasScanner_graph,
        gSyntaxErrorMessage_galgasScanner_gui,
        gSyntaxErrorMessage_galgasScanner_if,
        gSyntaxErrorMessage_galgasScanner_in,
        gSyntaxErrorMessage_galgasScanner_indexing,
        gSyntaxErrorMessage_galgasScanner_insert,
        gSyntaxErrorMessage_galgasScanner_is,
        gSyntaxErrorMessage_galgasScanner_label,
        gSyntaxErrorMessage_galgasScanner_let,
        gSyntaxErrorMessage_galgasScanner_lexique,
        gSyntaxErrorMessage_galgasScanner_list,
        gSyntaxErrorMessage_galgasScanner_listmap,
        gSyntaxErrorMessage_galgasScanner_log,
        gSyntaxErrorMessage_galgasScanner_loop,
        gSyntaxErrorMessage_galgasScanner_map,
        gSyntaxErrorMessage_galgasScanner_message,
        gSyntaxErrorMessage_galgasScanner_method,
        gSyntaxErrorMessage_galgasScanner_mod,
        gSyntaxErrorMessage_galgasScanner_mutating,
        gSyntaxErrorMessage_galgasScanner_not,
        gSyntaxErrorMessage_galgasScanner_on,
        gSyntaxErrorMessage_galgasScanner_operator,
        gSyntaxErrorMessage_galgasScanner_option,
        gSyntaxErrorMessage_galgasScanner_or,
        gSyntaxErrorMessage_galgasScanner_override,
        gSyntaxErrorMessage_galgasScanner_parse,
        gSyntaxErrorMessage_galgasScanner_public,
        gSyntaxErrorMessage_galgasScanner_private,
        gSyntaxErrorMessage_galgasScanner_proc,
        gSyntaxErrorMessage_galgasScanner_project,
        gSyntaxErrorMessage_galgasScanner_refclass,
        gSyntaxErrorMessage_galgasScanner_remove,
        gSyntaxErrorMessage_galgasScanner_replace,
        gSyntaxErrorMessage_galgasScanner_repeat,
        gSyntaxErrorMessage_galgasScanner_rewind,
        gSyntaxErrorMessage_galgasScanner_rule,
        gSyntaxErrorMessage_galgasScanner_search,
        gSyntaxErrorMessage_galgasScanner_select,
        gSyntaxErrorMessage_galgasScanner_self,
        gSyntaxErrorMessage_galgasScanner_send,
        gSyntaxErrorMessage_galgasScanner_setter,
        gSyntaxErrorMessage_galgasScanner_sortedlist,
        gSyntaxErrorMessage_galgasScanner_struct,
        gSyntaxErrorMessage_galgasScanner_style,
        gSyntaxErrorMessage_galgasScanner_switch,
        gSyntaxErrorMessage_galgasScanner_syntax,
        gSyntaxErrorMessage_galgasScanner_tag,
        gSyntaxErrorMessage_galgasScanner_template,
        gSyntaxErrorMessage_galgasScanner_then,
        gSyntaxErrorMessage_galgasScanner_true,
        gSyntaxErrorMessage_galgasScanner_unused,
        gSyntaxErrorMessage_galgasScanner_var,
        gSyntaxErrorMessage_galgasScanner_valueclass,
        gSyntaxErrorMessage_galgasScanner_warning,
        gSyntaxErrorMessage_galgasScanner_while,
        gSyntaxErrorMessage_galgasScanner_with,
        gSyntaxErrorMessage_galgasScanner__2A_,
        gSyntaxErrorMessage_galgasScanner__2C_,
        gSyntaxErrorMessage_galgasScanner__2B_,
        gSyntaxErrorMessage_galgasScanner__26__2B_,
        gSyntaxErrorMessage_galgasScanner__26__2D_,
        gSyntaxErrorMessage_galgasScanner__26__2A_,
        gSyntaxErrorMessage_galgasScanner__26__2F_,
        gSyntaxErrorMessage_galgasScanner__3E_,
        gSyntaxErrorMessage_galgasScanner__3B_,
        gSyntaxErrorMessage_galgasScanner__3A_,
        gSyntaxErrorMessage_galgasScanner__3A__3E_,
        gSyntaxErrorMessage_galgasScanner__2D_,
        gSyntaxErrorMessage_galgasScanner__28_,
        gSyntaxErrorMessage_galgasScanner__29_,
        gSyntaxErrorMessage_galgasScanner__2D__3E_,
        gSyntaxErrorMessage_galgasScanner__3D__3D_,
        gSyntaxErrorMessage_galgasScanner__3D_,
        gSyntaxErrorMessage_galgasScanner__26__26_,
        gSyntaxErrorMessage_galgasScanner__5B_,
        gSyntaxErrorMessage_galgasScanner__5D_,
        gSyntaxErrorMessage_galgasScanner__2B__3D_,
        gSyntaxErrorMessage_galgasScanner__2D__3D_,
        gSyntaxErrorMessage_galgasScanner__2A__3D_,
        gSyntaxErrorMessage_galgasScanner__2F__3D_,
        gSyntaxErrorMessage_galgasScanner__2F_,
        gSyntaxErrorMessage_galgasScanner__21__3D_,
        gSyntaxErrorMessage_galgasScanner__3E__3D_,
        gSyntaxErrorMessage_galgasScanner__26_,
        gSyntaxErrorMessage_galgasScanner__7B_,
        gSyntaxErrorMessage_galgasScanner__7D_,
        gSyntaxErrorMessage_galgasScanner__60_,
        gSyntaxErrorMessage_galgasScanner__7C__7C_,
        gSyntaxErrorMessage_galgasScanner__7C_,
        gSyntaxErrorMessage_galgasScanner__5E_,
        gSyntaxErrorMessage_galgasScanner__3E__3E_,
        gSyntaxErrorMessage_galgasScanner__7E_,
        gSyntaxErrorMessage_galgasScanner__2D__2D_,
        gSyntaxErrorMessage_galgasScanner__2B__2B_,
        gSyntaxErrorMessage_galgasScanner__26__2D__2D_,
        gSyntaxErrorMessage_galgasScanner__26__2B__2B_,
        gSyntaxErrorMessage_galgasScanner__3D__3D__3D_,
        gSyntaxErrorMessage_galgasScanner__21__3D__3D_,
        gSyntaxErrorMessage_galgasScanner__3F__5E_,
        gSyntaxErrorMessage_galgasScanner__21__5E_
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//----------------------------------------------------------------------------------------------------------------------

//--- Unicode string for '$_21__3D_$'
static const utf32 kUnicodeString_galgasScanner__21__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__3D__3D_$'
static const utf32 kUnicodeString_galgasScanner__21__3D__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__5E_$'
static const utf32 kUnicodeString_galgasScanner__21__5E_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26_$'
static const utf32 kUnicodeString_galgasScanner__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__26_$'
static const utf32 kUnicodeString_galgasScanner__26__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2A_$'
static const utf32 kUnicodeString_galgasScanner__26__2A_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2B_$'
static const utf32 kUnicodeString_galgasScanner__26__2B_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2B__2B_$'
static const utf32 kUnicodeString_galgasScanner__26__2B__2B_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('+'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2D_$'
static const utf32 kUnicodeString_galgasScanner__26__2D_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2D__2D_$'
static const utf32 kUnicodeString_galgasScanner__26__2D__2D_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('-'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2F_$'
static const utf32 kUnicodeString_galgasScanner__26__2F_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_28_$'
static const utf32 kUnicodeString_galgasScanner__28_ [] = {
  TO_UNICODE ('('),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_29_$'
static const utf32 kUnicodeString_galgasScanner__29_ [] = {
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A_$'
static const utf32 kUnicodeString_galgasScanner__2A_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A__3D_$'
static const utf32 kUnicodeString_galgasScanner__2A__3D_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B_$'
static const utf32 kUnicodeString_galgasScanner__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__2B_$'
static const utf32 kUnicodeString_galgasScanner__2B__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__3D_$'
static const utf32 kUnicodeString_galgasScanner__2B__3D_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_galgasScanner__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D_$'
static const utf32 kUnicodeString_galgasScanner__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__2D_$'
static const utf32 kUnicodeString_galgasScanner__2D__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3D_$'
static const utf32 kUnicodeString_galgasScanner__2D__3D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3E_$'
static const utf32 kUnicodeString_galgasScanner__2D__3E_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__2E_$'
static const utf32 kUnicodeString_galgasScanner__2E__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__3C_$'
static const utf32 kUnicodeString_galgasScanner__2E__3C_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F_$'
static const utf32 kUnicodeString_galgasScanner__2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F__3D_$'
static const utf32 kUnicodeString_galgasScanner__2F__3D_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_30_x$'
static const utf32 kUnicodeString_galgasScanner__30_x [] = {
  TO_UNICODE ('0'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_galgasScanner__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A__3E_$'
static const utf32 kUnicodeString_galgasScanner__3A__3E_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_galgasScanner__3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D_$'
static const utf32 kUnicodeString_galgasScanner__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D__3D_$'
static const utf32 kUnicodeString_galgasScanner__3D__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D__3D__3D_$'
static const utf32 kUnicodeString_galgasScanner__3D__3D__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E_$'
static const utf32 kUnicodeString_galgasScanner__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3D_$'
static const utf32 kUnicodeString_galgasScanner__3E__3D_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3E_$'
static const utf32 kUnicodeString_galgasScanner__3E__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3F__5E_$'
static const utf32 kUnicodeString_galgasScanner__3F__5E_ [] = {
  TO_UNICODE ('\?'),
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_galgasScanner__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__24_$'
static const utf32 kUnicodeString_galgasScanner__5C__24_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('$'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__5C_$'
static const utf32 kUnicodeString_galgasScanner__5C__5C_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('\\'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_galgasScanner__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E_$'
static const utf32 kUnicodeString_galgasScanner__5E_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_60_$'
static const utf32 kUnicodeString_galgasScanner__60_ [] = {
  TO_UNICODE ('`'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$abstract$'
static const utf32 kUnicodeString_galgasScanner_abstract [] = {
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
static const utf32 kUnicodeString_galgasScanner_after [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('f'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$array$'
static const utf32 kUnicodeString_galgasScanner_array [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$as$'
static const utf32 kUnicodeString_galgasScanner_as [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bang$'
static const utf32 kUnicodeString_galgasScanner_bang [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$before$'
static const utf32 kUnicodeString_galgasScanner_before [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$between$'
static const utf32 kUnicodeString_galgasScanner_between [] = {
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
static const utf32 kUnicodeString_galgasScanner_block [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$boolset$'
static const utf32 kUnicodeString_galgasScanner_boolset [] = {
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
static const utf32 kUnicodeString_galgasScanner_case [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$cast$'
static const utf32 kUnicodeString_galgasScanner_cast [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$class$'
static const utf32 kUnicodeString_galgasScanner_class [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$constructor$'
static const utf32 kUnicodeString_galgasScanner_constructor [] = {
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
static const utf32 kUnicodeString_galgasScanner_default [] = {
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
static const utf32 kUnicodeString_galgasScanner_dict [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$do$'
static const utf32 kUnicodeString_galgasScanner_do [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$drop$'
static const utf32 kUnicodeString_galgasScanner_drop [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$else$'
static const utf32 kUnicodeString_galgasScanner_else [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$elsif$'
static const utf32 kUnicodeString_galgasScanner_elsif [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$end$'
static const utf32 kUnicodeString_galgasScanner_end [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$enum$'
static const utf32 kUnicodeString_galgasScanner_enum [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$error$'
static const utf32 kUnicodeString_galgasScanner_error [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extension$'
static const utf32 kUnicodeString_galgasScanner_extension [] = {
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
static const utf32 kUnicodeString_galgasScanner_extern [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$false$'
static const utf32 kUnicodeString_galgasScanner_false [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$filewrapper$'
static const utf32 kUnicodeString_galgasScanner_filewrapper [] = {
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
static const utf32 kUnicodeString_galgasScanner_fixit [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$for$'
static const utf32 kUnicodeString_galgasScanner_for [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$func$'
static const utf32 kUnicodeString_galgasScanner_func [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$getter$'
static const utf32 kUnicodeString_galgasScanner_getter [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$grammar$'
static const utf32 kUnicodeString_galgasScanner_grammar [] = {
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
static const utf32 kUnicodeString_galgasScanner_graph [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$gui$'
static const utf32 kUnicodeString_galgasScanner_gui [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('u'),
  TO_UNICODE ('i'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$if$'
static const utf32 kUnicodeString_galgasScanner_if [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$in$'
static const utf32 kUnicodeString_galgasScanner_in [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$indexing$'
static const utf32 kUnicodeString_galgasScanner_indexing [] = {
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
static const utf32 kUnicodeString_galgasScanner_insert [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$is$'
static const utf32 kUnicodeString_galgasScanner_is [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$label$'
static const utf32 kUnicodeString_galgasScanner_label [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$let$'
static const utf32 kUnicodeString_galgasScanner_let [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$lexique$'
static const utf32 kUnicodeString_galgasScanner_lexique [] = {
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
static const utf32 kUnicodeString_galgasScanner_list [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$listmap$'
static const utf32 kUnicodeString_galgasScanner_listmap [] = {
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
static const utf32 kUnicodeString_galgasScanner_log [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$loop$'
static const utf32 kUnicodeString_galgasScanner_loop [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$map$'
static const utf32 kUnicodeString_galgasScanner_map [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$message$'
static const utf32 kUnicodeString_galgasScanner_message [] = {
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
static const utf32 kUnicodeString_galgasScanner_method [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mod$'
static const utf32 kUnicodeString_galgasScanner_mod [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mutating$'
static const utf32 kUnicodeString_galgasScanner_mutating [] = {
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
static const utf32 kUnicodeString_galgasScanner_not [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$on$'
static const utf32 kUnicodeString_galgasScanner_on [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$operator$'
static const utf32 kUnicodeString_galgasScanner_operator [] = {
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
static const utf32 kUnicodeString_galgasScanner_option [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$or$'
static const utf32 kUnicodeString_galgasScanner_or [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$override$'
static const utf32 kUnicodeString_galgasScanner_override [] = {
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
static const utf32 kUnicodeString_galgasScanner_parse [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$private$'
static const utf32 kUnicodeString_galgasScanner_private [] = {
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
static const utf32 kUnicodeString_galgasScanner_proc [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$project$'
static const utf32 kUnicodeString_galgasScanner_project [] = {
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
static const utf32 kUnicodeString_galgasScanner_public [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$refclass$'
static const utf32 kUnicodeString_galgasScanner_refclass [] = {
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
static const utf32 kUnicodeString_galgasScanner_remove [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$repeat$'
static const utf32 kUnicodeString_galgasScanner_repeat [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$replace$'
static const utf32 kUnicodeString_galgasScanner_replace [] = {
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
static const utf32 kUnicodeString_galgasScanner_rewind [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rule$'
static const utf32 kUnicodeString_galgasScanner_rule [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$search$'
static const utf32 kUnicodeString_galgasScanner_search [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$select$'
static const utf32 kUnicodeString_galgasScanner_select [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$self$'
static const utf32 kUnicodeString_galgasScanner_self [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$send$'
static const utf32 kUnicodeString_galgasScanner_send [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$setter$'
static const utf32 kUnicodeString_galgasScanner_setter [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$sortedlist$'
static const utf32 kUnicodeString_galgasScanner_sortedlist [] = {
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
static const utf32 kUnicodeString_galgasScanner_struct [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$style$'
static const utf32 kUnicodeString_galgasScanner_style [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$switch$'
static const utf32 kUnicodeString_galgasScanner_switch [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$syntax$'
static const utf32 kUnicodeString_galgasScanner_syntax [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('y'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$tag$'
static const utf32 kUnicodeString_galgasScanner_tag [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$template$'
static const utf32 kUnicodeString_galgasScanner_template [] = {
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
static const utf32 kUnicodeString_galgasScanner_then [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$true$'
static const utf32 kUnicodeString_galgasScanner_true [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$unused$'
static const utf32 kUnicodeString_galgasScanner_unused [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$valueclass$'
static const utf32 kUnicodeString_galgasScanner_valueclass [] = {
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
static const utf32 kUnicodeString_galgasScanner_var [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$warning$'
static const utf32 kUnicodeString_galgasScanner_warning [] = {
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
static const utf32 kUnicodeString_galgasScanner_while [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$with$'
static const utf32 kUnicodeString_galgasScanner_with [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_galgasScanner__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C_$'
static const utf32 kUnicodeString_galgasScanner__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C__7C_$'
static const utf32 kUnicodeString_galgasScanner__7C__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_galgasScanner__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7E_$'
static const utf32 kUnicodeString_galgasScanner__7E_ [] = {
  TO_UNICODE ('~'),
  TO_UNICODE (0)
} ;

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'galgasDelimitorsList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasScanner_galgasDelimitorsList = 44 ;

static const C_unicode_lexique_table_entry ktable_for_galgasScanner_galgasDelimitorsList [ktable_size_galgasScanner_galgasDelimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__26_, 1, C_Lexique_galgasScanner::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__28_, 1, C_Lexique_galgasScanner::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__29_, 1, C_Lexique_galgasScanner::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__2A_, 1, C_Lexique_galgasScanner::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__2B_, 1, C_Lexique_galgasScanner::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__2C_, 1, C_Lexique_galgasScanner::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__2D_, 1, C_Lexique_galgasScanner::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__2F_, 1, C_Lexique_galgasScanner::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__3A_, 1, C_Lexique_galgasScanner::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__3B_, 1, C_Lexique_galgasScanner::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__3D_, 1, C_Lexique_galgasScanner::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__3E_, 1, C_Lexique_galgasScanner::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__5B_, 1, C_Lexique_galgasScanner::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__5D_, 1, C_Lexique_galgasScanner::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__5E_, 1, C_Lexique_galgasScanner::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__60_, 1, C_Lexique_galgasScanner::kToken__60_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__7B_, 1, C_Lexique_galgasScanner::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__7C_, 1, C_Lexique_galgasScanner::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__7D_, 1, C_Lexique_galgasScanner::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__7E_, 1, C_Lexique_galgasScanner::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__21__3D_, 2, C_Lexique_galgasScanner::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__21__5E_, 2, C_Lexique_galgasScanner::kToken__21__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__26__26_, 2, C_Lexique_galgasScanner::kToken__26__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__26__2A_, 2, C_Lexique_galgasScanner::kToken__26__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__26__2B_, 2, C_Lexique_galgasScanner::kToken__26__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__26__2D_, 2, C_Lexique_galgasScanner::kToken__26__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__26__2F_, 2, C_Lexique_galgasScanner::kToken__26__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__2A__3D_, 2, C_Lexique_galgasScanner::kToken__2A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__2B__2B_, 2, C_Lexique_galgasScanner::kToken__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__2B__3D_, 2, C_Lexique_galgasScanner::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__2D__2D_, 2, C_Lexique_galgasScanner::kToken__2D__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__2D__3D_, 2, C_Lexique_galgasScanner::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__2D__3E_, 2, C_Lexique_galgasScanner::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__2F__3D_, 2, C_Lexique_galgasScanner::kToken__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__3A__3E_, 2, C_Lexique_galgasScanner::kToken__3A__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__3D__3D_, 2, C_Lexique_galgasScanner::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__3E__3D_, 2, C_Lexique_galgasScanner::kToken__3E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__3E__3E_, 2, C_Lexique_galgasScanner::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__3F__5E_, 2, C_Lexique_galgasScanner::kToken__3F__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__7C__7C_, 2, C_Lexique_galgasScanner::kToken__7C__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__21__3D__3D_, 3, C_Lexique_galgasScanner::kToken__21__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__26__2B__2B_, 3, C_Lexique_galgasScanner::kToken__26__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__26__2D__2D_, 3, C_Lexique_galgasScanner::kToken__26__2D__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner__3D__3D__3D_, 3, C_Lexique_galgasScanner::kToken__3D__3D__3D_)
} ;

int16_t C_Lexique_galgasScanner::search_into_galgasDelimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasScanner_galgasDelimitorsList, ktable_size_galgasScanner_galgasDelimitorsList) ;
}

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'galgasKeyWordList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasScanner_galgasKeyWordList = 87 ;

static const C_unicode_lexique_table_entry ktable_for_galgasScanner_galgasKeyWordList [ktable_size_galgasScanner_galgasKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_as, 2, C_Lexique_galgasScanner::kToken_as),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_do, 2, C_Lexique_galgasScanner::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_if, 2, C_Lexique_galgasScanner::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_in, 2, C_Lexique_galgasScanner::kToken_in),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_is, 2, C_Lexique_galgasScanner::kToken_is),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_on, 2, C_Lexique_galgasScanner::kToken_on),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_or, 2, C_Lexique_galgasScanner::kToken_or),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_end, 3, C_Lexique_galgasScanner::kToken_end),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_for, 3, C_Lexique_galgasScanner::kToken_for),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_gui, 3, C_Lexique_galgasScanner::kToken_gui),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_let, 3, C_Lexique_galgasScanner::kToken_let),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_log, 3, C_Lexique_galgasScanner::kToken_log),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_map, 3, C_Lexique_galgasScanner::kToken_map),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_mod, 3, C_Lexique_galgasScanner::kToken_mod),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_not, 3, C_Lexique_galgasScanner::kToken_not),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_tag, 3, C_Lexique_galgasScanner::kToken_tag),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_var, 3, C_Lexique_galgasScanner::kToken_var),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_bang, 4, C_Lexique_galgasScanner::kToken_bang),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_case, 4, C_Lexique_galgasScanner::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_cast, 4, C_Lexique_galgasScanner::kToken_cast),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_dict, 4, C_Lexique_galgasScanner::kToken_dict),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_drop, 4, C_Lexique_galgasScanner::kToken_drop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_else, 4, C_Lexique_galgasScanner::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_enum, 4, C_Lexique_galgasScanner::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_func, 4, C_Lexique_galgasScanner::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_list, 4, C_Lexique_galgasScanner::kToken_list),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_loop, 4, C_Lexique_galgasScanner::kToken_loop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_proc, 4, C_Lexique_galgasScanner::kToken_proc),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_rule, 4, C_Lexique_galgasScanner::kToken_rule),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_self, 4, C_Lexique_galgasScanner::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_send, 4, C_Lexique_galgasScanner::kToken_send),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_then, 4, C_Lexique_galgasScanner::kToken_then),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_true, 4, C_Lexique_galgasScanner::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_with, 4, C_Lexique_galgasScanner::kToken_with),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_after, 5, C_Lexique_galgasScanner::kToken_after),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_array, 5, C_Lexique_galgasScanner::kToken_array),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_block, 5, C_Lexique_galgasScanner::kToken_block),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_class, 5, C_Lexique_galgasScanner::kToken_class),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_elsif, 5, C_Lexique_galgasScanner::kToken_elsif),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_error, 5, C_Lexique_galgasScanner::kToken_error),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_false, 5, C_Lexique_galgasScanner::kToken_false),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_fixit, 5, C_Lexique_galgasScanner::kToken_fixit),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_graph, 5, C_Lexique_galgasScanner::kToken_graph),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_label, 5, C_Lexique_galgasScanner::kToken_label),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_parse, 5, C_Lexique_galgasScanner::kToken_parse),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_style, 5, C_Lexique_galgasScanner::kToken_style),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_while, 5, C_Lexique_galgasScanner::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_before, 6, C_Lexique_galgasScanner::kToken_before),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_extern, 6, C_Lexique_galgasScanner::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_getter, 6, C_Lexique_galgasScanner::kToken_getter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_insert, 6, C_Lexique_galgasScanner::kToken_insert),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_method, 6, C_Lexique_galgasScanner::kToken_method),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_option, 6, C_Lexique_galgasScanner::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_public, 6, C_Lexique_galgasScanner::kToken_public),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_remove, 6, C_Lexique_galgasScanner::kToken_remove),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_repeat, 6, C_Lexique_galgasScanner::kToken_repeat),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_rewind, 6, C_Lexique_galgasScanner::kToken_rewind),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_search, 6, C_Lexique_galgasScanner::kToken_search),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_select, 6, C_Lexique_galgasScanner::kToken_select),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_setter, 6, C_Lexique_galgasScanner::kToken_setter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_struct, 6, C_Lexique_galgasScanner::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_switch, 6, C_Lexique_galgasScanner::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_syntax, 6, C_Lexique_galgasScanner::kToken_syntax),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_unused, 6, C_Lexique_galgasScanner::kToken_unused),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_between, 7, C_Lexique_galgasScanner::kToken_between),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_boolset, 7, C_Lexique_galgasScanner::kToken_boolset),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_default, 7, C_Lexique_galgasScanner::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_grammar, 7, C_Lexique_galgasScanner::kToken_grammar),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_lexique, 7, C_Lexique_galgasScanner::kToken_lexique),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_listmap, 7, C_Lexique_galgasScanner::kToken_listmap),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_message, 7, C_Lexique_galgasScanner::kToken_message),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_private, 7, C_Lexique_galgasScanner::kToken_private),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_project, 7, C_Lexique_galgasScanner::kToken_project),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_replace, 7, C_Lexique_galgasScanner::kToken_replace),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_warning, 7, C_Lexique_galgasScanner::kToken_warning),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_abstract, 8, C_Lexique_galgasScanner::kToken_abstract),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_indexing, 8, C_Lexique_galgasScanner::kToken_indexing),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_mutating, 8, C_Lexique_galgasScanner::kToken_mutating),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_operator, 8, C_Lexique_galgasScanner::kToken_operator),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_override, 8, C_Lexique_galgasScanner::kToken_override),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_refclass, 8, C_Lexique_galgasScanner::kToken_refclass),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_template, 8, C_Lexique_galgasScanner::kToken_template),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_extension, 9, C_Lexique_galgasScanner::kToken_extension),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_sortedlist, 10, C_Lexique_galgasScanner::kToken_sortedlist),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_valueclass, 10, C_Lexique_galgasScanner::kToken_valueclass),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_constructor, 11, C_Lexique_galgasScanner::kToken_constructor),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_filewrapper, 11, C_Lexique_galgasScanner::kToken_filewrapper)
} ;

int16_t C_Lexique_galgasScanner::search_into_galgasKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasScanner_galgasKeyWordList, ktable_size_galgasScanner_galgasKeyWordList) ;
}


//----------------------------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasScanner::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_galgasScanner * ptr = (const cTokenFor_galgasScanner *) inTokenPtr ;
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
    case kToken_literalInt:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literalInt") ;
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
    case kToken_bang:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bang") ;
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


//----------------------------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_galgasScanner::internalParseLexicalToken (cTokenFor_galgasScanner & token) {
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
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__30_x, 2, true)) {
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
        ::scanner_routine_convertHexStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasScanner_internalError) ;
        token.mTokenCode = kToken_literalInt ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_hexDigitError COMMA_LINE_AND_SOURCE_FILE) ;
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
      if (testForInputUTF32Char (TO_UNICODE ('.'))) {
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
        ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_galgasScanner_floatNumberConversionError) ;
        token.mTokenCode = kToken_double_2E_xxx ;
        enterToken (token) ;
      }else{
        ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasScanner_internalError) ;
        token.mTokenCode = kToken_literalInt ;
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
        ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_galgasScanner_floatNumberConversionError) ;
        token.mTokenCode = kToken_double_2E_xxx ;
        enterToken (token) ;
      }else{
        if (testForInputUTF32String (kUnicodeString_galgasScanner__2E__2E_, 2, true)) {
          token.mTokenCode = kToken__2E__2E__2E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasScanner__2E__3C_, 2, true)) {
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
      }else{
        lexicalError (gLexicalMessage_galgasScanner_incorrectTypeNameError COMMA_LINE_AND_SOURCE_FILE) ;
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
        lexicalError (gLexicalMessage_galgasScanner_attributeError COMMA_LINE_AND_SOURCE_FILE) ;
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
            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                  ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_unassignedUnicodeValue) ;
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE ('U'))) {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                          ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_unassignedUnicodeValue) ;
                        }else{
                          lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else{
          lexicalError (gLexicalMessage_galgasScanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32CharRange (TO_UNICODE (' '), TO_UNICODE (65533))) {
        ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, previousChar ()) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (testForInputUTF32Char (TO_UNICODE ('\''))) {
        token.mTokenCode = kToken__27_char_27_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('$'))) {
      if (testForInputUTF32String (kUnicodeString_galgasScanner__5C__5C_, 2, true)) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
        do {
          if (testForInputUTF32String (kUnicodeString_galgasScanner__5C__5C_, 2, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasScanner__5C__24_, 2, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
          }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else if (testForInputUTF32String (kUnicodeString_galgasScanner__5C__24_, 2, true)) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
        do {
          if (testForInputUTF32String (kUnicodeString_galgasScanner__5C__5C_, 2, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasScanner__5C__24_, 2, true)) {
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
          if (testForInputUTF32String (kUnicodeString_galgasScanner__5C__5C_, 2, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasScanner__5C__24_, 2, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
          }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_incorrect_terminal_start COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (testForInputUTF32Char (TO_UNICODE ('$'))) {
      }else{
        lexicalError (gLexicalMessage_galgasScanner_incorrect_terminal_end COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__24_terminal_24_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__3D__3D__3D_, 3, true)) {
      token.mTokenCode = kToken__3D__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__26__2D__2D_, 3, true)) {
      token.mTokenCode = kToken__26__2D__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__26__2B__2B_, 3, true)) {
      token.mTokenCode = kToken__26__2B__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__21__3D__3D_, 3, true)) {
      token.mTokenCode = kToken__21__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__7C__7C_, 2, true)) {
      token.mTokenCode = kToken__7C__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__3F__5E_, 2, true)) {
      token.mTokenCode = kToken__3F__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__3E__3E_, 2, true)) {
      token.mTokenCode = kToken__3E__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__3E__3D_, 2, true)) {
      token.mTokenCode = kToken__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__3D__3D_, 2, true)) {
      token.mTokenCode = kToken__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__3A__3E_, 2, true)) {
      token.mTokenCode = kToken__3A__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__2F__3D_, 2, true)) {
      token.mTokenCode = kToken__2F__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__2D__3E_, 2, true)) {
      token.mTokenCode = kToken__2D__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__2D__3D_, 2, true)) {
      token.mTokenCode = kToken__2D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__2D__2D_, 2, true)) {
      token.mTokenCode = kToken__2D__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__2B__3D_, 2, true)) {
      token.mTokenCode = kToken__2B__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__2B__2B_, 2, true)) {
      token.mTokenCode = kToken__2B__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__2A__3D_, 2, true)) {
      token.mTokenCode = kToken__2A__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__26__2F_, 2, true)) {
      token.mTokenCode = kToken__26__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__26__2D_, 2, true)) {
      token.mTokenCode = kToken__26__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__26__2B_, 2, true)) {
      token.mTokenCode = kToken__26__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__26__2A_, 2, true)) {
      token.mTokenCode = kToken__26__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__26__26_, 2, true)) {
      token.mTokenCode = kToken__26__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__21__5E_, 2, true)) {
      token.mTokenCode = kToken__21__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__21__3D_, 2, true)) {
      token.mTokenCode = kToken__21__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__7E_, 1, true)) {
      token.mTokenCode = kToken__7E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__7D_, 1, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__7C_, 1, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__7B_, 1, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__60_, 1, true)) {
      token.mTokenCode = kToken__60_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__5E_, 1, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__5D_, 1, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__5B_, 1, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__3E_, 1, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__3D_, 1, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__3B_, 1, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__3A_, 1, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__2F_, 1, true)) {
      token.mTokenCode = kToken__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__2D_, 1, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__2C_, 1, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__2B_, 1, true)) {
      token.mTokenCode = kToken__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__2A_, 1, true)) {
      token.mTokenCode = kToken__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__29_, 1, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__28_, 1, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner__26_, 1, true)) {
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
          }else if (testForInputUTF32Char (TO_UNICODE ('u'))) {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                    ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_unassignedUnicodeValue) ;
                    ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                  }else{
                    lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32Char (TO_UNICODE ('U'))) {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_internalError, gLexicalMessage_galgasScanner_internalError) ;
                            ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_unassignedUnicodeValue) ;
                            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                          }else{
                            lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                          }
                        }else{
                          lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasScanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
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
        lexicalError (gLexicalMessage_galgasScanner_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
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

bool C_Lexique_galgasScanner::parseLexicalToken (void) {
  cTokenFor_galgasScanner token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    internalParseLexicalToken (token) ;
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

void C_Lexique_galgasScanner::enterToken (cTokenFor_galgasScanner & ioToken) {
  cTokenFor_galgasScanner * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_galgasScanner ()) ;
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

C_BigInt C_Lexique_galgasScanner::attributeValue_bigintValue (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_bigintValue ;
}

//----------------------------------------------------------------------------------------------------------------------

utf32 C_Lexique_galgasScanner::attributeValue_charValue (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_charValue ;
}

//----------------------------------------------------------------------------------------------------------------------

double C_Lexique_galgasScanner::attributeValue_floatValue (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_floatValue ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasScanner::attributeValue_identifierString (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//----------------------------------------------------------------------------------------------------------------------

int32_t C_Lexique_galgasScanner::attributeValue_sint_33__32_value (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_sint_33__32_value ;
}

//----------------------------------------------------------------------------------------------------------------------

int64_t C_Lexique_galgasScanner::attributeValue_sint_36__34_value (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_sint_36__34_value ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasScanner::attributeValue_tokenString (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_galgasScanner::attributeValue_uint_33__32_value (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//----------------------------------------------------------------------------------------------------------------------

uint64_t C_Lexique_galgasScanner::attributeValue_uint_36__34_value (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_36__34_value ;
}

//----------------------------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint C_Lexique_galgasScanner::synthetizedAttribute_bigintValue (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_bigint value (ptr->mLexicalAttribute_bigintValue) ;
  GALGAS_lbigint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar C_Lexique_galgasScanner::synthetizedAttribute_charValue (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_char value (ptr->mLexicalAttribute_charValue) ;
  GALGAS_lchar result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ldouble C_Lexique_galgasScanner::synthetizedAttribute_floatValue (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_double value (ptr->mLexicalAttribute_floatValue) ;
  GALGAS_ldouble result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_galgasScanner::synthetizedAttribute_identifierString (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint C_Lexique_galgasScanner::synthetizedAttribute_sint_33__32_value (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint value (ptr->mLexicalAttribute_sint_33__32_value) ;
  GALGAS_lsint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint_36__34_ C_Lexique_galgasScanner::synthetizedAttribute_sint_36__34_value (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint_36__34_ value (ptr->mLexicalAttribute_sint_36__34_value) ;
  GALGAS_lsint_36__34_ result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_galgasScanner::synthetizedAttribute_tokenString (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint C_Lexique_galgasScanner::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint_36__34_ C_Lexique_galgasScanner::synthetizedAttribute_uint_36__34_value (void) const {
  cTokenFor_galgasScanner * ptr = (cTokenFor_galgasScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint_36__34_ value (ptr->mLexicalAttribute_uint_36__34_value) ;
  GALGAS_luint_36__34_ result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist C_Lexique_galgasScanner::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("double.xxx") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literalInt") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("bang") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("===") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!==") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!^") COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordLists_galgasScanner (TC_UniqueArray <C_String> & ioList) {
  ioList.appendObject ("galgasScanner:galgasDelimitorsList") ;
  ioList.appendObject ("galgasScanner:galgasKeyWordList") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_galgasScanner (const C_String & inIdentifier,
                                                    bool & ioFound,
                                                    TC_UniqueArray <C_String> & ioList) {
  if (inIdentifier == "galgasScanner:galgasDelimitorsList") {
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
  if (inIdentifier == "galgasScanner:galgasKeyWordList") {
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
    ioList.appendObject ("bang") ;
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

static cLexiqueIntrospection lexiqueIntrospection_galgasScanner
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_galgasScanner, getKeywordsForIdentifier_galgasScanner) ;

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_galgasScanner::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [153] = {0,
    0 /* galgasScanner_1_identifier */,
    8 /* galgasScanner_1_double_2E_xxx */,
    7 /* galgasScanner_1_literalInt */,
    2 /* galgasScanner_1__2E_ */,
    2 /* galgasScanner_1__2E__2E__2E_ */,
    2 /* galgasScanner_1__2E__2E__3C_ */,
    11 /* galgasScanner_1__40_type */,
    12 /* galgasScanner_1__25_attribute */,
    9 /* galgasScanner_1__27_char_27_ */,
    4 /* galgasScanner_1__24_terminal_24_ */,
    3 /* galgasScanner_1__3F_ */,
    3 /* galgasScanner_1__3F__21_ */,
    3 /* galgasScanner_1__21_ */,
    3 /* galgasScanner_1__21__3F_ */,
    2 /* galgasScanner_1__3C_ */,
    2 /* galgasScanner_1__3C__3D_ */,
    2 /* galgasScanner_1__3C__3C_ */,
    5 /* galgasScanner_1__3C_non_5F_terminal_3E_ */,
    10 /* galgasScanner_1__22_string_22_ */,
    13 /* galgasScanner_1_comment */,
    13 /* galgasScanner_1_commentMark */,
    1 /* galgasScanner_1_abstract */,
    1 /* galgasScanner_1_after */,
    1 /* galgasScanner_1_array */,
    1 /* galgasScanner_1_as */,
    1 /* galgasScanner_1_bang */,
    1 /* galgasScanner_1_before */,
    1 /* galgasScanner_1_between */,
    1 /* galgasScanner_1_block */,
    1 /* galgasScanner_1_boolset */,
    1 /* galgasScanner_1_cast */,
    1 /* galgasScanner_1_case */,
    1 /* galgasScanner_1_class */,
    1 /* galgasScanner_1_constructor */,
    1 /* galgasScanner_1_default */,
    1 /* galgasScanner_1_dict */,
    1 /* galgasScanner_1_do */,
    1 /* galgasScanner_1_drop */,
    1 /* galgasScanner_1_else */,
    1 /* galgasScanner_1_elsif */,
    1 /* galgasScanner_1_end */,
    1 /* galgasScanner_1_enum */,
    1 /* galgasScanner_1_error */,
    1 /* galgasScanner_1_extension */,
    1 /* galgasScanner_1_extern */,
    1 /* galgasScanner_1_false */,
    1 /* galgasScanner_1_filewrapper */,
    1 /* galgasScanner_1_for */,
    1 /* galgasScanner_1_fixit */,
    1 /* galgasScanner_1_func */,
    1 /* galgasScanner_1_getter */,
    1 /* galgasScanner_1_grammar */,
    1 /* galgasScanner_1_graph */,
    1 /* galgasScanner_1_gui */,
    1 /* galgasScanner_1_if */,
    1 /* galgasScanner_1_in */,
    1 /* galgasScanner_1_indexing */,
    1 /* galgasScanner_1_insert */,
    1 /* galgasScanner_1_is */,
    1 /* galgasScanner_1_label */,
    1 /* galgasScanner_1_let */,
    1 /* galgasScanner_1_lexique */,
    1 /* galgasScanner_1_list */,
    1 /* galgasScanner_1_listmap */,
    1 /* galgasScanner_1_log */,
    1 /* galgasScanner_1_loop */,
    1 /* galgasScanner_1_map */,
    1 /* galgasScanner_1_message */,
    1 /* galgasScanner_1_method */,
    1 /* galgasScanner_1_mod */,
    1 /* galgasScanner_1_mutating */,
    1 /* galgasScanner_1_not */,
    1 /* galgasScanner_1_on */,
    1 /* galgasScanner_1_operator */,
    1 /* galgasScanner_1_option */,
    1 /* galgasScanner_1_or */,
    1 /* galgasScanner_1_override */,
    1 /* galgasScanner_1_parse */,
    1 /* galgasScanner_1_public */,
    1 /* galgasScanner_1_private */,
    1 /* galgasScanner_1_proc */,
    1 /* galgasScanner_1_project */,
    1 /* galgasScanner_1_refclass */,
    1 /* galgasScanner_1_remove */,
    1 /* galgasScanner_1_replace */,
    1 /* galgasScanner_1_repeat */,
    1 /* galgasScanner_1_rewind */,
    1 /* galgasScanner_1_rule */,
    1 /* galgasScanner_1_search */,
    1 /* galgasScanner_1_select */,
    1 /* galgasScanner_1_self */,
    1 /* galgasScanner_1_send */,
    1 /* galgasScanner_1_setter */,
    1 /* galgasScanner_1_sortedlist */,
    1 /* galgasScanner_1_struct */,
    1 /* galgasScanner_1_style */,
    1 /* galgasScanner_1_switch */,
    1 /* galgasScanner_1_syntax */,
    1 /* galgasScanner_1_tag */,
    1 /* galgasScanner_1_template */,
    1 /* galgasScanner_1_then */,
    1 /* galgasScanner_1_true */,
    1 /* galgasScanner_1_unused */,
    1 /* galgasScanner_1_var */,
    1 /* galgasScanner_1_valueclass */,
    1 /* galgasScanner_1_warning */,
    1 /* galgasScanner_1_while */,
    1 /* galgasScanner_1_with */,
    2 /* galgasScanner_1__2A_ */,
    2 /* galgasScanner_1__2C_ */,
    2 /* galgasScanner_1__2B_ */,
    2 /* galgasScanner_1__26__2B_ */,
    2 /* galgasScanner_1__26__2D_ */,
    2 /* galgasScanner_1__26__2A_ */,
    2 /* galgasScanner_1__26__2F_ */,
    2 /* galgasScanner_1__3E_ */,
    2 /* galgasScanner_1__3B_ */,
    2 /* galgasScanner_1__3A_ */,
    2 /* galgasScanner_1__3A__3E_ */,
    2 /* galgasScanner_1__2D_ */,
    2 /* galgasScanner_1__28_ */,
    2 /* galgasScanner_1__29_ */,
    2 /* galgasScanner_1__2D__3E_ */,
    2 /* galgasScanner_1__3D__3D_ */,
    2 /* galgasScanner_1__3D_ */,
    2 /* galgasScanner_1__26__26_ */,
    2 /* galgasScanner_1__5B_ */,
    2 /* galgasScanner_1__5D_ */,
    2 /* galgasScanner_1__2B__3D_ */,
    2 /* galgasScanner_1__2D__3D_ */,
    2 /* galgasScanner_1__2A__3D_ */,
    2 /* galgasScanner_1__2F__3D_ */,
    2 /* galgasScanner_1__2F_ */,
    2 /* galgasScanner_1__21__3D_ */,
    2 /* galgasScanner_1__3E__3D_ */,
    2 /* galgasScanner_1__26_ */,
    2 /* galgasScanner_1__7B_ */,
    2 /* galgasScanner_1__7D_ */,
    2 /* galgasScanner_1__60_ */,
    2 /* galgasScanner_1__7C__7C_ */,
    2 /* galgasScanner_1__7C_ */,
    2 /* galgasScanner_1__5E_ */,
    2 /* galgasScanner_1__3E__3E_ */,
    2 /* galgasScanner_1__7E_ */,
    2 /* galgasScanner_1__2D__2D_ */,
    2 /* galgasScanner_1__2B__2B_ */,
    2 /* galgasScanner_1__26__2D__2D_ */,
    2 /* galgasScanner_1__26__2B__2B_ */,
    2 /* galgasScanner_1__3D__3D__3D_ */,
    2 /* galgasScanner_1__21__3D__3D_ */,
    2 /* galgasScanner_1__3F__5E_ */,
    2 /* galgasScanner_1__21__5E_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgasScanner::styleNameForIndex (const uint32_t inStyleIndex) const {
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
  return true ; // return mObject.isValid () ;
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
  return true ; // return mObject.isValid () ;
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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateEqualTestAST_2D_weak::objectCompare (const GALGAS_templateEqualTestAST_2D_weak & inOperand) const {
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

GALGAS_templateEqualTestAST_2D_weak::GALGAS_templateEqualTestAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateEqualTestAST_2D_weak & GALGAS_templateEqualTestAST_2D_weak::operator = (const GALGAS_templateEqualTestAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateEqualTestAST_2D_weak::GALGAS_templateEqualTestAST_2D_weak (const GALGAS_templateEqualTestAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateEqualTestAST_2D_weak GALGAS_templateEqualTestAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateEqualTestAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateEqualTestAST GALGAS_templateEqualTestAST_2D_weak::bang_templateEqualTestAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateEqualTestAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateEqualTestAST) ;
      result = GALGAS_templateEqualTestAST ((cPtr_templateEqualTestAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateEqualTestAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateEqualTestAST_2D_weak ("templateEqualTestAST-weak",
                                                     & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateEqualTestAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateEqualTestAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateEqualTestAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateEqualTestAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateEqualTestAST_2D_weak GALGAS_templateEqualTestAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateEqualTestAST_2D_weak result ;
  const GALGAS_templateEqualTestAST_2D_weak * p = (const GALGAS_templateEqualTestAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateEqualTestAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateEqualTestAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateNonEqualTestAST reference class
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

GALGAS_location GALGAS_templateNonEqualTestAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateNonEqualTestAST * p = (cPtr_templateNonEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateNonEqualTestAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateNonEqualTestAST * p = (cPtr_templateNonEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateNonEqualTestAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateNonEqualTestAST * p = (cPtr_templateNonEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
    return p->mProperty_mRightExpression ;
  }
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

typeComparisonResult GALGAS_templateNonEqualTestAST_2D_weak::objectCompare (const GALGAS_templateNonEqualTestAST_2D_weak & inOperand) const {
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

GALGAS_templateNonEqualTestAST_2D_weak::GALGAS_templateNonEqualTestAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNonEqualTestAST_2D_weak & GALGAS_templateNonEqualTestAST_2D_weak::operator = (const GALGAS_templateNonEqualTestAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNonEqualTestAST_2D_weak::GALGAS_templateNonEqualTestAST_2D_weak (const GALGAS_templateNonEqualTestAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNonEqualTestAST_2D_weak GALGAS_templateNonEqualTestAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateNonEqualTestAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNonEqualTestAST GALGAS_templateNonEqualTestAST_2D_weak::bang_templateNonEqualTestAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateNonEqualTestAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateNonEqualTestAST) ;
      result = GALGAS_templateNonEqualTestAST ((cPtr_templateNonEqualTestAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateNonEqualTestAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateNonEqualTestAST_2D_weak ("templateNonEqualTestAST-weak",
                                                        & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateNonEqualTestAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNonEqualTestAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateNonEqualTestAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateNonEqualTestAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateNonEqualTestAST_2D_weak GALGAS_templateNonEqualTestAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateNonEqualTestAST_2D_weak result ;
  const GALGAS_templateNonEqualTestAST_2D_weak * p = (const GALGAS_templateNonEqualTestAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateNonEqualTestAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateNonEqualTestAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateStrictInfTestAST reference class
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

GALGAS_location GALGAS_templateStrictInfTestAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateStrictInfTestAST * p = (cPtr_templateStrictInfTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateStrictInfTestAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateStrictInfTestAST * p = (cPtr_templateStrictInfTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateStrictInfTestAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateStrictInfTestAST * p = (cPtr_templateStrictInfTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
    return p->mProperty_mRightExpression ;
  }
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

typeComparisonResult GALGAS_templateStrictInfTestAST_2D_weak::objectCompare (const GALGAS_templateStrictInfTestAST_2D_weak & inOperand) const {
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

GALGAS_templateStrictInfTestAST_2D_weak::GALGAS_templateStrictInfTestAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictInfTestAST_2D_weak & GALGAS_templateStrictInfTestAST_2D_weak::operator = (const GALGAS_templateStrictInfTestAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictInfTestAST_2D_weak::GALGAS_templateStrictInfTestAST_2D_weak (const GALGAS_templateStrictInfTestAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictInfTestAST_2D_weak GALGAS_templateStrictInfTestAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateStrictInfTestAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictInfTestAST GALGAS_templateStrictInfTestAST_2D_weak::bang_templateStrictInfTestAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateStrictInfTestAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateStrictInfTestAST) ;
      result = GALGAS_templateStrictInfTestAST ((cPtr_templateStrictInfTestAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateStrictInfTestAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateStrictInfTestAST_2D_weak ("templateStrictInfTestAST-weak",
                                                         & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateStrictInfTestAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictInfTestAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateStrictInfTestAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateStrictInfTestAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictInfTestAST_2D_weak GALGAS_templateStrictInfTestAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateStrictInfTestAST_2D_weak result ;
  const GALGAS_templateStrictInfTestAST_2D_weak * p = (const GALGAS_templateStrictInfTestAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateStrictInfTestAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateStrictInfTestAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateInfOrEqualTestAST reference class
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

GALGAS_location GALGAS_templateInfOrEqualTestAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateInfOrEqualTestAST * p = (cPtr_templateInfOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateInfOrEqualTestAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateInfOrEqualTestAST * p = (cPtr_templateInfOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateInfOrEqualTestAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateInfOrEqualTestAST * p = (cPtr_templateInfOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
    return p->mProperty_mRightExpression ;
  }
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

typeComparisonResult GALGAS_templateInfOrEqualTestAST_2D_weak::objectCompare (const GALGAS_templateInfOrEqualTestAST_2D_weak & inOperand) const {
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

GALGAS_templateInfOrEqualTestAST_2D_weak::GALGAS_templateInfOrEqualTestAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInfOrEqualTestAST_2D_weak & GALGAS_templateInfOrEqualTestAST_2D_weak::operator = (const GALGAS_templateInfOrEqualTestAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInfOrEqualTestAST_2D_weak::GALGAS_templateInfOrEqualTestAST_2D_weak (const GALGAS_templateInfOrEqualTestAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInfOrEqualTestAST_2D_weak GALGAS_templateInfOrEqualTestAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInfOrEqualTestAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInfOrEqualTestAST GALGAS_templateInfOrEqualTestAST_2D_weak::bang_templateInfOrEqualTestAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInfOrEqualTestAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInfOrEqualTestAST) ;
      result = GALGAS_templateInfOrEqualTestAST ((cPtr_templateInfOrEqualTestAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInfOrEqualTestAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInfOrEqualTestAST_2D_weak ("templateInfOrEqualTestAST-weak",
                                                          & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInfOrEqualTestAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInfOrEqualTestAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInfOrEqualTestAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInfOrEqualTestAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInfOrEqualTestAST_2D_weak GALGAS_templateInfOrEqualTestAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInfOrEqualTestAST_2D_weak result ;
  const GALGAS_templateInfOrEqualTestAST_2D_weak * p = (const GALGAS_templateInfOrEqualTestAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInfOrEqualTestAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInfOrEqualTestAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateStrictSupTestAST reference class
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

GALGAS_location GALGAS_templateStrictSupTestAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateStrictSupTestAST * p = (cPtr_templateStrictSupTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateStrictSupTestAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateStrictSupTestAST * p = (cPtr_templateStrictSupTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateStrictSupTestAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateStrictSupTestAST * p = (cPtr_templateStrictSupTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
    return p->mProperty_mRightExpression ;
  }
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

typeComparisonResult GALGAS_templateStrictSupTestAST_2D_weak::objectCompare (const GALGAS_templateStrictSupTestAST_2D_weak & inOperand) const {
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

GALGAS_templateStrictSupTestAST_2D_weak::GALGAS_templateStrictSupTestAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictSupTestAST_2D_weak & GALGAS_templateStrictSupTestAST_2D_weak::operator = (const GALGAS_templateStrictSupTestAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictSupTestAST_2D_weak::GALGAS_templateStrictSupTestAST_2D_weak (const GALGAS_templateStrictSupTestAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictSupTestAST_2D_weak GALGAS_templateStrictSupTestAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateStrictSupTestAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictSupTestAST GALGAS_templateStrictSupTestAST_2D_weak::bang_templateStrictSupTestAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateStrictSupTestAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateStrictSupTestAST) ;
      result = GALGAS_templateStrictSupTestAST ((cPtr_templateStrictSupTestAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateStrictSupTestAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateStrictSupTestAST_2D_weak ("templateStrictSupTestAST-weak",
                                                         & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateStrictSupTestAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictSupTestAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateStrictSupTestAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateStrictSupTestAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateStrictSupTestAST_2D_weak GALGAS_templateStrictSupTestAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateStrictSupTestAST_2D_weak result ;
  const GALGAS_templateStrictSupTestAST_2D_weak * p = (const GALGAS_templateStrictSupTestAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateStrictSupTestAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateStrictSupTestAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateSupOrEqualTestAST reference class
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

GALGAS_location GALGAS_templateSupOrEqualTestAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateSupOrEqualTestAST * p = (cPtr_templateSupOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateSupOrEqualTestAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateSupOrEqualTestAST * p = (cPtr_templateSupOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateSupOrEqualTestAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateSupOrEqualTestAST * p = (cPtr_templateSupOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
    return p->mProperty_mRightExpression ;
  }
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

typeComparisonResult GALGAS_templateSupOrEqualTestAST_2D_weak::objectCompare (const GALGAS_templateSupOrEqualTestAST_2D_weak & inOperand) const {
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

GALGAS_templateSupOrEqualTestAST_2D_weak::GALGAS_templateSupOrEqualTestAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSupOrEqualTestAST_2D_weak & GALGAS_templateSupOrEqualTestAST_2D_weak::operator = (const GALGAS_templateSupOrEqualTestAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSupOrEqualTestAST_2D_weak::GALGAS_templateSupOrEqualTestAST_2D_weak (const GALGAS_templateSupOrEqualTestAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSupOrEqualTestAST_2D_weak GALGAS_templateSupOrEqualTestAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateSupOrEqualTestAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSupOrEqualTestAST GALGAS_templateSupOrEqualTestAST_2D_weak::bang_templateSupOrEqualTestAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateSupOrEqualTestAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateSupOrEqualTestAST) ;
      result = GALGAS_templateSupOrEqualTestAST ((cPtr_templateSupOrEqualTestAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateSupOrEqualTestAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateSupOrEqualTestAST_2D_weak ("templateSupOrEqualTestAST-weak",
                                                          & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateSupOrEqualTestAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSupOrEqualTestAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateSupOrEqualTestAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateSupOrEqualTestAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateSupOrEqualTestAST_2D_weak GALGAS_templateSupOrEqualTestAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateSupOrEqualTestAST_2D_weak result ;
  const GALGAS_templateSupOrEqualTestAST_2D_weak * p = (const GALGAS_templateSupOrEqualTestAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateSupOrEqualTestAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateSupOrEqualTestAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateLeftShiftOperationAST reference class
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

GALGAS_location GALGAS_templateLeftShiftOperationAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateLeftShiftOperationAST * p = (cPtr_templateLeftShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateLeftShiftOperationAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateLeftShiftOperationAST * p = (cPtr_templateLeftShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateLeftShiftOperationAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateLeftShiftOperationAST * p = (cPtr_templateLeftShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
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

typeComparisonResult GALGAS_templateLeftShiftOperationAST_2D_weak::objectCompare (const GALGAS_templateLeftShiftOperationAST_2D_weak & inOperand) const {
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

GALGAS_templateLeftShiftOperationAST_2D_weak::GALGAS_templateLeftShiftOperationAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLeftShiftOperationAST_2D_weak & GALGAS_templateLeftShiftOperationAST_2D_weak::operator = (const GALGAS_templateLeftShiftOperationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLeftShiftOperationAST_2D_weak::GALGAS_templateLeftShiftOperationAST_2D_weak (const GALGAS_templateLeftShiftOperationAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLeftShiftOperationAST_2D_weak GALGAS_templateLeftShiftOperationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLeftShiftOperationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLeftShiftOperationAST GALGAS_templateLeftShiftOperationAST_2D_weak::bang_templateLeftShiftOperationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLeftShiftOperationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLeftShiftOperationAST) ;
      result = GALGAS_templateLeftShiftOperationAST ((cPtr_templateLeftShiftOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLeftShiftOperationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLeftShiftOperationAST_2D_weak ("templateLeftShiftOperationAST-weak",
                                                              & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLeftShiftOperationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLeftShiftOperationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLeftShiftOperationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLeftShiftOperationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLeftShiftOperationAST_2D_weak GALGAS_templateLeftShiftOperationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateLeftShiftOperationAST_2D_weak result ;
  const GALGAS_templateLeftShiftOperationAST_2D_weak * p = (const GALGAS_templateLeftShiftOperationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLeftShiftOperationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLeftShiftOperationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateRightShiftOperationAST reference class
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

GALGAS_location GALGAS_templateRightShiftOperationAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateRightShiftOperationAST * p = (cPtr_templateRightShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateRightShiftOperationAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateRightShiftOperationAST * p = (cPtr_templateRightShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateRightShiftOperationAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateRightShiftOperationAST * p = (cPtr_templateRightShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
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

typeComparisonResult GALGAS_templateRightShiftOperationAST_2D_weak::objectCompare (const GALGAS_templateRightShiftOperationAST_2D_weak & inOperand) const {
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

GALGAS_templateRightShiftOperationAST_2D_weak::GALGAS_templateRightShiftOperationAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateRightShiftOperationAST_2D_weak & GALGAS_templateRightShiftOperationAST_2D_weak::operator = (const GALGAS_templateRightShiftOperationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateRightShiftOperationAST_2D_weak::GALGAS_templateRightShiftOperationAST_2D_weak (const GALGAS_templateRightShiftOperationAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateRightShiftOperationAST_2D_weak GALGAS_templateRightShiftOperationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateRightShiftOperationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateRightShiftOperationAST GALGAS_templateRightShiftOperationAST_2D_weak::bang_templateRightShiftOperationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateRightShiftOperationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateRightShiftOperationAST) ;
      result = GALGAS_templateRightShiftOperationAST ((cPtr_templateRightShiftOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateRightShiftOperationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateRightShiftOperationAST_2D_weak ("templateRightShiftOperationAST-weak",
                                                               & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateRightShiftOperationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateRightShiftOperationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateRightShiftOperationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateRightShiftOperationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateRightShiftOperationAST_2D_weak GALGAS_templateRightShiftOperationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateRightShiftOperationAST_2D_weak result ;
  const GALGAS_templateRightShiftOperationAST_2D_weak * p = (const GALGAS_templateRightShiftOperationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateRightShiftOperationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateRightShiftOperationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionStringAST_2D_weak::objectCompare (const GALGAS_templateInstructionStringAST_2D_weak & inOperand) const {
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

GALGAS_templateInstructionStringAST_2D_weak::GALGAS_templateInstructionStringAST_2D_weak (void) :
GALGAS_templateInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST_2D_weak & GALGAS_templateInstructionStringAST_2D_weak::operator = (const GALGAS_templateInstructionStringAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST_2D_weak::GALGAS_templateInstructionStringAST_2D_weak (const GALGAS_templateInstructionStringAST & inSource) :
GALGAS_templateInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST_2D_weak GALGAS_templateInstructionStringAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionStringAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST GALGAS_templateInstructionStringAST_2D_weak::bang_templateInstructionStringAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionStringAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionStringAST) ;
      result = GALGAS_templateInstructionStringAST ((cPtr_templateInstructionStringAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionStringAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionStringAST_2D_weak ("templateInstructionStringAST-weak",
                                                             & kTypeDescriptor_GALGAS_templateInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionStringAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionStringAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionStringAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST_2D_weak GALGAS_templateInstructionStringAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringAST_2D_weak result ;
  const GALGAS_templateInstructionStringAST_2D_weak * p = (const GALGAS_templateInstructionStringAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionStringAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateInstructionExpressionAST reference class
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

GALGAS_templateExpressionAST GALGAS_templateInstructionExpressionAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateInstructionExpressionAST * p = (cPtr_templateInstructionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateInstructionExpressionAST::readProperty_mLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateInstructionExpressionAST * p = (cPtr_templateInstructionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionAST) ;
    return p->mProperty_mLocation ;
  }
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

typeComparisonResult GALGAS_templateInstructionExpressionAST_2D_weak::objectCompare (const GALGAS_templateInstructionExpressionAST_2D_weak & inOperand) const {
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

GALGAS_templateInstructionExpressionAST_2D_weak::GALGAS_templateInstructionExpressionAST_2D_weak (void) :
GALGAS_templateInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionAST_2D_weak & GALGAS_templateInstructionExpressionAST_2D_weak::operator = (const GALGAS_templateInstructionExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionAST_2D_weak::GALGAS_templateInstructionExpressionAST_2D_weak (const GALGAS_templateInstructionExpressionAST & inSource) :
GALGAS_templateInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionAST_2D_weak GALGAS_templateInstructionExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionAST GALGAS_templateInstructionExpressionAST_2D_weak::bang_templateInstructionExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionExpressionAST) ;
      result = GALGAS_templateInstructionExpressionAST ((cPtr_templateInstructionExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionExpressionAST_2D_weak ("templateInstructionExpressionAST-weak",
                                                                 & kTypeDescriptor_GALGAS_templateInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionAST_2D_weak GALGAS_templateInstructionExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionAST_2D_weak result ;
  const GALGAS_templateInstructionExpressionAST_2D_weak * p = (const GALGAS_templateInstructionExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateBlockInstructionAST reference class
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

GALGAS_templateExpressionAST GALGAS_templateBlockInstructionAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateBlockInstructionAST * p = (cPtr_templateBlockInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateBlockInstructionAST::readProperty_mLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateBlockInstructionAST * p = (cPtr_templateBlockInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
    return p->mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateBlockInstructionAST::readProperty_mBlockInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionListAST () ;
  }else{
    cPtr_templateBlockInstructionAST * p = (cPtr_templateBlockInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
    return p->mProperty_mBlockInstructionList ;
  }
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

typeComparisonResult GALGAS_templateBlockInstructionAST_2D_weak::objectCompare (const GALGAS_templateBlockInstructionAST_2D_weak & inOperand) const {
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

GALGAS_templateBlockInstructionAST_2D_weak::GALGAS_templateBlockInstructionAST_2D_weak (void) :
GALGAS_templateInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionAST_2D_weak & GALGAS_templateBlockInstructionAST_2D_weak::operator = (const GALGAS_templateBlockInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionAST_2D_weak::GALGAS_templateBlockInstructionAST_2D_weak (const GALGAS_templateBlockInstructionAST & inSource) :
GALGAS_templateInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionAST_2D_weak GALGAS_templateBlockInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateBlockInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionAST GALGAS_templateBlockInstructionAST_2D_weak::bang_templateBlockInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateBlockInstructionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateBlockInstructionAST) ;
      result = GALGAS_templateBlockInstructionAST ((cPtr_templateBlockInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateBlockInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateBlockInstructionAST_2D_weak ("templateBlockInstructionAST-weak",
                                                            & kTypeDescriptor_GALGAS_templateInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateBlockInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateBlockInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateBlockInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionAST_2D_weak GALGAS_templateBlockInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateBlockInstructionAST_2D_weak result ;
  const GALGAS_templateBlockInstructionAST_2D_weak * p = (const GALGAS_templateBlockInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateBlockInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateBlockInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateInstructionGetColumnLocationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionGetColumnLocationAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionGetColumnLocationAST::objectCompare (const GALGAS_templateInstructionGetColumnLocationAST & inOperand) const {
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

typeComparisonResult GALGAS_templateInstructionGetColumnLocationAST_2D_weak::objectCompare (const GALGAS_templateInstructionGetColumnLocationAST_2D_weak & inOperand) const {
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

GALGAS_templateInstructionGetColumnLocationAST_2D_weak::GALGAS_templateInstructionGetColumnLocationAST_2D_weak (void) :
GALGAS_templateInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationAST_2D_weak & GALGAS_templateInstructionGetColumnLocationAST_2D_weak::operator = (const GALGAS_templateInstructionGetColumnLocationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationAST_2D_weak::GALGAS_templateInstructionGetColumnLocationAST_2D_weak (const GALGAS_templateInstructionGetColumnLocationAST & inSource) :
GALGAS_templateInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationAST_2D_weak GALGAS_templateInstructionGetColumnLocationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationAST GALGAS_templateInstructionGetColumnLocationAST_2D_weak::bang_templateInstructionGetColumnLocationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionGetColumnLocationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionGetColumnLocationAST) ;
      result = GALGAS_templateInstructionGetColumnLocationAST ((cPtr_templateInstructionGetColumnLocationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionGetColumnLocationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST_2D_weak ("templateInstructionGetColumnLocationAST-weak",
                                                                        & kTypeDescriptor_GALGAS_templateInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionGetColumnLocationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionGetColumnLocationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionGetColumnLocationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationAST_2D_weak GALGAS_templateInstructionGetColumnLocationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationAST_2D_weak result ;
  const GALGAS_templateInstructionGetColumnLocationAST_2D_weak * p = (const GALGAS_templateInstructionGetColumnLocationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionGetColumnLocationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGetColumnLocationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateInstructionGotoColumnLocationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionGotoColumnLocationAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionGotoColumnLocationAST::objectCompare (const GALGAS_templateInstructionGotoColumnLocationAST & inOperand) const {
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

typeComparisonResult GALGAS_templateInstructionGotoColumnLocationAST_2D_weak::objectCompare (const GALGAS_templateInstructionGotoColumnLocationAST_2D_weak & inOperand) const {
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

GALGAS_templateInstructionGotoColumnLocationAST_2D_weak::GALGAS_templateInstructionGotoColumnLocationAST_2D_weak (void) :
GALGAS_templateInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationAST_2D_weak & GALGAS_templateInstructionGotoColumnLocationAST_2D_weak::operator = (const GALGAS_templateInstructionGotoColumnLocationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationAST_2D_weak::GALGAS_templateInstructionGotoColumnLocationAST_2D_weak (const GALGAS_templateInstructionGotoColumnLocationAST & inSource) :
GALGAS_templateInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationAST_2D_weak GALGAS_templateInstructionGotoColumnLocationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionGotoColumnLocationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationAST GALGAS_templateInstructionGotoColumnLocationAST_2D_weak::bang_templateInstructionGotoColumnLocationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionGotoColumnLocationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionGotoColumnLocationAST) ;
      result = GALGAS_templateInstructionGotoColumnLocationAST ((cPtr_templateInstructionGotoColumnLocationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionGotoColumnLocationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST_2D_weak ("templateInstructionGotoColumnLocationAST-weak",
                                                                         & kTypeDescriptor_GALGAS_templateInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionGotoColumnLocationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionGotoColumnLocationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionGotoColumnLocationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGotoColumnLocationAST_2D_weak GALGAS_templateInstructionGotoColumnLocationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionGotoColumnLocationAST_2D_weak result ;
  const GALGAS_templateInstructionGotoColumnLocationAST_2D_weak * p = (const GALGAS_templateInstructionGotoColumnLocationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionGotoColumnLocationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGotoColumnLocationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  public: GALGAS_templateInstructionIfBranchListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_templateInstructionIfBranchListAST (const GALGAS_templateExpressionAST & in_mExpression,
                                                                 const GALGAS_templateInstructionListAST & in_mInstructionList
                                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateInstructionIfBranchListAST (const GALGAS_templateInstructionIfBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  return true ; // return mObject.isValid () ;
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
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionIfBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_templateInstructionIfBranchListAST::setter_append (GALGAS_templateInstructionIfBranchListAST_2D_element inElement,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionIfBranchListAST (inElement COMMA_THERE)) ;
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

void GALGAS_templateInstructionIfBranchListAST::setter_insertAtIndex (const GALGAS_templateExpressionAST inOperand0,
                                                                      const GALGAS_templateInstructionListAST inOperand1,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionIfBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_templateInstructionIfBranchListAST::setter_removeAtIndex (GALGAS_templateExpressionAST & outOperand0,
                                                                      GALGAS_templateInstructionListAST & outOperand1,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_templateInstructionIfBranchListAST * p = (cCollectionElement_templateInstructionIfBranchListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListAST) ;
        outOperand0 = p->mObject.mProperty_mExpression ;
        outOperand1 = p->mObject.mProperty_mInstructionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
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
// @templateInstructionIfAST reference class
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

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfAST::readProperty_mTemplateInstructionIfBranchList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionIfBranchListAST () ;
  }else{
    cPtr_templateInstructionIfAST * p = (cPtr_templateInstructionIfAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
    return p->mProperty_mTemplateInstructionIfBranchList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionIfAST::readProperty_mElseInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionIfAST * p = (cPtr_templateInstructionIfAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
    return p->mProperty_mElseInstructionList ;
  }
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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionIfAST_2D_weak::objectCompare (const GALGAS_templateInstructionIfAST_2D_weak & inOperand) const {
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

GALGAS_templateInstructionIfAST_2D_weak::GALGAS_templateInstructionIfAST_2D_weak (void) :
GALGAS_templateInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST_2D_weak & GALGAS_templateInstructionIfAST_2D_weak::operator = (const GALGAS_templateInstructionIfAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST_2D_weak::GALGAS_templateInstructionIfAST_2D_weak (const GALGAS_templateInstructionIfAST & inSource) :
GALGAS_templateInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST_2D_weak GALGAS_templateInstructionIfAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionIfAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST GALGAS_templateInstructionIfAST_2D_weak::bang_templateInstructionIfAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionIfAST) ;
      result = GALGAS_templateInstructionIfAST ((cPtr_templateInstructionIfAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionIfAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfAST_2D_weak ("templateInstructionIfAST-weak",
                                                         & kTypeDescriptor_GALGAS_templateInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionIfAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionIfAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfAST_2D_weak GALGAS_templateInstructionIfAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfAST_2D_weak result ;
  const GALGAS_templateInstructionIfAST_2D_weak * p = (const GALGAS_templateInstructionIfAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateInstructionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_templateInstructionForGeneration::objectCompare (const GALGAS_templateInstructionForGeneration & inOperand) const {
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

GALGAS_templateInstructionForGeneration::GALGAS_templateInstructionForGeneration (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration::GALGAS_templateInstructionForGeneration (const cPtr_templateInstructionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionForGeneration::cPtr_templateInstructionForGeneration (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
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

typeComparisonResult GALGAS_templateInstructionForGeneration_2D_weak::objectCompare (const GALGAS_templateInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_templateInstructionForGeneration_2D_weak::GALGAS_templateInstructionForGeneration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration_2D_weak & GALGAS_templateInstructionForGeneration_2D_weak::operator = (const GALGAS_templateInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration_2D_weak::GALGAS_templateInstructionForGeneration_2D_weak (const GALGAS_templateInstructionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration_2D_weak GALGAS_templateInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration GALGAS_templateInstructionForGeneration_2D_weak::bang_templateInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionForGeneration) ;
      result = GALGAS_templateInstructionForGeneration ((cPtr_templateInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak ("templateInstructionForGeneration-weak",
                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForGeneration_2D_weak GALGAS_templateInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForGeneration_2D_weak result ;
  const GALGAS_templateInstructionForGeneration_2D_weak * p = (const GALGAS_templateInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionExpressionForGeneration_2D_weak::objectCompare (const GALGAS_templateInstructionExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_templateInstructionExpressionForGeneration_2D_weak::GALGAS_templateInstructionExpressionForGeneration_2D_weak (void) :
GALGAS_templateInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration_2D_weak & GALGAS_templateInstructionExpressionForGeneration_2D_weak::operator = (const GALGAS_templateInstructionExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration_2D_weak::GALGAS_templateInstructionExpressionForGeneration_2D_weak (const GALGAS_templateInstructionExpressionForGeneration & inSource) :
GALGAS_templateInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration_2D_weak GALGAS_templateInstructionExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration_2D_weak::bang_templateInstructionExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionExpressionForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionExpressionForGeneration) ;
      result = GALGAS_templateInstructionExpressionForGeneration ((cPtr_templateInstructionExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration_2D_weak ("templateInstructionExpressionForGeneration-weak",
                                                                           & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration_2D_weak GALGAS_templateInstructionExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionForGeneration_2D_weak result ;
  const GALGAS_templateInstructionExpressionForGeneration_2D_weak * p = (const GALGAS_templateInstructionExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  public: GALGAS_templateInstructionListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_templateInstructionListForGeneration (const GALGAS_templateInstructionForGeneration & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateInstructionListForGeneration (const GALGAS_templateInstructionListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  return true ; // return mObject.isValid () ;
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
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
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

void GALGAS_templateInstructionListForGeneration::setter_append (GALGAS_templateInstructionListForGeneration_2D_element inElement,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (inElement COMMA_THERE)) ;
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

void GALGAS_templateInstructionListForGeneration::setter_insertAtIndex (const GALGAS_templateInstructionForGeneration inOperand0,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
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

void GALGAS_templateInstructionListForGeneration::setter_removeAtIndex (GALGAS_templateInstructionForGeneration & outOperand0,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
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

typeComparisonResult GALGAS_templateBlockInstructionForGeneration_2D_weak::objectCompare (const GALGAS_templateBlockInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_templateBlockInstructionForGeneration_2D_weak::GALGAS_templateBlockInstructionForGeneration_2D_weak (void) :
GALGAS_templateInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration_2D_weak & GALGAS_templateBlockInstructionForGeneration_2D_weak::operator = (const GALGAS_templateBlockInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration_2D_weak::GALGAS_templateBlockInstructionForGeneration_2D_weak (const GALGAS_templateBlockInstructionForGeneration & inSource) :
GALGAS_templateInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration_2D_weak GALGAS_templateBlockInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateBlockInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration GALGAS_templateBlockInstructionForGeneration_2D_weak::bang_templateBlockInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateBlockInstructionForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateBlockInstructionForGeneration) ;
      result = GALGAS_templateBlockInstructionForGeneration ((cPtr_templateBlockInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateBlockInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration_2D_weak ("templateBlockInstructionForGeneration-weak",
                                                                      & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateBlockInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateBlockInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateBlockInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration_2D_weak GALGAS_templateBlockInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateBlockInstructionForGeneration_2D_weak result ;
  const GALGAS_templateBlockInstructionForGeneration_2D_weak * p = (const GALGAS_templateBlockInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateBlockInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateBlockInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateInstructionGetColumnLocationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionGetColumnLocationForGeneration::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionGetColumnLocationForGeneration::objectCompare (const GALGAS_templateInstructionGetColumnLocationForGeneration & inOperand) const {
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

typeComparisonResult GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::objectCompare (const GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak & inOperand) const {
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

GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak (void) :
GALGAS_templateInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak & GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::operator = (const GALGAS_templateInstructionGetColumnLocationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak (const GALGAS_templateInstructionGetColumnLocationForGeneration & inSource) :
GALGAS_templateInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::bang_templateInstructionGetColumnLocationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionGetColumnLocationForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionGetColumnLocationForGeneration) ;
      result = GALGAS_templateInstructionGetColumnLocationForGeneration ((cPtr_templateInstructionGetColumnLocationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionGetColumnLocationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak ("templateInstructionGetColumnLocationForGeneration-weak",
                                                                                  & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak result ;
  const GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak * p = (const GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGetColumnLocationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateInstructionGotoColumnLocationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionGotoColumnLocationForGeneration::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionGotoColumnLocationForGeneration::objectCompare (const GALGAS_templateInstructionGotoColumnLocationForGeneration & inOperand) const {
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

