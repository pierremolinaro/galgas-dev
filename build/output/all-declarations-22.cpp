#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-22.h"

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'lexiqueGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_lexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_lexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_lexiqueGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_lexiqueGenerationTemplates_0,
  0,
  gWrapperAllDirectories_lexiqueGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates headerZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_headerZone_32_ (Compiler * inCompiler,
                                                                             const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                             const GALGAS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                             const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                             const GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                             const GALGAS_indexingListAST & in_INDEXING_5F_LIST
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"Lexique.h\"\n\n//--------------------------------------------------------------------------------------------------\n//                    E X T E R N    R O U T I N E S\n//--------------------------------------------------------------------------------------------------\n") ;
  GALGAS_uint index_654_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ().isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_654 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap (), kENUMERATION_UP) ;
    while (enumerator_654.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_654.current_mIsExtern (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("\nvoid scanner_routine_") ;
        result.appendString (enumerator_654.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (Lexique & inLexique") ;
        GALGAS_uint index_873_ (0) ;
        if (enumerator_654.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_873 (enumerator_654.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_873.hasCurrentObject ()) {
            result.appendString (",\n                ") ;
            result.appendString (extensionGetter_cppConstInFormalArgument (enumerator_873.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (extensionGetter_cppTypeName (enumerator_873.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (extensionGetter_cppReferenceInFormalArgument (enumerator_873.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_873.current_mArgumentNameForComment (HERE).stringValue ()) ;
            index_873_.increment () ;
            enumerator_873.gotoNextObject () ;
          }
        }
        GALGAS_uint index_1226_ (0) ;
        if (enumerator_654.current_mErrorMessageList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_1226 (enumerator_654.current_mErrorMessageList (HERE), kENUMERATION_UP) ;
          while (enumerator_1226.hasCurrentObject ()) {
            result.appendString (",\n                const char * ") ;
            result.appendString (enumerator_1226.current_mValue (HERE).stringValue ()) ;
            index_1226_.increment () ;
            enumerator_1226.gotoNextObject () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_654_.increment () ;
      enumerator_654.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                    E X T E R N    F U N C T I O N S\n//--------------------------------------------------------------------------------------------------\n") ;
  GALGAS_uint index_1712_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ().isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1712 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap (), kENUMERATION_UP) ;
    while (enumerator_1712.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1712.current_mIsExtern (HERE).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("\n") ;
        result.appendString (extensionGetter_cppTypeName (enumerator_1712.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" scanner_function_") ;
        result.appendString (enumerator_1712.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (Lexique & inLexique") ;
        GALGAS_uint index_1907_ (0) ;
        if (enumerator_1712.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_1907 (enumerator_1712.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1907.hasCurrentObject ()) {
            result.appendString (",\n                const ") ;
            result.appendString (extensionGetter_cppTypeName (enumerator_1907.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 37)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_1907.current_mArgumentNameForComment (HERE).stringValue ()) ;
            index_1907_.increment () ;
            enumerator_1907.gotoNextObject () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1712_.increment () ;
      enumerator_1712.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                       T O K E N    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cToken {\n") ;
  GALGAS_uint index_2424_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2424 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_2424.hasCurrentObject ()) {
      result.appendString ("  public: ") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_2424.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (" mLexicalAttribute_") ;
      result.appendString (enumerator_2424.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_2424_.increment () ;
      enumerator_2424.gotoNextObject () ;
    }
  }
  result.appendString ("\n  public: cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public Lexique {\n//--- Constructors\n  public: Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceFileName\n                       COMMA_LOCATION_ARGS) ;\n\n  public: Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceString,\n                       const String & inStringForError\n                       COMMA_LOCATION_ARGS) ;\n\n//--- Instrospection\n  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;\n\n//--- Declaring a protected virtual destructor enables the compiler to raise\n//    an error if a direct delete is performed; only the static method\n//    SharedObject::detachPointer may invoke delete.\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    protected: virtual ~ Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {}\n  #endif\n") ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 80)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("\n//--- Scanner mode for template scanner\n  private: int32_t mMatchedTemplateDelimiterIndex ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n\n\n//--- Terminal symbols enumeration\n  public: enum {kToken_") ;
  GALGAS_uint index_4078_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_4078 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_4078.hasCurrentObject ()) {
      result.appendString (",\n   kToken_") ;
      result.appendString (enumerator_4078.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (index_4078_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).stringValue ()) ;
      result.appendString (" */ ") ;
      index_4078_idx.increment () ;
      enumerator_4078.gotoNextObject () ;
    }
  }
  result.appendString ("} ;\n") ;
  GALGAS_uint index_4293_ (0) ;
  if (in_DELIMITOR_5F_LIST_5F_LIST.isValid ()) {
    cEnumerator_lexicalListDeclarationListAST enumerator_4293 (in_DELIMITOR_5F_LIST_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4293.hasCurrentObject ()) {
      result.appendString ("\n//--- Key words table '") ;
      result.appendString (enumerator_4293.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("'\n  public: static int32_t search_into_") ;
      result.appendString (enumerator_4293.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" (const String & inSearchedString) ;\n") ;
      index_4293_.increment () ;
      enumerator_4293.gotoNextObject () ;
    }
  }
  result.appendString ("  \n\n//--- Assign from attribute\n") ;
  GALGAS_uint index_4559_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_4559 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_4559.hasCurrentObject ()) {
      result.appendString ("  public: GALGAS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_4559.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 102)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 102)).stringValue ()) ;
      result.appendString (" synthetizedAttribute_") ;
      result.appendString (enumerator_4559.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 102)).stringValue ()) ;
      result.appendString (" (void) const ;\n") ;
      index_4559_.increment () ;
      enumerator_4559.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--- Attribute access\n") ;
  GALGAS_uint index_4833_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_4833 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_4833.hasCurrentObject ()) {
      result.appendString ("  public: ") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_4833.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 109)).stringValue ()) ;
      result.appendString (" attributeValue_") ;
      result.appendString (enumerator_4833.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 109)).stringValue ()) ;
      result.appendString (" (void) const ;\n") ;
      index_4833_.increment () ;
      enumerator_4833.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--- indexing keys\n") ;
  GALGAS_uint index_5060_ (0) ;
  if (in_INDEXING_5F_LIST.isValid ()) {
    cEnumerator_indexingListAST enumerator_5060 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_5060 = enumerator_5060.hasCurrentObject () ;
    if (nonEmpty_enumerator_5060) {
      result.appendString ("  public: enum {") ;
    }
    while (enumerator_5060.hasCurrentObject ()) {
      result.appendString ("\n    kIndexing_") ;
      result.appendString (enumerator_5060.current_mIndexName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 117)).stringValue ()) ;
      if (enumerator_5060.hasNextObject ()) {
        result.appendString (",") ;
      }
      index_5060_.increment () ;
      enumerator_5060.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_5060) {
      result.appendString ("\n  } ;\n") ;
    }
  }
  result.appendString ("\n//--- Parse lexical token\n  protected: void internalParseLexicalToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & token) ;\n  protected: virtual bool parseLexicalToken (void) override ;\n\n//--- Get terminal message\n  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;\n\n//--- Get terminal count\n  public: virtual int32_t terminalVocabularyCount (void) const override { return ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 130)).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 130)).stringValue ()) ;
  result.appendString (" ; }\n\n//--- Get Token String\n  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;\n\n//--- Enter Token\n  protected: void enterToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & ioToken) ;\n\n//--- Style name for Latex\n  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;\n  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;\n} ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates implementationZone2Galgas3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_implementationZone_32_Galgas_33_ (Compiler * inCompiler,
                                                                                               const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                               const GALGAS_bool & in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE,
                                                                                               const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                               const GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                               const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                               const GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                               const GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                               const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                               const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                               const GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                               const GALGAS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                               const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                               const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//     L E X I Q U E                                                                             \n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"unicode_character_cpp.h\"\n#include \"scanner_actions.h\"\n#include \"cLexiqueIntrospection.h\"\n\n//--------------------------------------------------------------------------------------------------\n\ncTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void)") ;
  GALGAS_uint index_651_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_651 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_651 = enumerator_651.hasCurrentObject () ;
    if (nonEmpty_enumerator_651) {
      result.appendString (" :\n") ;
    }
    while (enumerator_651.hasCurrentObject ()) {
      result.appendString ("mLexicalAttribute_") ;
      result.appendString (enumerator_651.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (" ()") ;
      if (enumerator_651.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_651_.increment () ;
      enumerator_651.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nLexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCallerCompiler,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inSourceFileName\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\nLexique (inCallerCompiler, inSourceFileName COMMA_THERE)") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 28)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString (",\nmMatchedTemplateDelimiterIndex (-1)") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nLexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCallerCompiler,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inSourceString,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inStringForError\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\nLexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE)") ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 41)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString (",\nmMatchedTemplateDelimiterIndex (-1)") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n//                        Lexical error message list                                             \n//--------------------------------------------------------------------------------------------------\n") ;
  GALGAS_uint index_2085_ (0) ;
  if (in_LEXICAL_5F_MESSAGE_5F_MAP.isValid ()) {
    cEnumerator_lexicalMessageMap enumerator_2085 (in_LEXICAL_5F_MESSAGE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2085.hasCurrentObject ()) {
      result.appendString ("\nstatic const char * gLexicalMessage_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2085.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_2085.current_mLexicalMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 52)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_2085_.increment () ;
      enumerator_2085.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                getMessageForTerminal                                                          \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getMessageForTerminal (const int32_t inTerminalIndex) const {\n  String result = \"<unknown>\" ;\n  if ((inTerminalIndex >= 0) && (inTerminalIndex < ") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).stringValue ()) ;
  result.appendString (")) {\n    static const char * syntaxErrorMessageArray [") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).stringValue ()) ;
  result.appendString ("] = {kEndOfSourceLexicalErrorMessage") ;
  GALGAS_uint index_2948_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_2948 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2948.hasCurrentObject ()) {
      result.appendString (",\n        ") ;
      result.appendString (enumerator_2948.current_mSyntaxErrorMessage (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 64)).stringValue ()) ;
      index_2948_.increment () ;
      enumerator_2948.gotoNextObject () ;
    }
  }
  result.appendString ("\n    } ;\n    result = syntaxErrorMessageArray [inTerminalIndex] ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                      U N I C O D E    S T R I N G S                                           \n//--------------------------------------------------------------------------------------------------\n") ;
  GALGAS_uint index_3471_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    cEnumerator_stringset enumerator_3471 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES, kENUMERATION_UP) ;
    while (enumerator_3471.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_3471.current_key (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 77)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("\n//--- Unicode string for '$") ;
        result.appendString (enumerator_3471.current_key (HERE).getter_utf_38_RepresentationWithoutDelimiters (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString ("$'\nstatic const std::initializer_list <utf32> kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_3471.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" = ") ;
        result.appendString (enumerator_3471.current_key (HERE).getter_utf_33__32_Representation (GALGAS_bool (false) COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_3471_.increment () ;
      enumerator_3471.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  GALGAS_uint index_3920_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_3920 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3920.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n//             Key words table '") ;
      result.appendString (enumerator_3920.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("'      \n//--------------------------------------------------------------------------------------------------\n\nstatic const int32_t ktable_size_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3920.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_3920.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 88)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 88)).stringValue ()) ;
      result.appendString (" ;\n\nstatic const C_unicode_lexique_table_entry ktable_for_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3920.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" [ktable_size_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3920.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("] = {\n") ;
      GALGAS_uint index_4611_ (0) ;
      if (enumerator_3920.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_4611 (enumerator_3920.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_4611.hasCurrentObject ()) {
          result.appendString ("  C_unicode_lexique_table_entry (kUnicodeString_") ;
          result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_4611.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 91)).stringValue ()) ;
          result.appendString (", Lexique_") ;
          result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("::kToken_") ;
          result.appendString (enumerator_4611.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 91)).stringValue ()) ;
          result.appendString (")") ;
          if (enumerator_4611.hasNextObject ()) {
            result.appendString (",\n") ;
          }
          index_4611_.increment () ;
          enumerator_4611.gotoNextObject () ;
        }
      }
      result.appendString ("\n} ;\n\nint32_t Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::search_into_") ;
      result.appendString (enumerator_3920.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" (const String & inSearchedString) {\n  return searchInList (inSearchedString, ktable_for_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3920.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (", ktable_size_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3920.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (") ;\n}\n\n") ;
      index_3920_.increment () ;
      enumerator_3920.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                          getCurrentTokenString                                                \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getCurrentTokenString (const cToken * inTokenPtr) const {\n  const cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr = (const cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inTokenPtr ;\n  String s ;\n  if (ptr == nullptr) {\n    s.appendString (\"$$\") ;\n  }else{\n    switch (ptr->mTokenCode) {\n    case kToken_:\n      s.appendString (\"$$\") ;\n      break ;\n") ;
  GALGAS_uint index_5956_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_5956 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5956.hasCurrentObject ()) {
      result.appendString ("    case kToken_") ;
      result.appendString (enumerator_5956.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 115)).stringValue ()) ;
      result.appendString (":\n      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;\n      s.appendString (") ;
      result.appendString (enumerator_5956.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 117)).stringValue ()) ;
      result.appendString (") ;\n      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;\n") ;
      GALGAS_uint index_6350_ (0) ;
      if (enumerator_5956.current_mSentAttributeList (HERE).isValid ()) {
        cEnumerator_lexicalSentValueList enumerator_6350 (enumerator_5956.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
        while (enumerator_6350.hasCurrentObject ()) {
          result.appendString ("      s.appendUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;\n      s.") ;
          result.appendString (extensionGetter_appendMethodName (enumerator_6350.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (" (ptr->mLexicalAttribute_") ;
          result.appendString (enumerator_6350.current_mLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (extensionGetter_appendArgumentOfMethod (enumerator_6350.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (") ;\n") ;
          index_6350_.increment () ;
          enumerator_6350.gotoNextObject () ;
        }
      }
      result.appendString ("      break ;\n") ;
      index_5956_.increment () ;
      enumerator_5956.gotoNextObject () ;
    }
  }
  result.appendString ("    default:\n      break ;\n    }\n  }\n  return s ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters                                                 \n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_7233_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
    cEnumerator_templateDelimitorList enumerator_7233 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_7233 = enumerator_7233.hasCurrentObject () ;
    if (nonEmpty_enumerator_7233) {
      result.appendString ("static const cTemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateDefinitionArray [") ;
      result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 137)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 137)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_7233.hasCurrentObject ()) {
      result.appendString ("  cTemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_7233.current_mStartString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_7233.current_mStartString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (", ") ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_7233.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 139)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("{}, 0,") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_7233.current_mEndString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).stringValue ()) ;
        result.appendString (", ") ;
        result.appendString (enumerator_7233.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).stringValue ()) ;
        result.appendString (",") ;
        } break ;
      default :
        break ;
      }
      result.appendString (" nullptr, ") ;
      result.appendString (enumerator_7233.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 145)).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 145)).stringValue ()) ;
      result.appendString (")") ;
      if (enumerator_7233.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_7233_.increment () ;
      enumerator_7233.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_7233) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements                                               \n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_8236_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    cEnumerator_templateReplacementListAST enumerator_8236 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8236 = enumerator_8236.hasCurrentObject () ;
    if (nonEmpty_enumerator_8236) {
      result.appendString ("static const cTemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateReplacementArray [") ;
      result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_8236.hasCurrentObject ()) {
      result.appendString ("  cTemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_8236.current_mMatchString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_8236.current_mMatchString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).stringValue ()) ;
      result.appendString (", kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_8236.current_mReplacementString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_8236.current_mReplacementString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue ()) ;
      result.appendString (", ") ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_8236.current_mReplacementFunction (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 160)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("nullptr") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("scanner_routine_") ;
        result.appendString (enumerator_8236.current_mReplacementFunction (HERE).readProperty_string ().stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString (", true)") ;
      if (enumerator_8236.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_8236_.increment () ;
      enumerator_8236.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8236) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark                                 \n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 174)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    GALGAS_uint index_9383_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      cEnumerator_terminalList enumerator_9383 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_9383 = enumerator_9383.hasCurrentObject () ;
      if (nonEmpty_enumerator_9383) {
        result.appendString ("static const bool ") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_kEndOfScriptInTemplateArray [") ;
        result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue ()) ;
        result.appendString ("] = {\n") ;
      }
      while (enumerator_9383.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_9383.current_isEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 177)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_9383.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        if (enumerator_9383.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_9383_.increment () ;
        enumerator_9383.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9383) {
        result.appendString ("\n} ;\n") ;
      }
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//               INTERNAL PARSE LEXICAL TOKEN                                         \n//--------------------------------------------------------------------------------------------------\n\nvoid Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalParseLexicalToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & token) {\n") ;
  const enumGalgasBool test_6 = in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE.boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.appendString ("  bool loop = true ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_10021_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_10021 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_10021.hasCurrentObject ()) {
      result.appendString ("  token.mLexicalAttribute_") ;
      result.appendString (enumerator_10021.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (extensionGetter_initialization (enumerator_10021.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_10021_.increment () ;
      enumerator_10021.gotoNextObject () ;
    }
  }
  result.appendString ("  mTokenStartLocation = mCurrentLocation ;\n  try{\n") ;
  if (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).uintValue ())) ;
  }
  GALGAS_uint index_10242_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_lexicalRuleListAST enumerator_10242 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10242.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_generateLexicalRuleCode ((const cPtr_abstractLexicalRuleAST *) enumerator_10242.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 200)).stringValue ()) ;
      index_10242_.increment () ;
      enumerator_10242.gotoNextObject () ;
    }
  }
  if (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).uintValue ())) ;
  }
  result.appendString ("if (testForInputUTF32Char (TO_UNICODE ('\\0'))) { // End of source text \? \n      token.mTokenCode = kToken_ ; // Empty string code\n    }else{ // Unknown input character\n      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n      token.mTokenCode = -1 ; // No token\n      advance () ; // ... go throught unknown character\n    }\n  }catch (const C_lexicalErrorException &) {\n    token.mTokenCode = -1 ; // No token\n    advance () ; // ... go throught unknown character\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n//               P A R S E    L E X I C A L    T O K E N                                         \n//--------------------------------------------------------------------------------------------------\n\nbool Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::parseLexicalToken (void) {\n  cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" token ;\n  token.mTokenCode = -1 ;\n  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n") ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 225)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_7) {
  case kBoolTrue : {
    result.appendString ("    if ((mMatchedTemplateDelimiterIndex >= 0)\n     && (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n     && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      const bool foundEndDelimitor = testForInputUTF32String (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,\n                                                               true) ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      int32_t replacementIndex = 0 ;\n      while (replacementIndex >= 0) {\n        replacementIndex = findTemplateDelimiterIndex (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray, ") ;
    result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 238)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 238)).stringValue ()) ;
    result.appendString (") ;\n        if (replacementIndex >= 0) {\n          if (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {\n            token.mTemplateStringBeforeToken.appendString (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString) ;\n          }else{\n            String s ;\n            while (notTestForInputUTF32String (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString,\n                                                kEndOfSourceLexicalErrorMessage\n                                               COMMA_HERE)) {\n              s.appendUnicodeChar (previousChar () COMMA_HERE) ;\n            }\n            ") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;\n          }\n        }\n      }\n      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateDefinitionArray, ") ;
    result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 253)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 253)).stringValue ()) ;
    result.appendString (") ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        token.mTemplateStringBeforeToken.appendUnicodeChar (mCurrentChar COMMA_HERE) ;\n        advance () ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      internalParseLexicalToken (token) ;\n    }\n    if ((token.mTokenCode > 0) && ") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  ") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("    internalParseLexicalToken (token) ;") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n  }\n  if (UNICODE_VALUE (mCurrentChar) == '\\0') {\n    token.mTokenCode = 0 ;\n    enterToken (token) ;\n  }\n  return token.mTokenCode > 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                         E N T E R    T O K E N                                                \n//--------------------------------------------------------------------------------------------------\n\nvoid Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::enterToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & ioToken) {\n  cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr = nullptr ;\n  macroMyNew (ptr, cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ()) ;\n  ptr->mTokenCode = ioToken.mTokenCode ;\n  ptr->mStartLocation = mTokenStartLocation ;\n  ptr->mEndLocation = mTokenEndLocation ;\n  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;\n  ioToken.mTemplateStringBeforeToken = \"\" ;\n") ;
  GALGAS_uint index_14722_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_14722 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_14722.hasCurrentObject ()) {
      result.appendString ("  ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_14722.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).stringValue ()) ;
      result.appendString (" = ioToken.mLexicalAttribute_") ;
      result.appendString (enumerator_14722.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_14722_.increment () ;
      enumerator_14722.gotoNextObject () ;
    }
  }
  result.appendString ("  enterTokenFromPointer (ptr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//               A T T R I B U T E   A C C E S S                                                 \n") ;
  GALGAS_uint index_15152_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_15152 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_15152.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_15152.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 300)).stringValue ()) ;
      result.appendString (" Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::attributeValue_") ;
      result.appendString (enumerator_15152.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 300)).stringValue ()) ;
      result.appendString (" (void) const {\n  cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * ptr = (cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentTokenPtr (HERE) ;\n  return ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_15152.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 302)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_15152_.increment () ;
      enumerator_15152.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//         A S S I G N    F R O M    A T T R I B U T E                                           \n") ;
  GALGAS_uint index_15857_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_15857 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_15857.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15857.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 310)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 310)).stringValue ()) ;
      result.appendString (" Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::synthetizedAttribute_") ;
      result.appendString (enumerator_15857.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 310)).stringValue ()) ;
      result.appendString (" (void) const {\n  cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * ptr = (cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentTokenPtr (HERE) ;\n  macroValidSharedObject (ptr, cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;\n  GALGAS_") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15857.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (" value (ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_15857.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (") ;\n  GALGAS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15857.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 315)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 315)).stringValue ()) ;
      result.appendString (" result (value, currentLocation) ;\n  return result ;\n}\n\n") ;
      index_15857_.increment () ;
      enumerator_15857.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//                         I N T R O S P E C T I O N                                             \n//--------------------------------------------------------------------------------------------------\n\nGALGAS_stringlist Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::symbols (LOCATION_ARGS) {\n  GALGAS_stringlist result = GALGAS_stringlist::class_func_emptyList (THERE) ;\n") ;
  GALGAS_uint index_17360_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_17360 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_17360.hasCurrentObject ()) {
      result.appendString ("  result.addAssign_operation (GALGAS_string (") ;
      result.appendString (enumerator_17360.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 326)).stringValue ()) ;
      result.appendString (") COMMA_HERE) ;\n") ;
      index_17360_.increment () ;
      enumerator_17360.gotoNextObject () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (TC_UniqueArray <String> & ") ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 334)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_8) {
  case kBoolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("ioList") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") {\n") ;
  GALGAS_uint index_17873_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_17873 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_17873.hasCurrentObject ()) {
      result.appendString ("  ioList.appendObject (") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).add_operation (enumerator_17873.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).stringValue ()) ;
      result.appendString (") ;\n") ;
      index_17873_.increment () ;
      enumerator_17873.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const String & ") ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 344)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_9) {
  case kBoolTrue : {
    result.appendString ("/* inIdentifier */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("inIdentifier") ;
    } break ;
  default :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("bool & ") ;
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 345)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_10) {
  case kBoolTrue : {
    result.appendString ("/* ioFound */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("ioFound") ;
    } break ;
  default :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("TC_UniqueArray <String> & ") ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 346)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_11) {
  case kBoolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("ioList") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") {\n") ;
  GALGAS_uint index_18582_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_18582 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_18582.hasCurrentObject ()) {
      result.appendString ("  if (inIdentifier == ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).add_operation (enumerator_18582.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).stringValue ()) ;
      result.appendString (") {\n    ioFound = true ;\n") ;
      GALGAS_uint index_18779_ (0) ;
      if (enumerator_18582.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_18779 (enumerator_18582.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_18779.hasCurrentObject ()) {
          result.appendString ("    ioList.appendObject (") ;
          result.appendString (enumerator_18779.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).stringValue ()) ;
          result.appendString (") ;\n") ;
          index_18779_.increment () ;
          enumerator_18779.gotoNextObject () ;
        }
      }
      result.appendString ("    ioList.sortArrayUsingCompareMethod() ;\n  }\n") ;
      index_18582_.increment () ;
      enumerator_18582.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic cLexiqueIntrospection lexiqueIntrospection_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n__attribute__ ((used))\n__attribute__ ((unused)) (getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (", getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           \n//--------------------------------------------------------------------------------------------------\n\nuint32_t Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::styleIndexForTerminal (const int32_t inTerminalIndex) const {\n  static const uint32_t kTerminalSymbolStyles [") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).stringValue ()) ;
  result.appendString ("] = {0") ;
  GALGAS_uint index_19875_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_19875 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19875.hasCurrentObject ()) {
      result.appendString (",\n    ") ;
      result.appendString (enumerator_19875.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_19875.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (" */") ;
      index_19875_.increment () ;
      enumerator_19875.gotoNextObject () ;
    }
  }
  result.appendString ("\n  } ;\n  return (inTerminalIndex >= 0) \? kTerminalSymbolStyles [inTerminalIndex] : 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::styleNameForIndex (const uint32_t inStyleIndex) const {\n  String result ;\n  if (inStyleIndex < ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).stringValue ()) ;
  result.appendString (") {\n    static const char * kStyleArray [") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).stringValue ()) ;
  result.appendString ("] = {\n      \"\"") ;
  GALGAS_uint index_20711_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_20711 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20711.hasCurrentObject ()) {
      result.appendString (",\n      ") ;
      result.appendString (enumerator_20711.current_mName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 388)).stringValue ()) ;
      index_20711_.increment () ;
      enumerator_20711.gotoNextObject () ;
    }
  }
  result.appendString ("\n    } ;\n    result = kStyleArray [inStyleIndex] ;\n  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (Compiler * inCompiler,
                                                                                  const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                  const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("\n#import \"OC_Lexique.h\"\n\n//--------------------------------------------------------------------------------------------------\n//\n//                    E X T E R N    R O U T I N E S\n//\n//--------------------------------------------------------------------------------------------------\n") ;
  GALGAS_uint index_417_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ().isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_417 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap (), kENUMERATION_UP) ;
    while (enumerator_417.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_417.current_mIsExtern (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("\nvoid scanner_cocoa_routine_") ;
        result.appendString (enumerator_417.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("BOOL * ioScanningOk") ;
        GALGAS_uint index_646_ (0) ;
        if (enumerator_417.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_646 (enumerator_417.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_646.hasCurrentObject ()) {
            result.appendString (",\n                ") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString (extensionGetter_cppConstInFormalArgument (enumerator_646.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 14)).stringValue ()) ;
            result.appendString (extensionGetter_cocoaTypeName (enumerator_646.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (extensionGetter_cocoaPointerInFormalArgument (enumerator_646.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_646.current_mArgumentNameForComment (HERE).stringValue ()) ;
            index_646_.increment () ;
            enumerator_646.gotoNextObject () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_417_.increment () ;
      enumerator_417.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                    E X T E R N    F U N C T I O N S\n//\n//--------------------------------------------------------------------------------------------------\n") ;
  GALGAS_uint index_1392_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ().isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1392 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap (), kENUMERATION_UP) ;
    while (enumerator_1392.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1392.current_mIsExtern (HERE).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("\n") ;
        result.appendString (extensionGetter_cppTypeName (enumerator_1392.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 31)).stringValue ()) ;
        result.appendString (" scanner_cocoa_function_") ;
        result.appendString (enumerator_1392.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("BOOL * ioScanningOk") ;
        GALGAS_uint index_1597_ (0) ;
        if (enumerator_1392.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_1597 (enumerator_1392.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1597.hasCurrentObject ()) {
            result.appendString (",\n                ") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("const ") ;
            result.appendString (extensionGetter_cppTypeName (enumerator_1597.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 33)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_1597.current_mArgumentNameForComment (HERE).stringValue ()) ;
            index_1597_.increment () ;
            enumerator_1597.gotoNextObject () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1392_.increment () ;
      enumerator_1392.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//\n//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N\n//\n//--------------------------------------------------------------------------------------------------\n\nenum {") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_") ;
  GALGAS_uint index_2198_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_2198 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_2198.hasCurrentObject ()) {
      result.appendString (",\n  ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_2198.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 48)).stringValue ()) ;
      index_2198_.increment () ;
      enumerator_2198.gotoNextObject () ;
    }
  }
  result.appendString ("\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//\n//                     S C A N N E R    C L A S S\n//\n//--------------------------------------------------------------------------------------------------\n\n@interface OC_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : OC_Lexique {\n//--- Attributes\n") ;
  GALGAS_uint index_2719_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2719 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_2719.hasCurrentObject ()) {
      result.appendString ("  @protected ") ;
      result.appendString (extensionGetter_cocoaTypeName (enumerator_2719.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 62)).stringValue ()) ;
      result.appendString (" mLexicalAttribute_") ;
      result.appendString (enumerator_2719.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" ;\n") ;
      index_2719_.increment () ;
      enumerator_2719.gotoNextObject () ;
    }
  }
  result.appendString ("\n}\n\n- (NSUInteger) terminalVocabularyCount ;\n\n- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;\n\n- (BOOL) internalParseLexicalTokenForLexicalColoring ;\n\n- (void) parseLexicalTokenForLexicalColoring ;\n\n- (NSUInteger) styleCount ;\n\n- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;\n\n- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;\n\n- (NSArray *) indexingTitles ; // Array of NSString\n\n- (BOOL) isTemplateLexique ;\n\n- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;\n\n@end\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaImplementationZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (Compiler * inCompiler,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                          const GALGAS_lexicalMessageMap & /* in_LEXICAL_5F_MESSAGE_5F_MAP */,
                                                                                          const GALGAS_terminalList & /* in_TERMINAL_5F_LIST */,
                                                                                          const GALGAS_stringset & /* in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES */,
                                                                                          const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                          const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                          const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                          const GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                          const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                          const GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#import \"") ;
  result.appendString (in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue ()) ;
  result.appendString (".h\"\n#import \"PMDebug.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n@implementation OC_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Replacements\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 15)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("static NSArray * kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 16)).stringValue ()) ;
    result.appendString (" ; // Of NSString \n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Delimiters\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 25)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("static NSArray * kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 26)).stringValue ()) ;
    result.appendString (" ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n- (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n") ;
  GALGAS_uint index_1321_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_1321 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1321.hasCurrentObject ()) {
      result.appendString ("    mLexicalAttribute_") ;
      result.appendString (enumerator_1321.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_cocoaInitializationCode (enumerator_1321.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_1321_.increment () ;
      enumerator_1321.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n") ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 39)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 40)).stringValue ()) ;
    result.appendString (") {\n    kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 41)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_1811_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      cEnumerator_templateDelimitorList enumerator_1811 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
      while (enumerator_1811.hasCurrentObject ()) {
        result.appendString ("      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@") ;
        result.appendString (enumerator_1811.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 43)).stringValue ()) ;
        result.appendString (" endString:") ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_1811.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 44)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_3) {
        case kBoolTrue : {
          result.appendString ("nil") ;
          } break ;
        case kBoolFalse : {
          result.appendString ("@") ;
          result.appendString (enumerator_1811.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 47)).stringValue ()) ;
          } break ;
        default :
          break ;
        }
        result.appendString (" discardStartString:") ;
        result.appendString (enumerator_1811.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).stringValue ()) ;
        result.appendString ("],\n") ;
        index_1811_.increment () ;
        enumerator_1811.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 57)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 58)).stringValue ()) ;
    result.appendString (") {\n\n    kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_2576_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_2576 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2576.hasCurrentObject ()) {
        result.appendString ("      @") ;
        result.appendString (enumerator_2576.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 61)).stringValue ()) ;
        result.appendString (", ") ;
        index_2576_.increment () ;
        enumerator_2576.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  return self ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (void) dealloc {\n  noteObjectDeallocation (self) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                 I N D E X I N G    T I T L E S\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSArray *) indexingTitles { // Array of NSString\n") ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_INDEXING_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 84)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.appendString ("  return [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_3317_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      cEnumerator_indexingListAST enumerator_3317 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3317.hasCurrentObject ()) {
        result.appendString ("    @") ;
        result.appendString (enumerator_3317.current_mIndexComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 88)).stringValue ()) ;
        result.appendString (",\n") ;
        index_3317_.increment () ;
        enumerator_3317.gotoNextObject () ;
      }
    }
    result.appendString ("    NULL\n  ] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("\n  return [NSArray array] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n//\n//            Terminal Symbols as end of script in template mark\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 105)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    GALGAS_uint index_4116_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      cEnumerator_terminalList enumerator_4116 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_4116 = enumerator_4116.hasCurrentObject () ;
      if (nonEmpty_enumerator_4116) {
        result.appendString ("static const BOOL kEndOfScriptInTemplateArray_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 107)).stringValue ()) ;
        result.appendString (" [") ;
        result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 107)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 107)).stringValue ()) ;
        result.appendString ("] = {\n") ;
      }
      while (enumerator_4116.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_4116.current_isEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 108)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_4116.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        if (enumerator_4116.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_4116_.increment () ;
        enumerator_4116.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_4116) {
        result.appendString ("\n} ;\n") ;
      }
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n\n") ;
  GALGAS_uint index_4409_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ().isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_4409 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap (), kENUMERATION_UP) ;
    while (enumerator_4409.hasCurrentObject ()) {
      const enumGalgasBool test_7 = enumerator_4409.current_mShouldBeGenerated (HERE).boolEnum () ;
      switch (test_7) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//             Key words table '") ;
        result.appendString (enumerator_4409.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("'      \n//\n//--------------------------------------------------------------------------------------------------\n\nstatic const C_cocoa_lexique_table_entry ktable_for_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 123)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_4409.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" [") ;
        result.appendString (enumerator_4409.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 123)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 123)).stringValue ()) ;
        result.appendString ("] = {\n") ;
        GALGAS_uint index_5051_ (0) ;
        if (enumerator_4409.current_mTokenSortedList (HERE).isValid ()) {
          cEnumerator_tokenSortedlist enumerator_5051 (enumerator_4409.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
          while (enumerator_5051.hasCurrentObject ()) {
            result.appendString ("  {") ;
            result.appendString (enumerator_5051.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 125)).stringValue ()) ;
            result.appendString (", ") ;
            result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
            result.appendString ("_1_") ;
            result.appendString (enumerator_5051.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 125)).stringValue ()) ;
            result.appendString ("}") ;
            if (enumerator_5051.hasNextObject ()) {
              result.appendString (",\n") ;
            }
            index_5051_.increment () ;
            enumerator_5051.gotoNextObject () ;
          }
        }
        result.appendString ("\n} ;\n\nstatic NSInteger search_into_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 129)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_4409.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (NSString * inSearchedString) {\n  return searchStringInTable (inSearchedString, ktable_for_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 130)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_4409.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (", ") ;
        result.appendString (enumerator_4409.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 130)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 130)).stringValue ()) ;
        result.appendString (") ;\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_4409_.increment () ;
      enumerator_4409.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//               I N T E R N A L    P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n- (BOOL) internalParseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n") ;
  GALGAS_uint index_6023_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_6023 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_6023.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (extensionGetter_cocoaResetPrefix (enumerator_6023.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue ()) ;
      result.appendString ("mLexicalAttribute_") ;
      result.appendString (enumerator_6023.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (extensionGetter_cocoaReset (enumerator_6023.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_6023_.increment () ;
      enumerator_6023.gotoNextObject () ;
    }
  }
  result.appendString ("  mTokenStartLocation = mCurrentLocation ;\n") ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).uintValue ())) ;
  }
  GALGAS_uint index_6241_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_lexicalRuleListAST enumerator_6241 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6241.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_generateObjcCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_6241.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 150)).stringValue ()) ;
      index_6241_.increment () ;
      enumerator_6241.gotoNextObject () ;
    }
  }
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).uintValue ())) ;
  }
  result.appendString ("  if ([self testForInputChar:'\\0']) { // End of source text \?\n    mTokenCode = ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_ ; // Empty string code\n  }else{ // Unknown input character\n    scanningOk = NO ;\n    [self advance] ;\n  }\n  return scanningOk ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//               P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n- (void) parseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n  mTokenCode = 0 ;\n  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n") ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 173)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_8) {
  case kBoolTrue : {
    result.appendString ("    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 174)).stringValue ()) ;
    result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 175)).stringValue ()) ;
    result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n      ") ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 181)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_9) {
    case kBoolTrue : {
      result.appendString ("\n      [self searchForReplacementPattern:kTemplateReplacementArray_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 182)).stringValue ()) ;
      result.appendString ("] ;\n      ") ;
      } break ;
    case kBoolFalse : {
      } break ;
    default :
      break ;
    }
    result.appendString ("\n      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 184)).stringValue ()) ;
    result.appendString ("] ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        [self advance] ;\n        mTokenCode = -2 ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;\n    }\n    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 193)).stringValue ()) ;
    result.appendString (" [mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("    scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n  }\n//--- Error \?\n  if (! scanningOk) {\n    mTokenCode = -1 ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                   T E R M I N A L    C O U N T\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) terminalVocabularyCount {\n  return ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 211)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 211)).stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                     S T Y L E   C O U N T\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) styleCount {\n  return ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 221)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 221)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 221)).stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                I S    T E M P L A T E    L E X I Q U E\n//\n//--------------------------------------------------------------------------------------------------\n\n- (BOOL) isTemplateLexique {\n  return ") ;
  result.appendString (GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 231)).objectCompare (GALGAS_uint (uint32_t (0U)))).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 231)).stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//   S T Y L E   I N D E X    F O R    T E R M I N A L\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {\n  static const NSUInteger kTerminalSymbolStyles [") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).stringValue ()) ;
  result.appendString ("] = {0") ;
  GALGAS_uint index_10280_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_10280 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_10280.hasCurrentObject ()) {
      result.appendString (",\n    ") ;
      result.appendString (enumerator_10280.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 243)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_10280.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 243)).stringValue ()) ;
      result.appendString (" */") ;
      index_10280_.increment () ;
      enumerator_10280.gotoNextObject () ;
    }
  }
  result.appendString ("\n  } ;\n  return kTerminalSymbolStyles [inTerminal] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L\n//\n//--------------------------------------------------------------------------------------------------\n\n- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {\n  static const BOOL kTerminalAtomicSelection [") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 255)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 255)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 255)).stringValue ()) ;
  result.appendString ("] = {NO") ;
  GALGAS_uint index_11065_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_11065 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_11065.hasCurrentObject ()) {
      result.appendString (",\n    ") ;
      result.appendString (enumerator_11065.current_atomicSelection (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 257)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_11065.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 257)).stringValue ()) ;
      result.appendString (" */") ;
      index_11065_.increment () ;
      enumerator_11065.gotoNextObject () ;
    }
  }
  result.appendString ("\n  } ;\n  return kTerminalAtomicSelection [inTokenIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//             S T Y L E   N A M E    F O R    I N D E X\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {\n  NSString * result = nil ;\n  if ((inIndex >= 0) && (inIndex < ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).stringValue ()) ;
  result.appendString (")) {\n    NSString * kStyleArray [") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).stringValue ()) ;
  result.appendString ("] = {\n      @\"Default Style\"") ;
  GALGAS_uint index_11837_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_11837 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11837.hasCurrentObject ()) {
      result.appendString (",\n      @") ;
      result.appendString (enumerator_11837.current_mComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 274)).stringValue ()) ;
      index_11837_.increment () ;
      enumerator_11837.gotoNextObject () ;
    }
  }
  result.appendString ("\n    } ;\n    result = kStyleArray [inIndex] ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//         S T Y L E   I D E N T I F I E R    F O R    I N D E X\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {\n  NSString * result = nil ;\n  if ((inIndex >= 0) && (inIndex < ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 289)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 289)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 289)).stringValue ()) ;
  result.appendString (")) {\n    NSString * kStyleArray [") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).stringValue ()) ;
  result.appendString ("] = {\n      @\"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"") ;
  GALGAS_uint index_12590_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_12590 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12590.hasCurrentObject ()) {
      result.appendString (",\n      @\"") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_12590.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"") ;
      index_12590_.increment () ;
      enumerator_12590.gotoNextObject () ;
    }
  }
  result.appendString ("\n    } ;\n    result = kStyleArray [inIndex] ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//         L E X I Q U E   I D E N T I F I E R\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) lexiqueIdentifier {\n  return @\"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n@end\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates swiftCocoaImplementationZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_swiftCocoaImplementationZone_32_ (Compiler * inCompiler,
                                                                                               const GALGAS_string & /* in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                               const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                               const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                               const GALGAS_lexicalMessageMap & /* in_LEXICAL_5F_MESSAGE_5F_MAP */,
                                                                                               const GALGAS_terminalList & /* in_TERMINAL_5F_LIST */,
                                                                                               const GALGAS_stringset & /* in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES */,
                                                                                               const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                               const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                               const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                               const GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                               const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                               const GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//   LEXIQUE ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gFont_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" = EBGenericPreferenceProperty <NSFont> (\n  defaultValue: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular),\n  prefKey: \"FontFor_\" + ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier ()\n)\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gLineHeight_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" = EBGenericPreferenceProperty <Int> (\n  defaultValue: 12,\n  prefKey: \"LineHeightFor_\" + ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier ()\n)\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gColors_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : [EBGenericPreferenceProperty <NSColor>] = [\n  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"),\n") ;
  GALGAS_uint index_1117_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_1117 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1117.hasCurrentObject ()) {
      result.appendString ("  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: \"ColorFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_1117.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"),\n") ;
      index_1117_.increment () ;
      enumerator_1117.gotoNextObject () ;
    }
  }
  result.appendString ("  EBGenericPreferenceProperty <NSColor> (defaultValue: .red, prefKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\"),\n  EBGenericPreferenceProperty <NSColor> (defaultValue: .gray, prefKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n]\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gBoldStyle_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : [EBGenericPreferenceProperty <Bool>] = [\n  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"),\n") ;
  GALGAS_uint index_1833_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_1833 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1833.hasCurrentObject ()) {
      result.appendString ("  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_1833.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"),\n") ;
      index_1833_.increment () ;
      enumerator_1833.gotoNextObject () ;
    }
  }
  result.appendString ("  EBGenericPreferenceProperty <Bool> (defaultValue: true, prefKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\"),\n  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n]\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gItalicStyle_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : [EBGenericPreferenceProperty <Bool>] = [\n  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"),\n") ;
  GALGAS_uint index_2540_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_2540 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2540.hasCurrentObject ()) {
      result.appendString ("  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_2540.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"),\n") ;
      index_2540_.increment () ;
      enumerator_2540.gotoNextObject () ;
    }
  }
  result.appendString ("  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\"),\n  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n]\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 60)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("fileprivate let kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 61)).stringValue ()) ;
    result.appendString (" : [String] = [\n") ;
    GALGAS_uint index_3411_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_3411 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3411.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_3411.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 64)).stringValue ()) ;
        if (enumerator_3411.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_3411_.increment () ;
        enumerator_3411.gotoNextObject () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 74)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("fileprivate let kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 75)).stringValue ()) ;
    result.appendString (" : [SWIFT_TemplateDelimiter] = [\n") ;
    GALGAS_uint index_4057_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      cEnumerator_templateDelimitorList enumerator_4057 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
      while (enumerator_4057.hasCurrentObject ()) {
        result.appendString ("  SWIFT_TemplateDelimiter (startString: ") ;
        result.appendString (enumerator_4057.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (", endString: ") ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_4057.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 79)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_2) {
        case kBoolTrue : {
          result.appendString ("nil") ;
          } break ;
        case kBoolFalse : {
          result.appendString (enumerator_4057.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 82)).stringValue ()) ;
          } break ;
        default :
          break ;
        }
        result.appendString (", discardStartString: ") ;
        result.appendString (enumerator_4057.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 85)).getter_cString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 85)).stringValue ()) ;
        result.appendString (")") ;
        if (enumerator_4057.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_4057_.increment () ;
        enumerator_4057.gotoNextObject () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N\n//--------------------------------------------------------------------------------------------------\n\nlet ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_ : UInt16 = 0\n") ;
  GALGAS_uint index_4808_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_4808 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_4808.hasCurrentObject ()) {
      result.appendString ("let ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_4808.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 99)).stringValue ()) ;
      result.appendString (" : UInt16 = ") ;
      result.appendString (index_4808_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 99)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 99)).stringValue ()) ;
      result.appendString ("\n") ;
      index_4808_idx.increment () ;
      enumerator_4808.gotoNextObject () ;
    }
  }
  result.appendString ("let ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR : UInt16 = ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 101)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 101)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 101)).stringValue ()) ;
  result.appendString ("\nlet ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE : UInt16 = ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 102)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 102)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 102)).stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier () -> String {\n  return \"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleNameFor (styleIndex inIndex : UInt8) -> String {\n  let kStyleArray : [String] = [\n    \"Default Style\", // 0\n") ;
  GALGAS_uint index_5636_idx (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_5636 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5636.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_5636.current_mComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 117)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_5636_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 117)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 117)).stringValue ()) ;
      result.appendString ("\n") ;
      index_5636_idx.increment () ;
      enumerator_5636.gotoNextObject () ;
    }
  }
  result.appendString ("    \"Lexical error\", // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 119)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 119)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 119)).stringValue ()) ;
  result.appendString ("\n    \"Template\" // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 120)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 120)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 120)).stringValue ()) ;
  result.appendString ("\n  ]\n  return kStyleArray [Int (inIndex)]\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {\n  let kStyleArray : [String] = [\n    \"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\", // 0\n") ;
  GALGAS_uint index_6203_idx (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_6203 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6203.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 131)).add_operation (enumerator_6203.current_mName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 131)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 131)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_6203_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 131)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 131)).stringValue ()) ;
      result.appendString ("\n") ;
      index_6203_idx.increment () ;
      enumerator_6203.gotoNextObject () ;
    }
  }
  result.appendString ("    ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GALGAS_string (".ERROR"), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 133)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 133)).stringValue ()) ;
  result.appendString (", // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 133)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 133)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 133)).stringValue ()) ;
  result.appendString ("\n    ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GALGAS_string (".TEMPLATE"), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 134)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 134)).stringValue ()) ;
  result.appendString (" // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 134)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 134)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 134)).stringValue ()) ;
  result.appendString ("\n  ]\n  return kStyleArray [Int (inIndex)]\n}\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass SWIFT_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : SWIFT_Lexique {\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GALGAS_uint index_7133_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_7133 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_7133.hasCurrentObject ()) {
      result.appendString ("  private var mLexicalAttribute_") ;
      result.appendString (enumerator_7133.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (extensionGetter_swiftTypeName (enumerator_7133.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 149)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_swiftInitializationCode (enumerator_7133.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 149)).stringValue ()) ;
      result.appendString ("\n") ;
      index_7133_.increment () ;
      enumerator_7133.gotoNextObject () ;
    }
  }
  result.appendString ("\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func lexiqueIdentifier () -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier ()\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func isTemplateLexique () -> Bool {\n    return ") ;
  result.appendString (GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 161)).objectCompare (GALGAS_uint (uint32_t (0U)))).getter_cString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 161)).stringValue ()) ;
  result.appendString ("\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func terminalVocabularyCount () -> Int {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 167)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 167)).stringValue ()) ;
  result.appendString ("\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var font : EBGenericPreferenceProperty <NSFont> { return gFont_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var lineHeight : EBGenericPreferenceProperty <Int> { return gLineHeight_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func color (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <NSColor> {\n    return gColors_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" [Int (inStyleIndex)]\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bold (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {\n    return gBoldStyle_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" [Int (inStyleIndex)]\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func italic (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {\n    return gItalicStyle_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" [Int (inStyleIndex)]\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {\n    let kTerminalSymbolStyles : [UInt8] = [\n      0, // Default\n") ;
  GALGAS_uint index_9551_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_9551 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_9551.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_9551.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 203)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_9551_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 203)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 203)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_9551.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 203)).stringValue ()) ;
      result.appendString ("\n") ;
      index_9551_idx.increment () ;
      enumerator_9551.gotoNextObject () ;
    }
  }
  result.appendString ("      ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).stringValue ()) ;
  result.appendString (", // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR\n      ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).stringValue ()) ;
  result.appendString ("  // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n    ]\n    return kTerminalSymbolStyles [Int (inTokenIndex)]\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {\n    let kTerminalAtomicSelection : [Bool] = [\n      false, // Default\n") ;
  GALGAS_uint index_10399_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_10399 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_10399.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_10399.current_atomicSelection (HERE).getter_cString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 218)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_10399_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 218)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 218)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_10399.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 218)).stringValue ()) ;
      result.appendString ("\n") ;
      index_10399_idx.increment () ;
      enumerator_10399.gotoNextObject () ;
    }
  }
  result.appendString ("      false, // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 220)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 220)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 220)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR\n      false  // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 221)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 221)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 221)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n    ]\n    return kTerminalAtomicSelection [Int (inTokenIndex)]\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func indexingTitles () -> [String] {\n") ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, in_INDEXING_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 230)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("    return [\n") ;
    GALGAS_uint index_11105_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      cEnumerator_indexingListAST enumerator_11105 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_11105.hasCurrentObject ()) {
        result.appendString ("      ") ;
        result.appendString (enumerator_11105.current_mIndexComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 234)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_11105.current_mIndexName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        if (enumerator_11105.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_11105_.increment () ;
        enumerator_11105.gotoNextObject () ;
      }
    }
    result.appendString ("\n    ]\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("\n    return []\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  S T Y L E S\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleCount () -> UInt8 {\n    return ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 251)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 251)).stringValue ()) ;
  result.appendString ("\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleNameFor (styleIndex inIndex : UInt8) -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleNameFor (styleIndex: inIndex)\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleIdentifierFor (styleIndex: inIndex)\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Lexical analysis\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {\n    var loop = true\n    var scanningOk = true\n") ;
  GALGAS_uint index_12561_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_12561 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_12561.hasCurrentObject ()) {
      result.appendString ("    self.mLexicalAttribute_") ;
      result.appendString (enumerator_12561.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_swiftInitializationCode (enumerator_12561.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 274)).stringValue ()) ;
      result.appendString ("\n") ;
      index_12561_.increment () ;
      enumerator_12561.gotoNextObject () ;
    }
  }
  result.appendString ("    var tokenCode : UInt16 = 0\n    let startLocation = self.currentLocation\n") ;
  if (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).uintValue ())) ;
  }
  GALGAS_uint index_12798_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_lexicalRuleListAST enumerator_12798 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12798.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_generateSwiftCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_12798.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 281)).stringValue ()) ;
      index_12798_.increment () ;
      enumerator_12798.gotoNextObject () ;
    }
  }
  if (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).uintValue ())) ;
  }
  result.appendString ("if self.testForInputChar (0) { // End of source text \?\n      tokenCode = ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_ ; // Empty string code\n    }else{ // Unknown input character\n      tokenCode = ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n      self.advance ()\n    }\n    return SWIFT_Token (\n      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),\n      tokenCode: tokenCode,\n      templateDelimiterIndex: self.mEndTemplateDelimiterIndex\n    )\n  }\n  \n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n/* - (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n") ;
  GALGAS_uint index_13744_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_13744 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_13744.hasCurrentObject ()) {
      result.appendString ("    mLexicalAttribute_") ;
      result.appendString (enumerator_13744.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_cocoaInitializationCode (enumerator_13744.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 309)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_13744_.increment () ;
      enumerator_13744.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n") ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 312)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 313)).stringValue ()) ;
    result.appendString (") {\n    kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 314)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_14234_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      cEnumerator_templateDelimitorList enumerator_14234 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
      while (enumerator_14234.hasCurrentObject ()) {
        result.appendString ("      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@") ;
        result.appendString (enumerator_14234.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 316)).stringValue ()) ;
        result.appendString (" endString:") ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_14234.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 317)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_5) {
        case kBoolTrue : {
          result.appendString ("nil") ;
          } break ;
        case kBoolFalse : {
          result.appendString ("@") ;
          result.appendString (enumerator_14234.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 320)).stringValue ()) ;
          } break ;
        default :
          break ;
        }
        result.appendString (" discardStartString:") ;
        result.appendString (enumerator_14234.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 323)).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 323)).stringValue ()) ;
        result.appendString ("],\n") ;
        index_14234_.increment () ;
        enumerator_14234.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 330)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 331)).stringValue ()) ;
    result.appendString (") {\n\n    kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 332)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_14999_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_14999 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_14999.hasCurrentObject ()) {
        result.appendString ("      @") ;
        result.appendString (enumerator_14999.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 334)).stringValue ()) ;
        result.appendString (", ") ;
        index_14999_.increment () ;
        enumerator_14999.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  return self ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n//\n//            Terminal Symbols as end of script in template mark\n//\n//--------------------------------------------------------------------------------------------------\n\n/*\n") ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 350)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_7) {
  case kBoolTrue : {
    GALGAS_uint index_15809_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      cEnumerator_terminalList enumerator_15809 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_15809 = enumerator_15809.hasCurrentObject () ;
      if (nonEmpty_enumerator_15809) {
        result.appendString ("static const BOOL kEndOfScriptInTemplateArray_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 352)).stringValue ()) ;
        result.appendString (" [") ;
        result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 352)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 352)).stringValue ()) ;
        result.appendString ("] = {\n") ;
      }
      while (enumerator_15809.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_15809.current_isEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 353)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_15809.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        if (enumerator_15809.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_15809_.increment () ;
        enumerator_15809.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_15809) {
        result.appendString ("\n} ;\n") ;
      }
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n*/\n\n\n") ;
  GALGAS_uint index_16105_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ().isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_16105 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap (), kENUMERATION_UP) ;
    while (enumerator_16105.hasCurrentObject ()) {
      const enumGalgasBool test_8 = enumerator_16105.current_mShouldBeGenerated (HERE).boolEnum () ;
      switch (test_8) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//             Key words table '") ;
        result.appendString (enumerator_16105.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("'      \n//\n//--------------------------------------------------------------------------------------------------\n\nfileprivate func search_into_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 369)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_16105.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (_ inSearchedString : String) -> UInt16 {\n  let dictionary : [String : UInt16] = [\n") ;
        GALGAS_uint index_16751_ (0) ;
        if (enumerator_16105.current_mTokenSortedList (HERE).isValid ()) {
          cEnumerator_tokenSortedlist enumerator_16751 (enumerator_16105.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
          while (enumerator_16751.hasCurrentObject ()) {
            result.appendString ("    ") ;
            result.appendString (enumerator_16751.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 372)).stringValue ()) ;
            result.appendString (" : ") ;
            result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
            result.appendString ("_1_") ;
            result.appendString (enumerator_16751.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 372)).stringValue ()) ;
            if (enumerator_16751.hasNextObject ()) {
              result.appendString (",\n") ;
            }
            index_16751_.increment () ;
            enumerator_16751.gotoNextObject () ;
          }
        }
        result.appendString ("\n  ]\n  return dictionary [inSearchedString, default: ") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
        result.appendString ("_1_]\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_16105_.increment () ;
      enumerator_16105.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n\n\n//--------------------------------------------------------------------------------------------------\n//\n//               P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (void) parseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n  mTokenCode = 0 ;\n  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n") ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 395)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_9) {
  case kBoolTrue : {
    result.appendString ("    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 396)).stringValue ()) ;
    result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 397)).stringValue ()) ;
    result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n      ") ;
    const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 403)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_10) {
    case kBoolTrue : {
      result.appendString ("\n      [self searchForReplacementPattern:kTemplateReplacementArray_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 404)).stringValue ()) ;
      result.appendString ("] ;\n      ") ;
      } break ;
    case kBoolFalse : {
      } break ;
    default :
      break ;
    }
    result.appendString ("\n      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 406)).stringValue ()) ;
    result.appendString ("] ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        [self advance] ;\n        mTokenCode = -2 ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;\n    }\n    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 415)).stringValue ()) ;
    result.appendString (" [mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("    scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n  }\n//--- Error \?\n  if (! scanningOk) {\n    mTokenCode = -1 ;\n  }\n}\n\n*/\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@templateLexiqueComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_templateLexiqueComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_templateLexiqueComponentAST temp_0 = this ;
  result_result = GALGAS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 223)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLexiqueComponentAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLexiqueComponentAST temp_0 = this ;
  const GALGAS_templateLexiqueComponentAST temp_1 = this ;
  GALGAS_lstring var_key_8299 = GALGAS_lstring::class_func_new (GALGAS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 234)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 234)) ;
  {
  const GALGAS_templateLexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_8299, temp_2, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 235)) ;
  }
  const GALGAS_templateLexiqueComponentAST temp_3 = this ;
  const GALGAS_templateLexiqueComponentAST temp_4 = this ;
  GALGAS_lstring var_superKey_8459 = GALGAS_lstring::class_func_new (GALGAS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueSuperComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 236)), temp_4.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 236)) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_8299, var_superKey_8459 COMMA_SOURCE_FILE ("template-lexique-component.galgas", 237)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLexiqueComponentAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_superLexiqueIsTemplate_9487 ;
  GALGAS_terminalMap var_terminalMap_9520 ;
  GALGAS_indexingListAST var_indexingListAST_9542 ;
  GALGAS_terminalDeclarationListAST var_terminalListAST_9597 ;
  GALGAS_lexicalAttributeListAST var_lexicalAttributeListAST_9623 ;
  GALGAS_lexicalStyleListAST var_lexicalStyleListAST_9657 ;
  GALGAS_lexicalListDeclarationListAST var_lexicalListDeclarationListAST_9687 ;
  const GALGAS_templateLexiqueComponentAST temp_0 = this ;
  ioArgument_ioSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_0.readProperty_mLexiqueSuperComponentName (), var_superLexiqueIsTemplate_9487, var_terminalMap_9520, var_indexingListAST_9542, var_terminalListAST_9597, var_lexicalAttributeListAST_9623, var_lexicalStyleListAST_9657, var_lexicalListDeclarationListAST_9687, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 249)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_superLexiqueIsTemplate_9487.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateLexiqueComponentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLexiqueSuperComponentName ().readProperty_location (), GALGAS_string ("cannot inherit from a template lexique"), fixItArray3  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 261)) ;
    }
  }
  {
  const GALGAS_templateLexiqueComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_4.readProperty_mLexiqueComponentName (), GALGAS_bool (true), var_terminalMap_9520, var_indexingListAST_9542, var_terminalListAST_9597, var_lexicalAttributeListAST_9623, var_lexicalStyleListAST_9657, var_lexicalListDeclarationListAST_9687, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 264)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLexiqueComponentAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLexiqueComponentAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_10956 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 288)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10956, var_nameForUsefulness_10956, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 289)) ;
  }
  GALGAS_terminalDeclarationListAST var_terminalListAST_11393 ;
  GALGAS_lexicalAttributeListAST var_lexicalAttributeListAST_11419 ;
  GALGAS_lexicalStyleListAST var_lexicalStyleListAST_11453 ;
  GALGAS_lexicalListDeclarationListAST var_lexicalListDeclarationListAST_11483 ;
  const GALGAS_templateLexiqueComponentAST temp_1 = this ;
  GALGAS_bool joker_11296 ; // Joker input parameter
  GALGAS_terminalMap joker_11332 ; // Joker input parameter
  GALGAS_indexingListAST joker_11357 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueSuperComponentName (), joker_11296, joker_11332, joker_11357, var_terminalListAST_11393, var_lexicalAttributeListAST_11419, var_lexicalStyleListAST_11453, var_lexicalListDeclarationListAST_11483, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 291)) ;
  GALGAS_lexicalTypeMap var_lexicalTypeMap_11612 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 302)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_11750 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_11750, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 304)) ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_11869 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_11869, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 306)) ;
  }
  GALGAS_stringset var_unicodeTestFunctions_11996 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_11996, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 308)) ;
  }
  const GALGAS_templateLexiqueComponentAST temp_2 = this ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext_12089 = GALGAS_lexiqueAnalysisContext::class_func_new (temp_2.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_11750, var_lexicalFunctionMap_11869, GALGAS_lexicalMessageMap::class_func_emptyMap (SOURCE_FILE ("template-lexique-component.galgas", 314)), GALGAS_terminalMap::class_func_emptyMap (SOURCE_FILE ("template-lexique-component.galgas", 315)), GALGAS_terminalList::class_func_emptyList (SOURCE_FILE ("template-lexique-component.galgas", 316)), GALGAS_lexicalAttributeMap::class_func_emptyMap (SOURCE_FILE ("template-lexique-component.galgas", 317)), GALGAS_lexicalExplicitTokenListMapMap::class_func_emptyMap (SOURCE_FILE ("template-lexique-component.galgas", 318)), GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("template-lexique-component.galgas", 319)), GALGAS_templateDelimitorList::class_func_emptyList (SOURCE_FILE ("template-lexique-component.galgas", 320)), GALGAS_styleMap::class_func_emptyMap (SOURCE_FILE ("template-lexique-component.galgas", 321)), var_unicodeTestFunctions_11996, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 310)) ;
  GALGAS_bigint var_styleIndex_12496 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 325)) ;
  cEnumerator_lexicalStyleListAST enumerator_12524 (var_lexicalStyleListAST_11453, kENUMERATION_UP) ;
  while (enumerator_12524.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_12089.mProperty_mStyleMap.setter_insertKey (enumerator_12524.current_mName (HERE), enumerator_12524.current_mComment (HERE), var_styleIndex_12496.getter_uint (inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 327)) ;
    }
    var_styleIndex_12496.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 328)) ;
    enumerator_12524.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_11612, var_lexicalAttributeListAST_11419, var_lexiqueAnalysisContext_12089.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 331)) ;
  }
  GALGAS_terminalList var_terminalList_12940 = GALGAS_terminalList::class_func_emptyList (SOURCE_FILE ("template-lexique-component.galgas", 337)) ;
  cEnumerator_terminalDeclarationListAST enumerator_13036 (var_terminalListAST_11393, kENUMERATION_UP) ;
  while (enumerator_13036.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_13093 = GALGAS_uint (uint32_t (0U)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictSup, enumerator_13036.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas", 340)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_lstring joker_13212 ; // Joker input parameter
        var_lexiqueAnalysisContext_12089.readProperty_mStyleMap ().method_searchKey (enumerator_13036.current_mStyle (HERE), joker_13212, var_terminalStyleIndex_13093, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 341)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_13252 = GALGAS_lexicalSentValueList::class_func_emptyList (SOURCE_FILE ("template-lexique-component.galgas", 343)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_13321 (enumerator_13036.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13321.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_13444 ;
      var_lexiqueAnalysisContext_12089.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_13321.current_mAttributeName (HERE), var_attributeLexicalType_13444, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 345)) ;
      var_argumentTypeList_13252.addAssign_operation (enumerator_13321.current_mFormalSelector (HERE), enumerator_13321.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_13444  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 346)) ;
      enumerator_13321.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_12089.mProperty_mTerminalMap.setter_insertKey (enumerator_13036.current_mName (HERE), var_argumentTypeList_13252, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 348)) ;
    }
    var_terminalList_12940.addAssign_operation (enumerator_13036.current_mName (HERE), var_argumentTypeList_13252, enumerator_13036.current_mSyntaxErrorMessage (HERE).readProperty_string (), enumerator_13036.current_isEndOfTemplateMark (HERE), enumerator_13036.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("template-lexique-component.galgas", 354)), var_terminalStyleIndex_13093  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 349)) ;
    enumerator_13036.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_13914 (var_lexicalListDeclarationListAST_11483, kENUMERATION_UP) ;
  while (enumerator_13914.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_13976 = GALGAS_uint (uint32_t (0U)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_13914.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas", 359)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_lstring joker_14095 ; // Joker input parameter
        var_lexiqueAnalysisContext_12089.readProperty_mStyleMap ().method_searchKey (enumerator_13914.current_mStyle (HERE), joker_14095, var_terminalStyleIndex_13976, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 360)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_14135 = GALGAS_lexicalSentValueList::class_func_emptyList (SOURCE_FILE ("template-lexique-component.galgas", 362)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_14204 (enumerator_13914.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14204.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_14327 ;
      var_lexiqueAnalysisContext_12089.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_14204.current_mAttributeName (HERE), var_attributeLexicalType_14327, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 364)) ;
      var_argumentTypeList_14135.addAssign_operation (enumerator_14204.current_mFormalSelector (HERE), enumerator_14204.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_14327  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 365)) ;
      enumerator_14204.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_14493 (enumerator_13914.current_mEntryList (HERE), kENUMERATION_UP) ;
    while (enumerator_14493.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage_14539 = enumerator_13914.current_mSyntaxErrorMessage (HERE).readProperty_string ().getter_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_14493.current_mTerminalSpelling (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 368)) ;
      var_terminalList_12940.addAssign_operation (enumerator_14493.current_mTerminalSpelling (HERE), var_argumentTypeList_14135, var_syntaxErrorMessage_14539, enumerator_14493.current_isEndOfTemplateMark (HERE), enumerator_14493.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("template-lexique-component.galgas", 374)), var_terminalStyleIndex_13976  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 369)) ;
      enumerator_14493.gotoNextObject () ;
    }
    enumerator_13914.gotoNextObject () ;
  }
  GALGAS_stringset var_unicodeStringToGenerate_14973 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("template-lexique-component.galgas", 379)) ;
  GALGAS_templateDelimitorList var_templateDelimitorList_15031 = GALGAS_templateDelimitorList::class_func_emptyList (SOURCE_FILE ("template-lexique-component.galgas", 380)) ;
  const GALGAS_templateLexiqueComponentAST temp_5 = this ;
  cEnumerator_templateDelimitorListAST enumerator_15106 (temp_5.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
  while (enumerator_15106.hasCurrentObject ()) {
    var_unicodeStringToGenerate_14973.addAssign_operation (enumerator_15106.current_mStartString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 382)) ;
    var_unicodeStringToGenerate_14973.addAssign_operation (enumerator_15106.current_mEndString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 383)) ;
    var_templateDelimitorList_15031.addAssign_operation (enumerator_15106.current_mStartString (HERE), enumerator_15106.current_mEndString (HERE), enumerator_15106.current_mPreserved (HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 384)) ;
    enumerator_15106.gotoNextObject () ;
  }
  const GALGAS_templateLexiqueComponentAST temp_6 = this ;
  cEnumerator_templateReplacementListAST enumerator_15439 (temp_6.readProperty_mTemplateReplacementList (), kENUMERATION_UP) ;
  while (enumerator_15439.hasCurrentObject ()) {
    var_unicodeStringToGenerate_14973.addAssign_operation (enumerator_15439.current_mMatchString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 388)) ;
    var_unicodeStringToGenerate_14973.addAssign_operation (enumerator_15439.current_mReplacementString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 389)) ;
    enumerator_15439.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("template-lexique-component.galgas", 393)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_templateLexiqueComponentAST temp_8 = this ;
      const GALGAS_templateLexiqueComponentAST temp_9 = this ;
      GALGAS_string var_headerContents_15758 = GALGAS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (inCompiler, temp_8.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 396)), temp_9.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 397)) COMMA_SOURCE_FILE ("template-lexique-component.galgas", 395))) ;
      const GALGAS_templateLexiqueComponentAST temp_10 = this ;
      const GALGAS_templateLexiqueComponentAST temp_11 = this ;
      const GALGAS_templateLexiqueComponentAST temp_12 = this ;
      const GALGAS_templateLexiqueComponentAST temp_13 = this ;
      GALGAS_string var_cppContents_16001 = GALGAS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (inCompiler, temp_10.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 401)), temp_11.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 402)), var_lexiqueAnalysisContext_12089.readProperty_mLexicalTokenListMap (), var_unicodeStringToGenerate_14973, var_templateDelimitorList_15031, var_terminalList_12940, temp_12.readProperty_mLexiqueComponentName ().readProperty_string (), temp_13.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas", 400))) ;
      const GALGAS_templateLexiqueComponentAST temp_14 = this ;
      const GALGAS_templateLexiqueComponentAST temp_15 = this ;
      const GALGAS_templateLexiqueComponentAST temp_16 = this ;
      GALGAS_string var_objcCocoaHeader_16471 = GALGAS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaHeaderZone (inCompiler, temp_14.readProperty_mLexiqueComponentName ().readProperty_string (), temp_15.readProperty_mLexiqueSuperComponentName ().readProperty_string (), GALGAS_string ("lexique-").add_operation (temp_16.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 414)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 414)) COMMA_SOURCE_FILE ("template-lexique-component.galgas", 411))) ;
      const GALGAS_templateLexiqueComponentAST temp_17 = this ;
      const GALGAS_templateLexiqueComponentAST temp_18 = this ;
      const GALGAS_templateLexiqueComponentAST temp_19 = this ;
      GALGAS_string var_objcCocoaImplementation_16786 = GALGAS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaImplementationZone (inCompiler, GALGAS_string ("lexique-").add_operation (temp_17.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 418)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 418)), temp_18.readProperty_mLexiqueComponentName ().readProperty_string (), var_terminalList_12940, var_templateDelimitorList_15031, temp_19.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas", 417))) ;
      const GALGAS_templateLexiqueComponentAST temp_20 = this ;
      const GALGAS_templateLexiqueComponentAST temp_21 = this ;
      const GALGAS_templateLexiqueComponentAST temp_22 = this ;
      const GALGAS_templateLexiqueComponentAST temp_23 = this ;
      GALGAS_string var_swiftCocoaImplementation_17153 = GALGAS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_swiftCocoaImplementationZone (inCompiler, GALGAS_string ("lexique-").add_operation (temp_20.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 426)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 426)), temp_21.readProperty_mLexiqueComponentName ().readProperty_string (), temp_22.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_terminalList_12940, var_templateDelimitorList_15031, temp_23.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas", 425))) ;
      const GALGAS_templateLexiqueComponentAST temp_24 = this ;
      const GALGAS_templateLexiqueComponentAST temp_25 = this ;
      const GALGAS_templateLexiqueComponentAST temp_26 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (temp_24.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 438)), temp_25.readProperty_mLexiqueComponentName ().readProperty_string (), temp_26.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_headerContents_15758, var_cppContents_16001, var_objcCocoaHeader_16471, var_objcCocoaImplementation_16786, var_swiftCocoaImplementation_17153  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 436))  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 434)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'templateLexiqueGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_templateLexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_templateLexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_templateLexiqueGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_templateLexiqueGenerationTemplates_0,
  0,
  gWrapperAllDirectories_templateLexiqueGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppHeader'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (Compiler * inCompiler,
                                                                                const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const GALGAS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("template_lexique_header_template_zone_2.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"Lexique.h\"\n\n//--------------------------------------------------------------------------------------------------\n//                       T O K E N    C L A S S\n//--------------------------------------------------------------------------------------------------\n\ntypedef cTokenFor_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public Lexique_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" {\n//--- Constructors\n  public: Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceFileName\n                       COMMA_LOCATION_ARGS) ;\n\n  public: Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceString,\n                       const String & inStringForError\n                       COMMA_LOCATION_ARGS) ;\n\n//--- Instrospection\n  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;\n\n//--- Declaring a protected virtual destructor enables the compiler to raise\n//    an error if a direct delete is performed; only the static method\n//    SharedObject::detachPointer may invoke delete.\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    protected: virtual ~ Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {}\n  #endif\n//--- Scanner mode for template scanner\n  private: int32_t mMatchedTemplateDelimiterIndex ;\n\n//--- Parse lexical token\n  protected: virtual bool parseLexicalToken (void) override ;\n} ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (Compiler * inCompiler,
                                                                                        const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                        const GALGAS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER,
                                                                                        const GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                        const GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                        const GALGAS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                        const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                        const GALGAS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                        const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//     L E X I Q U E\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"unicode_character_cpp.h\"\n#include \"scanner_actions.h\"\n#include \"cLexiqueIntrospection.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nLexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCallerCompiler,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inSourceFileName\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\nLexique_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inCallerCompiler, inSourceFileName COMMA_THERE),\nmMatchedTemplateDelimiterIndex (-1) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nLexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCallerCompiler,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inSourceString,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inStringForError\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\nLexique_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inCallerCompiler, inSourceString, inStringForError COMMA_THERE),\nmMatchedTemplateDelimiterIndex (-1) {\n}\n\n//--------------------------------------------------------------------------------------------------\n//                      U N I C O D E    S T R I N G S\n//--------------------------------------------------------------------------------------------------\n") ;
  GALGAS_uint index_1535_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    cEnumerator_stringset enumerator_1535 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES, kENUMERATION_UP) ;
    while (enumerator_1535.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_1535.current_key (HERE).getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 35)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("\n//--- Unicode string for '$") ;
        result.appendString (enumerator_1535.current_key (HERE).getter_utf_38_RepresentationWithoutDelimiters (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString ("$'\nstatic const std::initializer_list <utf32> kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_1535.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (" = ") ;
        result.appendString (enumerator_1535.current_key (HERE).getter_utf_33__32_Representation (GALGAS_bool (false) COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1535_.increment () ;
      enumerator_1535.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_2329_ (0) ;
  if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
    cEnumerator_templateDelimitorList enumerator_2329 (in_TEMPLATE_5F_DELIMITOR_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_2329 = enumerator_2329.hasCurrentObject () ;
    if (nonEmpty_enumerator_2329) {
      result.appendString ("static const cTemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateDefinitionArray [") ;
      result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 46)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 46)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_2329.hasCurrentObject ()) {
      result.appendString ("  cTemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2329.current_mStartString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 47)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_2329.current_mStartString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 47)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 47)).stringValue ()) ;
      result.appendString (", ") ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_2329.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 48)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("{}, 0,") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_2329.current_mEndString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
        result.appendString (", ") ;
        result.appendString (enumerator_2329.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
        result.appendString (",") ;
        } break ;
      default :
        break ;
      }
      result.appendString (" nullptr, ") ;
      result.appendString (enumerator_2329.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 54)).getter_cString (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 54)).stringValue ()) ;
      result.appendString (")") ;
      if (enumerator_2329.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_2329_.increment () ;
      enumerator_2329.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_2329) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_3285_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    cEnumerator_templateReplacementListAST enumerator_3285 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_3285 = enumerator_3285.hasCurrentObject () ;
    if (nonEmpty_enumerator_3285) {
      result.appendString ("static const cTemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateReplacementArray [") ;
      result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 65)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 65)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_3285.hasCurrentObject ()) {
      result.appendString ("  cTemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3285.current_mMatchString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_3285.current_mMatchString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).stringValue ()) ;
      result.appendString (", kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3285.current_mReplacementString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 68)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_3285.current_mReplacementString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 68)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 68)).stringValue ()) ;
      result.appendString (", ") ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_3285.current_mReplacementFunction (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 69)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("nullptr") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("scanner_routine_") ;
        result.appendString (enumerator_3285.current_mReplacementFunction (HERE).readProperty_string ().stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString (", true)") ;
      if (enumerator_3285.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_3285_.increment () ;
      enumerator_3285.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_3285) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_4237_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_4237 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_4237 = enumerator_4237.hasCurrentObject () ;
    if (nonEmpty_enumerator_4237) {
      result.appendString ("static const bool ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kEndOfScriptInTemplateArray [") ;
      result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 84)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 84)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_4237.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4237.current_isEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 85)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_4237.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" */") ;
      if (enumerator_4237.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_4237_.increment () ;
      enumerator_4237.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_4237) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//               P A R S E    L E X I C A L    T O K E N\n//--------------------------------------------------------------------------------------------------\n\nbool Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::parseLexicalToken (void) {\n  cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" token ;\n  token.mTokenCode = -1 ;\n  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n    if ((mMatchedTemplateDelimiterIndex >= 0)\n        && (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n        && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      const bool foundEndDelimitor = testForInputUTF32String (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,\n                                                               true) ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      int32_t replacementIndex = 0 ;\n      while (replacementIndex >= 0) {\n        replacementIndex = findTemplateDelimiterIndex (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateReplacementArray, ") ;
  result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 110)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 110)).stringValue ()) ;
  result.appendString (") ;\n        if (replacementIndex >= 0) {\n          if (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {\n            token.mTemplateStringBeforeToken.appendString (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString) ;\n          }else{\n            String s ;\n            while (notTestForInputUTF32String (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString,\n                                               kEndOfSourceLexicalErrorMessage\n                                               COMMA_HERE)) {\n              s.appendUnicodeChar (previousChar () COMMA_HERE) ;\n            }\n            ") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;\n          }\n        }\n      }\n      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateDefinitionArray, ") ;
  result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 125)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 125)).stringValue ()) ;
  result.appendString (") ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        token.mTemplateStringBeforeToken.appendUnicodeChar (mCurrentChar COMMA_HERE) ;\n        advance () ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      internalParseLexicalToken (token) ;\n    }\n    if ((token.mTokenCode > 0) && ") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  }\n  if (UNICODE_VALUE (mCurrentChar) == '\\0') {\n    token.mTokenCode = 0 ;\n    enterToken (token) ;\n  }\n  return token.mTokenCode > 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                         I N T R O S P E C T I O N\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_stringlist Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::symbols (LOCATION_ARGS) {\n  GALGAS_stringlist result = GALGAS_stringlist::class_func_emptyList (THERE) ;\n") ;
  GALGAS_uint index_7760_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_7760 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7760.hasCurrentObject ()) {
      result.appendString ("  result.addAssign_operation (GALGAS_string (") ;
      result.appendString (enumerator_7760.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 152)).stringValue ()) ;
      result.appendString (") COMMA_HERE) ;\n") ;
      index_7760_.increment () ;
      enumerator_7760.gotoNextObject () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (TC_UniqueArray <String> & ") ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 160)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("ioList") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") {\n") ;
  GALGAS_uint index_8273_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_8273 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_8273.hasCurrentObject ()) {
      result.appendString ("  ioList.appendObject (") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 164)).add_operation (enumerator_8273.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 164)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 164)).stringValue ()) ;
      result.appendString (") ;\n") ;
      index_8273_.increment () ;
      enumerator_8273.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const String & ") ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 170)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.appendString ("/* inIdentifier */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("inIdentifier") ;
    } break ;
  default :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("bool & ") ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 171)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.appendString ("/* ioFound */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("ioFound") ;
    } break ;
  default :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("TC_UniqueArray <String> & ") ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 172)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("ioList") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") {\n") ;
  GALGAS_uint index_8982_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_8982 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_8982.hasCurrentObject ()) {
      result.appendString ("  if (inIdentifier == ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 176)).add_operation (enumerator_8982.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 176)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue ()) ;
      result.appendString (") {\n    ioFound = true ;\n") ;
      GALGAS_uint index_9179_ (0) ;
      if (enumerator_8982.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_9179 (enumerator_8982.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_9179.hasCurrentObject ()) {
          result.appendString ("    ioList.appendObject (") ;
          result.appendString (enumerator_9179.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 179)).stringValue ()) ;
          result.appendString (") ;\n") ;
          index_9179_.increment () ;
          enumerator_9179.gotoNextObject () ;
        }
      }
      result.appendString ("    ioList.sortArrayUsingCompareMethod() ;\n  }\n") ;
      index_8982_.increment () ;
      enumerator_8982.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic cLexiqueIntrospection lexiqueIntrospection_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n__attribute__ ((used))\n__attribute__ ((unused)) (getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (", getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates objcCocoaHeaderZone'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaHeaderZone (Compiler * /* inCompiler */,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const GALGAS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const GALGAS_string & in_SUPER_5F_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#import \"") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue ()) ;
  result.appendString (".h\"\n\n//--------------------------------------------------------------------------------------------------\n//\n//                     S C A N N E R    C L A S S\n//\n//--------------------------------------------------------------------------------------------------\n\n@interface OC_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : OC_Lexique_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n}\n- (void) parseLexicalTokenForLexicalColoring ;\n\n- (BOOL) isTemplateLexique ;\n\n@end\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates objcCocoaImplementationZone'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaImplementationZone (Compiler * /* inCompiler */,
                                                                                                  const GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                                  const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                  const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                  const GALGAS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                  const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#import \"") ;
  result.appendString (in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue ()) ;
  result.appendString (".h\"\n#import \"PMDebug.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n@implementation OC_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Replacements\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 15)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("static NSArray * kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 16)).stringValue ()) ;
    result.appendString (" ; // Of NSString \n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Delimiters\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 25)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("static NSArray * kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 26)).stringValue ()) ;
    result.appendString (" ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                           init\n//\n//--------------------------------------------------------------------------------------------------\n\n- (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n  }\n") ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 39)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 40)).stringValue ()) ;
    result.appendString (") {\n    kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 41)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_1724_ (0) ;
    if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
      cEnumerator_templateDelimitorList enumerator_1724 (in_TEMPLATE_5F_DELIMITOR_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1724.hasCurrentObject ()) {
        result.appendString ("      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@") ;
        result.appendString (enumerator_1724.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 43)).stringValue ()) ;
        result.appendString (" endString:") ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_1724.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 44)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_3) {
        case kBoolTrue : {
          result.appendString ("nil") ;
          } break ;
        case kBoolFalse : {
          result.appendString ("@") ;
          result.appendString (enumerator_1724.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 47)).stringValue ()) ;
          } break ;
        default :
          break ;
        }
        result.appendString (" discardStartString:") ;
        result.appendString (enumerator_1724.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 50)).getter_ocString (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 50)).stringValue ()) ;
        result.appendString ("],\n") ;
        index_1724_.increment () ;
        enumerator_1724.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 57)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 58)).stringValue ()) ;
    result.appendString (") {\n    kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 59)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_2487_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_2487 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2487.hasCurrentObject ()) {
        result.appendString ("      @") ;
        result.appendString (enumerator_2487.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 61)).stringValue ()) ;
        result.appendString (",\n") ;
        index_2487_.increment () ;
        enumerator_2487.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  return self ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (void) dealloc {\n  noteObjectDeallocation (self) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//            Terminal Symbols as end of script in template mark\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_3349_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_3349 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_3349 = enumerator_3349.hasCurrentObject () ;
    if (nonEmpty_enumerator_3349) {
      result.appendString ("static const BOOL kEndOfScriptInTemplateArray_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 83)).stringValue ()) ;
      result.appendString (" [") ;
      result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 83)).getter_string (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 83)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_3349.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3349.current_isEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_3349.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" */") ;
      if (enumerator_3349.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_3349_.increment () ;
      enumerator_3349.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_3349) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//               P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n- (void) parseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n  mTokenCode = 0 ;\n  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n    mTokenStartLocation = mCurrentLocation ;\n    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 100)).stringValue ()) ;
  result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 101)).stringValue ()) ;
  result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n      [self searchForReplacementPattern:kTemplateReplacementArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 107)).stringValue ()) ;
  result.appendString ("] ;\n      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 108)).stringValue ()) ;
  result.appendString ("] ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        [self advance] ;\n        mTokenCode = -2 ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;\n    }\n    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 117)).stringValue ()) ;
  result.appendString (" [mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  //--- Error \?\n    if (! scanningOk) {\n      mTokenCode = -1 ;\n      [self advance] ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                I S    T E M P L A T E    L E X I Q U E\n//\n//--------------------------------------------------------------------------------------------------\n\n- (BOOL) isTemplateLexique {\n  return YES ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//         L E X I Q U E   I D E N T I F I E R\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) lexiqueIdentifier {\n  return @\"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n@end\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates swiftCocoaImplementationZone'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_swiftCocoaImplementationZone (Compiler * /* inCompiler */,
                                                                                                   const GALGAS_string & /* in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                                   const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                   const GALGAS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                   const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                   const GALGAS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                   const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 8)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("fileprivate let kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 9)).stringValue ()) ;
    result.appendString (" : [String] = [\n") ;
    GALGAS_uint index_516_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_516 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_516.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_516.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 12)).stringValue ()) ;
        if (enumerator_516.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_516_.increment () ;
        enumerator_516.gotoNextObject () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 21)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("fileprivate let kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 22)).stringValue ()) ;
    result.appendString (" : [SWIFT_TemplateDelimiter] = [\n") ;
    GALGAS_uint index_1113_ (0) ;
    if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
      cEnumerator_templateDelimitorList enumerator_1113 (in_TEMPLATE_5F_DELIMITOR_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1113.hasCurrentObject ()) {
        result.appendString ("  SWIFT_TemplateDelimiter (startString: ") ;
        result.appendString (enumerator_1113.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 25)).stringValue ()) ;
        result.appendString (", endString: ") ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1113.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 26)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_2) {
        case kBoolTrue : {
          result.appendString ("nil") ;
          } break ;
        case kBoolFalse : {
          result.appendString (enumerator_1113.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 29)).stringValue ()) ;
          } break ;
        default :
          break ;
        }
        result.appendString (", discardStartString: ") ;
        result.appendString (enumerator_1113.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 32)).getter_cString (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 32)).stringValue ()) ;
        result.appendString (")") ;
        if (enumerator_1113.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_1113_.increment () ;
        enumerator_1113.gotoNextObject () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1938_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_1938 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_1938 = enumerator_1938.hasCurrentObject () ;
    if (nonEmpty_enumerator_1938) {
      result.appendString ("fileprivate let kEndOfScriptInTemplateArray_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 43)).stringValue ()) ;
      result.appendString (" : [Bool] = [\n") ;
    }
    while (enumerator_1938.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1938.current_isEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1938.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" */") ;
      if (enumerator_1938.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_1938_.increment () ;
      enumerator_1938.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_1938) {
      result.appendString ("\n]\n") ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier () -> String {\n  return \"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n}\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass SWIFT_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : SWIFT_Lexique_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func isTemplateLexique () -> Bool {\n    return true\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Lexical analysis\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {\n    let startLocation = self.currentLocation\n    if let idx = self.mEndTemplateDelimiterIndex, self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].endString, advance: true) {\n      self.mEndTemplateDelimiterIndex = nil\n    }\n    if self.mEndTemplateDelimiterIndex != nil {\n      return super.parseLexicalTokenForLexicalColoring ()\n    }else{ // In template string, find code start string\n      while self.mEndTemplateDelimiterIndex == nil, self.currentChar != 0 {\n        var idx = 0\n        while self.mEndTemplateDelimiterIndex == nil, idx < kTemplateDefinitionArray_galgasTemplateScanner.count {\n          if self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].startString, advance: true) {\n            self.mEndTemplateDelimiterIndex = idx\n          }\n          idx += 1\n        }\n        if self.mEndTemplateDelimiterIndex == nil {\n          self.advance ()\n        }\n      }\n      return SWIFT_Token (\n        range: NSRange (location: startLocation, length: self.currentLocation - startLocation),\n        tokenCode: galgasScanner_2_TEMPLATE,\n        templateDelimiterIndex: self.mEndTemplateDelimiterIndex\n      )\n    }\n  }\n//    var styleIndex : UInt8 = 0\n//    var tokenCode : UInt16 = 0\n//    let startLocation = self.currentLocation\n//    while styleIndex == 0, self.currentChar != 0 {\n//      let tokenStartLocation = self.currentLocation\n//      if let idx = matchedTemplateDelimiterIndex, !kTemplateDefinitionArray_galgasTemplateScanner [idx].startString.isEmpty {\n//        let foundEndDelimitor = self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].endString, advance: true)\n//        if foundEndDelimitor {\n//          matchedTemplateDelimiterIndex = nil\n//        }\n//      }\n//      while matchedTemplateDelimiterIndex != nil, self.currentChar != 0 {\n//        self.searchForReplacementPattern (kTemplateReplacementArray_galgasTemplateScanner)\n//        matchedTemplateDelimiterIndex = self.findTemplateDelimiterIndex (kTemplateDefinitionArray_galgasTemplateScanner)\n//        if matchedTemplateDelimiterIndex == nil {\n//          self.advance ()\n//          styleIndex = -2\n//        }\n//      }\n//      if matchedTemplateDelimiterIndex != nil, styleIndex == 0, self.currentChar != 0 {\n//        let s = super.parseLexicalTokenForLexicalColoring ()\n//        styleIndex = s.styleIndex\n//        tokenCode = s.token\n//      }\n//      if styleIndex > 0, kEndOfScriptInTemplateArray_galgasTemplateScanner [Int (styleIndex) - 1] {\n//        matchedTemplateDelimiterIndex = nil\n//      }\n//    //--- Error \?\n////      if !scanningOk {\n////        styleIndex = Int8 (self.styleCount ())\n////        self.advance ()\n////      }\n//    }\n//  }\n  \n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                           init\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n  }\n") ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 149)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 150)).stringValue ()) ;
    result.appendString (") {\n    kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 151)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_6661_ (0) ;
    if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
      cEnumerator_templateDelimitorList enumerator_6661 (in_TEMPLATE_5F_DELIMITOR_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_6661.hasCurrentObject ()) {
        result.appendString ("      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@") ;
        result.appendString (enumerator_6661.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 153)).stringValue ()) ;
        result.appendString (" endString:") ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_6661.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 154)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_4) {
        case kBoolTrue : {
          result.appendString ("nil") ;
          } break ;
        case kBoolFalse : {
          result.appendString ("@") ;
          result.appendString (enumerator_6661.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 157)).stringValue ()) ;
          } break ;
        default :
          break ;
        }
        result.appendString (" discardStartString:") ;
        result.appendString (enumerator_6661.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 160)).getter_ocString (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 160)).stringValue ()) ;
        result.appendString ("],\n") ;
        index_6661_.increment () ;
        enumerator_6661.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 167)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 168)).stringValue ()) ;
    result.appendString (") {\n    kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 169)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_7424_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_7424 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_7424.hasCurrentObject ()) {
        result.appendString ("      @") ;
        result.appendString (enumerator_7424.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 171)).stringValue ()) ;
        result.appendString (",\n") ;
        index_7424_.increment () ;
        enumerator_7424.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  return self ;\n}\n*/\n\n//--------------------------------------------------------------------------------------------------\n\n/* - (void) dealloc {\n  noteObjectDeallocation (self) ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n//\n//            Terminal Symbols as end of script in template mark\n//\n//--------------------------------------------------------------------------------------------------\n\n/*\n") ;
  GALGAS_uint index_8298_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_8298 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8298 = enumerator_8298.hasCurrentObject () ;
    if (nonEmpty_enumerator_8298) {
      result.appendString ("static const BOOL kEndOfScriptInTemplateArray_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 195)).stringValue ()) ;
      result.appendString (" [") ;
      result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 195)).getter_string (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 195)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_8298.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_8298.current_isEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 196)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_8298.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" */") ;
      if (enumerator_8298.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_8298_.increment () ;
      enumerator_8298.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8298) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString (" */\n\n//--------------------------------------------------------------------------------------------------\n//\n//               P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (void) parseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n  mTokenCode = 0 ;\n  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n    mTokenStartLocation = mCurrentLocation ;\n    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 213)).stringValue ()) ;
  result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 214)).stringValue ()) ;
  result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n      [self searchForReplacementPattern:kTemplateReplacementArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 220)).stringValue ()) ;
  result.appendString ("] ;\n      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 221)).stringValue ()) ;
  result.appendString ("] ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        [self advance] ;\n        mTokenCode = -2 ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;\n    }\n    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 230)).stringValue ()) ;
  result.appendString (" [mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  //--- Error \?\n    if (! scanningOk) {\n      mTokenCode = -1 ;\n      [self advance] ;\n    }\n  }\n}\n*/ \n//--------------------------------------------------------------------------------------------------\n//\n//                I S    T E M P L A T E    L E X I Q U E\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (BOOL) isTemplateLexique {\n  return YES ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n//\n//         L E X I Q U E   I D E N T I F I E R\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (NSString *) lexiqueIdentifier {\n  return @\"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\" ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n\n// @end\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'buildLexicalTypeMap'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_lexicalTypeMap onceFunction_buildLexicalTypeMap (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result_outLexicalTypeMap ; // Returned variable
  result_outLexicalTypeMap = GALGAS_lexicalTypeMap::class_func_emptyMap (SOURCE_FILE ("lexiqueTypesForAST.galgas", 393)) ;
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("string"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 394)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 394)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("char"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 395)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 395)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("uint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 396)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 396)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("uint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 397)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 397)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("sint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 398)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 398)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("sint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 399)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 399)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("double"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 400)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 400)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("bigint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 401)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 401)) ;
  }
//---
  return result_outLexicalTypeMap ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_buildLexicalTypeMap = false ;
static GALGAS_lexicalTypeMap gOnceFunctionResult_buildLexicalTypeMap ;

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap function_buildLexicalTypeMap (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_buildLexicalTypeMap) {
    gOnceFunctionResult_buildLexicalTypeMap = onceFunction_buildLexicalTypeMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_buildLexicalTypeMap = true ;
  }
  return gOnceFunctionResult_buildLexicalTypeMap ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_buildLexicalTypeMap (void) {
  gOnceFunctionResult_buildLexicalTypeMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_buildLexicalTypeMap (nullptr,
                                                               releaseOnceFunctionResult_buildLexicalTypeMap) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_buildLexicalTypeMap [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_buildLexicalTypeMap (Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_buildLexicalTypeMap (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_buildLexicalTypeMap ("buildLexicalTypeMap",
                                                                     functionWithGenericHeader_buildLexicalTypeMap,
                                                                     & kTypeDescriptor_GALGAS_lexicalTypeMap,
                                                                     0,
                                                                     functionArgs_buildLexicalTypeMap) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap??&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap_3F__3F__26_ (const GALGAS_lexicalTypeMap constinArgument_inLexicalTypeMap,
                                                   const GALGAS_lexicalAttributeListAST constinArgument_inLexicalAttributeList,
                                                   GALGAS_lexicalAttributeMap & ioArgument_ioLexicalAttributeMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lexicalAttributeListAST enumerator_15376 (constinArgument_inLexicalAttributeList, kENUMERATION_UP) ;
  while (enumerator_15376.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inLexicalTypeMap.getter_hasKey (enumerator_15376.current_mTypeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 421)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_lexicalTypeEnum var_lexicalType_15535 ;
        constinArgument_inLexicalTypeMap.method_searchKey (enumerator_15376.current_mTypeName (HERE), var_lexicalType_15535, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 422)) ;
        {
        ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_15376.current_mName (HERE), var_lexicalType_15535, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 423)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_m_15637 = GALGAS_string::makeEmptyString () ;
      var_m_15637.plusAssign_operation(GALGAS_string ("the @").add_operation (enumerator_15376.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 426)).add_operation (GALGAS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 426)) ;
      cEnumerator_lexicalTypeMap enumerator_15753 (constinArgument_inLexicalTypeMap, kENUMERATION_UP) ;
      while (enumerator_15753.hasCurrentObject ()) {
        var_m_15637.plusAssign_operation(GALGAS_string (" @").add_operation (enumerator_15753.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 428)) ;
        if (enumerator_15753.hasNextObject ()) {
          var_m_15637.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 430)) ;
        }
        enumerator_15753.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_15376.current_mTypeName (HERE).readProperty_location (), var_m_15637, fixItArray1  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 432)) ;
    }
    enumerator_15376.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis!'
//
//--------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis_21_ (GALGAS_stringset & outArgument_outUnicodeTestFunctions,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnicodeTestFunctions.drop () ; // Release 'out' argument
  GALGAS_stringset temp_0 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 195)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 187)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeMark")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 188)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeNumber")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 189)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeDecimalDigit")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 190)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeASCIIHexDigit")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 191)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSeparator")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 192)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeCommand")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 193)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodePunctuation")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 194)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSymbol")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 195)) ;
  outArgument_outUnicodeTestFunctions = temp_0 ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalRoutineMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalRoutineMap_21_ (GALGAS_lexicalRoutineMap & outArgument_outLexicalRoutineMap,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalRoutineMap.drop () ; // Release 'out' argument
  outArgument_outLexicalRoutineMap = GALGAS_lexicalRoutineMap::class_func_emptyMap (SOURCE_FILE ("predefinedLexicalActions.galgas", 43)) ;
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 45)) ;
  GALGAS_stringlist var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 46)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 47)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 47)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 47)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 48)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 48)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 48)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 49)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inErrorNotHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 50)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("enterHexDigitIntoASCIIcharacter"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 52)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 51)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 58)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 59)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 60)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 60)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 60)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 61)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 61)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 61)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 62)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inErrorNotDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 63)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("enterDigitIntoASCIIcharacter"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 64)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 71)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 72)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 72)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 72)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 73)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 73)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 73)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("enterCharacterIntoString"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75)), var_lexicalRoutineFormalArgumentList_2226, GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 77)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 74)) ;
  }
  {
  GALGAS_lexicalRoutineFormalArgumentList temp_0 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)) ;
  temp_0.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 83)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("resetString"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 82)), temp_0, GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 81)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 88)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 89)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 90)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 90)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 90)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 91)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_double (SOURCE_FILE ("predefinedLexicalActions.galgas", 91)), GALGAS_string ("ioDouble")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 91)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inConversionError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 92)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertStringToDouble"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 94)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 93)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 100)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 101)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 102)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 102)), GALGAS_string ("ioCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 102)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 103)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 103)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 103)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("enterCharacterIntoCharacter"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 105)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 104)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 111)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 112)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 113)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 113)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 113)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 114)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("negateSInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 116)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 115)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 122)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 123)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 124)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 124)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 124)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 125)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("negateSInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 127)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 126)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 133)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 134)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 135)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 135)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 135)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 136)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 136)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 136)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 137)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertUIntToSInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 139)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 138)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 145)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 146)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 147)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 147)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 147)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 148)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 148)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 148)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 149)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertUInt64ToSInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 151)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 150)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 157)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 158)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 159)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 159)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 159)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 160)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 160)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 160)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 161)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 162)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("enterDigitIntoUInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 164)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 163)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 170)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 171)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 172)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 172)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 172)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 173)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 173)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 173)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 174)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 175)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("enterDigitIntoUInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 176)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 183)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 184)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 184)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 184)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 185)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 185)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 185)) ;
  {
  GALGAS_stringlist temp_1 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 189)) ;
  temp_1.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 189)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("enterDecimalDigitIntoBigInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), var_lexicalRoutineFormalArgumentList_2226, temp_1, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 186)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 193)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 194)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 194)), GALGAS_string ("inBinaryDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 194)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 195)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 195)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 195)) ;
  {
  GALGAS_stringlist temp_2 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 199)) ;
  temp_2.addAssign_operation (GALGAS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 199)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("enterBinaryDigitIntoBigInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), var_lexicalRoutineFormalArgumentList_2226, temp_2, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 196)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 203)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 204)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 204)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 204)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 205)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 205)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 205)) ;
  {
  GALGAS_stringlist temp_3 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 209)) ;
  temp_3.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 209)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("enterHexDigitIntoBigInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), var_lexicalRoutineFormalArgumentList_2226, temp_3, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 206)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 213)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 214)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 214)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 214)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 215)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 215)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 215)) ;
  {
  GALGAS_stringlist temp_4 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 219)) ;
  temp_4.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 219)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertDecimalStringIntoBigInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 217)), var_lexicalRoutineFormalArgumentList_2226, temp_4, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 216)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 223)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 224)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 224)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 224)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("negateBigInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 226)), var_lexicalRoutineFormalArgumentList_2226, GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 228)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 225)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 232)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 233)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 233)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 233)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 234)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 234)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 234)) ;
  {
  GALGAS_stringlist temp_5 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 238)) ;
  temp_5.addAssign_operation (GALGAS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 238)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertBinaryStringIntoBigInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 236)), var_lexicalRoutineFormalArgumentList_2226, temp_5, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 235)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 242)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 243)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 243)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 243)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 244)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 244)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 244)) ;
  {
  GALGAS_stringlist temp_6 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 248)) ;
  temp_6.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 248)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertHexStringIntoBigInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 246)), var_lexicalRoutineFormalArgumentList_2226, temp_6, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 245)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 252)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 253)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 254)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 254)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 254)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 255)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 255)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 255)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 256)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 257)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("enterHexDigitIntoUInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 259)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 258)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 265)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 266)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 267)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 267)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 267)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 268)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 268)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 268)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 269)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 270)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("enterHexDigitIntoUInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 272)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 271)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 278)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 279)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 280)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 280)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 280)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 281)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 281)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 281)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 282)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 283)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertDecimalStringIntoUInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 285)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 284)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 291)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 292)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 293)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 293)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 293)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 294)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 294)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 294)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 295)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 296)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertDecimalStringIntoSInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 298)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 297)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 304)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 305)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 305)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 305)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 306)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 306)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 306)) ;
  {
  GALGAS_stringlist temp_7 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 310)) ;
  temp_7.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 310)) ;
  temp_7.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 310)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertDecimalStringIntoUInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 308)), var_lexicalRoutineFormalArgumentList_2226, temp_7, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 307)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 314)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 315)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 316)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 316)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 316)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 317)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 317)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 317)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 318)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 319)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertDecimalStringIntoSInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 321)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 320)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 327)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 328)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 329)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 329)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 329)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 330)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 330)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 330)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 331)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 332)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("enterBinDigitIntoUInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 334)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 333)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 340)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 341)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 342)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 342)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 342)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 343)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 343)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 343)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 344)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 345)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("enterBinDigitIntoUInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 347)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 346)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 353)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 354)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 355)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 355)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 355)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 356)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 356)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 356)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 357)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 358)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("enterOctDigitIntoUInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 360)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 359)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 366)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 367)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 368)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 368)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 368)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 369)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 369)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 369)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 370)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 371)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("enterOctDigitIntoUInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 373)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 372)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 379)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 380)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 381)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 381)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 381)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 382)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 382)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 382)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 383)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("multiplyUInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 385)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 384)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 391)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 392)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 393)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 393)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 393)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 394)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 394)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 394)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 395)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("multiplyUInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 397)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 396)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 403)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 404)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 405)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 405)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 405)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 406)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 406)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 406)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 407)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 408)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertHexStringIntoUInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 410)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 409)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 416)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 417)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 418)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 418)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 418)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 419)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 419)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 419)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 420)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 421)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertHexStringIntoUInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 423)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 423)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 422)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 429)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 430)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 431)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 431)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 431)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 432)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 432)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 432)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 433)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 434)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertHexStringIntoSInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 436)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 436)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 435)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 442)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 443)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 444)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 444)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 444)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 445)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 445)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 445)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 446)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 447)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertHexStringIntoSInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 449)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 448)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 455)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 456)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 457)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 457)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 457)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 458)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 458)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 458)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inUnassignedUnicodeValueError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 459)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertUnsignedNumberToUnicodeChar"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 461)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 461)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 460)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 467)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 468)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 469)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 469)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 469)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 470)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 470)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 470)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inUnassignedHTMLSequenceError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 471)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("convertHTMLSequenceToUnicodeCharacter"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 473)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 472)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 479)) ;
  var_errorMessageList_2282 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 480)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 481)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 481)), GALGAS_string ("inCodePointString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 481)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 482)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 482)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 482)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("codePointToUnicode"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 484)), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 483)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalFunctionMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalFunctionMap_21_ (GALGAS_lexicalFunctionMap & outArgument_outLexicalFunctionMap,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalFunctionMap.drop () ; // Release 'out' argument
  outArgument_outLexicalFunctionMap = GALGAS_lexicalFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedLexicalActions.galgas", 496)) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalTypeList_22189 = GALGAS_lexicalFunctionFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 498)) ;
  var_lexicalTypeList_22189.addAssign_operation (GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 499)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 499)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("toLower"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 501)), var_lexicalTypeList_22189, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 503)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 500)) ;
  }
  var_lexicalTypeList_22189 = GALGAS_lexicalFunctionFormalArgumentList::class_func_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 508)) ;
  var_lexicalTypeList_22189.addAssign_operation (GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 509)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 509)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("toUpper"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 511)), var_lexicalTypeList_22189, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 513)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 510)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'printPredefinedLexicalActions'
//
//--------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_23148 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_23148, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)) ;
  }
  GALGAS_string var_s_23247 = GALGAS_string::makeEmptyString () ;
  var_s_23247.plusAssign_operation(GALGAS_string ("**************** Prefined lexical routines  ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 528)) ;
  cEnumerator_lexicalRoutineMap enumerator_23390 (var_lexicalRoutineMap_23148, kENUMERATION_UP) ;
  while (enumerator_23390.hasCurrentObject ()) {
    var_s_23247.plusAssign_operation(enumerator_23390.current_lkey (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 530)) ;
    cEnumerator_lexicalRoutineFormalArgumentList enumerator_23501 (enumerator_23390.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_23501.hasCurrentObject ()) {
      var_s_23247.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_lexicalFormalModeName (enumerator_23501.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)).add_operation (extensionGetter_lexicalTypeBaseName (enumerator_23501.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)).add_operation (enumerator_23501.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)) ;
      enumerator_23501.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_23740 (enumerator_23390.current_mErrorMessageList (HERE), kENUMERATION_UP) ;
    const bool bool_0 = true ;
    if (enumerator_23740.hasCurrentObject () && bool_0) {
      var_s_23247.plusAssign_operation(GALGAS_string (" error"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 535)) ;
      while (enumerator_23740.hasCurrentObject () && bool_0) {
        var_s_23247.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_23740.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 536)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 536)) ;
        enumerator_23740.gotoNextObject () ;
        if (enumerator_23740.hasCurrentObject () && bool_0) {
          var_s_23247.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 537)) ;
        }
      }
    }
    var_s_23247.plusAssign_operation(GALGAS_string (" ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 539)) ;
    enumerator_23390.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_23972 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_23972, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 542)) ;
  }
  var_s_23247.plusAssign_operation(GALGAS_string ("**************** Prefined lexical functions ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 544)) ;
  cEnumerator_lexicalFunctionMap enumerator_24207 (var_lexicalFunctionMap_23972, kENUMERATION_UP) ;
  while (enumerator_24207.hasCurrentObject ()) {
    var_s_23247.plusAssign_operation(enumerator_24207.current_lkey (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 546)) ;
    cEnumerator_lexicalFunctionFormalArgumentList enumerator_24278 (enumerator_24207.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_24278.hasCurrentObject ()) {
      var_s_23247.plusAssign_operation(GALGAS_string (" \?@").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24278.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 548)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 548)).add_operation (enumerator_24278.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 548)) ;
      enumerator_24278.gotoNextObject () ;
    }
    var_s_23247.plusAssign_operation(GALGAS_string (" -> @").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24207.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 550)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 550)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_24207.current_mReplacementFunctionName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_s_23247.plusAssign_operation(GALGAS_string ("Note: the '").add_operation (enumerator_24207.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 552)).add_operation (GALGAS_string ("' function is obsolete: use '"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 552)).add_operation (enumerator_24207.current_mReplacementFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 552)).add_operation (GALGAS_string ("' function.\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 552)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 552)) ;
      }
    }
    var_s_23247.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 554)) ;
    enumerator_24207.gotoNextObject () ;
  }
  var_s_23247.plusAssign_operation(GALGAS_string ("************************************************************"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 557)) ;
  {
  routine_println_3F_ (var_s_23247, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 558)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalOrExpressionAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 36)) ;
  result_result.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 37)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 38)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  result_result = GALGAS_string ("testForInputUTF32CharRange (") ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_result.plusAssign_operation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 48)) ;
  result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 49)) ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_result.plusAssign_operation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 50)) ;
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 51)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringMatchAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalStringMatchAST temp_0 = this ;
  result_result = GALGAS_string ("testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 59)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 59)).add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 59)) ;
  result_result.plusAssign_operation(GALGAS_string (", true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 60)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringNotMatchAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("notTestForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)) ;
  const GALGAS_lexicalStringNotMatchAST temp_0 = this ;
  result_result.plusAssign_operation(temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 69)) ;
  result_result.plusAssign_operation(GALGAS_string (", gLexicalMessage_"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 70)) ;
  result_result.plusAssign_operation(constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 71)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 71)) ;
  const GALGAS_lexicalStringNotMatchAST temp_1 = this ;
  result_result.plusAssign_operation(temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 72)) ;
  result_result.plusAssign_operation(GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 73)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterMatchAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("testForInputUTF32Char (") ;
  const GALGAS_lexicalCharacterMatchAST temp_0 = this ;
  result_result.plusAssign_operation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 82)) ;
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 83)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterSetMatchAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("testForCharWithFunction (") ;
  const GALGAS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_result.plusAssign_operation(temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 92)) ;
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 93)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_result = GALGAS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 107)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_result = temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 114)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_result = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 120)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("previousChar ()") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_result = GALGAS_string ("::scanner_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)) ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_1 = this ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_6074 (temp_1.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_6074.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_6074.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 136)) ;
    enumerator_6074.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 138)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateDefaultSendCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_result = GALGAS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 155)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 155)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorByDefaultAST::getter_generateDefaultSendCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalErrorByDefaultAST temp_0 = this ;
  result_result = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 163)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 163)).add_operation (temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 163)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 163)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalImplicitRuleAST::getter_generateLexicalRuleCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                           const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  GALGAS_tokenSortedlist var_tokenSortedList_8940 ;
  const GALGAS_lexicalImplicitRuleAST temp_0 = this ;
  GALGAS_lexicalExplicitTokenListMap joker_8932 ; // Joker input parameter
  GALGAS_bool joker_8956 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_8932, var_tokenSortedList_8940, joker_8956, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 198)) ;
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_8991 (var_tokenSortedList_8940, kENUMERATION_DOWN) ;
  while (enumerator_8991.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if (testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 201)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 201)) ;
    result_result.plusAssign_operation(enumerator_8991.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)) ;
    result_result.plusAssign_operation(GALGAS_string (", true)) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)) ;
    result_result.plusAssign_operation(GALGAS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_8991.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 204)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 204)) ;
    result_result.plusAssign_operation(GALGAS_string ("  enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 205)) ;
    result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)) ;
    enumerator_8991.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalImplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalExplicitRuleAST::getter_generateLexicalRuleCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                           const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("if (") ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 223)) ;
  result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 224)) ;
  {
  result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 225)) ;
  }
  const GALGAS_lexicalExplicitRuleAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_10136 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_10136.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_10136.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 227)) ;
    enumerator_10136.gotoNextObject () ;
  }
  {
  result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 229)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 230)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalExplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_10546 (temp_0.readProperty_mInstructionList (), kENUMERATION_UP) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas", 237)).isValidAndTrue () ;
  if (enumerator_10546.hasCurrentObject () && bool_1) {
    while (enumerator_10546.hasCurrentObject () && bool_1) {
      result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_10546.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 238)) ;
      enumerator_10546.gotoNextObject () ;
      if (enumerator_10546.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas", 237)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalOrExpressionAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 36)) ;
  result_result.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 37)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssign_operation(callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 38)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputFromChar:") ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 48)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 48)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 49)) ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 50)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 50)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 51)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringMatchAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalStringMatchAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputString:@").add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 59)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" advance:YES]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 60)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringNotMatchAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("[self notTestForInputString:@") ;
  const GALGAS_lexicalStringNotMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 69)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" error:& scanningOk]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 70)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterMatchAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("[self testForInputChar:") ;
  const GALGAS_lexicalCharacterMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 79)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 79)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 80)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterSetMatchAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("[self testForCharWithFunction: ") ;
  const GALGAS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 88)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 89)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalOrExpressionAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 105)) ;
  result_result.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 106)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssign_operation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 107)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("self.testForInputFromChar (") ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 117)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 117)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 118)) ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 119)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 119)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 120)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalStringMatchAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("self.testForInputString (").add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 128)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", advance: true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 129)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringNotMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("self.notTestForInputString (") ;
  const GALGAS_lexicalStringNotMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 138)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", error: &scanningOk)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 139)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("self.testForInputChar (") ;
  const GALGAS_lexicalCharacterMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 148)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 148)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 149)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterSetMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("self.testForCharWithFunction (") ;
  const GALGAS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 157)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 158)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 172)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 179)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 179)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 185)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("mPreviousChar") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 199)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 199)) ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_1 = this ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_9281 (temp_1.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_9281.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_9281.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 201)) ;
    if (enumerator_9281.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 202)) ;
    }
    enumerator_9281.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 204)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 216)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 223)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 223)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 229)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("self.previousChar") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 243)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 243)) ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_1 = this ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_11178 (temp_1.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_11178.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_11178.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 245)) ;
    if (enumerator_11178.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 246)) ;
    }
    enumerator_11178.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 248)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateObjcCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateObjcCocoaDefaultSendCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 264)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 264)).add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 264)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 264)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateObjcCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorByDefaultAST::getter_generateObjcCocoaDefaultSendCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                      Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 286)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 286)).add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 286)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 286)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = false\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateObjcCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalImplicitRuleAST::getter_generateObjcCocoaCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                         const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  GALGAS_tokenSortedlist var_tokenSortedList_14940 ;
  const GALGAS_lexicalImplicitRuleAST temp_0 = this ;
  GALGAS_lexicalExplicitTokenListMap joker_14932 ; // Joker input parameter
  GALGAS_bool joker_14956 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_14932, var_tokenSortedList_14940, joker_14956, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 328)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_15001 (var_tokenSortedList_14940, kENUMERATION_DOWN) ;
  while (enumerator_15001.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && [self testForInputString:@"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 331)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_15001.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 332)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (" advance:YES]) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 333)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 334)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 334)).add_operation (enumerator_15001.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 334)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 334)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 335)) ;
    enumerator_15001.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateObjcCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalExplicitRuleAST::getter_generateObjcCocoaCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                         const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("if (scanningOk && (") ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 348)) ;
  }
  const GALGAS_lexicalExplicitRuleAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_15905 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_15905.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_15905.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 350)) ;
    enumerator_15905.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 352)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 353)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalImplicitRuleAST::getter_generateSwiftCocoaCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  GALGAS_tokenSortedlist var_tokenSortedList_16963 ;
  const GALGAS_lexicalImplicitRuleAST temp_0 = this ;
  GALGAS_lexicalExplicitTokenListMap joker_16955 ; // Joker input parameter
  GALGAS_bool joker_16979 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_16955, var_tokenSortedList_16963, joker_16979, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 371)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_17024 (var_tokenSortedList_16963, kENUMERATION_DOWN) ;
  while (enumerator_17024.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if scanningOk && self.testForInputString ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 374)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_17024.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 375)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", advance: true) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 376)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 377)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 377)).add_operation (enumerator_17024.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 377)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 377)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 378)) ;
    enumerator_17024.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalExplicitRuleAST::getter_generateSwiftCocoaCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("if scanningOk && (") ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 389)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 390)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 391)) ;
  }
  const GALGAS_lexicalExplicitRuleAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_17925 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_17925.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_17925.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 393)) ;
    enumerator_17925.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 395)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 396)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSendTerminalByDefaultAST checkLexicalDefaultAction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSendTerminalByDefaultAST::method_checkLexicalDefaultAction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  GALGAS_lexicalSentValueList joker_8200 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mDefaultSentTerminal (), joker_8200, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 199)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalErrorByDefaultAST checkLexicalDefaultAction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorByDefaultAST::method_checkLexicalDefaultAction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_lexicalErrorByDefaultAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 207)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalOrExpressionAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalOrExpressionAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalOrExpressionAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 221)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 222)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterMatchAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterMatchAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterSetMatchAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterSetMatchAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_lexicalCharacterSetMatchAST temp_1 = this ;
    test_0 = ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ().getter_hasKey (temp_1.readProperty_mCharacterSetName ().readProperty_string () COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 236)).operator_not (SOURCE_FILE ("lexiqueCompilation.galgas", 236)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterSetMatchAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      appendFixItActions (fixItArray3, kFixItReplace, ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ()) ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCharacterSetName ().readProperty_location (), GALGAS_string ("undefined test function"), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 237)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterIntervalMatchAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterIntervalMatchAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalStringMatchAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringMatchAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalStringMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.addAssign_operation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 251)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalStringNotMatchAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringNotMatchAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalStringNotMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.addAssign_operation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 258)) ;
  {
  const GALGAS_lexicalStringNotMatchAST temp_1 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 259)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalFunctionCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                     GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum var_attributeLexicalType_11810 ;
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_11810, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 276)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_11810.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_11810, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 282)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 283)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 284)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 285)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 282)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                     GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 296)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterInputArgumentAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 297)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 298)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 299)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 297)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalFunctionCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 310)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GALGAS_string ("type error, a literal character has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 311)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 312)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 313)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 311)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                            GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 324)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 325)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 326)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 327)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 325)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalFunctionCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_14456 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_14487 ;
  GALGAS_string var_replacementFunctionName_14522 ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GALGAS_bool joker_14550 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_14456, var_returnedLexicalFormalType_14487, var_replacementFunctionName_14522, joker_14550, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 338)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName_14522.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_14522, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 347)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 347)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 347)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType_14487.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_14487, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 351)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 352)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 353)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 354)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 351)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList_14456.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 358)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 358)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GALGAS_lexicalFunctionInputArgumentAST temp_10 = this ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 360)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 359)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 360)).add_operation (var_lexicalFormalTypeList_14456.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 362)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 361)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 362)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 359)) ;
    }
  }
  const GALGAS_lexicalFunctionInputArgumentAST temp_12 = this ;
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_15539 (var_lexicalFormalTypeList_14456, kENUMERATION_UP) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_15569 (temp_12.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_15539.hasCurrentObject () && enumerator_15569.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_15569.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_15539.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 366)) ;
    enumerator_15539.gotoNextObject () ;
    enumerator_15569.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum var_attributeLexicalType_16662 ;
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_16662, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 387)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_16662.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_16662, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 393)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 394)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 395)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 396)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 393)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 407)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterInputArgumentAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 408)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 409)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 410)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 408)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                   GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 421)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GALGAS_string ("type error, a literal unsigned value has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 422)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 423)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 424)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 422)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                           GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 435)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 436)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 437)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 438)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 436)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                   GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_19311 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_19342 ;
  GALGAS_string var_replacementFunctionName_19377 ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GALGAS_bool joker_19405 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_19311, var_returnedLexicalFormalType_19342, var_replacementFunctionName_19377, joker_19405, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 449)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName_19377.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_19377, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 458)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 458)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 458)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType_19342.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_19342, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 462)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 463)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 464)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 465)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 462)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList_19311.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 469)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 469)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GALGAS_lexicalFunctionInputArgumentAST temp_10 = this ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 471)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 470)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 471)).add_operation (var_lexicalFormalTypeList_19311.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 473)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 472)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 473)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 470)) ;
    }
  }
  const GALGAS_lexicalFunctionInputArgumentAST temp_12 = this ;
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_20394 (var_lexicalFormalTypeList_19311, kENUMERATION_UP) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_20424 (temp_12.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_20394.hasCurrentObject () && enumerator_20424.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_20424.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_20394.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 477)) ;
    enumerator_20394.gotoNextObject () ;
    enumerator_20424.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalImplicitRuleAST checkLexicalRule'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalImplicitRuleAST::method_checkLexicalRule (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalImplicitRuleAST temp_0 = this ;
  GALGAS_lexicalExplicitTokenListMap joker_21679 ; // Joker input parameter
  GALGAS_tokenSortedlist joker_21682 ; // Joker input parameter
  GALGAS_bool joker_21685 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_21679, joker_21682, joker_21685, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 503)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalExplicitRuleAST checkLexicalRule'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalExplicitRuleAST::method_checkLexicalRule (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 510)) ;
  GALGAS_lexicalTagMap var_tagMap_22007 = GALGAS_lexicalTagMap::class_func_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 511)) ;
  const GALGAS_lexicalExplicitRuleAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_22026 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_22026.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_22026.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_22007, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 513)) ;
    enumerator_22026.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalStructuredSendInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = this ;
  cEnumerator_lexicalSendSearchListAST enumerator_4530 (temp_0.readProperty_mLexicalSendSearchList (), kENUMERATION_UP) ;
  while (enumerator_4530.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GALGAS_bool (true), enumerator_4530.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 111)) ;
    }
    GALGAS_lexicalTypeEnum joker_4770 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_4530.current_mAttributeName (HERE), joker_4770, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 112)) ;
    enumerator_4530.gotoNextObject () ;
  }
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = this ;
  callExtensionMethod_checkLexicalDefaultAction ((cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 114)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                                 const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = this ;
  cEnumerator_lexicalSendSearchListAST enumerator_5351 (temp_0.readProperty_mLexicalSendSearchList (), kENUMERATION_UP) ;
  while (enumerator_5351.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 127)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = search_into_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 128)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("_").add_operation (enumerator_5351.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 129)).add_operation (GALGAS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 129)).add_operation (enumerator_5351.current_mAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 129)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 129)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 130)) ;
    enumerator_5351.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 132)) ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateObjcCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 133)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 134)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                                  const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = this ;
  cEnumerator_lexicalSendSearchListAST enumerator_6246 (temp_0.readProperty_mLexicalSendSearchList (), kENUMERATION_UP) ;
  while (enumerator_6246.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (tokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 145)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  tokenCode = search_into_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 146)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("_").add_operation (enumerator_6246.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 147)).add_operation (GALGAS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 147)).add_operation (enumerator_6246.current_mAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 147)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 147)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)) ;
    enumerator_6246.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if tokenCode == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 150)) ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateSwiftCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 151)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 152)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalStructuredSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                               const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = this ;
  cEnumerator_lexicalSendSearchListAST enumerator_7470 (temp_0.readProperty_mLexicalSendSearchList (), kENUMERATION_UP) ;
  while (enumerator_7470.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 171)) ;
    result_result.plusAssign_operation(GALGAS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_7470.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 172)).add_operation (GALGAS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 172)).add_operation (enumerator_7470.current_mAttributeName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 172)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 172)) ;
    result_result.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)) ;
    enumerator_7470.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 175)) ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 176)) ;
  result_result.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 177)) ;
  result_result.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 178)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalDropInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalDropInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalDropInstructionAST temp_0 = this ;
  GALGAS_lexicalSentValueList joker_3057 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mTerminalName (), joker_3057, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 67)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalDropInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalDropInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 78)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 78)).add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 78)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 78)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalDropInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                        const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalDropInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 87)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 87)).add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 87)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 87)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalDropInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalDropInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                     const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalDropInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("enterDroppedTerminal (kToken_").add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 105)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 105)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalErrorInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_lexicalErrorInstructionAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 68)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                        const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                         const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                         Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = false\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalErrorInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                      const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalErrorInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 105)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 105)).add_operation (temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 105)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 105)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalLogInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalLogInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                    GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalLogInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                      const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                      Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("/* lexicalLog (LINE_AND_SOURCE_FILE) ; */\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalLogInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("/* lexicalLog (LINE_AND_SOURCE_FILE) */\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalLogInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalLogInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                    const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("lexicalLog (LINE_AND_SOURCE_FILE) ;\n") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRepeatInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalRepeatInstructionAST temp_0 = this ;
  cEnumerator_lexicalWhileBranchListAST enumerator_3878 (temp_0.readProperty_mLexicalWhileBranchList (), kENUMERATION_UP) ;
  while (enumerator_3878.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_3878.current_mWhileExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 100)) ;
    GALGAS_lexicalTagMap var_tagMap_4017 = GALGAS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 101)) ;
    cEnumerator_lexicalInstructionListAST enumerator_4082 (enumerator_3878.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_4082.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4082.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4017, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 103)) ;
      enumerator_4082.gotoNextObject () ;
    }
    enumerator_3878.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_4225 = GALGAS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 106)) ;
  const GALGAS_lexicalRepeatInstructionAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_4288 (temp_1.readProperty_mRepeatedInstructionList (), kENUMERATION_UP) ;
  while (enumerator_4288.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4288.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4225, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 108)) ;
    enumerator_4288.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRepeatInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                         const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalRepeatInstructionAST temp_0 = this ;
  GALGAS_string var_loopVarName_4959 = GALGAS_string ("loop").add_operation (temp_0.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 120)).getter_string (SOURCE_FILE ("lexique-instruction-repeat.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 120)) ;
  result_outGeneratedCode = GALGAS_string ("BOOL ").add_operation (var_loopVarName_4959, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 121)).add_operation (GALGAS_string (" = YES ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 121)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("do {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 122)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 123)) ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_5176 (temp_1.readProperty_mRepeatedInstructionList (), kENUMERATION_UP) ;
  while (enumerator_5176.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_5176.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 126)) ;
    enumerator_5176.gotoNextObject () ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_2 = this ;
  cEnumerator_lexicalWhileBranchListAST enumerator_5379 (temp_2.readProperty_mLexicalWhileBranchList (), kENUMERATION_UP) ;
  while (enumerator_5379.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 131)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_5379.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 132)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 132)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 133)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 134)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_5670 (enumerator_5379.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5670.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_5670.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 136)) ;
      enumerator_5670.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 138)) ;
    }
    if (enumerator_5379.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 140)) ;
    }
    enumerator_5379.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n  ").add_operation (var_loopVarName_4959, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 143)).add_operation (GALGAS_string (" = NO ;\n}\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 142)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 145)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}while (").add_operation (var_loopVarName_4959, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 146)).add_operation (GALGAS_string (" && scanningOk) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 146)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRepeatInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("while (loop && scanningOk) {\n") ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 157)) ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_0 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_6633 (temp_0.readProperty_mRepeatedInstructionList (), kENUMERATION_UP) ;
  while (enumerator_6633.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6633.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 160)) ;
    enumerator_6633.gotoNextObject () ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_1 = this ;
  cEnumerator_lexicalWhileBranchListAST enumerator_6837 (temp_1.readProperty_mLexicalWhileBranchList (), kENUMERATION_UP) ;
  while (enumerator_6837.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 165)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_6837.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 166)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 167)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 168)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_7127 (enumerator_6837.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_7127.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7127.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 170)) ;
      enumerator_7127.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 172)) ;
    }
    if (enumerator_6837.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 174)) ;
    }
    enumerator_6837.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n  loop = false\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 176)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 179)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\nloop = true\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 180)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalRepeatInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRepeatInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                       const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("do {\n") ;
  {
  result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 199)) ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_0 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_8325 (temp_0.readProperty_mRepeatedInstructionList (), kENUMERATION_UP) ;
  while (enumerator_8325.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8325.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 202)) ;
    enumerator_8325.gotoNextObject () ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_1 = this ;
  cEnumerator_lexicalWhileBranchListAST enumerator_8516 (temp_1.readProperty_mLexicalWhileBranchList (), kENUMERATION_UP) ;
  while (enumerator_8516.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 207)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_8516.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 208)) ;
    result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 209)) ;
    {
    result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 210)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_8750 (enumerator_8516.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_8750.hasCurrentObject ()) {
      result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8750.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 212)) ;
      enumerator_8750.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 214)) ;
    }
    if (enumerator_8516.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 216)) ;
    }
    enumerator_8516.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string ("}else{\n  loop = false ;\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 218)) ;
  {
  result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 221)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("}while (loop) ;\nloop = true ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 222)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRewindInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRewindInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalRewindInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.method_searchKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 72)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = this ;
  GALGAS_lexicalSentValueList joker_3245 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_1.readProperty_mTerminalName (), joker_3245, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 73)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRewindInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                         const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalRewindInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("[self restoreScanningPoint: & locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 84)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 84)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 85)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 85)).add_operation (temp_1.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 85)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 85)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRewindInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                          const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalRewindInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("self.restoreScanningPoint (locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 94)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 94)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 95)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 95)).add_operation (temp_1.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 95)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 95)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalRewindInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRewindInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalRewindInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("mCurrentLocation = currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 112)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 112)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("mTokenEndLocation = endLocationForTag_").add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 113)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 113)) ;
  const GALGAS_lexicalRewindInstructionAST temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("mCurrentChar = currentCharForTag_").add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 114)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 114)) ;
  const GALGAS_lexicalRewindInstructionAST temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("token.mTokenCode = kToken_").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 115)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 115)) ;
  result_result.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 116)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateObjcCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateObjcCocoaRoutineArgument (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  GALGAS_lexicalTypeEnum var_lexicalType_6789 ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_lexicalType_6789, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 170)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_needsReferenceInInputOutputInCocoa (var_lexicalType_6789, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 172)).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 173)) ;
    }
  }
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_2 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mLexicalAttribute_").add_operation (temp_2.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 175)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFormalInputArgumentAST generateObjcCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFormalInputArgumentAST::getter_generateObjcCocoaRoutineArgument (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = callExtensionGetter_generateObjcCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 183)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("&self.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 203)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFormalInputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFormalInputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 211)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputOutputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                          GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                          GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum var_attributeLexicalType_9470 ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_9470, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 228)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_9470.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputOutputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_9470, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 234)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 235)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 236)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 237)), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 234)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 241)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalAttributeInputOutputArgumentAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualPassingModeLocation (), GALGAS_string ("the output mode (!) is required here, not an output/input mode"), fixItArray6  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 242)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFormalInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                 GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = this ;
  callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), ioArgument_ioLexiqueAnalysisContext, inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 253)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 258)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFormalInputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualPassingModeLocation (), GALGAS_string ("the output/input mode (!\?) is required here, not an input mode"), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 259)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRoutineCallInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRoutineCallInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                            GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_11193 ;
  GALGAS_stringlist var_routineErrorMessageList_11235 ;
  const GALGAS_lexicalRoutineCallInstructionAST temp_0 = this ;
  GALGAS_bool joker_11263 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalRoutineMessageMap ().method_searchKey (temp_0.readProperty_mRoutineName (), var_lexicalRoutineFormalArgumentList_11193, var_routineErrorMessageList_11235, joker_11263, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 268)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalRoutineCallInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, var_lexicalRoutineFormalArgumentList_11193.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 275)).objectCompare (temp_2.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 275)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalRoutineCallInstructionAST temp_3 = this ;
      const GALGAS_lexicalRoutineCallInstructionAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this lexical routine call names ").add_operation (temp_4.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 277)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 276)).add_operation (GALGAS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 277)).add_operation (var_lexicalRoutineFormalArgumentList_11193.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 279)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 278)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 279)), fixItArray5  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 276)) ;
    }
  }
  const GALGAS_lexicalRoutineCallInstructionAST temp_6 = this ;
  cEnumerator_lexicalRoutineFormalArgumentList enumerator_11767 (var_lexicalRoutineFormalArgumentList_11193, kENUMERATION_UP) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_11808 (temp_6.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_11767.hasCurrentObject () && enumerator_11808.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_11808.current_mLexicalRoutineActualArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_11767.current_mLexicalFormalArgumentMode (HERE), enumerator_11767.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 283)) ;
    enumerator_11767.gotoNextObject () ;
    enumerator_11808.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalRoutineCallInstructionAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, var_routineErrorMessageList_11235.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 290)).objectCompare (temp_8.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 290)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalRoutineCallInstructionAST temp_9 = this ;
      const GALGAS_lexicalRoutineCallInstructionAST temp_10 = this ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this lexical routine call names ").add_operation (temp_10.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 292)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 291)).add_operation (GALGAS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 292)).add_operation (var_routineErrorMessageList_11235.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 294)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 293)).add_operation (GALGAS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 294)), fixItArray11  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 291)) ;
    }
  }
  const GALGAS_lexicalRoutineCallInstructionAST temp_12 = this ;
  cEnumerator_lstringlist enumerator_12467 (temp_12.readProperty_mErrorMessageList (), kENUMERATION_UP) ;
  while (enumerator_12467.hasCurrentObject ()) {
    cMapElement_lexicalMessageMap * objectArray_12508 = (cMapElement_lexicalMessageMap *) ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, enumerator_12467.current_mValue (HERE), kSearchErrorMessage_lexicalMessageMap_searchKey  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 298)) ;
    if (nullptr != objectArray_12508) {
      macroValidSharedObject (objectArray_12508, cMapElement_lexicalMessageMap) ;
      objectArray_12508->mProperty_mMessageIsUsed = GALGAS_bool (true) ;
    }
    enumerator_12467.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRoutineCallInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                              const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 312)).add_operation (GALGAS_string (" (& scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 312)) ;
  const GALGAS_lexicalRoutineCallInstructionAST temp_1 = this ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_13165 (temp_1.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_13165.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateObjcCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_13165.current_mLexicalRoutineActualArgument (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 314)) ;
    enumerator_13165.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 316)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRoutineCallInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                               const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 325)).add_operation (GALGAS_string (" (&scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 325)) ;
  const GALGAS_lexicalRoutineCallInstructionAST temp_1 = this ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_13792 (temp_1.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_13792.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateSwiftCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_13792.current_mLexicalRoutineActualArgument (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 327)) ;
    enumerator_13792.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 329)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result_result = GALGAS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 343)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFormalInputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFormalInputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = this ;
  result_result = callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 350)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalRoutineCallInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRoutineCallInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                            const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("::scanner_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 365)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 365)) ;
  const GALGAS_lexicalRoutineCallInstructionAST temp_1 = this ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_15564 (temp_1.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_15564.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_15564.current_mLexicalRoutineActualArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 367)) ;
    enumerator_15564.gotoNextObject () ;
  }
  const GALGAS_lexicalRoutineCallInstructionAST temp_2 = this ;
  cEnumerator_lstringlist enumerator_15716 (temp_2.readProperty_mErrorMessageList (), kENUMERATION_UP) ;
  while (enumerator_15716.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 370)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 370)).add_operation (enumerator_15716.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 370)) ;
    enumerator_15716.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 372)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSelectInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSelectInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_4305 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_4305.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_4305.current_mSelectExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 113)) ;
    GALGAS_lexicalTagMap var_tagMap_4447 = GALGAS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 114)) ;
    cEnumerator_lexicalInstructionListAST enumerator_4512 (enumerator_4305.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_4512.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4512.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4447, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 116)) ;
      enumerator_4512.gotoNextObject () ;
    }
    enumerator_4305.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_4656 = GALGAS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 119)) ;
  const GALGAS_lexicalSelectInstructionAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_4719 (temp_1.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
  while (enumerator_4719.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4719.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4656, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 121)) ;
    enumerator_4719.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSelectInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                         const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_5329 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_5329.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 137)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_5329.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 138)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 139)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 140)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_5623 (enumerator_5329.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5623.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_5623.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 142)) ;
      enumerator_5623.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 144)) ;
    }
    if (enumerator_5329.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 146)) ;
    }
    enumerator_5329.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 149)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 150)) ;
      {
      result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 151)) ;
      }
      const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
      cEnumerator_lexicalInstructionListAST enumerator_6044 (temp_3.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
      while (enumerator_6044.hasCurrentObject ()) {
        result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6044.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 153)) ;
        enumerator_6044.gotoNextObject () ;
      }
      {
      result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 155)) ;
      }
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 157)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSelectInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_6656 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_6656.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 170)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_6656.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 171)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 172)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 173)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_6949 (enumerator_6656.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_6949.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6949.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 175)) ;
      enumerator_6949.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 177)) ;
    }
    if (enumerator_6656.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 179)) ;
    }
    enumerator_6656.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 182)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 183)) ;
      {
      result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 184)) ;
      }
      const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
      cEnumerator_lexicalInstructionListAST enumerator_7371 (temp_3.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
      while (enumerator_7371.hasCurrentObject ()) {
        result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7371.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 186)) ;
        enumerator_7371.gotoNextObject () ;
      }
      {
      result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 188)) ;
      }
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 190)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalSelectInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_7973 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 199)).isValidAndTrue () ;
  if (enumerator_7973.hasCurrentObject () && bool_1) {
    while (enumerator_7973.hasCurrentObject () && bool_1) {
      cEnumerator_lexicalInstructionListAST enumerator_8058 (enumerator_7973.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
      bool bool_2 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 200)).isValidAndTrue () ;
      if (enumerator_8058.hasCurrentObject () && bool_2) {
        while (enumerator_8058.hasCurrentObject () && bool_2) {
          result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_8058.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 201)) ;
          enumerator_8058.gotoNextObject () ;
          if (enumerator_8058.hasCurrentObject ()) {
            bool_2 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 200)).isValidAndTrue () ;
          }
        }
      }
      enumerator_7973.gotoNextObject () ;
      if (enumerator_7973.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 199)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_8206 (temp_3.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
  bool bool_4 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 204)).isValidAndTrue () ;
  if (enumerator_8206.hasCurrentObject () && bool_4) {
    while (enumerator_8206.hasCurrentObject () && bool_4) {
      result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_8206.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 205)) ;
      enumerator_8206.gotoNextObject () ;
      if (enumerator_8206.hasCurrentObject ()) {
        bool_4 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 204)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSelectInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                       const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_8693 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_8693.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 219)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_8693.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 220)) ;
    result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 221)) ;
    {
    result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 222)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_8930 (enumerator_8693.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_8930.hasCurrentObject ()) {
      result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8930.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 224)) ;
      enumerator_8930.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 226)) ;
    }
    if (enumerator_8693.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 228)) ;
    }
    enumerator_8693.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 231)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 232)) ;
      {
      result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 233)) ;
      }
      const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
      cEnumerator_lexicalInstructionListAST enumerator_9299 (temp_3.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
      while (enumerator_9299.hasCurrentObject ()) {
        result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_9299.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 235)) ;
        enumerator_9299.gotoNextObject () ;
      }
      {
      result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 237)) ;
      }
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 239)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSimpleSendInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSimpleSendInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                           GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = this ;
  GALGAS_lexicalSentValueList joker_3060 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mSentTerminal (), joker_3060, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 65)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                             const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 76)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 76)).add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 76)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 76)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                              const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 85)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 85)).add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 85)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 85)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalSimpleSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                           const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 103)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 103)) ;
  result_result.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 104)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalTagInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalTagInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                    GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_lexicalTagInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.setter_insertKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 67)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalTagInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                      const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalTagInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("scanningPointStructForCocoa locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 78)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 78)) ;
  const GALGAS_lexicalTagInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("[self saveScanningPoint: & locationForTag_").add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 79)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 79)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalTagInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalTagInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("let locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 88)).add_operation (GALGAS_string (" = self.savedScanningPoint ()\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 88)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalTagInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalTagInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                    const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTagInstructionAST temp_0 = this ;
  const GALGAS_lexicalTagInstructionAST temp_1 = this ;
  const GALGAS_lexicalTagInstructionAST temp_2 = this ;
  result_result = GALGAS_string ("const LocationInSource currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 105)).add_operation (GALGAS_string (" = mCurrentLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 105)).add_operation (GALGAS_string ("const LocationInSource endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 105)).add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 106)).add_operation (GALGAS_string (" = mTokenEndLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 106)).add_operation (GALGAS_string ("const utf32 currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 106)).add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 107)).add_operation (GALGAS_string (" = mCurrentChar ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 107)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalWarningInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalWarningInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                        GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_lexicalWarningInstructionAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 67)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalWarningInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                          const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalWarningInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                           const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalWarningInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalWarningInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                        const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalWarningInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("lexicalWarning (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 104)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 104)).add_operation (temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 104)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 104)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("optionCompilation.galgas", 184)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_commandLineOptionMap var_boolOptionMap_7663 = GALGAS_commandLineOptionMap::class_func_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 198)) ;
  GALGAS_commandLineOptionMap var_uintOptionMap_7710 = GALGAS_commandLineOptionMap::class_func_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 199)) ;
  GALGAS_commandLineOptionMap var_stringOptionMap_7757 = GALGAS_commandLineOptionMap::class_func_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 200)) ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_7806 = GALGAS_commandLineOptionMap::class_func_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 201)) ;
  GALGAS_stringset var_optionNameSet_7837 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("optionCompilation.galgas", 202)) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  cEnumerator_commandLineOptionListAST enumerator_7999 (temp_0.readProperty_mOptions (), kENUMERATION_UP) ;
  while (enumerator_7999.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_optionNameSet_7837.getter_hasKey (enumerator_7999.current_mOptionInternalName (HERE).readProperty_string () COMMA_SOURCE_FILE ("optionCompilation.galgas", 204)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_7999.current_mOptionInternalName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_7999.current_mOptionInternalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 205)).add_operation (GALGAS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 205)), fixItArray2  COMMA_SOURCE_FILE ("optionCompilation.galgas", 205)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, enumerator_7999.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("bool"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          var_boolOptionMap_7663.setter_insertKey (enumerator_7999.current_mOptionInternalName (HERE), enumerator_7999.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7999.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7999.current_mOptionComment (HERE).readProperty_string (), GALGAS_string ("false"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 207)) ;
          }
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsNotEqual, enumerator_7999.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 214)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_7999.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @bool option cannot have a default value (default value is always false)"), fixItArray5  COMMA_SOURCE_FILE ("optionCompilation.galgas", 215)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, enumerator_7999.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_7999.current_mOptionDefaultValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = GALGAS_string ("0") ;
            }else if (kBoolFalse == test_8) {
              temp_7 = enumerator_7999.current_mOptionDefaultValue (HERE).readProperty_string () ;
            }
            var_uintOptionMap_7710.setter_insertKey (enumerator_7999.current_mOptionInternalName (HERE), enumerator_7999.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7999.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7999.current_mOptionComment (HERE).readProperty_string (), temp_7, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 218)) ;
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsEqual, enumerator_7999.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 225)))).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_7999.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @uint option default value cannot be an @string value"), fixItArray10  COMMA_SOURCE_FILE ("optionCompilation.galgas", 226)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GALGAS_bool (kIsEqual, enumerator_7999.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_11) {
              {
              var_stringOptionMap_7757.setter_insertKey (enumerator_7999.current_mOptionInternalName (HERE), enumerator_7999.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7999.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7999.current_mOptionComment (HERE).readProperty_string (), enumerator_7999.current_mOptionDefaultValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 229)) ;
              }
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsEqual, enumerator_7999.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 236)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (enumerator_7999.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @string option default value cannot be an @uint value"), fixItArray13  COMMA_SOURCE_FILE ("optionCompilation.galgas", 237)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_11) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsEqual, enumerator_7999.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("stringlist"))).boolEnum () ;
              if (kBoolTrue == test_14) {
                {
                var_stringListOptionMap_7806.setter_insertKey (enumerator_7999.current_mOptionInternalName (HERE), enumerator_7999.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7999.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7999.current_mOptionComment (HERE).readProperty_string (), enumerator_7999.current_mOptionDefaultValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 240)) ;
                }
                enumGalgasBool test_15 = kBoolTrue ;
                if (kBoolTrue == test_15) {
                  test_15 = GALGAS_bool (kIsNotEqual, enumerator_7999.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 247)))).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    TC_Array <C_FixItDescription> fixItArray16 ;
                    inCompiler->emitSemanticError (enumerator_7999.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @stringlist option cannot accept default value"), fixItArray16  COMMA_SOURCE_FILE ("optionCompilation.galgas", 248)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_14) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_7999.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("only the @bool, @uint or @string types are allowed here"), fixItArray17  COMMA_SOURCE_FILE ("optionCompilation.galgas", 251)) ;
            }
          }
        }
      }
    }
    var_optionNameSet_7837.addAssign_operation (enumerator_7999.current_mOptionInternalName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 253)) ;
    enumerator_7999.gotoNextObject () ;
  }
  {
  const GALGAS_optionComponentDeclarationAST temp_18 = this ;
  const GALGAS_optionComponentDeclarationAST temp_19 = this ;
  ioArgument_ioSemanticContext.mProperty_mOptionComponentMapForSemanticAnalysis.setter_insertKey (temp_18.readProperty_mOptionComponentName (), temp_19.readProperty_isPredefined (), var_boolOptionMap_7663, var_uintOptionMap_7710, var_stringOptionMap_7757, var_stringListOptionMap_7806, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 256)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_11165 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 280)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11165, var_nameForUsefulness_11165, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 281)) ;
  }
  GALGAS_bool var_optionIsPredefined_11442 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_11492 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_11537 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_11582 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_11629 ;
  const GALGAS_optionComponentDeclarationAST temp_1 = this ;
  constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionIsPredefined_11442, var_boolOptionMap_11492, var_uintOptionMap_11537, var_stringOptionMap_11582, var_stringListOptionMap_11629, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 283)) ;
  GALGAS_commandLineOptionSortedList var_boolOptionSortedList_11707 = GALGAS_commandLineOptionSortedList::class_func_emptySortedList (SOURCE_FILE ("optionCompilation.galgas", 292)) ;
  cEnumerator_commandLineOptionMap enumerator_11751 (var_boolOptionMap_11492, kENUMERATION_UP) ;
  while (enumerator_11751.hasCurrentObject ()) {
    var_boolOptionSortedList_11707.addAssign_operation (enumerator_11751.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_11751.current (HERE).readProperty_mOptionChar (), enumerator_11751.current (HERE).readProperty_mOptionString (), enumerator_11751.current (HERE).readProperty_mComment (), enumerator_11751.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 294)) ;
    enumerator_11751.gotoNextObject () ;
  }
  GALGAS_commandLineOptionSortedList var_uintOptionSortedList_11978 = GALGAS_commandLineOptionSortedList::class_func_emptySortedList (SOURCE_FILE ("optionCompilation.galgas", 301)) ;
  cEnumerator_commandLineOptionMap enumerator_12022 (var_uintOptionMap_11537, kENUMERATION_UP) ;
  while (enumerator_12022.hasCurrentObject ()) {
    var_uintOptionSortedList_11978.addAssign_operation (enumerator_12022.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12022.current (HERE).readProperty_mOptionChar (), enumerator_12022.current (HERE).readProperty_mOptionString (), enumerator_12022.current (HERE).readProperty_mComment (), enumerator_12022.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 303)) ;
    enumerator_12022.gotoNextObject () ;
  }
  GALGAS_commandLineOptionSortedList var_stringOptionSortedList_12249 = GALGAS_commandLineOptionSortedList::class_func_emptySortedList (SOURCE_FILE ("optionCompilation.galgas", 310)) ;
  cEnumerator_commandLineOptionMap enumerator_12295 (var_stringOptionMap_11582, kENUMERATION_UP) ;
  while (enumerator_12295.hasCurrentObject ()) {
    var_stringOptionSortedList_12249.addAssign_operation (enumerator_12295.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12295.current (HERE).readProperty_mOptionChar (), enumerator_12295.current (HERE).readProperty_mOptionString (), enumerator_12295.current (HERE).readProperty_mComment (), enumerator_12295.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 312)) ;
    enumerator_12295.gotoNextObject () ;
  }
  GALGAS_commandLineOptionSortedList var_stringListOptionSortedList_12526 = GALGAS_commandLineOptionSortedList::class_func_emptySortedList (SOURCE_FILE ("optionCompilation.galgas", 319)) ;
  cEnumerator_commandLineOptionMap enumerator_12576 (var_stringListOptionMap_11629, kENUMERATION_UP) ;
  while (enumerator_12576.hasCurrentObject ()) {
    var_stringListOptionSortedList_12526.addAssign_operation (enumerator_12576.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12576.current (HERE).readProperty_mOptionChar (), enumerator_12576.current (HERE).readProperty_mOptionString (), enumerator_12576.current (HERE).readProperty_mComment (), enumerator_12576.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 321)) ;
    enumerator_12576.gotoNextObject () ;
  }
  const GALGAS_optionComponentDeclarationAST temp_2 = this ;
  const GALGAS_optionComponentDeclarationAST temp_3 = this ;
  const GALGAS_optionComponentDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (temp_2.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 330)), GALGAS_optionComponentForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 333)), var_optionIsPredefined_11442, temp_4.readProperty_mOptionComponentName ().readProperty_string (), var_boolOptionSortedList_11707, var_uintOptionSortedList_11978, var_stringOptionSortedList_12249, var_stringListOptionSortedList_12526  COMMA_SOURCE_FILE ("optionCompilation.galgas", 331))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 329)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_optionComponentForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_optionComponentForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mIsPredefined () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_optionComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  const GALGAS_optionComponentForGeneration temp_0 = this ;
  GALGAS_headerKind temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mIsPredefined ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("optionCompilation.galgas", 365)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("optionCompilation.galgas", 365)) ;
  }
  result_result = temp_1 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GALGAS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionComponentForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mIsPredefined ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outHeader = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_optionComponentForGeneration temp_2 = this ;
    const GALGAS_optionComponentForGeneration temp_3 = this ;
    const GALGAS_optionComponentForGeneration temp_4 = this ;
    const GALGAS_optionComponentForGeneration temp_5 = this ;
    const GALGAS_optionComponentForGeneration temp_6 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, temp_2.readProperty_mOptionComponentName (), temp_3.readProperty_mBoolOptionSortedList (), temp_4.readProperty_mUIntOptionSortedList (), temp_5.readProperty_mStringOptionSortedList (), temp_6.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 377))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionComponentForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mIsPredefined ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outImplementation = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_optionComponentForGeneration temp_2 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 397))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 397)) ;
    const GALGAS_optionComponentForGeneration temp_3 = this ;
    const GALGAS_optionComponentForGeneration temp_4 = this ;
    const GALGAS_optionComponentForGeneration temp_5 = this ;
    const GALGAS_optionComponentForGeneration temp_6 = this ;
    const GALGAS_optionComponentForGeneration temp_7 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, temp_3.readProperty_mOptionComponentName (), temp_4.readProperty_mBoolOptionSortedList (), temp_5.readProperty_mUIntOptionSortedList (), temp_6.readProperty_mStringOptionSortedList (), temp_7.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 398))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendSpecificFiles'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificFiles (const GALGAS_string constinArgument_inProductDirectory,
                                                                    GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                    GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("optionCompilation.galgas", 416)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      const GALGAS_optionComponentForGeneration temp_2 = this ;
      test_1 = temp_2.readProperty_mIsPredefined ().operator_not (SOURCE_FILE ("optionCompilation.galgas", 416)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionComponentForGeneration temp_3 = this ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 417)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 417))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 417)) ;
      {
      const GALGAS_optionComponentForGeneration temp_4 = this ;
      const GALGAS_optionComponentForGeneration temp_5 = this ;
      const GALGAS_optionComponentForGeneration temp_6 = this ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_4.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 420)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 420)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, temp_5.readProperty_mOptionComponentName () COMMA_SOURCE_FILE ("optionCompilation.galgas", 424))), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, temp_6.readProperty_mOptionComponentName () COMMA_SOURCE_FILE ("optionCompilation.galgas", 428))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 418)) ;
      }
      const GALGAS_optionComponentForGeneration temp_7 = this ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_7.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 434)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 434))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 434)) ;
      const GALGAS_optionComponentForGeneration temp_8 = this ;
      ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("option-").add_operation (temp_8.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 435)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 435))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 435)) ;
      {
      const GALGAS_optionComponentForGeneration temp_9 = this ;
      const GALGAS_optionComponentForGeneration temp_10 = this ;
      const GALGAS_optionComponentForGeneration temp_11 = this ;
      const GALGAS_optionComponentForGeneration temp_12 = this ;
      const GALGAS_optionComponentForGeneration temp_13 = this ;
      const GALGAS_optionComponentForGeneration temp_14 = this ;
      const GALGAS_optionComponentForGeneration temp_15 = this ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_9.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 438)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 438)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (temp_10.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 443)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 443)), temp_11.readProperty_mOptionComponentName (), temp_12.readProperty_mBoolOptionSortedList (), temp_13.readProperty_mUIntOptionSortedList (), temp_14.readProperty_mStringOptionSortedList (), temp_15.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 442))), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 436)) ;
      }
      const GALGAS_optionComponentForGeneration temp_16 = this ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_16.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 455)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 455))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 455)) ;
      const GALGAS_optionComponentForGeneration temp_17 = this ;
      ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("option-").add_operation (temp_17.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 456)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 456))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 456)) ;
      {
      const GALGAS_optionComponentForGeneration temp_18 = this ;
      const GALGAS_optionComponentForGeneration temp_19 = this ;
      const GALGAS_optionComponentForGeneration temp_20 = this ;
      const GALGAS_optionComponentForGeneration temp_21 = this ;
      const GALGAS_optionComponentForGeneration temp_22 = this ;
      const GALGAS_optionComponentForGeneration temp_23 = this ;
      const GALGAS_optionComponentForGeneration temp_24 = this ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_18.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 459)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 459)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftCocoa (inCompiler, GALGAS_string ("option-").add_operation (temp_19.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 464)).add_operation (GALGAS_string ("-swift-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 464)), temp_20.readProperty_mOptionComponentName (), temp_21.readProperty_mBoolOptionSortedList (), temp_22.readProperty_mUIntOptionSortedList (), temp_23.readProperty_mStringOptionSortedList (), temp_24.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 463))), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 457)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'optionGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_optionGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_optionGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_optionGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_optionGenerationTemplates_0,
  0,
  gWrapperAllDirectories_optionGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderZone3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (Compiler * /* inCompiler */,
                                                                                  const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                  const GALGAS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                  const GALGAS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                  const GALGAS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                  const GALGAS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                               Bool options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_409_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_409 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_409.hasCurrentObject ()) {
      result.appendString ("extern C_BoolCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_409.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      index_409_.increment () ;
      enumerator_409.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                               UInt options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_974_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_974 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_974.hasCurrentObject ()) {
      result.appendString ("extern C_UIntCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_974.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      index_974_.increment () ;
      enumerator_974.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String options                                                   \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1541_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_1541 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1541.hasCurrentObject ()) {
      result.appendString ("extern C_StringCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1541.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      index_1541_.increment () ;
      enumerator_1541.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String List options                                              \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_2115_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_2115 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2115.hasCurrentObject ()) {
      result.appendString ("extern C_StringListCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2115.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      index_2115_.increment () ;
      enumerator_2115.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (Compiler * /* inCompiler */,
                                                                                            const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const GALGAS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                            const GALGAS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                            const GALGAS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                            const GALGAS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                               Bool options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_408_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_408 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_408.hasCurrentObject ()) {
      result.appendString ("C_BoolCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_408.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_408.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_408.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_408.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_408.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 12)).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      index_408_.increment () ;
      enumerator_408.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                               UInt options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1391_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_1391 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1391.hasCurrentObject ()) {
      result.appendString ("C_UIntCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1391.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_1391.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1391.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1391.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1391.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1391.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      index_1391_.increment () ;
      enumerator_1391.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String options                                                   \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_2441_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_2441 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2441.hasCurrentObject ()) {
      result.appendString ("C_StringCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2441.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_2441.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2441.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2441.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 38)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2441.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 39)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2441.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 40)).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      index_2441_.increment () ;
      enumerator_2441.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String List options                                              \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_3539_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_3539 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3539.hasCurrentObject ()) {
      result.appendString ("C_StringListCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3539.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_3539.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_3539.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_3539.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 52)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_3539.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 53)).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      index_3539_.increment () ;
      enumerator_3539.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#ifndef ") ;
  result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
  result.appendString ("_FOR_COCOA_DEFINED\n#define ") ;
  result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
  result.appendString ("_FOR_COCOA_DEFINED\n\n//--------------------------------------------------------------------------------------------------\n\n#import <Cocoa/Cocoa.h>\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nvoid enterOptionsFor_") ;
  result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-cocoa-zone3.galgasTemplate", 4)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("NSMutableArray * ioBoolOptionArray,\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("NSMutableArray * ioUIntOptionArray,\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("NSMutableArray * ioStringOptionArray,\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("NSMutableArray * ioStringListOptionArray) ;\n\n//--------------------------------------------------------------------------------------------------\n\n#endif\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationCocoa'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (Compiler * inCompiler,
                                                                                       const GALGAS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                       const GALGAS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                       const GALGAS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                       const GALGAS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                       const GALGAS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#import \"") ;
  result.appendString (in_OPTION_5F_HEADER_5F_FILE_5F_NAME.stringValue ()) ;
  result.appendString (".h\"\n#import \"OC_GGS_CommandLineOption.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterOptionsFor_") ;
  result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 8)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("NSMutableArray * ioBoolOptionArray,\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("NSMutableArray * ioUIntOptionArray,\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("NSMutableArray * ioStringOptionArray,\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("NSMutableArray * ioStringListOptionArray) {\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("  OC_GGS_CommandLineOption * option ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_864_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_864 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_864.hasCurrentObject ()) {
      result.appendString ("  option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 17)).stringValue ()) ;
      result.appendString ("\n    identifier:@") ;
      result.appendString (enumerator_864.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 18)).stringValue ()) ;
      result.appendString ("\n    commandChar:") ;
      result.appendString (enumerator_864.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).stringValue ()) ;
      result.appendString ("\n    commandString:@") ;
      result.appendString (enumerator_864.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 20)).stringValue ()) ;
      result.appendString ("\n    comment:@") ;
      result.appendString (enumerator_864.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 21)).stringValue ()) ;
      result.appendString ("\n    defaultValue:@\"\"\n  ] ;\n  [ioBoolOptionArray addObject:option] ;\n") ;
      index_864_.increment () ;
      enumerator_864.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1496_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_1496 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1496.hasCurrentObject ()) {
      result.appendString ("  option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 28)).stringValue ()) ;
      result.appendString ("\n    identifier:@") ;
      result.appendString (enumerator_1496.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 29)).stringValue ()) ;
      result.appendString ("\n    commandChar:") ;
      result.appendString (enumerator_1496.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).stringValue ()) ;
      result.appendString ("\n    commandString:@") ;
      result.appendString (enumerator_1496.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 31)).stringValue ()) ;
      result.appendString ("\n    comment:@") ;
      result.appendString (enumerator_1496.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 32)).stringValue ()) ;
      result.appendString ("\n    defaultValue:@") ;
      result.appendString (enumerator_1496.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 33)).stringValue ()) ;
      result.appendString ("\n  ] ;\n  [ioUIntOptionArray addObject:option] ;\n") ;
      index_1496_.increment () ;
      enumerator_1496.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2185_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_2185 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2185.hasCurrentObject ()) {
      result.appendString ("  option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 39)).stringValue ()) ;
      result.appendString ("\n    identifier:@") ;
      result.appendString (enumerator_2185.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 40)).stringValue ()) ;
      result.appendString ("\n    commandChar:") ;
      result.appendString (enumerator_2185.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).stringValue ()) ;
      result.appendString ("\n    commandString:@") ;
      result.appendString (enumerator_2185.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 42)).stringValue ()) ;
      result.appendString ("\n    comment:@") ;
      result.appendString (enumerator_2185.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 43)).stringValue ()) ;
      result.appendString ("\n    defaultValue:@") ;
      result.appendString (enumerator_2185.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 44)).stringValue ()) ;
      result.appendString ("\n  ] ;\n  [ioStringOptionArray addObject:option] ;\n") ;
      index_2185_.increment () ;
      enumerator_2185.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2881_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_2881 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2881.hasCurrentObject ()) {
      result.appendString ("  option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 50)).stringValue ()) ;
      result.appendString ("\n    identifier:@") ;
      result.appendString (enumerator_2881.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 51)).stringValue ()) ;
      result.appendString ("\n    commandChar:") ;
      result.appendString (enumerator_2881.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).stringValue ()) ;
      result.appendString ("\n    commandString:@") ;
      result.appendString (enumerator_2881.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 53)).stringValue ()) ;
      result.appendString ("\n    comment:@") ;
      result.appendString (enumerator_2881.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 54)).stringValue ()) ;
      result.appendString ("\n    defaultValue:@") ;
      result.appendString (enumerator_2881.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 55)).stringValue ()) ;
      result.appendString ("\n  ] ;\n  [ioStringListOptionArray addObject:option] ;\n") ;
      index_2881_.increment () ;
      enumerator_2881.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationSwiftCocoa'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftCocoa (Compiler * inCompiler,
                                                                                            const GALGAS_string & /* in_OPTION_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                            const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const GALGAS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                            const GALGAS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                            const GALGAS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                            const GALGAS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfunc enterOptions (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("_ ioBoolOptionArray : inout [SWIFT_CommandLineOption],\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("_ ioUIntOptionArray : inout [SWIFT_CommandLineOption],\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("_ ioStringOptionArray : inout [SWIFT_CommandLineOption],\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("_ ioStringListOptionArray : inout [SWIFT_CommandLineOption]) {\n") ;
  GALGAS_uint index_502_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_502 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_502.hasCurrentObject ()) {
      result.appendString ("  ioBoolOptionArray.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (",\n    identifier: ") ;
      result.appendString (enumerator_502.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (",\n    commandChar: ") ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_502.current_mOptionChar (HERE).objectCompare (GALGAS_char (TO_UNICODE (0)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString (GALGAS_string ("\"\"").stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString (GALGAS_string ("\"").add_operation (enumerator_502.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 12)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 12)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString (",\n    commandString: ") ;
      result.appendString (enumerator_502.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (",\n    comment: ") ;
      result.appendString (enumerator_502.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (",\n    defaultValue: \"\"\n  ))\n") ;
      index_502_.increment () ;
      enumerator_502.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1145_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_1145 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1145.hasCurrentObject ()) {
      result.appendString ("  ioUIntOptionArray.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (",\n    identifier: ") ;
      result.appendString (enumerator_1145.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 21)).stringValue ()) ;
      result.appendString (",\n    commandChar: ") ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1145.current_mOptionChar (HERE).objectCompare (GALGAS_char (TO_UNICODE (0)))).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString (GALGAS_string ("\"\"").stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString (GALGAS_string ("\"").add_operation (enumerator_1145.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 22)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 22)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 22)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString (",\n    commandString: ") ;
      result.appendString (enumerator_1145.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 23)).stringValue ()) ;
      result.appendString (",\n    comment: ") ;
      result.appendString (enumerator_1145.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (",\n    defaultValue: ") ;
      result.appendString (enumerator_1145.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 25)).stringValue ()) ;
      result.appendString ("\n  ))\n") ;
      index_1145_.increment () ;
      enumerator_1145.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1845_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_1845 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1845.hasCurrentObject ()) {
      result.appendString ("  ioStringOptionArray.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 30)).stringValue ()) ;
      result.appendString (",\n    identifier: ") ;
      result.appendString (enumerator_1845.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 31)).stringValue ()) ;
      result.appendString (",\n    commandChar: ") ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1845.current_mOptionChar (HERE).objectCompare (GALGAS_char (TO_UNICODE (0)))).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString (GALGAS_string ("\"\"").stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString (GALGAS_string ("\"").add_operation (enumerator_1845.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 32)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 32)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 32)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString (",\n    commandString: ") ;
      result.appendString (enumerator_1845.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 33)).stringValue ()) ;
      result.appendString (",\n    comment: ") ;
      result.appendString (enumerator_1845.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 34)).stringValue ()) ;
      result.appendString (",\n    defaultValue: ") ;
      result.appendString (enumerator_1845.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 35)).stringValue ()) ;
      result.appendString ("\n  ))\n") ;
      index_1845_.increment () ;
      enumerator_1845.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2552_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_2552 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2552.hasCurrentObject ()) {
      result.appendString ("  ioStringListOptionArray.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 40)).stringValue ()) ;
      result.appendString (",\n    identifier: ") ;
      result.appendString (enumerator_2552.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 41)).stringValue ()) ;
      result.appendString (",\n    commandChar: ") ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2552.current_mOptionChar (HERE).objectCompare (GALGAS_char (TO_UNICODE (0)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString (GALGAS_string ("\"\"").stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString (GALGAS_string ("\"").add_operation (enumerator_2552.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 42)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 42)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 42)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString (",\n    commandString: ") ;
      result.appendString (enumerator_2552.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 43)).stringValue ()) ;
      result.appendString (",\n    comment: ") ;
      result.appendString (enumerator_2552.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (",\n    defaultValue: ") ;
      result.appendString (enumerator_2552.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 45)).stringValue ()) ;
      result.appendString ("\n  ))\n") ;
      index_2552_.increment () ;
      enumerator_2552.gotoNextObject () ;
    }
  }
  result.appendString ("  ioBoolOptionArray.append (SWIFT_CommandLineOption (\n    domainName: \"galgas_cli_options\",\n    identifier: \"quiet_output\",\n    commandChar: \"q\",\n    commandString: \"quiet\",\n    comment: \"Quiet output\",\n    defaultValue: \"\"\n  ))\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3??!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (const GALGAS_galgasGUIComponentListAST constinArgument_inGuiComponentListAST,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  GALGAS_optionComponentMapForGeneration & outArgument_outOptionComponentMapForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentMapForGeneration.drop () ; // Release 'out' argument
  outArgument_outOptionComponentMapForGeneration = GALGAS_optionComponentMapForGeneration::class_func_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 414)) ;
  cEnumerator_galgasGUIComponentListAST enumerator_13800 (constinArgument_inGuiComponentListAST, kENUMERATION_UP) ;
  while (enumerator_13800.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis_3F__3F__26_ (enumerator_13800.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 416)) ;
    }
    enumerator_13800.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis??&'
//
//--------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis_3F__3F__26_ (const GALGAS_galgasGUIComponentListAST_2D_element constinArgument_inGUIComponentAST,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_optionComponentMapForGeneration & ioArgument_ioOptionComponentMapForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_string ().objectCompare (GALGAS_string ("cocoa"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_location (), GALGAS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas", 430)) ;
    }
  }
  GALGAS_guiAnalysisContext var_context_14534 = GALGAS_guiAnalysisContext::class_func_new (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 433)) ;
  var_context_14534.setter_setMProjectIndexingDescriptorList (constinArgument_inGUIComponentAST.readProperty_mProjectIndexingDescriptorList () COMMA_SOURCE_FILE ("guiCompilation.galgas", 434)) ;
  cEnumerator_lstringlist enumerator_14690 (constinArgument_inGUIComponentAST.readProperty_mImportedOptionList (), kENUMERATION_UP) ;
  while (enumerator_14690.hasCurrentObject ()) {
    GALGAS_bool joker_14834_5 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14834_4 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14834_3 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14834_2 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14834_1 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (enumerator_14690.current_mValue (HERE), joker_14834_5, joker_14834_4, joker_14834_3, joker_14834_2, joker_14834_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 437)) ;
    var_context_14534.mProperty_mImportedOptionComponentList.addAssign_operation (enumerator_14690.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 441)) ;
    enumerator_14690.gotoNextObject () ;
  }
  GALGAS_bool var_runOptionDefined_14941 = GALGAS_bool (false) ;
  cEnumerator_guiSimpleAttributeListAST enumerator_14978 (constinArgument_inGUIComponentAST.readProperty_mGlobalSimpleAttributeList (), kENUMERATION_UP) ;
  while (enumerator_14978.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_14978.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("run"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_runOptionDefined_14941.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_14978.current_mKey (HERE).readProperty_location (), GALGAS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas", 448)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, enumerator_14978.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_14978.current_mValue (HERE).readProperty_location (), GALGAS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas", 450)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_context_14534.setter_setMBuildRunOption (enumerator_14978.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas", 452)) ;
            var_runOptionDefined_14941 = GALGAS_bool (true) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsEqual, enumerator_14978.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("nibAndMainClass"))).boolEnum () ;
        if (kBoolTrue == test_7) {
          cEnumerator_stringlist enumerator_15466 (enumerator_14978.current_mValue (HERE).readProperty_string ().getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 456)), kENUMERATION_UP) ;
          while (enumerator_15466.hasCurrentObject ()) {
            var_context_14534.mProperty_mNibAndClassList.addAssign_operation (enumerator_15466.current (HERE).readProperty_mValue ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 457)) ;
            enumerator_15466.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_14978.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_14978.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 460)).add_operation (GALGAS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 460)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas", 460)) ;
      }
    }
    enumerator_14978.gotoNextObject () ;
  }
  cEnumerator_withLexiqueListAST enumerator_15717 (constinArgument_inGUIComponentAST.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
  GALGAS_uint index_15672 ((uint32_t) 0) ;
  while (enumerator_15717.hasCurrentObject ()) {
    GALGAS_terminalMap var_terminalMap_15934 ;
    GALGAS_lexicalStyleListAST var_lexicalStyleListAST_15967 ;
    GALGAS_bool joker_15907 ; // Joker input parameter
    GALGAS_indexingListAST joker_15952_3 ; // Joker input parameter
    GALGAS_terminalDeclarationListAST joker_15952_2 ; // Joker input parameter
    GALGAS_lexicalAttributeListAST joker_15952_1 ; // Joker input parameter
    GALGAS_lexicalListDeclarationListAST joker_15993 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (enumerator_15717.current_mLexiqueFileName (HERE), joker_15907, var_terminalMap_15934, joker_15952_3, joker_15952_2, joker_15952_1, var_lexicalStyleListAST_15967, joker_15993, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 466)) ;
    GALGAS_stringset var_terminalSymbolSet_16043 = var_terminalMap_15934.getter_keySet (SOURCE_FILE ("guiCompilation.galgas", 475)) ;
    cEnumerator_guiLabelListAST enumerator_16129 (enumerator_15717.current_mLabels (HERE), kENUMERATION_UP) ;
    while (enumerator_16129.hasCurrentObject ()) {
      cEnumerator_terminalLabelListAST enumerator_16166 (enumerator_16129.current_mTerminalList (HERE), kENUMERATION_UP) ;
      while (enumerator_16166.hasCurrentObject ()) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_terminalSymbolSet_16043.getter_hasKey (enumerator_16166.current_mTerminal (HERE).readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas", 479)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 479)).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_16166.current_mTerminal (HERE).readProperty_location (), GALGAS_string ("the '$").add_operation (enumerator_16166.current_mTerminal (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 480)).add_operation (GALGAS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 481)).add_operation (enumerator_15717.current_mLexiqueFileName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 482)).add_operation (GALGAS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 483)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas", 480)) ;
          }
        }
        enumerator_16166.gotoNextObject () ;
      }
      enumerator_16129.gotoNextObject () ;
    }
    GALGAS_textMacroList var_textMacroList_16510 = GALGAS_textMacroList::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 489)) ;
    cEnumerator_guiCompoundAttributeListAST enumerator_16558 (enumerator_15717.current_mCompoundAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_16558.hasCurrentObject ()) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, enumerator_16558.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("textMacro"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_16558.current_mKey (HERE).readProperty_location (), GALGAS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas", 492)) ;
        }
      }
      if (kBoolFalse == test_11) {
        var_textMacroList_16510.addAssign_operation (enumerator_16558.current_mAttributeName (HERE).readProperty_string (), enumerator_16558.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 494)) ;
      }
      enumerator_16558.gotoNextObject () ;
    }
    GALGAS_bool var_hasAssociatedExtension_16845 = GALGAS_bool (false) ;
    GALGAS_bool var_hasTabViewTitle_16890 = GALGAS_bool (false) ;
    GALGAS_bool var_hasBlockComment_16928 = GALGAS_bool (false) ;
    GALGAS_string var_tabViewTitle_16968 = GALGAS_string::makeEmptyString () ;
    GALGAS_string var_blockComment_17002 = GALGAS_string::makeEmptyString () ;
    cEnumerator_guiSimpleAttributeListAST enumerator_17034 (enumerator_15717.current_mSimpleAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_17034.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsEqual, enumerator_17034.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("fileExtension"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          {
          var_context_14534.mProperty_mExtensionMap.setter_insertKey (enumerator_17034.current_mValue (HERE), enumerator_15717.current_mLexiqueFileName (HERE).readProperty_string (), index_15672, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 505)) ;
          }
          var_hasAssociatedExtension_16845 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_13) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = GALGAS_bool (kIsEqual, enumerator_17034.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("title"))).boolEnum () ;
          if (kBoolTrue == test_14) {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              test_15 = var_hasTabViewTitle_16890.boolEnum () ;
              if (kBoolTrue == test_15) {
                TC_Array <C_FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_17034.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17034.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)) ;
              }
            }
            var_hasTabViewTitle_16890 = GALGAS_bool (true) ;
            var_tabViewTitle_16968 = enumerator_17034.current_mValue (HERE).readProperty_string () ;
          }
        }
        if (kBoolFalse == test_14) {
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsEqual, enumerator_17034.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("blockComment"))).boolEnum () ;
            if (kBoolTrue == test_17) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = var_hasBlockComment_16928.boolEnum () ;
                if (kBoolTrue == test_18) {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_17034.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17034.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 515)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 515)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas", 515)) ;
                }
              }
              var_hasBlockComment_16928 = GALGAS_bool (true) ;
              var_blockComment_17002 = enumerator_17034.current_mValue (HERE).readProperty_string () ;
            }
          }
          if (kBoolFalse == test_17) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_17034.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17034.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)).add_operation (GALGAS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)) ;
          }
        }
      }
      enumerator_17034.gotoNextObject () ;
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_16845.operator_not (SOURCE_FILE ("guiCompilation.galgas", 524)).boolEnum () ;
      if (kBoolTrue == test_21) {
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_15717.current_mLexiqueFileName (HERE).readProperty_location (), GALGAS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas", 525)) ;
      }
    }
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      test_23 = var_hasTabViewTitle_16890.operator_not (SOURCE_FILE ("guiCompilation.galgas", 528)).boolEnum () ;
      if (kBoolTrue == test_23) {
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_15717.current_mLexiqueFileName (HERE).readProperty_location (), GALGAS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas", 529)) ;
      }
    }
    var_context_14534.mProperty_mWithLexiqueList.addAssign_operation (enumerator_15717.current_mLexiqueFileName (HERE).readProperty_string (), index_15672, var_blockComment_17002, var_tabViewTitle_16968, var_textMacroList_16510, enumerator_15717.current_mLabels (HERE), var_lexicalStyleListAST_15967  COMMA_SOURCE_FILE ("guiCompilation.galgas", 532)) ;
    enumerator_15717.gotoNextObject () ;
    index_15672.increment_operation (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 464)) ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName (), var_context_14534, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 542)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33__3F__3F__3F__26__26_ (const GALGAS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                                     const GALGAS_string constinArgument_inOutputDirectory,
                                                                     const GALGAS_bool constinArgument_inQuietOutputByDefault,
                                                                     GALGAS_stringlist & ioArgument_ioApplicationSourceSet,
                                                                     GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_optionComponentMapForGeneration enumerator_19106 (constinArgument_inOptionComponentMapForGeneration, kENUMERATION_UP) ;
  while (enumerator_19106.hasCurrentObject ()) {
    GALGAS_string var_swiftFileName_19175 = GALGAS_string ("gui-").add_operation (enumerator_19106.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 558)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 558)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_swiftFileName_19175  COMMA_SOURCE_FILE ("guiCompilation.galgas", 559)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_swiftFileName_19175  COMMA_SOURCE_FILE ("guiCompilation.galgas", 560)) ;
    GALGAS_string var_swift_5F_string_19319 = GALGAS_string (filewrapperTemplate_guiGenerationTemplates_swift_5F_gui_5F_implementation (inCompiler, enumerator_19106.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault COMMA_SOURCE_FILE ("guiCompilation.galgas", 561))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_swiftFileName_19175, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_swift_5F_string_19319, GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 565)) ;
    }
    GALGAS_string var_objcFileName_19829 = GALGAS_string ("gui-").add_operation (enumerator_19106.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 576)).add_operation (GALGAS_string (".m"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 576)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_objcFileName_19829  COMMA_SOURCE_FILE ("guiCompilation.galgas", 577)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_objcFileName_19829  COMMA_SOURCE_FILE ("guiCompilation.galgas", 578)) ;
    GALGAS_string var_objc_5F_string_19966 = GALGAS_string (filewrapperTemplate_guiGenerationTemplates_objc_5F_gui_5F_implementation (inCompiler, enumerator_19106.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault COMMA_SOURCE_FILE ("guiCompilation.galgas", 579))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_objcFileName_19829, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_objc_5F_string_19966, GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 583)) ;
    }
    enumerator_19106.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'guiGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_guiGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_guiGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_guiGenerationTemplates_0,
  0,
  gWrapperAllDirectories_guiGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates objc_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_guiGenerationTemplates_objc_5F_gui_5F_implementation (Compiler * inCompiler,
                                                                                        const GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                        const GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#import \"OC_Token.h\"\n#import \"F_CocoaWrapperForGalgas.h\"\n#import \"OC_GGS_CommandLineOption.h\"\n") ;
  GALGAS_uint index_220_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    cEnumerator_importedLexiqueList enumerator_220 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
    while (enumerator_220.hasCurrentObject ()) {
      result.appendString ("#import \"lexique-") ;
      result.appendString (enumerator_220.current_mLexiqueClassName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 6)).stringValue ()) ;
      result.appendString ("-cocoa.h\"\n") ;
      index_220_.increment () ;
      enumerator_220.gotoNextObject () ;
    }
  }
  GALGAS_uint index_350_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().isValid ()) {
    cEnumerator_stringlist enumerator_350 (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList (), kENUMERATION_UP) ;
    while (enumerator_350.hasCurrentObject ()) {
      result.appendString ("#import \"") ;
      result.appendString (enumerator_350.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      index_350_.increment () ;
      enumerator_350.gotoNextObject () ;
    }
  }
  result.appendString ("\n#ifdef USER_DEFAULT_COLORS_DEFINED\n  #import \"user_default_colors.h\"\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\n#pragma mark Nibs\n\n//--------------------------------------------------------------------------------------------------\n//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                \n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 24)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("NSArray * nibsAndClasses (void) {\n  return [NSArray array] ;\n}\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("NSArray * nibsAndClasses (void) {\n  return [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_1125_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().isValid ()) {
      cEnumerator_stringlist enumerator_1125 (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList (), kENUMERATION_UP) ;
      while (enumerator_1125.hasCurrentObject ()) {
        result.appendString ("    [NSArray arrayWithObjects:@\"") ;
        result.appendString (enumerator_1125.current_mValue (HERE).stringValue ()) ;
        result.appendString ("\", [") ;
        result.appendString (enumerator_1125.current_mValue (HERE).stringValue ()) ;
        result.appendString (" class], nil],\n") ;
        index_1125_.increment () ;
        enumerator_1125.gotoNextObject () ;
      }
    }
    result.appendString ("    nil\n  ] ;\n}\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    Project file extensions\n//--------------------------------------------------------------------------------------------------\n\nNSDictionary * indexingDescriptorDictionary (void) {\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 45)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString (" return [NSDictionary dictionary] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("  return [NSDictionary dictionaryWithObjectsAndKeys: ") ;
    GALGAS_uint index_1774_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().isValid ()) {
      cEnumerator_projectIndexingDescriptorList enumerator_1774 (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList (), kENUMERATION_UP) ;
      while (enumerator_1774.hasCurrentObject ()) {
        result.appendString ("@\"") ;
        result.appendString (enumerator_1774.current_indexingPathSuffix (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\", @\"") ;
        result.appendString (enumerator_1774.current_mProjectFileExtension (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\", ") ;
        index_1774_.increment () ;
        enumerator_1774.gotoNextObject () ;
      }
    }
    result.appendString ("nil] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\n#pragma mark Command Line Options\n\n//--------------------------------------------------------------------------------------------------\n//                       Command Line Options                                                    \n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_2371_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_2371 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), kENUMERATION_UP) ;
    while (enumerator_2371.hasCurrentObject ()) {
      result.appendString ("#import \"option-") ;
      result.appendString (enumerator_2371.current_mValue (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 68)).stringValue ()) ;
      result.appendString ("-cocoa.h\"\n") ;
      index_2371_.increment () ;
      enumerator_2371.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nvoid enterOptions (NSMutableArray * ioBoolOptionArray,\n                   NSMutableArray * ioUIntOptionArray,\n                   NSMutableArray * ioStringOptionArray,\n                   NSMutableArray * ioStringListOptionArray) {\n") ;
  GALGAS_uint index_2837_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_2837 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), kENUMERATION_UP) ;
    while (enumerator_2837.hasCurrentObject ()) {
      result.appendString ("  enterOptionsFor_") ;
      result.appendString (enumerator_2837.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 79)).stringValue ()) ;
      result.appendString (" (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;\n") ;
      index_2837_.increment () ;
      enumerator_2837.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_2 = in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT.boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@\"galgas_cli_options\"\n    identifier:@\"verbose_output\"\n    commandChar:'v'\n    commandString:@\"verbose\"\n    comment:@\"Verbose output\"\n    defaultValue:@\"\"\n  ] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@\"galgas_cli_options\"\n    identifier:@\"quiet_output\"\n    commandChar:'q'\n    commandString:@\"quiet\"\n    comment:@\"Quiet output\"\n    defaultValue:@\"\"\n  ] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("  [ioBoolOptionArray addObject:option] ;\n}\n\n") ;
  GALGAS_uint index_3759_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    cEnumerator_importedLexiqueList enumerator_3759 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
    while (enumerator_3759.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#pragma mark Lexique ") ;
      result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//                     P O P    U P    L I S T    D A T A\n//--------------------------------------------------------------------------------------------------\n\n") ;
      GALGAS_uint index_4275_ (0) ;
      if (enumerator_3759.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4275 (enumerator_3759.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_4275.hasCurrentObject ()) {
          result.appendString ("static const UInt16 gPopUpData_") ;
          result.appendString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_4275.current_mLocation (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).stringValue ()) ;
          result.appendString (" [") ;
          result.appendString (GALGAS_uint (uint32_t (2U)).multiply_operation (enumerator_4275.current_mTerminalList (HERE).getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).stringValue ()) ;
          result.appendString ("] = {\n  ") ;
          result.appendString (enumerator_4275.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 112)).stringValue ()) ;
          result.appendString (", // Leading character count to strip\n") ;
          GALGAS_uint index_4619_ (0) ;
          if (enumerator_4275.current_mTerminalList (HERE).isValid ()) {
            cEnumerator_terminalLabelListAST enumerator_4619 (enumerator_4275.current_mTerminalList (HERE), kENUMERATION_UP) ;
            while (enumerator_4619.hasCurrentObject ()) {
              result.appendString ("  ") ;
              result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).stringValue ()) ;
              result.appendString ("_1_") ;
              result.appendString (enumerator_4619.current_mTerminal (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 114)).stringValue ()) ;
              result.appendString (", ") ;
              result.appendString (enumerator_4619.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 114)).stringValue ()) ;
              result.appendString (",\n") ;
              index_4619_.increment () ;
              enumerator_4619.gotoNextObject () ;
            }
          }
          result.appendString ("  0\n} ;\n\n") ;
          index_4275_.increment () ;
          enumerator_4275.gotoNextObject () ;
        }
      }
      result.appendString ("static const UInt16 * gPopUpData_") ;
      result.appendString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).stringValue ()) ;
      result.appendString (" [") ;
      result.appendString (enumerator_3759.current_mLabels (HERE).getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).stringValue ()) ;
      result.appendString ("] = {\n") ;
      GALGAS_uint index_4991_ (0) ;
      if (enumerator_3759.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4991 (enumerator_3759.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_4991.hasCurrentObject ()) {
          result.appendString ("  gPopUpData_") ;
          result.appendString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 121)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 121)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_4991.current_mLocation (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 121)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (",\n") ;
          index_4991_.increment () ;
          enumerator_4991.gotoNextObject () ;
        }
      }
      result.appendString ("  NULL\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//                            Lexique interface\n//--------------------------------------------------------------------------------------------------\n\n@interface OC_Tokenizer_") ;
      result.appendString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 128)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" : OC_Lexique_") ;
      result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" {\n\n}\n\n- (NSString *) blockComment ;\n\n- (const UInt16 * *) popupListData ;\n\n- (NSUInteger) textMacroCount ;\n\n- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;\n\n- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;\n\n- (NSString *) tabItemTitle ;\n\n@end\n\n//--------------------------------------------------------------------------------------------------\n\n@implementation OC_Tokenizer_") ;
      result.appendString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 138)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) blockComment {\n  return @") ;
      result.appendString (enumerator_3759.current_mBlockComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 141)).stringValue ()) ;
      result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (const UInt16 * *) popupListData {\n  return gPopUpData_") ;
      result.appendString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 145)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 145)).stringValue ()) ;
      result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) textMacroCount {\n  return ") ;
      result.appendString (enumerator_3759.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 149)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 149)).stringValue ()) ;
      result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) tabItemTitle {\n  return @") ;
      result.appendString (enumerator_3759.current_mTitle (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 153)).stringValue ()) ;
      result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n  static NSString * kTextMacroTitle [") ;
      result.appendString (enumerator_3759.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 157)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 157)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 157)).stringValue ()) ;
      result.appendString ("] = {\n") ;
      GALGAS_uint index_7280_ (0) ;
      if (enumerator_3759.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7280 (enumerator_3759.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_7280.hasCurrentObject ()) {
          result.appendString ("    @") ;
          result.appendString (enumerator_7280.current_mKey (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 159)).stringValue ()) ;
          result.appendString (",\n") ;
          index_7280_.increment () ;
          enumerator_7280.gotoNextObject () ;
        }
      }
      result.appendString ("    NULL\n  } ;\n  return kTextMacroTitle [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {\n  static NSString * kTextMacroContent [") ;
      result.appendString (enumerator_3759.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 167)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 167)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 167)).stringValue ()) ;
      result.appendString ("] = {\n") ;
      GALGAS_uint index_7742_ (0) ;
      if (enumerator_3759.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7742 (enumerator_3759.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_7742.hasCurrentObject ()) {
          result.appendString ("    @") ;
          result.appendString (enumerator_7742.current_mContents (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 169)).stringValue ()) ;
          result.appendString (",\n") ;
          index_7742_.increment () ;
          enumerator_7742.gotoNextObject () ;
        }
      }
      result.appendString ("    NULL\n  } ;\n  return kTextMacroContent [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n@end\n\n") ;
      index_3759_.increment () ;
      enumerator_3759.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nOC_Lexique * tokenizerForExtension (const NSString * inExtension) {\n  OC_Lexique * result = nil ;\n") ;
  GALGAS_uint index_8311_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    cEnumerator_extensionMap enumerator_8311 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap (), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8311 = enumerator_8311.hasCurrentObject () ;
    if (nonEmpty_enumerator_8311) {
      result.appendString ("  if") ;
    }
    while (enumerator_8311.hasCurrentObject ()) {
      result.appendString (" ([inExtension isEqualToString:@") ;
      result.appendString (enumerator_8311.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 186)).stringValue ()) ;
      result.appendString ("]) {\n    result = [OC_Tokenizer_") ;
      result.appendString (enumerator_8311.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 187)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_8311.current_mLexiqueName (HERE).stringValue ()) ;
      result.appendString (" new] ;\n") ;
      if (enumerator_8311.hasNextObject ()) {
        result.appendString ("  }else if") ;
      }
      index_8311_.increment () ;
      enumerator_8311.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8311) {
      result.appendString ("  }\n") ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nNSArray * tokenizers (void) {") ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 197)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("\n  return [NSArray array] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("\n  return [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_8867_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
      cEnumerator_importedLexiqueList enumerator_8867 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
      while (enumerator_8867.hasCurrentObject ()) {
        result.appendString ("    [OC_Tokenizer_") ;
        result.appendString (enumerator_8867.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 202)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_8867.current_mLexiqueClassName (HERE).stringValue ()) ;
        result.appendString (" new],\n") ;
        index_8867_.increment () ;
        enumerator_8867.gotoNextObject () ;
      }
    }
    result.appendString ("    nil\n  ] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nNSString * buildRunOption (void) {\n  return @\"") ;
  result.appendString (in_GUI_5F_CONTEXT.readProperty_mBuildRunOption ().stringValue ()) ;
  result.appendString ("\" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates swift_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_guiGenerationTemplates_swift_5F_gui_5F_implementation (Compiler * inCompiler,
                                                                                         const GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                         const GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                \n//--------------------------------------------------------------------------------------------------\n\n/*\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 10)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("NSArray * nibsAndClasses (void) {\n  return [NSArray array] ;\n}\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("NSArray * nibsAndClasses (void) {\n  return [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_560_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().isValid ()) {
      cEnumerator_stringlist enumerator_560 (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList (), kENUMERATION_UP) ;
      while (enumerator_560.hasCurrentObject ()) {
        result.appendString ("    [NSArray arrayWithObjects:@\"") ;
        result.appendString (enumerator_560.current_mValue (HERE).stringValue ()) ;
        result.appendString ("\", [") ;
        result.appendString (enumerator_560.current_mValue (HERE).stringValue ()) ;
        result.appendString (" class], nil],\n") ;
        index_560_.increment () ;
        enumerator_560.gotoNextObject () ;
      }
    }
    result.appendString ("    nil\n  ] ;\n}\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n\n*/\n//--------------------------------------------------------------------------------------------------\n//    Project file extensions\n//--------------------------------------------------------------------------------------------------\n\nNSDictionary * indexingDescriptorDictionary (void) {\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 33)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString (" return [NSDictionary dictionary] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("  return [NSDictionary dictionaryWithObjectsAndKeys: ") ;
    GALGAS_uint index_1213_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().isValid ()) {
      cEnumerator_projectIndexingDescriptorList enumerator_1213 (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList (), kENUMERATION_UP) ;
      while (enumerator_1213.hasCurrentObject ()) {
        result.appendString ("@\"") ;
        result.appendString (enumerator_1213.current_indexingPathSuffix (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\", @\"") ;
        result.appendString (enumerator_1213.current_mProjectFileExtension (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\", ") ;
        index_1213_.increment () ;
        enumerator_1213.gotoNextObject () ;
      }
    }
    result.appendString ("nil] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                       Command Line Options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1679_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_1679 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), kENUMERATION_UP) ;
    while (enumerator_1679.hasCurrentObject ()) {
      result.appendString ("// #import \"option-") ;
      result.appendString (enumerator_1679.current_mValue (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 54)).stringValue ()) ;
      result.appendString ("-cocoa.h\"\n") ;
      index_1679_.increment () ;
      enumerator_1679.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n/*\nvoid enterOptions (NSMutableArray * ioBoolOptionArray,\n                   NSMutableArray * ioUIntOptionArray,\n                   NSMutableArray * ioStringOptionArray,\n                   NSMutableArray * ioStringListOptionArray) {\n") ;
  GALGAS_uint index_2151_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_2151 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), kENUMERATION_UP) ;
    while (enumerator_2151.hasCurrentObject ()) {
      result.appendString ("  enterOptionsFor_") ;
      result.appendString (enumerator_2151.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 66)).stringValue ()) ;
      result.appendString (" (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;\n") ;
      index_2151_.increment () ;
      enumerator_2151.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_2 = in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT.boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@\"galgas_cli_options\"\n    identifier:@\"verbose_output\"\n    commandChar:'v'\n    commandString:@\"verbose\"\n    comment:@\"Verbose output\"\n    defaultValue:@\"\"\n  ] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@\"galgas_cli_options\"\n    identifier:@\"quiet_output\"\n    commandChar:'q'\n    commandString:@\"quiet\"\n    comment:@\"Quiet output\"\n    defaultValue:@\"\"\n  ] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("  [ioBoolOptionArray addObject:option] ;\n}\n\n*/\n\n") ;
  GALGAS_uint index_3093_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    cEnumerator_importedLexiqueList enumerator_3093 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
    while (enumerator_3093.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n//                     P O P    U P    L I S T    D A T A\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gPopUpData_") ;
      result.appendString (enumerator_3093.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 98)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3093.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 98)).stringValue ()) ;
      result.appendString (" : [[UInt16]] = [\n") ;
      GALGAS_uint index_3548_ (0) ;
      if (enumerator_3093.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_3548 (enumerator_3093.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_3548.hasCurrentObject ()) {
          result.appendString ("  [") ;
          result.appendString (enumerator_3548.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 100)).stringValue ()) ;
          result.appendString (", // Leading character count to strip\n") ;
          GALGAS_uint index_3697_ (0) ;
          if (enumerator_3548.current_mTerminalList (HERE).isValid ()) {
            cEnumerator_terminalLabelListAST enumerator_3697 (enumerator_3548.current_mTerminalList (HERE), kENUMERATION_UP) ;
            while (enumerator_3697.hasCurrentObject ()) {
              result.appendString ("    ") ;
              result.appendString (enumerator_3093.current_mLexiqueClassName (HERE).stringValue ()) ;
              result.appendString ("_1_") ;
              result.appendString (enumerator_3697.current_mTerminal (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 102)).stringValue ()) ;
              result.appendString (", ") ;
              result.appendString (enumerator_3697.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 102)).stringValue ()) ;
              if (enumerator_3697.hasNextObject ()) {
                result.appendString (",\n") ;
              }
              index_3697_.increment () ;
              enumerator_3697.gotoNextObject () ;
            }
          }
          result.appendString ("\n  ]") ;
          if (enumerator_3548.hasNextObject ()) {
            result.appendString (",\n") ;
          }
          index_3548_.increment () ;
          enumerator_3548.gotoNextObject () ;
        }
      }
      result.appendString ("\n]\n\n//--------------------------------------------------------------------------------------------------\n//                            Lexique interface\n//--------------------------------------------------------------------------------------------------\n  \nclass SWIFT_Tokenizer_") ;
      result.appendString (enumerator_3093.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 115)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3093.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" : SWIFT_Lexique_") ;
      result.appendString (enumerator_3093.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (", SWIFT_Tokenizer_Protocol {\n\n//- (NSUInteger) textMacroCount ;\n\n//- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;\n\n//- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func popupListData () -> [[UInt16]] {\n    return gPopUpData_") ;
      result.appendString (enumerator_3093.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 126)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3093.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 126)).stringValue ()) ;
      result.appendString ("\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func tabItemTitle () -> String {\n    return ") ;
      result.appendString (enumerator_3093.current_mTitle (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 132)).stringValue ()) ;
      result.appendString ("\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  \n  func blockComment () -> String {\n    return ") ;
      result.appendString (enumerator_3093.current_mBlockComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 138)).stringValue ()) ;
      result.appendString ("\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func attributes (fromStyleIndex inStyleIndex : UInt8) -> [NSAttributedString.Key : Any] {\n    let fontManager = NSFontManager.shared\n    var font = fontManager.convert (\n      self.font.propval,\n      toHaveTrait: self.bold (forStyle: inStyleIndex).propval \? .boldFontMask : .unboldFontMask\n    )\n    font = fontManager.convert (\n      font,\n      toHaveTrait: self.italic (forStyle: inStyleIndex).propval \? .italicFontMask : .unitalicFontMask\n    )\n    let result : [NSAttributedString.Key : Any] = [\n      .foregroundColor : self.color (forStyle: inStyleIndex).propval,\n      .font : font\n    ]\n    return result\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n/* @implementation OC_Tokenizer_") ;
      result.appendString (enumerator_3093.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 165)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3093.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) textMacroCount {\n  return ") ;
      result.appendString (enumerator_3093.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 168)).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 168)).stringValue ()) ;
      result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n  static NSString * kTextMacroTitle [") ;
      result.appendString (enumerator_3093.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 173)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 173)).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 173)).stringValue ()) ;
      result.appendString ("] = {\n") ;
      GALGAS_uint index_6812_ (0) ;
      if (enumerator_3093.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_6812 (enumerator_3093.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_6812.hasCurrentObject ()) {
          result.appendString ("    @") ;
          result.appendString (enumerator_6812.current_mKey (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 175)).stringValue ()) ;
          result.appendString (",\n") ;
          index_6812_.increment () ;
          enumerator_6812.gotoNextObject () ;
        }
      }
      result.appendString ("    nullptr\n  } ;\n  return kTextMacroTitle [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {\n  static NSString * kTextMacroContent [") ;
      result.appendString (enumerator_3093.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 183)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 183)).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 183)).stringValue ()) ;
      result.appendString ("] = {\n") ;
      GALGAS_uint index_7275_ (0) ;
      if (enumerator_3093.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7275 (enumerator_3093.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_7275.hasCurrentObject ()) {
          result.appendString ("    @") ;
          result.appendString (enumerator_7275.current_mContents (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 185)).stringValue ()) ;
          result.appendString (",\n") ;
          index_7275_.increment () ;
          enumerator_7275.gotoNextObject () ;
        }
      }
      result.appendString ("    nullptr\n  } ;\n  return kTextMacroContent [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n@end */\n\n") ;
      index_3093_.increment () ;
      enumerator_3093.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//   Global functions\n//--------------------------------------------------------------------------------------------------\n\nfunc tokenizerFor (extension inExtension : String) -> SWIFT_Tokenizer_Protocol\? {\n  var result : SWIFT_Tokenizer_Protocol\? = nil\n") ;
  GALGAS_uint index_8004_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    cEnumerator_extensionMap enumerator_8004 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap (), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8004 = enumerator_8004.hasCurrentObject () ;
    if (nonEmpty_enumerator_8004) {
      result.appendString ("  if") ;
    }
    while (enumerator_8004.hasCurrentObject ()) {
      result.appendString (" inExtension == ") ;
      result.appendString (enumerator_8004.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 204)).stringValue ()) ;
      result.appendString (" {\n    result = SWIFT_Tokenizer_") ;
      result.appendString (enumerator_8004.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 205)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_8004.current_mLexiqueName (HERE).stringValue ()) ;
      result.appendString (" ()\n") ;
      if (enumerator_8004.hasNextObject ()) {
        result.appendString ("  }else if") ;
      }
      index_8004_.increment () ;
      enumerator_8004.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8004) {
      result.appendString ("  }\n") ;
    }
  }
  result.appendString ("  return result\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc tokenizers () -> [SWIFT_Tokenizer_Protocol] {") ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 215)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("\n  return []\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("\n  return [\n") ;
    GALGAS_uint index_8521_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
      cEnumerator_importedLexiqueList enumerator_8521 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
      while (enumerator_8521.hasCurrentObject ()) {
        result.appendString ("    SWIFT_Tokenizer_") ;
        result.appendString (enumerator_8521.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 220)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_8521.current_mLexiqueClassName (HERE).stringValue ()) ;
        result.appendString (" ()") ;
        if (enumerator_8521.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_8521_.increment () ;
        enumerator_8521.gotoNextObject () ;
      }
    }
    result.appendString ("\n  ]\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc buildRunOption () -> String {\n  return \"") ;
  result.appendString (in_GUI_5F_CONTEXT.readProperty_mBuildRunOption ().stringValue ()) ;
  result.appendString ("\"\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  const GALGAS_boolsetDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3839 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 98)), temp_1.readProperty_mBoolsetTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 98)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3839, temp_2, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 99)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolsetDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_boolsetDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("boolset @").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 107)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForBoolset'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForBoolset (Compiler *
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("type-boolset.galgas", 115)) ;
  result_result.addAssign_operation (GALGAS_string ("all")  COMMA_SOURCE_FILE ("type-boolset.galgas", 116)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-boolset.galgas", 117)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-boolset.galgas", 118)) ;
  result_result.addAssign_operation (GALGAS_string ("none")  COMMA_SOURCE_FILE ("type-boolset.galgas", 119)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-boolset.galgas", 120)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForBoolset = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForBoolset ;

//--------------------------------------------------------------------------------------------------

GALGAS_stringset function_forbiddenKeysForBoolset (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForBoolset) {
    gOnceFunctionResult_forbiddenKeysForBoolset = onceFunction_forbiddenKeysForBoolset (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForBoolset = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForBoolset ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForBoolset (void) {
  gOnceFunctionResult_forbiddenKeysForBoolset.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForBoolset (nullptr,
                                                                   releaseOnceFunctionResult_forbiddenKeysForBoolset) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForBoolset [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_forbiddenKeysForBoolset (Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForBoolset (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForBoolset ("forbiddenKeysForBoolset",
                                                                         functionWithGenericHeader_forbiddenKeysForBoolset,
                                                                         & kTypeDescriptor_GALGAS_stringset,
                                                                         0,
                                                                         functionArgs_forbiddenKeysForBoolset) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_slotNameSet_5330 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("type-boolset.galgas", 133)) ;
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_5354 (temp_0.readProperty_mFlagList (), kENUMERATION_UP) ;
  while (enumerator_5354.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 135)).getter_hasKey (enumerator_5354.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 135)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_m_5468 = GALGAS_string ("a slot cannot be named:") ;
        cEnumerator_stringset enumerator_5538 (function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 137)), kENUMERATION_UP) ;
        while (enumerator_5538.hasCurrentObject ()) {
          var_m_5468.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_5538.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 138)) ;
          enumerator_5538.gotoNextObject () ;
        }
        var_m_5468.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 140)) ;
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5354.current_mValue (HERE).readProperty_location (), var_m_5468, fixItArray2  COMMA_SOURCE_FILE ("type-boolset.galgas", 141)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_slotNameSet_5330.getter_hasKey (enumerator_5354.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 142)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_5354.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated slot name"), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 143)) ;
        }
      }
    }
    var_slotNameSet_5330.addAssign_operation (enumerator_5354.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 145)) ;
    enumerator_5354.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_boolsetTypeIndex_5851 ;
  {
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mBoolsetTypeName (), var_boolsetTypeIndex_5851, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 148)) ;
  }
  GALGAS_getterMap var_getterMap_5962 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_5962, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 150)) ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_5997 = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("type-boolset.galgas", 151)) ;
  {
  var_classFunctionMap_5997.setter_insertKey (GALGAS_string ("none").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 152)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 152)), GALGAS_bool (false), var_boolsetTypeIndex_5851, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 152)) ;
  }
  {
  var_classFunctionMap_5997.setter_insertKey (GALGAS_string ("all").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 153)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 153)), GALGAS_bool (false), var_boolsetTypeIndex_5851, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 153)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5962, ioArgument_ioTypeMap, GALGAS_string ("none"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 154)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5962, ioArgument_ioTypeMap, GALGAS_string ("all"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 162)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = this ;
  cEnumerator_lstringlist enumerator_6546 (temp_6.readProperty_mFlagList (), kENUMERATION_UP) ;
  while (enumerator_6546.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_classFunctionMap_5997.getter_hasKey (enumerator_6546.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 171)).operator_not (SOURCE_FILE ("type-boolset.galgas", 171)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        var_classFunctionMap_5997.setter_insertKey (enumerator_6546.current_mValue (HERE), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 172)), GALGAS_bool (false), var_boolsetTypeIndex_5851, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 172)) ;
        }
        {
        routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5962, ioArgument_ioTypeMap, enumerator_6546.current_mValue (HERE).readProperty_string (), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 173)) ;
        }
      }
    }
    enumerator_6546.gotoNextObject () ;
  }
  GALGAS_setterMap var_setterMap_6971 = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("type-boolset.galgas", 184)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_7033 = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("type-boolset.galgas", 186)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mBoolsetTypeName (), GALGAS_bool (false), var_getterMap_5962, var_setterMap_6971, var_instanceMethodMap_7033, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 188)) ;
  }
  GALGAS_operators var_operators_7419 = GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("type-boolset.galgas", 202)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("type-boolset.galgas", 202)) COMMA_SOURCE_FILE ("type-boolset.galgas", 202)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("type-boolset.galgas", 202)) COMMA_SOURCE_FILE ("type-boolset.galgas", 202)).operator_or (GALGAS_operators::class_func_prefixTildeOperator (SOURCE_FILE ("type-boolset.galgas", 202)) COMMA_SOURCE_FILE ("type-boolset.galgas", 202)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-boolset.galgas", 203)) COMMA_SOURCE_FILE ("type-boolset.galgas", 202)).operator_or (GALGAS_operators::class_func_infixSubOperator (SOURCE_FILE ("type-boolset.galgas", 203)) COMMA_SOURCE_FILE ("type-boolset.galgas", 203)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("type-boolset.galgas", 203)) COMMA_SOURCE_FILE ("type-boolset.galgas", 203)) ;
  const GALGAS_boolsetDeclarationAST temp_9 = this ;
  const GALGAS_boolsetDeclarationAST temp_10 = this ;
  const GALGAS_boolsetDeclarationAST temp_11 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_7632 = GALGAS_unifiedTypeDefinition::class_func_new (temp_9.readProperty_mBoolsetTypeName (), temp_10.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-boolset.galgas", 209)), GALGAS_typeKindEnum::class_func_boolsetType (SOURCE_FILE ("type-boolset.galgas", 210)), GALGAS_bool (false), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 212)), GALGAS_propertyMap::class_func_emptyMap (SOURCE_FILE ("type-boolset.galgas", 213)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 214)), var_classFunctionMap_5997, var_getterMap_5962, var_setterMap_6971, var_instanceMethodMap_7033, GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("type-boolset.galgas", 219)), GALGAS_optionalMethodMap::class_func_emptyMap (SOURCE_FILE ("type-boolset.galgas", 220)), GALGAS_enumerationDescriptorList::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 221)), var_operators_7419, GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 223)), GALGAS_constantIndexMap::class_func_emptyMap (SOURCE_FILE ("type-boolset.galgas", 224)), GALGAS_enumConstantList::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 225)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 226)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 227)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-boolset.galgas", 229)), GALGAS_string ("none"), GALGAS_string ("boolset-").add_operation (temp_11.readProperty_mBoolsetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-boolset.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 231)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-boolset.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 205)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_7632.readProperty_mTypeName (), var_typeDefinition_7632, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 234)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                          const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_boolsetDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mFlagList ().getter_count (SOURCE_FILE ("type-boolset.galgas", 252)).objectCompare (GALGAS_uint (uint32_t (64U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_boolsetDeclarationAST temp_2 = this ;
      GALGAS_location var_s_9101 = temp_2.readProperty_mFlagList ().getter_mValueAtIndex (GALGAS_uint (uint32_t (64U)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 253)).readProperty_location () ;
      const GALGAS_boolsetDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_9101, GALGAS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_count (SOURCE_FILE ("type-boolset.galgas", 254)).getter_string (SOURCE_FILE ("type-boolset.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 254)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 254)), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 254)) ;
    }
  }
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  GALGAS_lstring var_boolsetNameForUsefulness_9256 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 257)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_9256, var_boolsetNameForUsefulness_9256, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 258)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = this ;
  const GALGAS_boolsetDeclarationAST temp_7 = this ;
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("boolset ").add_operation (temp_6.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 260)), GALGAS_boolsetTypeForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 262)), temp_8.readProperty_mFlagList ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 261))  COMMA_SOURCE_FILE ("type-boolset.galgas", 259)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'structGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_structGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_structGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_structGenerationTemplate_0,
  0,
  gWrapperAllDirectories_structGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_lstringlist & /* in_SLOT_5F_LIST */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" boolset"), inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Properties\n  private: uint64_t mFlags ;\n  private: bool mIsValid ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Private constructor\n  private: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (Compiler * /* inCompiler */,
                                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                              const GALGAS_lstringlist & in_SLOT_5F_LIST,
                                                                                              const GALGAS_bigint & in_FULL_5F_SET
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmFlags (0),\nmIsValid (false) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) :\nAC_GALGAS_root (),\nmFlags (inFlags),\nmIsValid (true) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_none (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (0) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_all (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (uint64_t (") ;
  result.appendString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 26)).stringValue ()) ;
  result.appendString (")) ;\n}\n\n") ;
  GALGAS_uint index_1000_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_1000 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1000.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_1000.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 32)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" (uint64_t (1) << ") ;
      result.appendString (index_1000_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 33)).stringValue ()) ;
      result.appendString (") ;\n}\n\n") ;
      index_1000_idx.increment () ;
      enumerator_1000.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n   typeComparisonResult result = kOperandNotValid ;\n   if (mIsValid && inOperand.mIsValid) {\n     result = kOperandEqual ;\n     if (mFlags < inOperand.mFlags) {\n       result = kFirstOperandLowerThanSecond ;\n     }else if (mFlags > inOperand.mFlags) {\n       result = kFirstOperandGreaterThanSecond ;\n     }\n   }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mIsValid ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_or (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags | inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_and (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_xor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags ^ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::substract_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & ~ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_tilde (UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (((uint64_t) ") ;
  result.appendString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 108)).stringValue ()) ;
  result.appendString (") ^ mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n                              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendString (\"<boolset @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (":\") ;\n  if (! isValid ()) {\n    ioString.appendString (\" not built\") ;\n  }else{\n") ;
  GALGAS_uint index_4724_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_4724 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4724.hasCurrentObject ()) {
      result.appendString ("    if ((mFlags & ((uint64_t) 1) << ") ;
      result.appendString (index_4724_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 123)).stringValue ()) ;
      result.appendString (") != 0) {\n      ioString.appendString (\" ") ;
      result.appendString (enumerator_4724.current_mValue (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") ;\n    }\n") ;
      index_4724_idx.increment () ;
      enumerator_4724.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n  ioString.appendString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_none (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool (mFlags == 0) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_all (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool (mFlags == uint64_t (") ;
  result.appendString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 146)).stringValue ()) ;
  result.appendString (")) ;\n  }\n  return result ;\n}\n\n") ;
  GALGAS_uint index_5558_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_5558 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5558.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_5558.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 153)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool ((mFlags & (uint64_t (1) << ") ;
      result.appendString (index_5558_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 156)).stringValue ()) ;
      result.appendString (")) != 0) ;\n  }\n  return result ;\n}\n\n") ;
      index_5558_idx.increment () ;
      enumerator_5558.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                  GALGAS_string & outArgument_outHeader,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_10770 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 298)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, var_typedefinition_10770.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10770.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 301)), temp_1.readProperty_mFlagList () COMMA_SOURCE_FILE ("type-boolset.galgas", 299))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typedefinition_10770.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10770.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 306)), var_typedefinition_10770.readProperty_mIsConcrete (), var_typedefinition_10770.readProperty_mClassFunctionMap (), var_typedefinition_10770.readProperty_mGetterMap (), var_typedefinition_10770.readProperty_mSetterMap (), var_typedefinition_10770.readProperty_mInstanceMethodMap (), var_typedefinition_10770.readProperty_mClassMethodMap (), var_typedefinition_10770.readProperty_mOptionalMethodMap (), var_typedefinition_10770.readProperty_mEnumerationDescriptor (), var_typedefinition_10770.readProperty_mHandledOperatorFlags (), var_typedefinition_10770.readProperty_mAddAssignOperatorArguments (), var_typedefinition_10770.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-boolset.galgas", 304))), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 304)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outImplementation,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 328)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  const GALGAS_boolsetTypeForGeneration temp_2 = this ;
  const GALGAS_boolsetTypeForGeneration temp_3 = this ;
  const GALGAS_boolsetTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 330)).readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 331)), temp_3.readProperty_mFlagList (), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 333)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_count (SOURCE_FILE ("type-boolset.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 333)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 333)) COMMA_SOURCE_FILE ("type-boolset.galgas", 329))) ;
}
