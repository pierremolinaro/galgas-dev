#include "all-declarations-2.h"
//--------------------------------------------------------------------------------------------------

GGS_lexiqueGenerationTemplates::GGS_lexiqueGenerationTemplates (void) :
AC_GALGAS_root (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueGenerationTemplates GGS_lexiqueGenerationTemplates::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexiqueGenerationTemplates result = GGS_lexiqueGenerationTemplates () ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueGenerationTemplates::description (String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("<filewrapper @lexiqueGenerationTemplates:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    ioString.appendCString (">") ;
  }
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @lexiqueGenerationTemplates headerZone2
//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueGenerationTemplates::class_func_headerZone_32_ (const GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                      const GGS__5B_lexicalListDeclarationAST_5D_ & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                      const GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                      const GGS__5B_templateDelimitor_32_AST_5D_ & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                      const GGS__5B_indexingAST_5D_ & in_INDEXING_5F_LIST,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"Lexique.h\"\n\n//--------------------------------------------------------------------------------------------------\n//                    E X T E R N    R O U T I N E S\n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_654_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ().isValid ()) {
    UpEnumerator_lexicalRoutineMap enumerator_654 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ()) ;
    while (enumerator_654.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_654.current_mIsExtern (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("\nvoid scanner_routine_") ;
        result.appendString (enumerator_654.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (Lexique & inLexique") ;
        GGS_uint index_804_ (0) ;
        if (enumerator_654.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          UpEnumerator__5B_lexicalRoutineFormalArgumentAST_5D_ enumerator_804 (enumerator_654.current_mLexicalRoutineFormalArgumentList (HERE)) ;
          while (enumerator_804.hasCurrentObject ()) {
            result.appendString (",\n                ") ;
            result.appendString (extensionGetter_cppConstInFormalArgument (enumerator_804.current_entry (HERE).readProperty_mLexicalFormalArgumentMode (), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (extensionGetter_cppTypeName (enumerator_804.current_entry (HERE).readProperty_mLexicalFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (extensionGetter_cppReferenceInFormalArgument (enumerator_804.current_entry (HERE).readProperty_mLexicalFormalArgumentMode (), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_804.current_entry (HERE).readProperty_mArgumentNameForComment ().stringValue ()) ;
            enumerator_804.gotoNextObject () ;
            index_804_.increment () ;
          }
        }
        GGS_uint index_1193_ (0) ;
        if (enumerator_654.current_mErrorMessageList (HERE).isValid ()) {
          UpEnumerator__5B_string_5D_ enumerator_1193 (enumerator_654.current_mErrorMessageList (HERE)) ;
          while (enumerator_1193.hasCurrentObject ()) {
            result.appendString (",\n                const char * ") ;
            result.appendString (enumerator_1193.current_entry (HERE).stringValue ()) ;
            enumerator_1193.gotoNextObject () ;
            index_1193_.increment () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_654.gotoNextObject () ;
      index_654_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                    E X T E R N    F U N C T I O N S\n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_1679_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ().isValid ()) {
    UpEnumerator_lexicalFunctionMap enumerator_1679 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ()) ;
    while (enumerator_1679.hasCurrentObject ()) {
      const GalgasBool test_1 = enumerator_1679.current_mIsExtern (HERE).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("\n") ;
        result.appendString (extensionGetter_cppTypeName (enumerator_1679.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" scanner_function_") ;
        result.appendString (enumerator_1679.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (Lexique & inLexique") ;
        GGS_uint index_1846_ (0) ;
        if (enumerator_1679.current_mLexicalTypeList (HERE).isValid ()) {
          UpEnumerator__5B_lexicalFunctionFormalArgumentAST_5D_ enumerator_1846 (enumerator_1679.current_mLexicalTypeList (HERE)) ;
          while (enumerator_1846.hasCurrentObject ()) {
            result.appendString (",\n                const ") ;
            result.appendString (extensionGetter_cppTypeName (enumerator_1846.current_entry (HERE).readProperty_mLexicalType (), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 37)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_1846.current_entry (HERE).readProperty_mArgumentNameForComment ().stringValue ()) ;
            enumerator_1846.gotoNextObject () ;
            index_1846_.increment () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1679.gotoNextObject () ;
      index_1679_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                       T O K E N    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cToken {\n") ;
  GGS_uint index_2381_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_2381 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_2381.hasCurrentObject ()) {
      result.appendString ("  public: ") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_2381.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (" mLexicalAttribute_") ;
      result.appendString (enumerator_2381.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_2381.gotoNextObject () ;
      index_2381_.increment () ;
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
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceString,\n                       const String & inStringForError\n                       COMMA_LOCATION_ARGS) ;\n\n//--- Instrospection\n  public: static GGS__5B_string_5D_ symbols (LOCATION_ARGS) ;\n\n//--- Declaring a protected virtual destructor enables the compiler to raise\n//    an error if a direct delete is performed; only the static proc\n//    SharedObject::detachPointer may invoke delete.\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    protected: virtual ~ Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) { }\n  #endif\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 80)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n//--- Scanner mode for template scanner\n  private: int32_t mMatchedTemplateDelimiterIndex ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n\n//--- Terminal symbols enumeration\n  public: const static int32_t kToken_ = 0 ;\n") ;
  GGS_uint index_3962_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator__5B_terminalAST_5D_ enumerator_3962 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_3962.hasCurrentObject ()) {
      result.appendString ("  public: static const int32_t kToken_") ;
      result.appendString (enumerator_3962.current_entry (HERE).readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (index_3962_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_3962.gotoNextObject () ;
      index_3962_idx.increment () ;
    }
  }
  GGS_uint index_4148_ (0) ;
  if (in_DELIMITOR_5F_LIST_5F_LIST.isValid ()) {
    UpEnumerator__5B_lexicalListDeclarationAST_5D_ enumerator_4148 (in_DELIMITOR_5F_LIST_5F_LIST) ;
    while (enumerator_4148.hasCurrentObject ()) {
      result.appendString ("\n//--- Key words table '") ;
      result.appendString (enumerator_4148.current_entry (HERE).readProperty_mName ().readProperty_string ().stringValue ()) ;
      result.appendString ("'\n  public: static int32_t search_into_") ;
      result.appendString (enumerator_4148.current_entry (HERE).readProperty_mName ().readProperty_string ().stringValue ()) ;
      result.appendString (" (const String & inSearchedString) ;\n") ;
      enumerator_4148.gotoNextObject () ;
      index_4148_.increment () ;
    }
  }
  result.appendString ("\n\n//--- Assign from attribute\n") ;
  GGS_uint index_4440_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_4440 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_4440.hasCurrentObject ()) {
      result.appendString ("  public: GGS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_4440.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 100)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 100)).stringValue ()) ;
      result.appendString (" synthetizedAttribute_") ;
      result.appendString (enumerator_4440.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 100)).stringValue ()) ;
      result.appendString (" (void) const ;\n") ;
      enumerator_4440.gotoNextObject () ;
      index_4440_.increment () ;
    }
  }
  result.appendString ("\n\n//--- Attribute access\n") ;
  GGS_uint index_4711_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_4711 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_4711.hasCurrentObject ()) {
      result.appendString ("  public: ") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_4711.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 107)).stringValue ()) ;
      result.appendString (" attributeValue_") ;
      result.appendString (enumerator_4711.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 107)).stringValue ()) ;
      result.appendString (" (void) const ;\n") ;
      enumerator_4711.gotoNextObject () ;
      index_4711_.increment () ;
    }
  }
  result.appendString ("\n\n//--- indexing keys\n") ;
  GGS_uint index_4893_idx (0) ;
  if (in_INDEXING_5F_LIST.isValid ()) {
    UpEnumerator__5B_indexingAST_5D_ enumerator_4893 (in_INDEXING_5F_LIST) ;
    while (enumerator_4893.hasCurrentObject ()) {
      result.appendString ("public: static const uint32_t kIndexing_") ;
      result.appendString (enumerator_4893.current_entry (HERE).readProperty_mIndexName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (index_4893_idx.getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_4893.gotoNextObject () ;
      index_4893_idx.increment () ;
    }
  }
  result.appendString ("\n//--- Parse lexical token\n  protected: void internalParseLexicalToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & token) ;\n  protected: virtual bool parseLexicalToken (void) override ;\n\n//--- Get terminal message\n  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;\n\n//--- Get terminal count\n  public: virtual int32_t terminalVocabularyCount (void) const override { return ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 125)).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 125)).stringValue ()) ;
  result.appendString (" ; }\n\n//--- Get Token String\n  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;\n\n//--- Enter Token\n  protected: void enterToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & ioToken) ;\n\n//--- Style index\n  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;\n} ;\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @lexiqueGenerationTemplates implementationZone2Galgas3
//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueGenerationTemplates::class_func_implementationZone_32_Galgas_33_ (const GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                        const GGS_bool & in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE,
                                                                                        const GGS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                        const GGS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                        const GGS__5B_terminalAST_5D_ & in_TERMINAL_5F_LIST,
                                                                                        const GGS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                        const GGS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                        const GGS__5B_abstractLexicalRuleAST_5D_ & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                        const GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                        const GGS__5B_templateDelimitor_32_AST_5D_ & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                        const GGS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                        const GGS__5B_templateReplacementAST_5D_ & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//     L E X I Q U E                                                                             \n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"utf32.h\"\n#include \"scanner_actions.h\"\n#include \"LexiqueIntrospection.h\"\n\n//--------------------------------------------------------------------------------------------------\n\ncTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void)") ;
  GGS_uint index_634_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_634 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    const bool nonEmpty_enumerator_634 = enumerator_634.hasCurrentObject () ;
    if (nonEmpty_enumerator_634) {
      result.appendString (" :\n") ;
    }
    while (enumerator_634.hasCurrentObject ()) {
      result.appendString ("mLexicalAttribute_") ;
      result.appendString (enumerator_634.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (" ()") ;
      enumerator_634.gotoNextObject () ;
      if (enumerator_634.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_634_.increment () ;
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
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 28)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (",\nmMatchedTemplateDelimiterIndex (-1)") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
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
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 41)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString (",\nmMatchedTemplateDelimiterIndex (-1)") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n//                        Lexical error message list                                             \n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_2068_ (0) ;
  if (in_LEXICAL_5F_MESSAGE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalMessageMap enumerator_2068 (in_LEXICAL_5F_MESSAGE_5F_MAP) ;
    while (enumerator_2068.hasCurrentObject ()) {
      result.appendString ("\nstatic const char * gLexicalMessage_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2068.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_2068.current_mLexicalMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 52)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_2068.gotoNextObject () ;
      index_2068_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                getMessageForTerminal                                                          \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getMessageForTerminal (const int32_t inTerminalIndex) const {\n  String result = \"<unknown>\" ;\n  if ((inTerminalIndex >= 0) && (inTerminalIndex < ") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).stringValue ()) ;
  result.appendString (")) {\n    static const char * syntaxErrorMessageArray [") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).stringValue ()) ;
  result.appendString ("] = {kEndOfSourceLexicalErrorMessage") ;
  GGS_uint index_2910_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator__5B_terminalAST_5D_ enumerator_2910 (in_TERMINAL_5F_LIST) ;
    while (enumerator_2910.hasCurrentObject ()) {
      result.appendString (",\n        ") ;
      result.appendString (enumerator_2910.current_entry (HERE).readProperty_mSyntaxErrorMessage ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 64)).stringValue ()) ;
      enumerator_2910.gotoNextObject () ;
      index_2910_.increment () ;
    }
  }
  result.appendString ("\n    } ;\n    result = syntaxErrorMessageArray [inTerminalIndex] ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                      U N I C O D E    S T R I N G S                                           \n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_3442_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    UpEnumerator_stringset enumerator_3442 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES) ;
    while (enumerator_3442.hasCurrentObject ()) {
      const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_3442.current_key (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 77)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("\n//--- Unicode string for '$") ;
        result.appendString (enumerator_3442.current_key (HERE).getter_utf_38_RepresentationWithoutDelimiters (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString ("$'\nstatic const std::initializer_list <utf32> kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_3442.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" = ") ;
        result.appendString (enumerator_3442.current_key (HERE).getter_utf_33__32_Representation (GGS_bool (false) COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3442.gotoNextObject () ;
      index_3442_.increment () ;
    }
  }
  result.appendString ("\n") ;
  GGS_uint index_3891_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_3891 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_3891.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n//             Key words table '") ;
      result.appendString (enumerator_3891.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("'      \n//--------------------------------------------------------------------------------------------------\n\nstatic const int32_t ktable_size_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3891.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_3891.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 88)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 88)).stringValue ()) ;
      result.appendString (" ;\n\nstatic const C_unicode_lexique_table_entry ktable_for_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3891.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" [ktable_size_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3891.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("] = {\n") ;
      GGS_uint index_4560_ (0) ;
      if (enumerator_3891.current_mTokenSortedList (HERE).isValid ()) {
        UpEnumerator_sortedTokenArray enumerator_4560 (enumerator_3891.current_mTokenSortedList (HERE)) ;
        while (enumerator_4560.hasCurrentObject ()) {
          result.appendString ("  C_unicode_lexique_table_entry (kUnicodeString_") ;
          result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_4560.current_entry (HERE).readProperty_mName ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 91)).stringValue ()) ;
          result.appendString (", Lexique_") ;
          result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("::kToken_") ;
          result.appendString (enumerator_4560.current_entry (HERE).readProperty_mTerminalName ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 91)).stringValue ()) ;
          result.appendString (")") ;
          enumerator_4560.gotoNextObject () ;
          if (enumerator_4560.hasCurrentObject ()) {
            result.appendString (",\n") ;
          }
          index_4560_.increment () ;
        }
      }
      result.appendString ("\n} ;\n\nint32_t Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::search_into_") ;
      result.appendString (enumerator_3891.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" (const String & inSearchedString) {\n  return searchInList (inSearchedString, ktable_for_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3891.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (", ktable_size_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3891.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (") ;\n}\n\n") ;
      enumerator_3891.gotoNextObject () ;
      index_3891_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                          getCurrentTokenString                                                \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getCurrentTokenString (const cToken * inTokenPtr) const {\n  const cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr = (const cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inTokenPtr ;\n  String s ;\n  if (ptr == nullptr) {\n    s.appendCString (\"$$\") ;\n  }else{\n    switch (ptr->mTokenCode) {\n    case kToken_:\n      s.appendCString (\"$$\") ;\n      break ;\n") ;
  GGS_uint index_5825_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator__5B_terminalAST_5D_ enumerator_5825 (in_TERMINAL_5F_LIST) ;
    while (enumerator_5825.hasCurrentObject ()) {
      result.appendString ("    case kToken_") ;
      result.appendString (enumerator_5825.current_entry (HERE).readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 115)).stringValue ()) ;
      result.appendString (":\n      s.appendChar (utf32 ('$')) ;\n      s.appendCString (") ;
      result.appendString (enumerator_5825.current_entry (HERE).readProperty_mTerminalName ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 117)).stringValue ()) ;
      result.appendString (") ;\n      s.appendChar (utf32 ('$')) ;\n") ;
      GGS_uint index_6150_ (0) ;
      if (enumerator_5825.current_entry (HERE).readProperty_mSentAttributeList ().isValid ()) {
        UpEnumerator__5B_lexicalSentValue_5D_ enumerator_6150 (enumerator_5825.current_entry (HERE).readProperty_mSentAttributeList ()) ;
        while (enumerator_6150.hasCurrentObject ()) {
          result.appendString ("      s.appendChar (utf32 (' ')) ;\n      s.") ;
          result.appendString (extensionGetter_appendMethodName (enumerator_6150.current_entry (HERE).readProperty_mLexicalType (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (" (ptr->mLexicalAttribute_") ;
          result.appendString (enumerator_6150.current_entry (HERE).readProperty_mLexicalAttributeName ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (extensionGetter_appendArgumentOfMethod (enumerator_6150.current_entry (HERE).readProperty_mLexicalType (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (") ;\n") ;
          enumerator_6150.gotoNextObject () ;
          index_6150_.increment () ;
        }
      }
      result.appendString ("      break ;\n") ;
      enumerator_5825.gotoNextObject () ;
      index_5825_.increment () ;
    }
  }
  result.appendString ("    default:\n      break ;\n    }\n  }\n  return s ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters                                                 \n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_6991_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
    UpEnumerator__5B_templateDelimitorAST_5D_ enumerator_6991 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ()) ;
    const bool nonEmpty_enumerator_6991 = enumerator_6991.hasCurrentObject () ;
    if (nonEmpty_enumerator_6991) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateDefinitionArray [") ;
      result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 137)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 137)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_6991.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_6991.current_entry (HERE).readProperty_mStartString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_6991.current_entry (HERE).readProperty_mStartString ().readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (", ") ;
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_6991.current_entry (HERE).readProperty_mEndString ().readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 139)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("{}, 0,") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_6991.current_entry (HERE).readProperty_mEndString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).stringValue ()) ;
        result.appendString (", ") ;
        result.appendString (enumerator_6991.current_entry (HERE).readProperty_mEndString ().readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).stringValue ()) ;
        result.appendString (",") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (" nullptr, ") ;
      result.appendString (enumerator_6991.current_entry (HERE).readProperty_mPreservesStartDelimiter ().operator_not (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 145)).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 145)).stringValue ()) ;
      result.appendString (")") ;
      enumerator_6991.gotoNextObject () ;
      if (enumerator_6991.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_6991_.increment () ;
    }
    if (nonEmpty_enumerator_6991) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements                                               \n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_8003_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_templateReplacementAST_5D_ enumerator_8003 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
    const bool nonEmpty_enumerator_8003 = enumerator_8003.hasCurrentObject () ;
    if (nonEmpty_enumerator_8003) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateReplacementArray [") ;
      result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_8003.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_8003.current_entry (HERE).readProperty_mMatchString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_8003.current_entry (HERE).readProperty_mMatchString ().readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).stringValue ()) ;
      result.appendString (", kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_8003.current_entry (HERE).readProperty_mReplacementString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_8003.current_entry (HERE).readProperty_mReplacementString ().readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue ()) ;
      result.appendString (", ") ;
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_8003.current_entry (HERE).readProperty_mReplacementFunction ().readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 160)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("nullptr") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("scanner_routine_") ;
        result.appendString (enumerator_8003.current_entry (HERE).readProperty_mReplacementFunction ().readProperty_string ().stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", true)") ;
      enumerator_8003.gotoNextObject () ;
      if (enumerator_8003.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_8003_.increment () ;
    }
    if (nonEmpty_enumerator_8003) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark                                 \n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_5 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 174)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    GGS_uint index_9079_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      UpEnumerator__5B_terminalAST_5D_ enumerator_9079 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
      const bool nonEmpty_enumerator_9079 = enumerator_9079.hasCurrentObject () ;
      if (nonEmpty_enumerator_9079) {
        result.appendString ("static const bool ") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_kEndOfScriptInTemplateArray [") ;
        result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue ()) ;
        result.appendString ("] = {\n") ;
      }
      while (enumerator_9079.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_9079.current_entry (HERE).readProperty_isEndOfTemplateMark ().getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 177)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_9079.current_entry (HERE).readProperty_mTerminalName ().readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        enumerator_9079.gotoNextObject () ;
        if (enumerator_9079.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_9079_.increment () ;
      }
      if (nonEmpty_enumerator_9079) {
        result.appendString ("\n} ;\n") ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//               INTERNAL PARSE LEXICAL TOKEN                                         \n//--------------------------------------------------------------------------------------------------\n\nvoid Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalParseLexicalToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & token) {\n") ;
  const GalgasBool test_6 = in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE.boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("  bool loop = true ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_9734_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_9734 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_9734.hasCurrentObject ()) {
      result.appendString ("  token.mLexicalAttribute_") ;
      result.appendString (enumerator_9734.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (extensionGetter_initialization (enumerator_9734.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_9734.gotoNextObject () ;
      index_9734_.increment () ;
    }
  }
  result.appendString ("  mTokenStartLocation = mCurrentLocation ;\n  try{\n") ;
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).isValid ()) {
    result.incIndentation (int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).uintValue ())) ;
  }
  GGS_uint index_9955_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    UpEnumerator__5B_abstractLexicalRuleAST_5D_ enumerator_9955 (in_LEXICAL_5F_RULE_5F_LIST) ;
    while (enumerator_9955.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_generateLexicalRuleCode ((const cPtr_abstractLexicalRuleAST *) enumerator_9955.current_entry (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 200)).stringValue ()) ;
      enumerator_9955.gotoNextObject () ;
      index_9955_.increment () ;
    }
  }
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).isValid ()) {
    result.incIndentation (- int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).uintValue ())) ;
  }
  result.appendString ("if (testForInputUTF32Char (utf32 ('\\0'))) { // End of source text \? \n      token.mTokenCode = kToken_ ; // Empty string code\n    }else{ // Unknown input character\n      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n      token.mTokenCode = -1 ; // No token\n      advance () ; // ... go throught unknown character\n    }\n  }catch (const C_lexicalErrorException &) {\n    token.mTokenCode = -1 ; // No token\n    advance () ; // ... go throught unknown character\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n//               P A R S E    L E X I C A L    T O K E N                                         \n//--------------------------------------------------------------------------------------------------\n\nbool Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::parseLexicalToken (void) {\n  cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" token ;\n  token.mTokenCode = -1 ;\n  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\\0')) {\n") ;
  const GalgasBool test_7 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 225)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    result.appendString ("    if ((mMatchedTemplateDelimiterIndex >= 0)\n     && (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n     && (mCurrentChar.u32 () != '\\0')) {\n      const bool foundEndDelimitor = testForInputUTF32String (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,\n                                                               true) ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar.u32 () != '\\0')) {\n      int32_t replacementIndex = 0 ;\n      while (replacementIndex >= 0) {\n        replacementIndex = findTemplateDelimiterIndex (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray, ") ;
    result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 238)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 238)).stringValue ()) ;
    result.appendString (") ;\n        if (replacementIndex >= 0) {\n          if (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {\n            token.mTemplateStringBeforeToken.appendString (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString) ;\n          }else{\n            String s ;\n            while (notTestForInputUTF32String (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString,\n                                                kEndOfSourceLexicalErrorMessage\n                                               COMMA_HERE)) {\n              s.appendChar (previousChar ()) ;\n            }\n            ") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;\n          }\n        }\n      }\n      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateDefinitionArray, ") ;
    result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 253)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 253)).stringValue ()) ;
    result.appendString (") ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        token.mTemplateStringBeforeToken.appendChar (mCurrentChar) ;\n        advance () ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mCurrentChar.u32 () != '\\0')) {\n      internalParseLexicalToken (token) ;\n    }\n    if ((token.mTokenCode > 0) && ") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  ") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("    internalParseLexicalToken (token) ;") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  }\n  if (mCurrentChar.u32 () == '\\0') {\n    token.mTokenCode = 0 ;\n    enterToken (token) ;\n  }\n  return token.mTokenCode > 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                         E N T E R    T O K E N                                                \n//--------------------------------------------------------------------------------------------------\n\nvoid Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::enterToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & ioToken) {\n  cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr = nullptr ;\n  macroMyNew (ptr, cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ()) ;\n  ptr->mTokenCode = ioToken.mTokenCode ;\n  ptr->mStartLocation = mTokenStartLocation ;\n  ptr->mEndLocation = mTokenEndLocation ;\n  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;\n  ioToken.mTemplateStringBeforeToken = \"\" ;\n") ;
  GGS_uint index_14349_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_14349 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_14349.hasCurrentObject ()) {
      result.appendString ("  ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_14349.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).stringValue ()) ;
      result.appendString (" = ioToken.mLexicalAttribute_") ;
      result.appendString (enumerator_14349.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_14349.gotoNextObject () ;
      index_14349_.increment () ;
    }
  }
  result.appendString ("  enterTokenFromPointer (ptr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//               A T T R I B U T E   A C C E S S                                                 \n") ;
  GGS_uint index_14779_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_14779 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_14779.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_14779.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 300)).stringValue ()) ;
      result.appendString (" Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::attributeValue_") ;
      result.appendString (enumerator_14779.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 300)).stringValue ()) ;
      result.appendString (" (void) const {\n  cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * ptr = (cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentTokenPtr (HERE) ;\n  return ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_14779.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 302)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_14779.gotoNextObject () ;
      index_14779_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//         A S S I G N    F R O M    A T T R I B U T E                                           \n") ;
  GGS_uint index_15484_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_15484 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_15484.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15484.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 310)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 310)).stringValue ()) ;
      result.appendString (" Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::synthetizedAttribute_") ;
      result.appendString (enumerator_15484.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 310)).stringValue ()) ;
      result.appendString (" (void) const {\n  cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * ptr = (cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentTokenPtr (HERE) ;\n  macroValidSharedObject (ptr, cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;\n  GGS_") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15484.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (" value (ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_15484.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (") ;\n  GGS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15484.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 315)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 315)).stringValue ()) ;
      result.appendString (" result (value, currentLocation) ;\n  return result ;\n}\n\n") ;
      enumerator_15484.gotoNextObject () ;
      index_15484_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//                         I N T R O S P E C T I O N                                             \n//--------------------------------------------------------------------------------------------------\n\n GGS__5B_string_5D_ Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::symbols (LOCATION_ARGS) {\n  GGS__5B_string_5D_ result = GGS__5B_string_5D_::init (nullptr COMMA_THERE) ;\n") ;
  GGS_uint index_16883_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator__5B_terminalAST_5D_ enumerator_16883 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_16883.hasCurrentObject ()) {
      result.appendString ("  result.plusPlusAssignOperation (GGS_string (") ;
      result.appendString (enumerator_16883.current_entry (HERE).readProperty_mTerminalName ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 326)).stringValue ()) ;
      result.appendString (") COMMA_HERE) ;\n") ;
      enumerator_16883.gotoNextObject () ;
      index_16883_.increment () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (GenericUniqueArray <String> & ") ;
  const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 334)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_8) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("ioList") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") {\n") ;
  GGS_uint index_17410_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_17410 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_17410.hasCurrentObject ()) {
      result.appendString ("  ioList.appendObject (") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).add_operation (enumerator_17410.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).stringValue ()) ;
      result.appendString (") ;\n") ;
      enumerator_17410.gotoNextObject () ;
      index_17410_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const String & ") ;
  const GalgasBool test_9 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 344)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_9) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* inIdentifier */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("inIdentifier") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("bool & ") ;
  const GalgasBool test_10 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 345)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_10) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ioFound */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("ioFound") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GenericUniqueArray <String> & ") ;
  const GalgasBool test_11 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 346)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_11) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("ioList") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") {\n") ;
  GGS_uint index_18123_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_18123 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_18123.hasCurrentObject ()) {
      result.appendString ("  if (inIdentifier == ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).add_operation (enumerator_18123.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).stringValue ()) ;
      result.appendString (") {\n    ioFound = true ;\n") ;
      GGS_uint index_18298_ (0) ;
      if (enumerator_18123.current_mTokenSortedList (HERE).isValid ()) {
        UpEnumerator_sortedTokenArray enumerator_18298 (enumerator_18123.current_mTokenSortedList (HERE)) ;
        while (enumerator_18298.hasCurrentObject ()) {
          result.appendString ("    ioList.appendObject (") ;
          result.appendString (enumerator_18298.current_entry (HERE).readProperty_mName ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).stringValue ()) ;
          result.appendString (") ;\n") ;
          enumerator_18298.gotoNextObject () ;
          index_18298_.increment () ;
        }
      }
      result.appendString ("    ioList.sortArrayUsingCompareMethod() ;\n  }\n") ;
      enumerator_18123.gotoNextObject () ;
      index_18123_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic LexiqueIntrospection lexiqueIntrospection_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n__attribute__ ((used))\n__attribute__ ((unused)) (getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (", getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           \n//--------------------------------------------------------------------------------------------------\n\nuint32_t Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::styleIndexForTerminal (const int32_t inTerminalIndex) const { // §§\n  static const uint32_t kTerminalSymbolStyles [") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).stringValue ()) ;
  result.appendString ("] = {0") ;
  GGS_uint index_19311_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator__5B_terminalAST_5D_ enumerator_19311 (in_TERMINAL_5F_LIST) ;
    while (enumerator_19311.hasCurrentObject ()) {
      result.appendString (",\n    ") ;
      result.appendString (enumerator_19311.current_entry (HERE).readProperty_mStyleIndex ().getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_19311.current_entry (HERE).readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (" */") ;
      enumerator_19311.gotoNextObject () ;
      index_19311_.increment () ;
    }
  }
  result.appendString ("\n  } ;\n  return (inTerminalIndex >= 0) \? kTerminalSymbolStyles [inTerminalIndex] : 0 ;\n}\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @lexiqueGenerationTemplates swiftUIImplementationZone2
//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueGenerationTemplates::class_func_swiftUIImplementationZone_32_ (const GGS_string & /* in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                     const GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                     const GGS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                     const GGS_lexicalMessageMap & /* in_LEXICAL_5F_MESSAGE_5F_MAP */,
                                                                                     const GGS__5B_terminalAST_5D_ & /* in_TERMINAL_5F_LIST */,
                                                                                     const GGS_stringset & /* in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES */,
                                                                                     const GGS__5B_abstractLexicalRuleAST_5D_ & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                     const GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                     const GGS__5B_templateReplacementAST_5D_ & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                     const GGS__5B_indexingAST_5D_ & in_INDEXING_5F_LIST,
                                                                                     const GGS__5B_templateDelimitor_32_AST_5D_ & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                     const GGS_uint & in_LEXICAL_5F_STYLE_5F_COUNT,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   LEXIQUE ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nimport SwiftUI\n\n//--------------------------------------------------------------------------------------------------\n\nclass ScannerFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : AbstractScanner {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mDebug = false\n  private let mVerboseDebug = false\n  private var mTokenArray = [LexicalToken] ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final override func popUpDefinitionList () -> [[UInt16]] {\n    return gPopUpData_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final override func lineComment () -> String\? {\n    return gLineComment_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func selectionRange (forProposedRange inProposedSelectionRange : NSRange,\n                                granularity inGranularity : NSSelectionGranularity,\n                                nsTextViewComputedRange inTextViewComputedRange : NSRange) -> NSRange {\n    var result = inTextViewComputedRange\n    switch inGranularity {\n    case .selectByCharacter :\n      ()\n    case .selectByWord :\n      var found = false\n      var idx = 0\n      while idx < self.mTokenArray.count, !found {\n        let token = self.mTokenArray [idx]\n        idx += 1\n        let tokenRange = token.range\n        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)\n           && (tokenRange.location <= inProposedSelectionRange.location)\n        if found, self.atomicSelectionFor (token: token.tokenCode) {\n          result = tokenRange\n        }\n      }\n    case .selectByParagraph :\n      var found = false\n      var idx = 0\n      while idx < self.mTokenArray.count, !found {\n        let token = self.mTokenArray [idx]\n        idx += 1\n        let tokenRange = token.range\n        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)\n           && (tokenRange.location <= inProposedSelectionRange.location)\n        if found {\n          result = tokenRange\n        }\n      }\n    @unknown default:\n      ()\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Scanner\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_2839_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_2839 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_2839.hasCurrentObject ()) {
      result.appendString ("  private var mLexicalAttribute_") ;
      result.appendString (enumerator_2839.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (extensionGetter_swiftTypeName (enumerator_2839.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 76)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_swiftInitializationCode (enumerator_2839.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 76)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_2839.gotoNextObject () ;
      index_2839_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func lexiqueIdentifier () -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func isTemplateLexique () -> Bool {\n    return ") ;
  result.appendString (GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 88)).objectCompare (GGS_uint (uint32_t (0U)))).getter_cString (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 88)).stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func terminalVocabularyCount () -> Int {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 94)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 94)).stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {\n    let kTerminalSymbolStyles : [UInt8] = [\n      0, // Default\n") ;
  GGS_uint index_3900_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator__5B_terminalAST_5D_ enumerator_3900 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_3900.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_3900.current_entry (HERE).readProperty_mStyleIndex ().getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 104)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_3900_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 104)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 104)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_3900.current_entry (HERE).readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 104)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_3900.gotoNextObject () ;
      index_3900_idx.increment () ;
    }
  }
  result.appendString ("      ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_COUNT.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 106)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 106)).stringValue ()) ;
  result.appendString (", // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 106)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 106)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 106)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR\n      ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_COUNT.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 107)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 107)).stringValue ()) ;
  result.appendString ("  // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 107)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 107)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 107)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n    ]\n    return kTerminalSymbolStyles [Int (inTokenIndex)]\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {\n    let kTerminalAtomicSelection : [Bool] = [\n      false, // Default\n") ;
  GGS_uint index_4706_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator__5B_terminalAST_5D_ enumerator_4706 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_4706.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_4706.current_entry (HERE).readProperty_atomicSelection ().getter_cString (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 119)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_4706_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 119)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 119)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_4706.current_entry (HERE).readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 119)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_4706.gotoNextObject () ;
      index_4706_idx.increment () ;
    }
  }
  result.appendString ("      false, // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 121)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 121)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 121)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR\n      false  // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 122)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 122)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 122)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n    ]\n    return kTerminalAtomicSelection [Int (inTokenIndex)]\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func indexingTitles () -> [String] {\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_INDEXING_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 131)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("    return [\n") ;
    GGS_uint index_5400_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      UpEnumerator__5B_indexingAST_5D_ enumerator_5400 (in_INDEXING_5F_LIST) ;
      while (enumerator_5400.hasCurrentObject ()) {
        result.appendString ("      ") ;
        result.appendString (enumerator_5400.current_entry (HERE).readProperty_mIndexComment ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 135)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_5400.current_entry (HERE).readProperty_mIndexName ().readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        enumerator_5400.gotoNextObject () ;
        if (enumerator_5400.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_5400_.increment () ;
      }
    }
    result.appendString ("\n    ]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("\n    return []\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final var mLexicalStyleSnapShot = LexicalStyleSnapShot ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func performLexicalColoringAfterUserDefaultChange (textStorage inTextStorage : NSTextStorage) {\n    if self.mDebug { Swift.print (\"performLexicalColoringAfterUserDefaultChange\") }\n    let start = Date ()\n    if stylesDidChange (&self.mLexicalStyleSnapShot) {\n      let nsString = inTextStorage.string as NSString\n      let fullRange = NSRange (location: 0, length: nsString.length)\n    //---- Apply default attributes\n      let tsDelegate : (any NSTextStorageDelegate)\? = inTextStorage.delegate\n      inTextStorage.delegate = nil // NSTextStorageDelegate\n      inTextStorage.beginEditing ()\n      let defaultFont = self.mLexicalStyleSnapShot.mFont.nsFont\n      inTextStorage.font = defaultFont\n      let ps = NSMutableParagraphStyle ()\n      ps.lineHeightMultiple = CGFloat (self.mLexicalStyleSnapShot.mLineHeight) / 10.0\n      let defaultAttributes : [NSAttributedString.Key : Any] = [\n        .font: defaultFont,\n        .foregroundColor: NSColor (self.mLexicalStyleSnapShot.mDefaultColor),\n        .paragraphStyle : ps\n      ]\n      inTextStorage.setAttributes (defaultAttributes, range: fullRange)\n    //--- Apply styles\n      for token in self.mTokenArray {\n        let idx = Int (self.styleIndexFor (token: token.tokenCode))\n        if idx > 0, idx < (self.mLexicalStyleSnapShot.mAttributeArray.count - 1),\n           let attributes = self.mLexicalStyleSnapShot.mAttributeArray [idx - 1] {\n          inTextStorage.addAttributes (attributes, range: token.range)\n        }\n      }\n      inTextStorage.endEditing ()\n      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate\n    }\n    if self.mDebug { Swift.print (\"  done: \\(Int (Date ().timeIntervalSince (start) * 1000.0)) ms\") }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func performLexicalAnalysisAndColoring (textStorage inTextStorage : NSTextStorage,\n                                                   editedRange inEditedRange : NSRange,\n                                                   changeInLength inDelta : Int,\n                                                   popMenuItems ioPopupMenuItems : inout [IdentifiableAttributedString]) {\n    if self.mDebug { Swift.print (\"performLexicalAnalysisAndColoring \\(inEditedRange), delta \\(inDelta)\") }\n    let nsString = inTextStorage.string as NSString\n  //---\n    var savedTokenCount = 0\n    var found = false\n    while savedTokenCount < self.mTokenArray.count, !found {\n      if self.mTokenArray [savedTokenCount].range.upperBound < inEditedRange.location {\n        savedTokenCount += 1\n      }else{\n        found = true\n      }\n    }\n    if self.mDebug { Swift.print (\"  savedTokenCount \\(savedTokenCount), currently \\(self.mTokenArray.count) tokens\") }\n  //--- Eliminate tokens beyond end of source string\n    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {\n      if self.mVerboseDebug { Swift.print (\"Remove last token \\(lastToken.range), beyond end\") }\n      _ = self.mTokenArray.removeLast ()\n    }\n    if self.mDebug { Swift.print (\"  Eliminate token beyond end: \\(self.mTokenArray.count) tokens\") }\n  //--- Translater les tokens suivants\n    var i = savedTokenCount + 1\n    while i < self.mTokenArray.count {\n      let token = self.mTokenArray [i]\n      let newToken = LexicalToken (\n        range: NSRange (location: token.range.location + inDelta, length: token.range.length),\n        tokenCode: token.tokenCode,\n        templateDelimiterIndex: token.templateDelimiterIndex\n      )\n      self.mTokenArray [i] = newToken\n      i += 1\n    }\n  //--- Eliminate tokens beyond end of source string\n    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {\n      if self.mVerboseDebug { Swift.print (\"Remove last token \\(lastToken.range), beyond end\") }\n      _ = self.mTokenArray.removeLast ()\n    }\n    if self.mDebug { Swift.print (\"  Eliminate token beyond end, after delta correction: \\(self.mTokenArray.count) tokens\") }\n  //--- Perform lexical analysis\n    let start = Date ()\n    if savedTokenCount == 0 {\n      self.resetScannerLocation (withString: nsString)\n    }else{\n      self.resetScanner (\n        withString: nsString,\n        location: self.mTokenArray [savedTokenCount-1].range.upperBound,\n        templateDelimiterIndex : self.mTokenArray [savedTokenCount-1].templateDelimiterIndex\n      )\n    }\n    if self.mDebug { Swift.print (\"  Scanning start location: \\(self.currentLocation)\") }\n    var stop = false\n    var insertionIndex = savedTokenCount\n    while self.currentLocation < nsString.length, !stop {\n      let token : LexicalToken = self.parseLexicalTokenForLexicalColoring ()\n      if token.tokenCode > 0 { // For eliminating separators\n        if self.mVerboseDebug { Swift.print (\"  -> new token \\(token.range) '\\(nsString.substring (with: token.range))'\") }\n      //--- Eliminate previous tokens before new token location\n        if insertionIndex < self.mTokenArray.count,\n              self.mTokenArray [insertionIndex] == token,\n              token.range.location > inEditedRange.upperBound {\n          if self.mVerboseDebug { Swift.print (\"    stop at \\(insertionIndex)\") }\n          stop = true\n        }else{\n          while insertionIndex < self.mTokenArray.count,\n                self.mTokenArray [insertionIndex].range.lowerBound <= token.range.location {\n            if self.mVerboseDebug { Swift.print (\"    remove token \\(self.mTokenArray [insertionIndex].range) at \\(insertionIndex)\") }\n            self.mTokenArray.remove (at: insertionIndex)\n          }\n          if insertionIndex == self.mTokenArray.count {\n            if self.mVerboseDebug { Swift.print (\"    append token \\(token.range) at \\(insertionIndex)\") }\n            self.mTokenArray.append (token)\n            insertionIndex += 1\n          }else{\n            if self.mVerboseDebug {  Swift.print (\"    insert token \\(token.range) at \\(insertionIndex)\") }\n            self.mTokenArray.insert (token, at: insertionIndex)\n            insertionIndex += 1\n          }\n        }\n      }\n    }\n    if self.mDebug { Swift.print (\"  Lexical analysis time: \\(Int (Date ().timeIntervalSince (start) * 1000.0)) ms\") }\n  //---- Apply default attributes\n    let modificationStart = min (inEditedRange.location, (savedTokenCount == 0)\n      \? 0\n      : self.mTokenArray [savedTokenCount - 1].range.upperBound)\n    let modificationEnd = max (inEditedRange.upperBound, (insertionIndex == self.mTokenArray.count)\n       \? nsString.length\n       : self.mTokenArray [insertionIndex].range.upperBound\n    )\n    if self.mDebug { Swift.print (\"  Attributes will change from char index \\(modificationStart) to \\(modificationEnd)\") }\n    let start2 = Date ()\n    if modificationStart < modificationEnd {\n      let modifiedRange = NSRange (location: modificationStart, length: modificationEnd - modificationStart)\n      let tsDelegate : (any NSTextStorageDelegate)\? = inTextStorage.delegate\n      inTextStorage.delegate = nil // NSTextStorageDelegate\n      inTextStorage.beginEditing ()\n      let defaultFont = self.mLexicalStyleSnapShot.mFont.nsFont\n      let ps = NSMutableParagraphStyle ()\n      ps.lineHeightMultiple = CGFloat (self.mLexicalStyleSnapShot.mLineHeight) / 10.0\n      let defaultAttributes : [NSAttributedString.Key : Any] = [\n        .font: defaultFont,\n        .foregroundColor: NSColor (self.mLexicalStyleSnapShot.mDefaultColor),\n        .paragraphStyle : ps\n      ]\n      if self.mVerboseDebug { Swift.print (\"Apply default attributes \\(modifiedRange)\") }\n      inTextStorage.setAttributes (defaultAttributes, range: modifiedRange)\n    //--- Apply styles\n      var idx = 0\n      stop = false\n      while idx < self.mTokenArray.count, !stop { // Apply token styles\n        let token = self.mTokenArray [idx]\n        idx += 1\n        if token.range.lowerBound >= modifiedRange.upperBound {\n          stop = true\n        }else if token.range.upperBound > modifiedRange.lowerBound {\n          let styleIndex = Int (self.styleIndexFor (token: token.tokenCode))\n          if styleIndex > 0, styleIndex < (self.mLexicalStyleSnapShot.mAttributeArray.count - 1),\n             let attributes = self.mLexicalStyleSnapShot.mAttributeArray [styleIndex - 1] {\n            inTextStorage.addAttributes (attributes, range: token.range)\n          }\n        }\n      }\n      inTextStorage.endEditing ()\n      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate\n    }\n    if self.mDebug { Swift.print (\"  Adding attributes: \\(Int (Date ().timeIntervalSince (start2) * 1000.0)) ms\") }\n    ioPopupMenuItems = self.updateEntryPopUpButtons (self.mTokenArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Lexical analysis\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func parseLexicalTokenForLexicalColoring () -> LexicalToken {\n    var loop = true\n    var scanningOk = true\n") ;
  GGS_uint index_14870_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_14870 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_14870.hasCurrentObject ()) {
      result.appendString ("    self.mLexicalAttribute_") ;
      result.appendString (enumerator_14870.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_swiftInitializationCode (enumerator_14870.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 329)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_14870.gotoNextObject () ;
      index_14870_.increment () ;
    }
  }
  result.appendString ("    var tokenCode : UInt16 = 0\n    let startLocation = self.currentLocation\n") ;
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 334)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 334)).isValid ()) {
    result.incIndentation (int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 334)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 334)).uintValue ())) ;
  }
  GGS_uint index_15107_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    UpEnumerator__5B_abstractLexicalRuleAST_5D_ enumerator_15107 (in_LEXICAL_5F_RULE_5F_LIST) ;
    while (enumerator_15107.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_generateSwiftCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_15107.current_entry (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 336)).stringValue ()) ;
      enumerator_15107.gotoNextObject () ;
      index_15107_.increment () ;
    }
  }
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 334)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 334)).isValid ()) {
    result.incIndentation (- int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 334)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 334)).uintValue ())) ;
  }
  result.appendString ("if self.testForInputChar (0) { // End of source text \?\n      tokenCode = ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_ ; // Empty string code\n    }else{ // Unknown input character\n      tokenCode = ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n      self.advance ()\n    }\n    return LexicalToken (\n      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),\n      tokenCode: tokenCode,\n      templateDelimiterIndex: self.mEndTemplateDelimiterIndex\n    )\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n") ;
  GGS_uint index_15940_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ().isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_15940 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ()) ;
    while (enumerator_15940.hasCurrentObject ()) {
      const GalgasBool test_1 = enumerator_15940.current_mShouldBeGenerated (HERE).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n//             Key words table '") ;
        result.appendString (enumerator_15940.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("'      \n//--------------------------------------------------------------------------------------------------\n\nfileprivate let kDictionary_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 361)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_15940.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" : [String : UInt16] = [\n") ;
        GGS_uint index_16476_ (0) ;
        if (enumerator_15940.current_mTokenSortedList (HERE).isValid ()) {
          UpEnumerator_sortedTokenArray enumerator_16476 (enumerator_15940.current_mTokenSortedList (HERE)) ;
          while (enumerator_16476.hasCurrentObject ()) {
            result.appendString ("  ") ;
            result.appendString (enumerator_16476.current_entry (HERE).readProperty_mName ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 363)).stringValue ()) ;
            result.appendString (" : ") ;
            result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
            result.appendString ("_1_") ;
            result.appendString (enumerator_16476.current_entry (HERE).readProperty_mTerminalName ().getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 363)).stringValue ()) ;
            enumerator_16476.gotoNextObject () ;
            if (enumerator_16476.hasCurrentObject ()) {
              result.appendString (",\n") ;
            }
            index_16476_.increment () ;
          }
        }
        result.appendString ("\n]\n\nfileprivate func search_into_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 367)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_15940.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (_ inSearchedString : String) -> UInt16 {\n  return kDictionary_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 368)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_15940.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" [inSearchedString, default: ") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
        result.appendString ("_1_]\n}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_15940.gotoNextObject () ;
      index_15940_.increment () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier () -> String {\n  return \"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleNameFor (styleIndex inIndex : UInt8) -> String {\n  let kStyleArray : [String] = [\n    \"Default Style\", // 0\n  ]\n  return kStyleArray [Int (inIndex)]\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleIdentifierForEx (styleIndex inIndex : UInt8) -> String {\n  let kStyleArray : [String] = [\n  ]\n  return kStyleArray [Int (inIndex)]\n}\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 401)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("fileprivate let kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 402)).stringValue ()) ;
    result.appendString (" : [String] = [\n") ;
    GGS_uint index_18211_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      UpEnumerator__5B_templateReplacementAST_5D_ enumerator_18211 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
      while (enumerator_18211.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_18211.current_entry (HERE).readProperty_mMatchString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 405)).stringValue ()) ;
        enumerator_18211.gotoNextObject () ;
        if (enumerator_18211.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_18211_.increment () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 415)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("fileprivate let kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 416)).stringValue ()) ;
    result.appendString (" : [SWIFT_TemplateDelimiter] = [\n") ;
    GGS_uint index_18822_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      UpEnumerator__5B_templateDelimitorAST_5D_ enumerator_18822 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ()) ;
      while (enumerator_18822.hasCurrentObject ()) {
        result.appendString ("  SWIFT_TemplateDelimiter (startString: ") ;
        result.appendString (enumerator_18822.current_entry (HERE).readProperty_mStartString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 419)).stringValue ()) ;
        result.appendString (", endString: ") ;
        result.appendString (enumerator_18822.current_entry (HERE).readProperty_mEndString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 419)).stringValue ()) ;
        result.appendString (", discardStartString: ") ;
        result.appendString (enumerator_18822.current_entry (HERE).readProperty_mPreservesStartDelimiter ().operator_not (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 420)).getter_cString (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 420)).stringValue ()) ;
        result.appendString (")") ;
        enumerator_18822.gotoNextObject () ;
        if (enumerator_18822.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_18822_.increment () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N\n//--------------------------------------------------------------------------------------------------\n\nlet ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_ : UInt16 = 0\n") ;
  GGS_uint index_19506_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator__5B_terminalAST_5D_ enumerator_19506 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_19506.hasCurrentObject ()) {
      result.appendString ("let ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_19506.current_entry (HERE).readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 434)).stringValue ()) ;
      result.appendString (" : UInt16 = ") ;
      result.appendString (index_19506_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 434)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 434)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_19506.gotoNextObject () ;
      index_19506_idx.increment () ;
    }
  }
  result.appendString ("let ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR : UInt16 = ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 436)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 436)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 436)).stringValue ()) ;
  result.appendString ("\nlet ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE : UInt16 = ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 437)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 437)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 437)).stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//     @lexiqueGenerationTemplates generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueGenerationTemplates ("lexiqueGenerationTemplates",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueGenerationTemplates::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueGenerationTemplates ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @lexicalAttributeMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap::GGS_lexicalAttributeMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap::~ GGS_lexicalAttributeMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap::GGS_lexicalAttributeMap (const GGS_lexicalAttributeMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap & GGS_lexicalAttributeMap::operator = (const GGS_lexicalAttributeMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap GGS_lexicalAttributeMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalAttributeMap::getter_contains (const GGS_string & inKey
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalAttributeMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                        const GGS_uint & inLevel
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalAttributeMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalAttributeMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalAttributeMap::getter_locationForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_lexicalAttributeMap::getter_keyList (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalAttributeMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalAttributeMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::performInsert (const GGS_lexicalAttributeMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_lexicalAttributeMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>
GGS_lexicalAttributeMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalAttributeMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>>
GGS_lexicalAttributeMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_lexicalAttributeMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element_3F_ GGS_lexicalAttributeMap
::readSubcript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalAttributeMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_lexicalAttributeMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexicalAttributeMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLexicalType = info->mProperty_mLexicalType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap GGS_lexicalAttributeMap::class_func_mapWithMapToOverride (const GGS_lexicalAttributeMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalAttributeMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap GGS_lexicalAttributeMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lexicalAttributeMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::setter_insertKey (GGS_lstring inLKey,
                                                GGS_lexicalTypeEnum inArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_lexicalAttributeMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' lexical attribute has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::method_searchKey (GGS_lstring inLKey,
                                                GGS_lexicalTypeEnum & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' lexical attribute is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mLexicalType ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalAttributeMap::getter_mLexicalTypeForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lexicalTypeEnum result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLexicalType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::setter_setMLexicalTypeForKey (GGS_lexicalTypeEnum inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalAttributeMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLexicalType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_lexicalAttributeMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLexicalType:") ;
    inArray (i COMMA_HERE)->mProperty_mLexicalType.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @lexicalAttributeMap") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalAttributeMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_lexicalAttributeMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_lexicalAttributeMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexicalAttributeMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalAttributeMap::DownEnumerator_lexicalAttributeMap (const GGS_lexicalAttributeMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element DownEnumerator_lexicalAttributeMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalAttributeMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum DownEnumerator_lexicalAttributeMap::current_mLexicalType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexicalAttributeMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalAttributeMap::UpEnumerator_lexicalAttributeMap (const GGS_lexicalAttributeMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element UpEnumerator_lexicalAttributeMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalAttributeMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum UpEnumerator_lexicalAttributeMap::current_mLexicalType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalType ;
}


//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeMap ("lexicalAttributeMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalAttributeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeMap ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @lexicalMessageMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap::GGS_lexicalMessageMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap::~ GGS_lexicalMessageMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap::GGS_lexicalMessageMap (const GGS_lexicalMessageMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap & GGS_lexicalMessageMap::operator = (const GGS_lexicalMessageMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap GGS_lexicalMessageMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexicalMessageMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalMessageMap::getter_contains (const GGS_string & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalMessageMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalMessageMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalMessageMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalMessageMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_lexicalMessageMap::getter_keyList (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalMessageMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalMessageMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::performInsert (const GGS_lexicalMessageMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_lexicalMessageMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>
GGS_lexicalMessageMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalMessageMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>>
GGS_lexicalMessageMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_lexicalMessageMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element_3F_ GGS_lexicalMessageMap
::readSubcript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalMessageMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_lexicalMessageMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexicalMessageMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLexicalMessage = info->mProperty_mLexicalMessage ;
      element.mProperty_mMessageIsUsed = info->mProperty_mMessageIsUsed ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element GGS_lexicalMessageMap
::readSubcript__3F_searchKey (const GGS_lstring & inLKey,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) const {
  GGS_lexicalMessageMap_2E_element result ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> info = infoForKey (key) ;
    if (info.isNotNil ()) {
      result = info.value () ;
    }else{
      const char * kErrorMessage = "the '%K' message is not declared" ;
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kErrorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap GGS_lexicalMessageMap::class_func_mapWithMapToOverride (const GGS_lexicalMessageMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalMessageMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalMessageMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap GGS_lexicalMessageMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lexicalMessageMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::setter_insertKey (GGS_lstring inLKey,
                                              GGS_lstring inArgument0,
                                              GGS_bool inArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_lexicalMessageMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' message has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::method_searchKey (GGS_lstring inLKey,
                                              GGS_lstring & outArgument0,
                                              GGS_bool & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' message is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mLexicalMessage ;
    outArgument1 = info->mProperty_mMessageIsUsed ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::setter_replaceKey (GGS_lexicalMessageMap_2E_element inElement,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    const char * kReplaceErrorMessage = "the '%K' message is not declared" ;
    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalMessageMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (
        inElement.mProperty_lkey,
        nearestKeyArray,
        kReplaceErrorMessage
        COMMA_THERE
      ) ;
    }else{
      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>::make (inElement COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalMessageMap::getter_mLexicalMessageForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLexicalMessage ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalMessageMap::getter_mMessageIsUsedForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mMessageIsUsed ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::setter_setMLexicalMessageForKey (GGS_lstring inValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalMessageMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLexicalMessage = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::setter_setMMessageIsUsedForKey (GGS_bool inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalMessageMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mMessageIsUsed = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_lexicalMessageMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLexicalMessage:") ;
    inArray (i COMMA_HERE)->mProperty_mLexicalMessage.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mMessageIsUsed:") ;
    inArray (i COMMA_HERE)->mProperty_mMessageIsUsed.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @lexicalMessageMap") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalMessageMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_lexicalMessageMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_lexicalMessageMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexicalMessageMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalMessageMap::DownEnumerator_lexicalMessageMap (const GGS_lexicalMessageMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element DownEnumerator_lexicalMessageMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalMessageMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalMessageMap::current_mLexicalMessage (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_lexicalMessageMap::current_mMessageIsUsed (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMessageIsUsed ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexicalMessageMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalMessageMap::UpEnumerator_lexicalMessageMap (const GGS_lexicalMessageMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element UpEnumerator_lexicalMessageMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalMessageMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalMessageMap::current_mLexicalMessage (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_lexicalMessageMap::current_mMessageIsUsed (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMessageIsUsed ;
}


//--------------------------------------------------------------------------------------------------
//     @lexicalMessageMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalMessageMap ("lexicalMessageMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalMessageMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageMap ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @lexicalExplicitTokenListMapMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap::GGS_lexicalExplicitTokenListMapMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap::~ GGS_lexicalExplicitTokenListMapMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap::GGS_lexicalExplicitTokenListMapMap (const GGS_lexicalExplicitTokenListMapMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap & GGS_lexicalExplicitTokenListMapMap::operator = (const GGS_lexicalExplicitTokenListMapMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap GGS_lexicalExplicitTokenListMapMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMapMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalExplicitTokenListMapMap::getter_contains (const GGS_string & inKey
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalExplicitTokenListMapMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                   const GGS_uint & inLevel
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalExplicitTokenListMapMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalExplicitTokenListMapMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalExplicitTokenListMapMap::getter_locationForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_lexicalExplicitTokenListMapMap::getter_keyList (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalExplicitTokenListMapMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalExplicitTokenListMapMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::performInsert (const GGS_lexicalExplicitTokenListMapMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_lexicalExplicitTokenListMapMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>
GGS_lexicalExplicitTokenListMapMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalExplicitTokenListMapMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>>
GGS_lexicalExplicitTokenListMapMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_lexicalExplicitTokenListMapMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ GGS_lexicalExplicitTokenListMapMap
::readSubcript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexicalExplicitTokenListMapMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mExplicitTokenListMap = info->mProperty_mExplicitTokenListMap ;
      element.mProperty_mTokenSortedList = info->mProperty_mTokenSortedList ;
      element.mProperty_mShouldBeGenerated = info->mProperty_mShouldBeGenerated ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap GGS_lexicalExplicitTokenListMapMap::class_func_mapWithMapToOverride (const GGS_lexicalExplicitTokenListMapMap & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMapMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalExplicitTokenListMapMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap GGS_lexicalExplicitTokenListMapMap::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lexicalExplicitTokenListMapMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::setter_insertKey (GGS_lstring inLKey,
                                                           GGS_lexicalExplicitTokenListMap inArgument0,
                                                           GGS_sortedTokenArray inArgument1,
                                                           GGS_bool inArgument2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_lexicalExplicitTokenListMapMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' token list has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::method_searchKey (GGS_lstring inLKey,
                                                           GGS_lexicalExplicitTokenListMap & outArgument0,
                                                           GGS_sortedTokenArray & outArgument1,
                                                           GGS_bool & outArgument2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' token list is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mExplicitTokenListMap ;
    outArgument1 = info->mProperty_mTokenSortedList ;
    outArgument2 = info->mProperty_mShouldBeGenerated ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap GGS_lexicalExplicitTokenListMapMap::getter_mExplicitTokenListMapForKey (const GGS_string & inKey,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lexicalExplicitTokenListMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mExplicitTokenListMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_sortedTokenArray GGS_lexicalExplicitTokenListMapMap::getter_mTokenSortedListForKey (const GGS_string & inKey,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_sortedTokenArray result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mTokenSortedList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalExplicitTokenListMapMap::getter_mShouldBeGeneratedForKey (const GGS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mShouldBeGenerated ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::setter_setMExplicitTokenListMapForKey (GGS_lexicalExplicitTokenListMap inValue,
                                                                                GGS_string inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalExplicitTokenListMapMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mExplicitTokenListMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::setter_setMTokenSortedListForKey (GGS_sortedTokenArray inValue,
                                                                           GGS_string inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalExplicitTokenListMapMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mTokenSortedList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::setter_setMShouldBeGeneratedForKey (GGS_bool inValue,
                                                                             GGS_string inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalExplicitTokenListMapMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mShouldBeGenerated = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_lexicalExplicitTokenListMapMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mExplicitTokenListMap:") ;
    inArray (i COMMA_HERE)->mProperty_mExplicitTokenListMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mTokenSortedList:") ;
    inArray (i COMMA_HERE)->mProperty_mTokenSortedList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mShouldBeGenerated:") ;
    inArray (i COMMA_HERE)->mProperty_mShouldBeGenerated.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @lexicalExplicitTokenListMapMap") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalExplicitTokenListMapMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_lexicalExplicitTokenListMapMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_lexicalExplicitTokenListMapMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexicalExplicitTokenListMapMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalExplicitTokenListMapMap::DownEnumerator_lexicalExplicitTokenListMapMap (const GGS_lexicalExplicitTokenListMapMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element DownEnumerator_lexicalExplicitTokenListMapMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalExplicitTokenListMapMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap DownEnumerator_lexicalExplicitTokenListMapMap::current_mExplicitTokenListMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExplicitTokenListMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedTokenArray DownEnumerator_lexicalExplicitTokenListMapMap::current_mTokenSortedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTokenSortedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_lexicalExplicitTokenListMapMap::current_mShouldBeGenerated (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mShouldBeGenerated ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexicalExplicitTokenListMapMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalExplicitTokenListMapMap::UpEnumerator_lexicalExplicitTokenListMapMap (const GGS_lexicalExplicitTokenListMapMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element UpEnumerator_lexicalExplicitTokenListMapMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalExplicitTokenListMapMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap UpEnumerator_lexicalExplicitTokenListMapMap::current_mExplicitTokenListMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExplicitTokenListMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedTokenArray UpEnumerator_lexicalExplicitTokenListMapMap::current_mTokenSortedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTokenSortedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_lexicalExplicitTokenListMapMap::current_mShouldBeGenerated (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mShouldBeGenerated ;
}


//--------------------------------------------------------------------------------------------------
//     @lexicalExplicitTokenListMapMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ("lexicalExplicitTokenListMapMap",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExplicitTokenListMapMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_formalInputParameterAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterAST_5D_::GGS__5B_formalInputParameterAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterAST_5D_::GGS__5B_formalInputParameterAST_5D_ (const GGS__5B_formalInputParameterAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterAST_5D_ & GGS__5B_formalInputParameterAST_5D_::operator = (const GGS__5B_formalInputParameterAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterAST_5D_ GGS__5B_formalInputParameterAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_formalInputParameterAST_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterAST_5D_::plusPlusAssignOperation (const GGS_formalInputParameterAST & inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_formalInputParameterAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterAST_5D_ GGS__5B_formalInputParameterAST_5D_::add_operation (const GGS__5B_formalInputParameterAST_5D_ & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterAST_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterAST_5D_::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@formalInputParameterAST], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterAST_5D_::plusAssignOperation (const GGS__5B_formalInputParameterAST_5D_ inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterAST_5D_::setter_append (const GGS_formalInputParameterAST inValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterAST_5D_::setter_set (const GGS_formalInputParameterAST inValue,
                                                      const GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterAST_5D_::setter_insert (const GGS_formalInputParameterAST inValue,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterAST_5D_::setter_remove (GGS_formalInputParameterAST & outValue,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterAST_5D_::setter_removeFirst (GGS_formalInputParameterAST & outValue,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterAST_5D_::setter_removeLast (GGS_formalInputParameterAST & outValue,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterAST_5D_ GGS__5B_formalInputParameterAST_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterAST_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterAST_5D_ GGS__5B_formalInputParameterAST_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                         const GGS_uint & inLength,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterAST_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterAST GGS__5B_formalInputParameterAST_5D_::getter_first (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_formalInputParameterAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterAST GGS__5B_formalInputParameterAST_5D_::getter_last (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_formalInputParameterAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterAST GGS__5B_formalInputParameterAST_5D_::readSubcript__3F_ (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formalInputParameterAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_formalInputParameterAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_formalInputParameterAST_5D_::DownEnumerator__5B_formalInputParameterAST_5D_ (const GGS__5B_formalInputParameterAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterAST DownEnumerator__5B_formalInputParameterAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterAST DownEnumerator__5B_formalInputParameterAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_formalInputParameterAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_formalInputParameterAST_5D_::UpEnumerator__5B_formalInputParameterAST_5D_ (const GGS__5B_formalInputParameterAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterAST UpEnumerator__5B_formalInputParameterAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterAST UpEnumerator__5B_formalInputParameterAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[formalInputParameterAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_formalInputParameterAST_5D_ ("[formalInputParameterAST]",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_formalInputParameterAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_formalInputParameterAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterAST::GGS_formalInputParameterAST (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName (),
mProperty_mIsUnused (),
mProperty_mIsConstant () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterAST::GGS_formalInputParameterAST (const GGS_formalInputParameterAST & inSource) :
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentTypeName (inSource.mProperty_mFormalArgumentTypeName),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName),
mProperty_mIsUnused (inSource.mProperty_mIsUnused),
mProperty_mIsConstant (inSource.mProperty_mIsConstant) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterAST & GGS_formalInputParameterAST::operator = (const GGS_formalInputParameterAST & inSource) {
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentTypeName = inSource.mProperty_mFormalArgumentTypeName ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  mProperty_mIsUnused = inSource.mProperty_mIsUnused ;
  mProperty_mIsConstant = inSource.mProperty_mIsConstant ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formalInputParameterAST GGS_formalInputParameterAST::init_21__21__21__21__21_ (const GGS_lstring & in_mFormalSelector,
                                                                                   const GGS_lstring & in_mFormalArgumentTypeName,
                                                                                   const GGS_lstring & in_mFormalArgumentName,
                                                                                   const GGS_bool & in_mIsUnused,
                                                                                   const GGS_bool & in_mIsConstant,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalInputParameterAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentTypeName = in_mFormalArgumentTypeName ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_mIsUnused = in_mIsUnused ;
  result.mProperty_mIsConstant = in_mIsConstant ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterAST::GGS_formalInputParameterAST (const GGS_lstring & inOperand0,
                                                          const GGS_lstring & inOperand1,
                                                          const GGS_lstring & inOperand2,
                                                          const GGS_bool & inOperand3,
                                                          const GGS_bool & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentTypeName (inOperand1),
mProperty_mFormalArgumentName (inOperand2),
mProperty_mIsUnused (inOperand3),
mProperty_mIsConstant (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_formalInputParameterAST::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mIsUnused.isValid () && mProperty_mIsConstant.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterAST::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mIsUnused.drop () ;
  mProperty_mIsConstant.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formalInputParameterAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsUnused.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @formalInputParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalInputParameterAST ("formalInputParameterAST",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalInputParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterAST ;
}

//--------------------------------------------------------------------------------------------------
// @onceFunctionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_onceFunctionDeclarationAST::objectCompare (const GGS_onceFunctionDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST::GGS_onceFunctionDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_onceFunctionDeclarationAST GGS_onceFunctionDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                              const GGS_lstring & in_mGlobalConstanteName,
                                              const GGS_lstring & in_mResultTypeName,
                                              const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                              const GGS_location & in_mEndOfFunctionInstructionList,
                                              const GGS_bool & in_mIsPrivate,
                                              const GGS_bool & in_mIsUsefull,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cPtr_onceFunctionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_onceFunctionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->onceFunctionDeclarationAST_init_21_isPredefined_21__21__21__21__21__21_ (in_isPredefined, in_mGlobalConstanteName, in_mResultTypeName, in_mFunctionInstructionList, in_mEndOfFunctionInstructionList, in_mIsPrivate, in_mIsUsefull, inCompiler) ;
  const GGS_onceFunctionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::
onceFunctionDeclarationAST_init_21_isPredefined_21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                         const GGS_lstring & in_mGlobalConstanteName,
                                                                         const GGS_lstring & in_mResultTypeName,
                                                                         const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                                                         const GGS_location & in_mEndOfFunctionInstructionList,
                                                                         const GGS_bool & in_mIsPrivate,
                                                                         const GGS_bool & in_mIsUsefull,
                                                                         Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mGlobalConstanteName = in_mGlobalConstanteName ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsPrivate = in_mIsPrivate ;
  mProperty_mIsUsefull = in_mIsUsefull ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST::GGS_onceFunctionDeclarationAST (const cPtr_onceFunctionDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_onceFunctionDeclarationAST::readProperty_mGlobalConstanteName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mGlobalConstanteName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_onceFunctionDeclarationAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_onceFunctionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_onceFunctionDeclarationAST::readProperty_mEndOfFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_onceFunctionDeclarationAST::readProperty_mIsPrivate (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsPrivate ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_onceFunctionDeclarationAST::readProperty_mIsUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @onceFunctionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationAST::cPtr_onceFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mGlobalConstanteName (),
mProperty_mResultTypeName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsPrivate (),
mProperty_mIsUsefull () {
}

//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationAST::cPtr_onceFunctionDeclarationAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mGlobalConstanteName,
                                                                  const GGS_lstring & in_mResultTypeName,
                                                                  const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                                                  const GGS_location & in_mEndOfFunctionInstructionList,
                                                                  const GGS_bool & in_mIsPrivate,
                                                                  const GGS_bool & in_mIsUsefull,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mGlobalConstanteName (),
mProperty_mResultTypeName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsPrivate (),
mProperty_mIsUsefull () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mGlobalConstanteName = in_mGlobalConstanteName ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsPrivate = in_mIsPrivate ;
  mProperty_mIsUsefull = in_mIsUsefull ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_onceFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

void cPtr_onceFunctionDeclarationAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@onceFunctionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGlobalConstanteName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsPrivate.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsUsefull.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_onceFunctionDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationAST (mProperty_isPredefined, mProperty_mGlobalConstanteName, mProperty_mResultTypeName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionInstructionList, mProperty_mIsPrivate, mProperty_mIsUsefull, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_onceFunctionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mGlobalConstanteName.printNonNullClassInstanceProperties ("mGlobalConstanteName") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
    mProperty_mEndOfFunctionInstructionList.printNonNullClassInstanceProperties ("mEndOfFunctionInstructionList") ;
    mProperty_mIsPrivate.printNonNullClassInstanceProperties ("mIsPrivate") ;
    mProperty_mIsUsefull.printNonNullClassInstanceProperties ("mIsUsefull") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @onceFunctionDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ("onceFunctionDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_onceFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_onceFunctionDeclarationAST_2E_weak::objectCompare (const GGS_onceFunctionDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST_2E_weak::GGS_onceFunctionDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST_2E_weak & GGS_onceFunctionDeclarationAST_2E_weak::operator = (const GGS_onceFunctionDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST_2E_weak::GGS_onceFunctionDeclarationAST_2E_weak (const GGS_onceFunctionDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST_2E_weak GGS_onceFunctionDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_onceFunctionDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST GGS_onceFunctionDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_onceFunctionDeclarationAST result ;
  if (isValid ()) {
    const cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_onceFunctionDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST GGS_onceFunctionDeclarationAST_2E_weak::bang_onceFunctionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_onceFunctionDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_onceFunctionDeclarationAST) ;
      result = GGS_onceFunctionDeclarationAST ((cPtr_onceFunctionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @onceFunctionDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST_2E_weak ("onceFunctionDeclarationAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_onceFunctionDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//  Enum xcodeProject
//--------------------------------------------------------------------------------------------------

GGS_xcodeProject::GGS_xcodeProject (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_xcodeProject GGS_xcodeProject::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_xcodeProject result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xcodeProject GGS_xcodeProject::class_func_swiftApp (UNUSED_LOCATION_ARGS) {
  GGS_xcodeProject result ;
  result.mEnum = Enumeration::enum_swiftApp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_xcodeProject [3] = {
  "(not built)",
  "none",
  "swiftApp"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_xcodeProject::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_xcodeProject::getter_isSwiftApp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_swiftApp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_xcodeProject::description (String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @xcodeProject: ") ;
  ioString.appendCString (gEnumNameArrayFor_xcodeProject [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xcodeProject::objectCompare (const GGS_xcodeProject & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @xcodeProject generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xcodeProject ("xcodeProject",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xcodeProject::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xcodeProject ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyle::GGS_sortedLexicalStyle (void) :
mProperty_name (),
mProperty_comment (),
mProperty_index () {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyle::GGS_sortedLexicalStyle (const GGS_sortedLexicalStyle & inSource) :
mProperty_name (inSource.mProperty_name),
mProperty_comment (inSource.mProperty_comment),
mProperty_index (inSource.mProperty_index) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyle & GGS_sortedLexicalStyle::operator = (const GGS_sortedLexicalStyle & inSource) {
  mProperty_name = inSource.mProperty_name ;
  mProperty_comment = inSource.mProperty_comment ;
  mProperty_index = inSource.mProperty_index ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_sortedLexicalStyle GGS_sortedLexicalStyle::init_21__21__21_ (const GGS_string & in_name,
                                                                 const GGS_string & in_comment,
                                                                 const GGS_uint & in_index,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sortedLexicalStyle result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_comment = in_comment ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedLexicalStyle::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyle::GGS_sortedLexicalStyle (const GGS_string & inOperand0,
                                                const GGS_string & inOperand1,
                                                const GGS_uint & inOperand2) :
mProperty_name (inOperand0),
mProperty_comment (inOperand1),
mProperty_index (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_sortedLexicalStyle::isValid (void) const {
  return mProperty_name.isValid () && mProperty_comment.isValid () && mProperty_index.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedLexicalStyle::drop (void) {
  mProperty_name.drop () ;
  mProperty_comment.drop () ;
  mProperty_index.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedLexicalStyle::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sortedLexicalStyle:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_comment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_index.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @sortedLexicalStyle generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedLexicalStyle ("sortedLexicalStyle",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sortedLexicalStyle::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedLexicalStyle ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@sortedLexicalStyleArray' array
//--------------------------------------------------------------------------------------------------

static int32_t compareForSorting_sortedLexicalStyleArray (const GGS_sortedLexicalStyle & inLeft,
                                                          const GGS_sortedLexicalStyle & inRight) {
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = inLeft.mProperty_index.objectCompare (inRight.mProperty_index) ;
  }
  return int32_t (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyleArray::GGS_sortedLexicalStyleArray (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyleArray::GGS_sortedLexicalStyleArray (const GGS_sortedLexicalStyleArray & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyleArray & GGS_sortedLexicalStyleArray::operator = (const GGS_sortedLexicalStyleArray & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyleArray GGS_sortedLexicalStyleArray::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sortedLexicalStyleArray result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedLexicalStyleArray::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedLexicalStyleArray::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedLexicalStyleArray::plusPlusAssignOperation (const GGS_sortedLexicalStyle & inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_sortedLexicalStyleArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_sortedLexicalStyleArray::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyleArray GGS_sortedLexicalStyleArray::add_operation (const GGS_sortedLexicalStyleArray & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sortedLexicalStyleArray result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
    result.mSharedArray.quickSortUsingFunction (compareForSorting_sortedLexicalStyleArray) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedLexicalStyleArray::description (String & ioString,
                                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@sortedLexicalStyle], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedLexicalStyleArray::plusAssignOperation (const GGS_sortedLexicalStyleArray inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_sortedLexicalStyleArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedLexicalStyleArray::setter_append (const GGS_sortedLexicalStyle inValue,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_sortedLexicalStyleArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedLexicalStyleArray::setter_removeAll (Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedLexicalStyleArray::setter_remove (GGS_sortedLexicalStyle & outValue,
                                                 const GGS_uint inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedLexicalStyleArray::setter_removeFirst (GGS_sortedLexicalStyle & outValue,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedLexicalStyleArray::setter_removeLast (GGS_sortedLexicalStyle & outValue,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyleArray GGS_sortedLexicalStyleArray::getter_removingFirst (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_sortedLexicalStyleArray result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS_sortedLexicalStyleArray::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyleArray GGS_sortedLexicalStyleArray::getter_sublist (const GGS_uint & inStartIndex,
                                                                         const GGS_uint & inLength,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_sortedLexicalStyleArray result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS_sortedLexicalStyleArray::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS_sortedLexicalStyleArray::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyle GGS_sortedLexicalStyleArray::getter_first (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_sortedLexicalStyle result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyle GGS_sortedLexicalStyleArray::getter_last (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_sortedLexicalStyle result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyle GGS_sortedLexicalStyleArray::readSubcript__3F_ (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_sortedLexicalStyle result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @sortedLexicalStyleArray
//--------------------------------------------------------------------------------------------------

DownEnumerator_sortedLexicalStyleArray::DownEnumerator_sortedLexicalStyleArray (const GGS_sortedLexicalStyleArray & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyle DownEnumerator_sortedLexicalStyleArray::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyle DownEnumerator_sortedLexicalStyleArray::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @sortedLexicalStyleArray
//--------------------------------------------------------------------------------------------------

UpEnumerator_sortedLexicalStyleArray::UpEnumerator_sortedLexicalStyleArray (const GGS_sortedLexicalStyleArray & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyle UpEnumerator_sortedLexicalStyleArray::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedLexicalStyle UpEnumerator_sortedLexicalStyleArray::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @sortedLexicalStyleArray generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedLexicalStyleArray ("sortedLexicalStyleArray",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sortedLexicalStyleArray::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedLexicalStyleArray ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'lexicalTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const RegularFileWrapper * gWrapperAllFiles_lexicalTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const DirectoryWrapper * gWrapperAllDirectories_lexicalTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const DirectoryWrapper gWrapperDirectory_0_lexicalTemplates (
  "",
  0,
  gWrapperAllFiles_lexicalTemplates_0,
  0,
  gWrapperAllDirectories_lexicalTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexicalTemplates swiftUILexicalStyles'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexicalTemplates_swiftUILexicalStyles (Compiler * /* inCompiler */,
                                                                      const GGS_sortedLexicalStyleArray & in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   EDITOR SETTING VIEW\n//--------------------------------------------------------------------------------------------------\n\nimport SwiftUI\n\n//--------------------------------------------------------------------------------------------------\n\nstruct EditorSettingView : View {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @State private var mUnused = false\n\n  @AppStorage(\"FontForSource\")\n  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))\n\n  @AppStorage(\"LineHeightForSource\")\n  private var mLineHeight : Int = 12\n\n  @AppStorage(\"ColorForSource\")\n  private var mDefaultColor : Color = .black\n\n") ;
  GGS_uint index_853_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY.isValid ()) {
    UpEnumerator_sortedLexicalStyleArray enumerator_853 (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY) ;
    while (enumerator_853.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(\"ColorForSource-") ;
      result.appendString (enumerator_853.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\")\n  private var mColorFor_") ;
      result.appendString (enumerator_853.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" : Color = .black\n\n  @AppStorage(\"BoldForSource-") ;
      result.appendString (enumerator_853.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\")\n  private var mBoldFor_") ;
      result.appendString (enumerator_853.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" : Bool = false\n\n  @AppStorage(\"ItalicForSource-") ;
      result.appendString (enumerator_853.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\")\n  private var mItalicFor_") ;
      result.appendString (enumerator_853.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" : Bool = false\n\n") ;
      enumerator_853.gotoNextObject () ;
      index_853_.increment () ;
    }
  }
  result.appendString ("\n  @AppStorage(\"ColorForSource_lexical_error\")\n  private var mColorFor_lexical_error : Color = .red\n\n  @AppStorage(\"BoldForSource_lexical_error\")\n  private var mBoldFor_lexical_error : Bool = false\n\n  @AppStorage(\"ItalicForSource_lexical_error\")\n  private var mItalicFor_lexical_error : Bool = false\n\n  @AppStorage(\"ColorForSourceForSource_template\")\n  private var mColorFor_template : Color = .gray\n\n  @AppStorage(\"BoldForSource_template\")\n  private var mBoldFor_template : Bool = false\n\n  @AppStorage(\"ItalicForSource_template\")\n  private var mItalicFor_template : Bool = false\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var body : some View {\n    Form {\n      LabeledContent (\"Font\") { CustomFontPicker (fontBinding: self.$mFont) }\n      Picker(\"Line Height\", selection: self.$mLineHeight) {\n        Text(\"1.0\").tag(10)\n        Text(\"1.1\").tag(11)\n        Text(\"1.2\").tag(12)\n        Text(\"1.5\").tag(15)\n        Text(\"1.7\").tag(17)\n        Text(\"2.0\").tag(20)\n      }.pickerStyle(.automatic)\n      LabeledContent (\"Default Color\") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mDefaultColor).labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mUnused).hidden () // Hidden, unused\n          Toggle (\"Italic\", isOn: self.$mUnused).hidden () // Hidden, unused\n        }\n      }\n") ;
  GGS_uint index_2567_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY.isValid ()) {
    UpEnumerator_sortedLexicalStyleArray enumerator_2567 (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY) ;
    while (enumerator_2567.hasCurrentObject ()) {
      result.appendString ("      LabeledContent (") ;
      result.appendString (enumerator_2567.current_entry (HERE).readProperty_comment ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexicalStyles.swift.galgasTemplate", 74)).stringValue ()) ;
      result.appendString (") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_") ;
      result.appendString (enumerator_2567.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (").labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_") ;
      result.appendString (enumerator_2567.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (")\n          Toggle (\"Italic\", isOn: self.$mItalicFor_") ;
      result.appendString (enumerator_2567.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (")\n        }\n      }\n") ;
      enumerator_2567.gotoNextObject () ;
      index_2567_.increment () ;
    }
  }
  result.appendString ("      LabeledContent (\"Lexical Error\") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_lexical_error).labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_lexical_error)\n          Toggle (\"Italic\", isOn: self.$mItalicFor_lexical_error)\n        }\n      }\n      LabeledContent (\"Template\") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_template).labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_template)\n          Toggle (\"Italic\", isOn: self.$mItalicFor_template)\n        }\n      }\n    }.padding (20)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstruct LexicalStyleSnapShot {\n  fileprivate(set) var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))\n  fileprivate(set) var mLineHeight : Int = 12\n  fileprivate(set) var mDefaultColor : Color = .black\n") ;
  GGS_uint index_3982_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY.isValid ()) {
    UpEnumerator_sortedLexicalStyleArray enumerator_3982 (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY) ;
    while (enumerator_3982.hasCurrentObject ()) {
      result.appendString ("  fileprivate var mColorFor_") ;
      result.appendString (enumerator_3982.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" : Color = .black\n  fileprivate var mBoldFor_") ;
      result.appendString (enumerator_3982.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" : Bool = false\n  fileprivate var mItalicFor_") ;
      result.appendString (enumerator_3982.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" : Bool = false\n") ;
      enumerator_3982.gotoNextObject () ;
      index_3982_.increment () ;
    }
  }
  result.appendString ("  fileprivate var mColorFor_lexical_error : Color = .red\n  fileprivate var mBoldFor_lexical_error : Bool = false\n  fileprivate var mItalicFor_lexical_error : Bool = false\n  fileprivate var mColorFor_template : Color = .gray\n  fileprivate var mBoldFor_template : Bool = false\n  fileprivate var mItalicFor_template : Bool = false\n  fileprivate(set) var mAttributeArray = [[NSAttributedString.Key : Any]\?] ()\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc stylesDidChange (_ ioLexicalStyleSnapShot : inout LexicalStyleSnapShot) -> Bool {\n  var didChange = false\n  let ud = UserDefaults.standard\n  if let s = ud.string (forKey: \"FontForSource\"), let v = CustomFont (rawValue: s) {\n    if ioLexicalStyleSnapShot.mFont != v {\n      ioLexicalStyleSnapShot.mFont = v\n      didChange = true\n    }\n  }\n  if let s = ud.string (forKey: \"LineHeightForSource\"), let v = Int (s) {\n    if ioLexicalStyleSnapShot.mLineHeight != v {\n      ioLexicalStyleSnapShot.mLineHeight = v\n      didChange = true\n    }\n  }\n  if let s = ud.string (forKey: \"ColorForSource\"), let v = Color (rawValue: s) {\n    if ioLexicalStyleSnapShot.mDefaultColor != v {\n      ioLexicalStyleSnapShot.mDefaultColor = v\n      didChange = true\n    }\n  }\n") ;
  GGS_uint index_5476_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY.isValid ()) {
    UpEnumerator_sortedLexicalStyleArray enumerator_5476 (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY) ;
    while (enumerator_5476.hasCurrentObject ()) {
      result.appendString ("  if let s = ud.string (forKey: \"ColorForSource-") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\"), let v = Color (rawValue: s) {\n    if ioLexicalStyleSnapShot.mColorFor_") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" != v {\n      ioLexicalStyleSnapShot.mColorFor_") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" = v\n      didChange = true\n    }\n  }\n  if ud.string (forKey: \"BoldForSource-") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\") != nil {\n    let v = ud.bool (forKey: \"BoldForSource-") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\")\n    if ioLexicalStyleSnapShot.mBoldFor_") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" != v {\n      ioLexicalStyleSnapShot.mBoldFor_") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" = v\n      didChange = true\n    }\n  }\n  if ud.string (forKey: \"ItalicForSource-") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\") != nil {\n    let v = ud.bool (forKey: \"ItalicForSource-") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\")\n    if ioLexicalStyleSnapShot.mItalicFor_") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" != v {\n      ioLexicalStyleSnapShot.mItalicFor_") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" = v\n      didChange = true\n    }\n  }\n") ;
      enumerator_5476.gotoNextObject () ;
      index_5476_.increment () ;
    }
  }
  result.appendString ("    if let s = ud.string (forKey: \"ColorFor_lexical_error\"), let v = Color (rawValue: s) {\n    if ioLexicalStyleSnapShot.mColorFor_lexical_error != v {\n      ioLexicalStyleSnapShot.mColorFor_lexical_error = v\n      didChange = true\n    }\n  }\n  if ud.string (forKey: \"BoldFor_lexical_error\") != nil {\n    let v = ud.bool (forKey: \"BoldFor_lexical_error\")\n    if ioLexicalStyleSnapShot.mBoldFor_lexical_error != v {\n      ioLexicalStyleSnapShot.mBoldFor_lexical_error = v\n      didChange = true\n    }\n  }\n  if ud.string (forKey: \"ItalicFor_lexical_error\") != nil {\n    let v = ud.bool (forKey: \"ItalicFor_lexical_error\")\n    if ioLexicalStyleSnapShot.mItalicFor_lexical_error != v {\n      ioLexicalStyleSnapShot.mItalicFor_lexical_error = v\n      didChange = true\n    }\n  }\n  if let s = ud.string (forKey: \"ColorFor_template\"), let v = Color (rawValue: s) {\n    if ioLexicalStyleSnapShot.mColorFor_template != v {\n      ioLexicalStyleSnapShot.mColorFor_template = v\n      didChange = true\n    }\n  }\n  if ud.string (forKey: \"BoldFor_template\") != nil {\n    let v = ud.bool (forKey: \"BoldFor_template\")\n    if ioLexicalStyleSnapShot.mBoldFor_template != v {\n      ioLexicalStyleSnapShot.mBoldFor_template = v\n      didChange = true\n    }\n  }\n  if ud.string (forKey: \"ItalicFor_template\") != nil {\n    let v = ud.bool (forKey: \"ItalicFor_template\")\n    if ioLexicalStyleSnapShot.mItalicFor_template != v {\n      ioLexicalStyleSnapShot.mItalicFor_template = v\n      didChange = true\n    }\n  }\n//--- Update mAttributeArray \?\n  if didChange {\n    let fontManager = NSFontManager.shared\n    let boldFont = fontManager.convert (ioLexicalStyleSnapShot.mFont.nsFont, toHaveTrait: .boldFontMask)\n    let italicFont = fontManager.convert (ioLexicalStyleSnapShot.mFont.nsFont, toHaveTrait: .italicFontMask)\n    let boldItalicFont = fontManager.convert (boldFont, toHaveTrait: .italicFontMask)\n    ioLexicalStyleSnapShot.mAttributeArray.removeAll (keepingCapacity: true)\n    var attributes = [NSAttributedString.Key : Any] ()\n") ;
  GGS_uint index_8339_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY.isValid ()) {
    UpEnumerator_sortedLexicalStyleArray enumerator_8339 (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY) ;
    while (enumerator_8339.hasCurrentObject ()) {
      result.appendString ("  //--- Attributes for ") ;
      result.appendString (enumerator_8339.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\n    if ioLexicalStyleSnapShot.mColorFor_") ;
      result.appendString (enumerator_8339.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" != ioLexicalStyleSnapShot.mDefaultColor {\n      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_") ;
      result.appendString (enumerator_8339.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (")\n    }\n    if ioLexicalStyleSnapShot.mBoldFor_") ;
      result.appendString (enumerator_8339.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" && ioLexicalStyleSnapShot.mItalicFor_") ;
      result.appendString (enumerator_8339.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" {\n      attributes [.font] = boldItalicFont\n    }else if ioLexicalStyleSnapShot.mBoldFor_") ;
      result.appendString (enumerator_8339.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" {\n      attributes [.font] = boldFont\n    }else if ioLexicalStyleSnapShot.mItalicFor_") ;
      result.appendString (enumerator_8339.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" {\n      attributes [.font] = italicFont\n    }\n    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty \? nil : attributes)\n    attributes.removeAll (keepingCapacity: true)\n") ;
      enumerator_8339.gotoNextObject () ;
      index_8339_.increment () ;
    }
  }
  result.appendString ("  //--- Lexical error\n    if ioLexicalStyleSnapShot.mColorFor_lexical_error != ioLexicalStyleSnapShot.mDefaultColor {\n      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_lexical_error)\n    }\n    if ioLexicalStyleSnapShot.mBoldFor_lexical_error && ioLexicalStyleSnapShot.mItalicFor_lexical_error {\n      attributes [.font] = boldItalicFont\n    }else if ioLexicalStyleSnapShot.mBoldFor_lexical_error {\n      attributes [.font] = boldFont\n    }else if ioLexicalStyleSnapShot.mItalicFor_lexical_error {\n      attributes [.font] = italicFont\n    }\n    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty \? nil : attributes)\n    attributes.removeAll (keepingCapacity: true)\n  //--- Template\n    if ioLexicalStyleSnapShot.mColorFor_template != ioLexicalStyleSnapShot.mDefaultColor {\n      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_template)\n    }\n    if ioLexicalStyleSnapShot.mBoldFor_template && ioLexicalStyleSnapShot.mItalicFor_template {\n      attributes [.font] = boldItalicFont\n    }else if ioLexicalStyleSnapShot.mBoldFor_template {\n      attributes [.font] = boldFont\n    }else if ioLexicalStyleSnapShot.mItalicFor_template {\n      attributes [.font] = italicFont\n    }\n    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty \? nil : attributes)\n  }\n//---\n  return didChange\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTemplates::GGS_lexicalTemplates (void) :
AC_GALGAS_root (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTemplates GGS_lexicalTemplates::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTemplates result = GGS_lexicalTemplates () ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTemplates::description (String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("<filewrapper @lexicalTemplates:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    ioString.appendCString (">") ;
  }
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @lexicalTemplates swiftUILexicalStyles
//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexicalTemplates::class_func_swiftUILexicalStyles (const GGS_sortedLexicalStyleArray & in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   EDITOR SETTING VIEW\n//--------------------------------------------------------------------------------------------------\n\nimport SwiftUI\n\n//--------------------------------------------------------------------------------------------------\n\nstruct EditorSettingView : View {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @State private var mUnused = false\n\n  @AppStorage(\"FontForSource\")\n  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))\n\n  @AppStorage(\"LineHeightForSource\")\n  private var mLineHeight : Int = 12\n\n  @AppStorage(\"ColorForSource\")\n  private var mDefaultColor : Color = .black\n\n") ;
  GGS_uint index_853_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY.isValid ()) {
    UpEnumerator_sortedLexicalStyleArray enumerator_853 (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY) ;
    while (enumerator_853.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(\"ColorForSource-") ;
      result.appendString (enumerator_853.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\")\n  private var mColorFor_") ;
      result.appendString (enumerator_853.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" : Color = .black\n\n  @AppStorage(\"BoldForSource-") ;
      result.appendString (enumerator_853.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\")\n  private var mBoldFor_") ;
      result.appendString (enumerator_853.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" : Bool = false\n\n  @AppStorage(\"ItalicForSource-") ;
      result.appendString (enumerator_853.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\")\n  private var mItalicFor_") ;
      result.appendString (enumerator_853.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" : Bool = false\n\n") ;
      enumerator_853.gotoNextObject () ;
      index_853_.increment () ;
    }
  }
  result.appendString ("\n  @AppStorage(\"ColorForSource_lexical_error\")\n  private var mColorFor_lexical_error : Color = .red\n\n  @AppStorage(\"BoldForSource_lexical_error\")\n  private var mBoldFor_lexical_error : Bool = false\n\n  @AppStorage(\"ItalicForSource_lexical_error\")\n  private var mItalicFor_lexical_error : Bool = false\n\n  @AppStorage(\"ColorForSourceForSource_template\")\n  private var mColorFor_template : Color = .gray\n\n  @AppStorage(\"BoldForSource_template\")\n  private var mBoldFor_template : Bool = false\n\n  @AppStorage(\"ItalicForSource_template\")\n  private var mItalicFor_template : Bool = false\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var body : some View {\n    Form {\n      LabeledContent (\"Font\") { CustomFontPicker (fontBinding: self.$mFont) }\n      Picker(\"Line Height\", selection: self.$mLineHeight) {\n        Text(\"1.0\").tag(10)\n        Text(\"1.1\").tag(11)\n        Text(\"1.2\").tag(12)\n        Text(\"1.5\").tag(15)\n        Text(\"1.7\").tag(17)\n        Text(\"2.0\").tag(20)\n      }.pickerStyle(.automatic)\n      LabeledContent (\"Default Color\") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mDefaultColor).labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mUnused).hidden () // Hidden, unused\n          Toggle (\"Italic\", isOn: self.$mUnused).hidden () // Hidden, unused\n        }\n      }\n") ;
  GGS_uint index_2567_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY.isValid ()) {
    UpEnumerator_sortedLexicalStyleArray enumerator_2567 (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY) ;
    while (enumerator_2567.hasCurrentObject ()) {
      result.appendString ("      LabeledContent (") ;
      result.appendString (enumerator_2567.current_entry (HERE).readProperty_comment ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexicalStyles.swift.galgasTemplate", 74)).stringValue ()) ;
      result.appendString (") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_") ;
      result.appendString (enumerator_2567.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (").labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_") ;
      result.appendString (enumerator_2567.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (")\n          Toggle (\"Italic\", isOn: self.$mItalicFor_") ;
      result.appendString (enumerator_2567.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (")\n        }\n      }\n") ;
      enumerator_2567.gotoNextObject () ;
      index_2567_.increment () ;
    }
  }
  result.appendString ("      LabeledContent (\"Lexical Error\") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_lexical_error).labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_lexical_error)\n          Toggle (\"Italic\", isOn: self.$mItalicFor_lexical_error)\n        }\n      }\n      LabeledContent (\"Template\") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_template).labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_template)\n          Toggle (\"Italic\", isOn: self.$mItalicFor_template)\n        }\n      }\n    }.padding (20)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstruct LexicalStyleSnapShot {\n  fileprivate(set) var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))\n  fileprivate(set) var mLineHeight : Int = 12\n  fileprivate(set) var mDefaultColor : Color = .black\n") ;
  GGS_uint index_3982_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY.isValid ()) {
    UpEnumerator_sortedLexicalStyleArray enumerator_3982 (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY) ;
    while (enumerator_3982.hasCurrentObject ()) {
      result.appendString ("  fileprivate var mColorFor_") ;
      result.appendString (enumerator_3982.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" : Color = .black\n  fileprivate var mBoldFor_") ;
      result.appendString (enumerator_3982.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" : Bool = false\n  fileprivate var mItalicFor_") ;
      result.appendString (enumerator_3982.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" : Bool = false\n") ;
      enumerator_3982.gotoNextObject () ;
      index_3982_.increment () ;
    }
  }
  result.appendString ("  fileprivate var mColorFor_lexical_error : Color = .red\n  fileprivate var mBoldFor_lexical_error : Bool = false\n  fileprivate var mItalicFor_lexical_error : Bool = false\n  fileprivate var mColorFor_template : Color = .gray\n  fileprivate var mBoldFor_template : Bool = false\n  fileprivate var mItalicFor_template : Bool = false\n  fileprivate(set) var mAttributeArray = [[NSAttributedString.Key : Any]\?] ()\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc stylesDidChange (_ ioLexicalStyleSnapShot : inout LexicalStyleSnapShot) -> Bool {\n  var didChange = false\n  let ud = UserDefaults.standard\n  if let s = ud.string (forKey: \"FontForSource\"), let v = CustomFont (rawValue: s) {\n    if ioLexicalStyleSnapShot.mFont != v {\n      ioLexicalStyleSnapShot.mFont = v\n      didChange = true\n    }\n  }\n  if let s = ud.string (forKey: \"LineHeightForSource\"), let v = Int (s) {\n    if ioLexicalStyleSnapShot.mLineHeight != v {\n      ioLexicalStyleSnapShot.mLineHeight = v\n      didChange = true\n    }\n  }\n  if let s = ud.string (forKey: \"ColorForSource\"), let v = Color (rawValue: s) {\n    if ioLexicalStyleSnapShot.mDefaultColor != v {\n      ioLexicalStyleSnapShot.mDefaultColor = v\n      didChange = true\n    }\n  }\n") ;
  GGS_uint index_5476_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY.isValid ()) {
    UpEnumerator_sortedLexicalStyleArray enumerator_5476 (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY) ;
    while (enumerator_5476.hasCurrentObject ()) {
      result.appendString ("  if let s = ud.string (forKey: \"ColorForSource-") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\"), let v = Color (rawValue: s) {\n    if ioLexicalStyleSnapShot.mColorFor_") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" != v {\n      ioLexicalStyleSnapShot.mColorFor_") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" = v\n      didChange = true\n    }\n  }\n  if ud.string (forKey: \"BoldForSource-") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\") != nil {\n    let v = ud.bool (forKey: \"BoldForSource-") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\")\n    if ioLexicalStyleSnapShot.mBoldFor_") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" != v {\n      ioLexicalStyleSnapShot.mBoldFor_") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" = v\n      didChange = true\n    }\n  }\n  if ud.string (forKey: \"ItalicForSource-") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\") != nil {\n    let v = ud.bool (forKey: \"ItalicForSource-") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\")\n    if ioLexicalStyleSnapShot.mItalicFor_") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" != v {\n      ioLexicalStyleSnapShot.mItalicFor_") ;
      result.appendString (enumerator_5476.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" = v\n      didChange = true\n    }\n  }\n") ;
      enumerator_5476.gotoNextObject () ;
      index_5476_.increment () ;
    }
  }
  result.appendString ("    if let s = ud.string (forKey: \"ColorFor_lexical_error\"), let v = Color (rawValue: s) {\n    if ioLexicalStyleSnapShot.mColorFor_lexical_error != v {\n      ioLexicalStyleSnapShot.mColorFor_lexical_error = v\n      didChange = true\n    }\n  }\n  if ud.string (forKey: \"BoldFor_lexical_error\") != nil {\n    let v = ud.bool (forKey: \"BoldFor_lexical_error\")\n    if ioLexicalStyleSnapShot.mBoldFor_lexical_error != v {\n      ioLexicalStyleSnapShot.mBoldFor_lexical_error = v\n      didChange = true\n    }\n  }\n  if ud.string (forKey: \"ItalicFor_lexical_error\") != nil {\n    let v = ud.bool (forKey: \"ItalicFor_lexical_error\")\n    if ioLexicalStyleSnapShot.mItalicFor_lexical_error != v {\n      ioLexicalStyleSnapShot.mItalicFor_lexical_error = v\n      didChange = true\n    }\n  }\n  if let s = ud.string (forKey: \"ColorFor_template\"), let v = Color (rawValue: s) {\n    if ioLexicalStyleSnapShot.mColorFor_template != v {\n      ioLexicalStyleSnapShot.mColorFor_template = v\n      didChange = true\n    }\n  }\n  if ud.string (forKey: \"BoldFor_template\") != nil {\n    let v = ud.bool (forKey: \"BoldFor_template\")\n    if ioLexicalStyleSnapShot.mBoldFor_template != v {\n      ioLexicalStyleSnapShot.mBoldFor_template = v\n      didChange = true\n    }\n  }\n  if ud.string (forKey: \"ItalicFor_template\") != nil {\n    let v = ud.bool (forKey: \"ItalicFor_template\")\n    if ioLexicalStyleSnapShot.mItalicFor_template != v {\n      ioLexicalStyleSnapShot.mItalicFor_template = v\n      didChange = true\n    }\n  }\n//--- Update mAttributeArray \?\n  if didChange {\n    let fontManager = NSFontManager.shared\n    let boldFont = fontManager.convert (ioLexicalStyleSnapShot.mFont.nsFont, toHaveTrait: .boldFontMask)\n    let italicFont = fontManager.convert (ioLexicalStyleSnapShot.mFont.nsFont, toHaveTrait: .italicFontMask)\n    let boldItalicFont = fontManager.convert (boldFont, toHaveTrait: .italicFontMask)\n    ioLexicalStyleSnapShot.mAttributeArray.removeAll (keepingCapacity: true)\n    var attributes = [NSAttributedString.Key : Any] ()\n") ;
  GGS_uint index_8339_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY.isValid ()) {
    UpEnumerator_sortedLexicalStyleArray enumerator_8339 (in_LEXICAL_5F_STYLE_5F_SORTED_5F_ARRAY) ;
    while (enumerator_8339.hasCurrentObject ()) {
      result.appendString ("  //--- Attributes for ") ;
      result.appendString (enumerator_8339.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString ("\n    if ioLexicalStyleSnapShot.mColorFor_") ;
      result.appendString (enumerator_8339.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" != ioLexicalStyleSnapShot.mDefaultColor {\n      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_") ;
      result.appendString (enumerator_8339.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (")\n    }\n    if ioLexicalStyleSnapShot.mBoldFor_") ;
      result.appendString (enumerator_8339.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" && ioLexicalStyleSnapShot.mItalicFor_") ;
      result.appendString (enumerator_8339.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" {\n      attributes [.font] = boldItalicFont\n    }else if ioLexicalStyleSnapShot.mBoldFor_") ;
      result.appendString (enumerator_8339.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" {\n      attributes [.font] = boldFont\n    }else if ioLexicalStyleSnapShot.mItalicFor_") ;
      result.appendString (enumerator_8339.current_entry (HERE).readProperty_name ().stringValue ()) ;
      result.appendString (" {\n      attributes [.font] = italicFont\n    }\n    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty \? nil : attributes)\n    attributes.removeAll (keepingCapacity: true)\n") ;
      enumerator_8339.gotoNextObject () ;
      index_8339_.increment () ;
    }
  }
  result.appendString ("  //--- Lexical error\n    if ioLexicalStyleSnapShot.mColorFor_lexical_error != ioLexicalStyleSnapShot.mDefaultColor {\n      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_lexical_error)\n    }\n    if ioLexicalStyleSnapShot.mBoldFor_lexical_error && ioLexicalStyleSnapShot.mItalicFor_lexical_error {\n      attributes [.font] = boldItalicFont\n    }else if ioLexicalStyleSnapShot.mBoldFor_lexical_error {\n      attributes [.font] = boldFont\n    }else if ioLexicalStyleSnapShot.mItalicFor_lexical_error {\n      attributes [.font] = italicFont\n    }\n    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty \? nil : attributes)\n    attributes.removeAll (keepingCapacity: true)\n  //--- Template\n    if ioLexicalStyleSnapShot.mColorFor_template != ioLexicalStyleSnapShot.mDefaultColor {\n      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_template)\n    }\n    if ioLexicalStyleSnapShot.mBoldFor_template && ioLexicalStyleSnapShot.mItalicFor_template {\n      attributes [.font] = boldItalicFont\n    }else if ioLexicalStyleSnapShot.mBoldFor_template {\n      attributes [.font] = boldFont\n    }else if ioLexicalStyleSnapShot.mItalicFor_template {\n      attributes [.font] = italicFont\n    }\n    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty \? nil : attributes)\n  }\n//---\n  return didChange\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//     @lexicalTemplates generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTemplates ("lexicalTemplates",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalTemplates::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTemplates ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'targetGalgas3GenerationFileWrapper'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'makefile-arm64-linux-on-macosx' directory

static const RegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_6 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-arm64-linux-on-macosx' directory

static const DirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_6 [1] = {
  nullptr
} ;

//--- Directory 'makefile-arm64-linux-on-macosx'

const DirectoryWrapper gWrapperDirectory_6_targetGalgas_33_GenerationFileWrapper (
  "makefile-arm64-linux-on-macosx",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_6,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_6
) ;

//--- All files of 'makefile-macosx' directory

static const RegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-macosx' directory

static const DirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_1 [1] = {
  nullptr
} ;

//--- Directory 'makefile-macosx'

const DirectoryWrapper gWrapperDirectory_1_targetGalgas_33_GenerationFileWrapper (
  "makefile-macosx",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_1,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_1
) ;

//--- All files of 'makefile-unix' directory

static const RegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_5 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-unix' directory

static const DirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_5 [1] = {
  nullptr
} ;

//--- Directory 'makefile-unix'

const DirectoryWrapper gWrapperDirectory_5_targetGalgas_33_GenerationFileWrapper (
  "makefile-unix",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_5,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_5
) ;

//--- All files of 'makefile-win32-on-macosx' directory

static const RegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-win32-on-macosx' directory

static const DirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_2 [1] = {
  nullptr
} ;

//--- Directory 'makefile-win32-on-macosx'

const DirectoryWrapper gWrapperDirectory_2_targetGalgas_33_GenerationFileWrapper (
  "makefile-win32-on-macosx",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_2,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_2
) ;

//--- All files of 'makefile-x86linux32-on-macosx' directory

static const RegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_8 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-x86linux32-on-macosx' directory

static const DirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_8 [1] = {
  nullptr
} ;

//--- Directory 'makefile-x86linux32-on-macosx'

const DirectoryWrapper gWrapperDirectory_8_targetGalgas_33_GenerationFileWrapper (
  "makefile-x86linux32-on-macosx",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_8,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_8
) ;

//--- All files of 'makefile-x86linux64-on-macosx' directory

static const RegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_7 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-x86linux64-on-macosx' directory

static const DirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_7 [1] = {
  nullptr
} ;

//--- Directory 'makefile-x86linux64-on-macosx'

const DirectoryWrapper gWrapperDirectory_7_targetGalgas_33_GenerationFileWrapper (
  "makefile-x86linux64-on-macosx",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_7,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_7
) ;

//--- File 'project-xcode-swiftui/adding-icons-to-your-application.rtf'

const char * gWrapperFileContent_0_targetGalgas_33_GenerationFileWrapper = 
  "{\\rtf1\\ansi\\ansicpg1252\\cocoartf1138\\cocoasubrtf510\n"
  "{\\fonttbl\\f0\\fnil\\fcharset0 GillSans;\\f1\\fnil\\fcharset128 HiraKakuProN-W3;}\n"
  "{\\colortbl;\\red255\\green255\\blue255;}\n"
  "\\paperw11900\\paperh16840\\margl1440\\margr1440\\vieww14100\\viewh8520\\viewkind0\n"
  "\\pard\\tx566\\tx1133\\tx1700\\tx2267\\tx2834\\tx3401\\tx3968\\tx4535\\tx5102\\tx5669\\tx6236\\tx6803\\pardirnatural\n"
  "\n"
  "\\f0\\fs28 \\cf0 By default, your Cocoa application has no associated icon.\\\n"
  "\\\n"
  "For adding an icon for your application and your documents :\\\n"
  "\\\n"
  "\n"
  "\\f1\\b \\'87\\'40\n"
  "\\f0  Create an 'userResources' folder in the 'project_xcode' folder.\n"
  "\\b0 \\\n"
  "\\\n"
  "\\pard\\tx566\\tx1133\\tx1700\\tx2267\\tx2834\\tx3401\\tx3968\\tx4535\\tx5102\\tx5669\\tx6236\\tx6803\\pardirnatural\n"
  "\n"
  "\\f1\\b \\cf0 \\'87\\'41\n"
  "\\f0  For application icon : \n"
  "\\b0 add an icon file named 'application_icns.icns'.\\\n"
  "\\\n"
  "\n"
  "\\f1\\b \\'87\\'42\n"
  "\\f0  For every document type : \n"
  "\\b0 add an icon file whose name is based upon the source file extension : \n"
  "\\i 'extension\n"
  "\\i0 _icns.icns'.\\\n"
  "\\\n"
  "\\pard\\tx566\\tx1133\\tx1700\\tx2267\\tx2834\\tx3401\\tx3968\\tx4535\\tx5102\\tx5669\\tx6236\\tx6803\\pardirnatural\n"
  "\n"
  "\\b \\cf0 So :\\\n"
  "\n"
  "\\b0 \\\n"
  "\\pard\\tx566\\tx1133\\tx1700\\tx2267\\tx2834\\tx3401\\tx3968\\tx4535\\tx5102\\tx5669\\tx6236\\tx6803\\pardirnatural\n"
  "\\cf0 At the next galgas compilation, theses icons will be added automatically to the Xcode project.\\\n"
  "}" ;

const RegularFileWrapper gWrapperFile_0_targetGalgas_33_GenerationFileWrapper (
  "adding-icons-to-your-application.rtf",
  "rtf",
  true, // Text file
 1274, // Text length
  gWrapperFileContent_0_targetGalgas_33_GenerationFileWrapper
) ;

//--- File 'Base.lproj/Credits.rtf'

const char * gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper = 
  "{\\rtf1\\mac\\ansicpg10000\\cocoartf824\\cocoasubrtf380\n"
  "{\\fonttbl\\f0\\fswiss\\fcharset77 Helvetica-Bold;}\n"
  "{\\colortbl;\\red255\\green255\\blue255;}\n"
  "\\vieww9000\\viewh8400\\viewkind0\n"
  "\\pard\\tx560\\tx1120\\tx1680\\tx2240\\tx2800\\tx3360\\tx3920\\tx4480\\tx5040\\tx5600\\tx6160\\tx6720\\ql\\qnatural\n"
  "\n"
  "\\f0\\b\\fs24 \\cf0 GALGAS Cocoa Project\\\n"
  "}\n"
   ;

const RegularFileWrapper gWrapperFile_1_targetGalgas_33_GenerationFileWrapper (
  "Credits.rtf",
  "rtf",
  true, // Text file
 310, // Text length
  gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper
) ;

//--- All files of 'Base.lproj' directory

static const RegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_4 [2] = {
  & gWrapperFile_1_targetGalgas_33_GenerationFileWrapper,
  nullptr
} ;

//--- All sub-directories of 'Base.lproj' directory

static const DirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_4 [1] = {
  nullptr
} ;

//--- Directory 'Base.lproj'

const DirectoryWrapper gWrapperDirectory_4_targetGalgas_33_GenerationFileWrapper (
  "Base.lproj",
  1,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_4,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_4
) ;

//--- All files of 'project-xcode-swiftui' directory

static const RegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_3 [2] = {
  & gWrapperFile_0_targetGalgas_33_GenerationFileWrapper,
  nullptr
} ;

//--- All sub-directories of 'project-xcode-swiftui' directory

static const DirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_3 [2] = {
  & gWrapperDirectory_4_targetGalgas_33_GenerationFileWrapper,
  nullptr
} ;

//--- Directory 'project-xcode-swiftui'

const DirectoryWrapper gWrapperDirectory_3_targetGalgas_33_GenerationFileWrapper (
  "project-xcode-swiftui",
  1,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_3,
  1,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_3
) ;

//--- All files of '' directory

static const RegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const DirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_0 [8] = {
  & gWrapperDirectory_6_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_1_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_5_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_2_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_8_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_7_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_3_targetGalgas_33_GenerationFileWrapper,
  nullptr
} ;

//--- Directory ''

const DirectoryWrapper gWrapperDirectory_0_targetGalgas_33_GenerationFileWrapper (
  "",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_0,
  7,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (Compiler * /* inCompiler */,
                                                                                      const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (Compiler * /* inCompiler */,
                                                                                      const GGS_string & in_PROJECT_5F_NAME,
                                                                                      const GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom macosx_gcc_tools import buildForMacOS\n#----------------------------------------------------------------- Build\nbuildForMacOS (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_macosx (Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (Compiler * /* inCompiler */,
                                                                                    const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (Compiler * /* inCompiler */,
                                                                                    const GGS_string & in_PROJECT_5F_NAME,
                                                                                    const GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom unix_gcc_tools import buildForUnix\n#----------------------------------------------------------------- Build\nbuildForUnix (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_unix (Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper install_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"install-release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                   const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                   const GGS_string & in_PROJECT_5F_NAME,
                                                                                                                   const GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom x86linux_on_macosx_gcc_tools_32 import buildForLinux32OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForLinux32OnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                   const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                   const GGS_string & in_PROJECT_5F_NAME,
                                                                                                                   const GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom x86linux_on_macosx_gcc_tools_64 import buildForLinux64OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForLinux64OnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                        const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                        const GGS_string & in_PROJECT_5F_NAME,
                                                                                                        const GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom mingw32_on_macosx_gcc_tools import buildForWin32OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForWin32OnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                 const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                 const GGS_string & in_PROJECT_5F_NAME,
                                                                                                                 const GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom arm64linux_on_macosx_gcc_tools import buildForArm64LinuxOnMacOSX\n#----------------------------------------------------------------- Build\nbuildForArm64LinuxOnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper codeblocks_project'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (Compiler * /* inCompiler */,
                                                                                            const GGS_string & in_PROJECT_5F_NAME,
                                                                                            const GGS__5B_string_5D_ & in_TOOL_5F_CPP_5F_FILE_5F_LIST,
                                                                                            const GGS_string & in_LIBPM_5F_PATH,
                                                                                            const GGS__5B_string_5D_ & in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST,
                                                                                            const GGS_string & in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY,
                                                                                            const GGS_bool & in_GENERATE_5F_FOR_5F_WINDOWS,
                                                                                            const GGS_string & in_PLATFORM,
                                                                                            const GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<\?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\" \?>\n<CodeBlocks_project_file>\n <FileVersion major=\"1\" minor=\"6\" />\n <Project>\n  <Option title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" />\n  <Option pch_mode=\"0\" />\n  <Option compiler=\"gcc\" />\n  <Build>\n   <Target title=\"Release\">\n    <Option platforms=\"") ;
  result.appendString (in_PLATFORM.stringValue ()) ;
  result.appendString (";\" />\n    <Option output=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  const GalgasBool test_0 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (GGS_string (".exe").stringValue ()) ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\" prefix_auto=\"0\" extension_auto=\"0\" />\n    <Option object_output=\"objects\" />\n    <Option type=\"1\" />\n    <Option compiler=\"gcc\" />\n    <Option projectResourceIncludeDirsRelation=\"1\" />\n    <Compiler>\n     <Add option=\"-fomit-frame-pointer\" />\n     <Add option=\"-O2\" />\n     <Add option=\"-Wnon-virtual-dtor\" />\n     <Add option=\"-Winit-self\" />\n     <Add option=\"-Wredundant-decls\" />\n     <Add option=\"-Wundef\" />\n     <Add option=\"-Wmissing-include-dirs\" />\n     <Add option=\"-Weffc++\" />\n     <Add option=\"-std=c++17\" />\n     <Add option=\"-Wshadow\" />\n     <Add option=\"-Wall\" />\n     <Add option=\"-W\" />\n     <Add option=\"-DDO_NOT_GENERATE_CHECKINGS\" />\n     ") ;
  const GalgasBool test_1 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString (GGS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />\n").stringValue ()) ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    </Compiler>\n   </Target>\n   <Target title=\"Debug\">\n    <Option platforms=\"") ;
  result.appendString (in_PLATFORM.stringValue ()) ;
  result.appendString (";\" />\n    <Option output=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-debug") ;
  const GalgasBool test_2 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString (GGS_string (".exe").stringValue ()) ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\" prefix_auto=\"0\" extension_auto=\"0\" />\n    <Option object_output=\"objects_debug\" />\n    <Option deps_output=\".deps_debug\" />\n    <Option type=\"1\" />\n    <Option compiler=\"gcc\" />\n    <Option projectResourceIncludeDirsRelation=\"1\" />\n    <Compiler>\n     <Add option=\"-g\" />\n     <Add option=\"-Wnon-virtual-dtor\" />\n     <Add option=\"-Winit-self\" />\n     <Add option=\"-Wredundant-decls\" />\n     <Add option=\"-Wundef\" />\n     <Add option=\"-Winline\" />\n     <Add option=\"-Wmissing-include-dirs\" />\n     <Add option=\"-Weffc++\" />\n     <Add option=\"-std=c++17\" />\n     <Add option=\"-Wshadow\" />\n     <Add option=\"-Wall\" />\n     <Add option=\"-W\" />\n     ") ;
  const GalgasBool test_3 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString (GGS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />\n").stringValue ()) ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    </Compiler>\n   </Target>\n  </Build>\n  <VirtualTargets>\n   <Add alias=\"All\" targets=\"Release;Debug;\" />\n  </VirtualTargets>\n  <Compiler>\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/generic-arraies\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/streams\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/time\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities\" />\n   <Add directory=\"../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/user-headers\" />\n   <Add directory=\"../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output\" />\n   <Add directory=\"") ;
  result.appendString (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY.stringValue ()) ;
  result.appendString ("\" />\n  </Compiler>\n  <Linker>\n") ;
  const GalgasBool test_4 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString (GGS_string ("   <Add option=\"-static\" />\n   <Add library=\"Comdlg32\" />\n").stringValue ()) ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("</Linker>\n") ;
  GGS_uint index_3005_ (0) ;
  if (in_TOOL_5F_CPP_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_3005 (in_TOOL_5F_CPP_5F_FILE_5F_LIST) ;
    while (enumerator_3005.hasCurrentObject ()) {
      result.appendString ("  <Unit filename=\"../") ;
      result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
      result.appendString ("/output/") ;
      result.appendString (enumerator_3005.current_entry (HERE).stringValue ()) ;
      result.appendString ("\" />\n") ;
      enumerator_3005.gotoNextObject () ;
      index_3005_.increment () ;
    }
  }
  GGS_uint index_3125_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_3125 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST) ;
    while (enumerator_3125.hasCurrentObject ()) {
      result.appendString ("  <Unit filename=\"../") ;
      result.appendString (enumerator_3125.current_entry (HERE).stringValue ()) ;
      result.appendString ("\" />\n") ;
      enumerator_3125.gotoNextObject () ;
      index_3125_.increment () ;
    }
  }
  result.appendString ("   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/AbstractCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/BoolCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/UIntCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/StringCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/analyzeCommandLineOptions.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/F_mainForLIBPM.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-add.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-bit.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-chunk-operations.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-constructors.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-conversions.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-divide.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-logic-operations.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-multiply.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-print.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-shifts.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-subtract.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-utilities.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-add.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-bit.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-chunk-operations.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-constructors.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-conversions.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-divide-naive.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-divide.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-logic-operations.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-multiply.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-print.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-shifts.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-subtract.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-utilities.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/ChunkSharedArray.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/UInt128.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd/BinaryDecisionDiagram.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd/BinaryDecisionDiagramRelationSingleType.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd/BinaryDecisionDiagramRelationConfiguration.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd/BinaryDecisionDiagramRelation.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files/FileManager.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files/AbstractFileHandle.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files/TextFileWrite.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files/HTMLFileWrite.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files/BinaryFileWrite.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/streams/AbstractOutputStream.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/streams/ColoredConsole.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/streams/ConsoleOut.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings/utf32.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings/String-class-getters.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings/String-class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings/HTMLString.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings/print.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/time/Timer.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/time/DateTime.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/PrologueEpilogue.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/SharedObject.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/U8Data.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/F_DisplayException.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/macroAssert.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/F_GetPrime.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/MF_MemoryControl.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/cpp-allocation.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/basic-allocation.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/UInt32Set.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/DirectedGraph.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/md5.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/SHA256.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/galgas-random.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/execution-mode.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/filewrapper-utilities.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/Compiler.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/Lexique.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/Lexique-parsing.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/LocationInSource.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/SourceTextInString.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_TypeDescriptor.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/galgas-input-output.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/C_galgas_class_inspector.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/IssueWithFixIt.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/Enumerator_range.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/IndexingDictionary.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/IssueDescriptor.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/LexiqueIntrospection.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_root.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_reference_class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_enumAssociatedValues.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AbstractPtrClass.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AbstractStrongPtrClass.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/PtrWeakReferenceProxy.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_weak_reference.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/PtrObject.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/scanner_actions.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_application.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_bigint.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_binaryset.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_bool.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_char.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_data.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_f64.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_filewrapper.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_location.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_sint.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_s64.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_string.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_string-getters.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_stringset.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_timer.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_u8.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_u16.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_uint.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_u64.cpp\" />\n  <Extensions>\n   <code_completion />\n   <envvars />\n   <debugger />\n   <lib_finder disable_auto=\"1\" />\n  </Extensions>\n </Project>\n</CodeBlocks_project_file>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_info_plist'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (Compiler * /* inCompiler */,
                                                                                                const GGS_string & in_PROJECT_5F_NAME,
                                                                                                const GGS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                                                const GGS_string & in_VERSION_5F_STRING,
                                                                                                const GGS_stringset & in_HANDLED_5F_EXTENSION_5F_SET,
                                                                                                const GGS_string & in_MACOSX_5F_DEPLOYMENT_5F_TARGET,
                                                                                                const GGS_string & /* in_DOCUMENT_5F_CLASS */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n<plist version=\"1.0\">\n<dict>\n <key>CFBundleDevelopmentRegion</key>\n <string>English</string>\n <key>CFBundleExecutable</key>\n <string>${EXECUTABLE_NAME}</string>\n <key>CFBundleIconFile</key>\n <string>application_icns</string>\n <key>CFBundleIdentifier</key>\n <string>") ;
  result.appendString (in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</string>\n <key>CFBundleInfoDictionaryVersion</key>\n <string>6.0</string>\n <key>CFBundleName</key>\n <string>${PRODUCT_NAME}</string>\n <key>CFBundlePackageType</key>\n <string>APPL</string>\n <key>LSMinimumSystemVersion</key>\n <string>") ;
  result.appendString (in_MACOSX_5F_DEPLOYMENT_5F_TARGET.stringValue ()) ;
  result.appendString ("</string>\n <key>CFBundleShortVersionString</key>\n <string>") ;
  result.appendString (in_VERSION_5F_STRING.stringValue ()) ;
  result.appendString ("</string>\n <key>NSMainNibFile</key>\n <string>MainMenu</string>\n <key>NSPrincipalClass</key>\n <string>NSApplication</string>\n <key>CFBundleDocumentTypes</key>\n <array>\n") ;
  GGS_uint index_986_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_986 (in_HANDLED_5F_EXTENSION_5F_SET) ;
    while (enumerator_986.hasCurrentObject ()) {
      result.appendString ("  <dict>\n			<key>CFBundleTypeIconFile</key>\n			<string>") ;
      result.appendString (enumerator_986.current_key (HERE).stringValue ()) ;
      result.appendString ("_icns</string>\n      <key>CFBundleTypeIconSystemGenerated</key>\n      <integer>0</integer>\n      <key>CFBundleTypeName</key>\n      <string>") ;
      result.appendString (enumerator_986.current_key (HERE).stringValue ()) ;
      result.appendString (" Source</string>\n      <key>CFBundleTypeRole</key>\n      <string>Editor</string>\n      <key>LSHandlerRank</key>\n      <string>Default</string>\n      <key>LSItemContentTypes</key>\n      <array>\n        <string>$(PRODUCT_BUNDLE_IDENTIFIER).") ;
      result.appendString (enumerator_986.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n      </array>\n  </dict>\n") ;
      enumerator_986.gotoNextObject () ;
      index_986_.increment () ;
    }
  }
  result.appendString ("\n </array>\n <key>UTExportedTypeDeclarations</key>\n <array>\n") ;
  GGS_uint index_1575_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_1575 (in_HANDLED_5F_EXTENSION_5F_SET) ;
    while (enumerator_1575.hasCurrentObject ()) {
      result.appendString ("  <dict>\n    <key>UTTypeConformsTo</key>\n    <array>\n      <string>public.text</string>\n    </array>\n    <key>UTTypeDescription</key>\n    <string>") ;
      result.appendString (enumerator_1575.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n    <key>UTTypeIcons</key>\n    <dict>\n      <key>UTTypeIconBadgeName</key>\n      <string>") ;
      result.appendString (enumerator_1575.current_key (HERE).stringValue ()) ;
      result.appendString ("_icns</string>\n    </dict>\n    <key>UTTypeIdentifier</key>\n    <string>$(PRODUCT_BUNDLE_IDENTIFIER).") ;
      result.appendString (enumerator_1575.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n    <key>UTTypeTagSpecification</key>\n    <dict>\n      <key>public.filename-extension</key>\n      <array>\n        <string>") ;
      result.appendString (enumerator_1575.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n      </array>\n    </dict>\n  </dict>\n") ;
      enumerator_1575.gotoNextObject () ;
      index_1575_.increment () ;
    }
  }
  result.appendString ("\n </array>\n</dict>\n</plist>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_build_xcode'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#!/bin/sh\ncd `dirname $0` && xcodebuild -alltargets -configuration Default\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_info_plist_strings'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (Compiler * /* inCompiler */,
                                                                                                           const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("/* Localized versions of Info.plist keys */\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper json_file_list'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (Compiler * /* inCompiler */,
                                                                                           const GGS_stringset & in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET,
                                                                                           const GGS__5B_string_5D_ & in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST,
                                                                                           const GGS__5B_string_5D_ & in_MAKEFILE_5F_FILE_5F_LIST,
                                                                                           const GGS__5B_string_5D_ & in_TOOL_5F_LINK_5F_LIST,
                                                                                           const GGS_string & in_LIBPM_5F_DIRECTORY_5F_PATH,
                                                                                           const GGS_string & in_RELATIVE_5F_BUILD_5F_DIR
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("{ \"LIBPM_DIRECTORY_PATH\" : \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("\",\n  \"SOURCES_DIR\" : [\n     \"../") ;
  result.appendString (in_RELATIVE_5F_BUILD_5F_DIR.stringValue ()) ;
  result.appendString ("/output\",\n     \"../") ;
  result.appendString (in_RELATIVE_5F_BUILD_5F_DIR.stringValue ()) ;
  result.appendString ("/user-headers\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/files\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/generic-arraies\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/streams\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/strings\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/time\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities\"") ;
  GGS_uint index_623_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_623 (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET) ;
    while (enumerator_623.hasCurrentObject ()) {
      result.appendString (",\n         \"") ;
      result.appendString (enumerator_623.current_key (HERE).stringValue ()) ;
      result.appendString ("\"") ;
      enumerator_623.gotoNextObject () ;
      index_623_.increment () ;
    }
  }
  result.appendString ("\n  ],\n  \"SOURCES\" : [\n") ;
  GGS_uint index_719_ (0) ;
  if (in_MAKEFILE_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_719 (in_MAKEFILE_5F_FILE_5F_LIST) ;
    while (enumerator_719.hasCurrentObject ()) {
      result.appendString ("    \"") ;
      result.appendString (enumerator_719.current_entry (HERE).stringValue ()) ;
      result.appendString ("\",\n") ;
      enumerator_719.gotoNextObject () ;
      index_719_.increment () ;
    }
  }
  GGS_uint index_797_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_797 (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST) ;
    while (enumerator_797.hasCurrentObject ()) {
      result.appendString ("    \"") ;
      result.appendString (enumerator_797.current_entry (HERE).stringValue ()) ;
      result.appendString ("\",\n") ;
      enumerator_797.gotoNextObject () ;
      index_797_.increment () ;
    }
  }
  result.appendString ("    \"AbstractCommandLineOption.cpp\",\n    \"BoolCommandLineOption.cpp\",\n    \"UIntCommandLineOption.cpp\",\n    \"StringCommandLineOption.cpp\",\n    \"analyzeCommandLineOptions.cpp\",\n    \"F_mainForLIBPM.cpp\",\n    \"BinaryDecisionDiagram.cpp\",\n    \"BinaryDecisionDiagramRelationSingleType.cpp\",\n    \"BinaryDecisionDiagramRelationConfiguration.cpp\",\n    \"BinaryDecisionDiagramRelation.cpp\",\n    \"FileManager.cpp\",\n    \"AbstractFileHandle.cpp\",\n    \"TextFileWrite.cpp\",\n    \"HTMLFileWrite.cpp\",\n    \"BinaryFileWrite.cpp\",\n    \"AbstractOutputStream.cpp\",\n    \"ColoredConsole.cpp\",\n    \"ConsoleOut.cpp\",\n    \"utf32.cpp\",\n    \"String-class-getters.cpp\",\n    \"String-class.cpp\",\n    \"HTMLString.cpp\",\n    \"print.cpp\",\n    \"Timer.cpp\",\n    \"DateTime.cpp\",\n    \"PrologueEpilogue.cpp\",\n    \"SharedObject.cpp\",\n    \"BigSigned-add.cpp\",\n    \"BigSigned-bit.cpp\",\n    \"BigSigned-chunk-operations.cpp\",\n    \"BigSigned-constructors.cpp\",\n    \"BigSigned-conversions.cpp\",\n    \"BigSigned-divide.cpp\",\n    \"BigSigned-logic-operations.cpp\",\n    \"BigSigned-multiply.cpp\",\n    \"BigSigned-print.cpp\",\n    \"BigSigned-shifts.cpp\",\n    \"BigSigned-subtract.cpp\",\n    \"BigSigned-utilities.cpp\",\n    \"BigSigned.cpp\",\n    \"BigUnsigned-add.cpp\",\n    \"BigUnsigned-bit.cpp\",\n    \"BigUnsigned-chunk-operations.cpp\",\n    \"BigUnsigned-constructors.cpp\",\n    \"BigUnsigned-conversions.cpp\",\n    \"BigUnsigned-divide-naive.cpp\",\n    \"BigUnsigned-divide.cpp\",\n    \"BigUnsigned-logic-operations.cpp\",\n    \"BigUnsigned-multiply.cpp\",\n    \"BigUnsigned-print.cpp\",\n    \"BigUnsigned-shifts.cpp\",\n    \"BigUnsigned-subtract.cpp\",\n    \"BigUnsigned-utilities.cpp\",\n    \"ChunkSharedArray.cpp\",\n    \"UInt128.cpp\",\n    \"U8Data.cpp\",\n    \"F_DisplayException.cpp\",\n    \"macroAssert.cpp\",\n    \"F_GetPrime.cpp\",\n    \"MF_MemoryControl.cpp\",\n    \"cpp-allocation.cpp\",\n    \"basic-allocation.cpp\",\n    \"UInt32Set.cpp\",\n    \"DirectedGraph.cpp\",\n    \"md5.cpp\",\n    \"SHA256.cpp\",\n    \"galgas-random.cpp\",\n    \"execution-mode.cpp\",\n    \"filewrapper-utilities.cpp\",\n    \"Compiler.cpp\",\n    \"Lexique.cpp\",\n    \"Lexique-parsing.cpp\",\n    \"LocationInSource.cpp\",\n    \"SourceTextInString.cpp\",\n    \"GALGAS_TypeDescriptor.cpp\",\n    \"galgas-input-output.cpp\",\n    \"C_galgas_class_inspector.cpp\",\n    \"IssueWithFixIt.cpp\",\n    \"Enumerator_range.cpp\",\n    \"IndexingDictionary.cpp\",\n    \"IssueDescriptor.cpp\",\n    \"LexiqueIntrospection.cpp\",\n    \"AC_GALGAS_root.cpp\",\n    \"AC_GALGAS_reference_class.cpp\",\n    \"AC_GALGAS_enumAssociatedValues.cpp\",\n    \"AbstractPtrClass.cpp\",\n    \"AbstractStrongPtrClass.cpp\",\n    \"PtrWeakReferenceProxy.cpp\",\n    \"AC_GALGAS_weak_reference.cpp\",\n    \"scanner_actions.cpp\",\n    \"GGS_application.cpp\",\n    \"GGS_bigint.cpp\",\n    \"GGS_binaryset.cpp\",\n    \"GGS_bool.cpp\",\n    \"GGS_char.cpp\",\n    \"GGS_data.cpp\",\n    \"GGS_f64.cpp\",\n    \"GGS_filewrapper.cpp\",\n    \"GGS_location.cpp\",\n    \"GGS_sint.cpp\",\n    \"GGS_s64.cpp\",\n    \"GGS_string.cpp\",\n    \"GGS_string-getters.cpp\",\n    \"GGS_stringset.cpp\",\n    \"GGS_timer.cpp\",\n    \"GGS_u8.cpp\",\n    \"GGS_u16.cpp\",\n    \"GGS_uint.cpp\",\n    \"GGS_u64.cpp\"\n  ],\n  \"USER_LINK_OPTIONS\" : [") ;
  GGS_uint index_3934_ (0) ;
  if (in_TOOL_5F_LINK_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_3934 (in_TOOL_5F_LINK_5F_LIST) ;
    while (enumerator_3934.hasCurrentObject ()) {
      result.appendString ("\n    \"") ;
      result.appendString (enumerator_3934.current_entry (HERE).stringValue ()) ;
      result.appendString ("\"") ;
      enumerator_3934.gotoNextObject () ;
      if (enumerator_3934.hasCurrentObject ()) {
        result.appendString (",") ;
      }
      index_3934_.increment () ;
    }
  }
  result.appendString ("\n  ]\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper project_header'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (Compiler * /* inCompiler */,
                                                                                        const GGS_string & in_VERSION_5F_STRING
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//     Project common header file                                                                \n//\n//--------------------------------------------------------------------------------------------------\n\n#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#define PROJECT_VERSION_STRING \"") ;
  result.appendString (in_VERSION_5F_STRING.stringValue ()) ;
  result.appendString ("\"\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_targetGalgas_33_GenerationFileWrapper::GGS_targetGalgas_33_GenerationFileWrapper (void) :
AC_GALGAS_root (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_targetGalgas_33_GenerationFileWrapper GGS_targetGalgas_33_GenerationFileWrapper::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_targetGalgas_33_GenerationFileWrapper result = GGS_targetGalgas_33_GenerationFileWrapper () ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_targetGalgas_33_GenerationFileWrapper::description (String & ioString,
                                                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("<filewrapper @targetGalgas3GenerationFileWrapper:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    ioString.appendCString (">") ;
  }
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper clean_macosx
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_macosx (const GGS_string & /* in_PROJECT_5F_NAME */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_macosx
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_macosx (const GGS_string & in_PROJECT_5F_NAME,
                                                                                  const GGS_string & in_BUILD_5F_DIR_5F_NAME,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom macosx_gcc_tools import buildForMacOS\n#----------------------------------------------------------------- Build\nbuildForMacOS (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_verbose_macosx
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_macosx (Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_debug_macosx
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_macosx (Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_release_macosx
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_release_5F_macosx (Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_lto_macosx
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_macosx (Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper clean_unix
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_unix (const GGS_string & /* in_PROJECT_5F_NAME */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_unix
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_unix (const GGS_string & in_PROJECT_5F_NAME,
                                                                                const GGS_string & in_BUILD_5F_DIR_5F_NAME,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom unix_gcc_tools import buildForUnix\n#----------------------------------------------------------------- Build\nbuildForUnix (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_verbose_unix
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_unix (Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_debug_unix
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_unix (Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_release_unix
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_release_5F_unix (Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_lto_unix
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_unix (Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper install_unix
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_install_5F_unix (Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"install-release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper clean_x86linux32_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (const GGS_string & /* in_PROJECT_5F_NAME */,
                                                                                                               Compiler * /* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_x86linux32_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (const GGS_string & in_PROJECT_5F_NAME,
                                                                                                               const GGS_string & in_BUILD_5F_DIR_5F_NAME,
                                                                                                               Compiler * /* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom x86linux_on_macosx_gcc_tools_32 import buildForLinux32OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForLinux32OnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_verbose_x86linux32_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_debug_x86linux32_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_release_x86linux32_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_lto_x86linux32_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper clean_x86linux64_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (const GGS_string & /* in_PROJECT_5F_NAME */,
                                                                                                               Compiler * /* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_x86linux64_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (const GGS_string & in_PROJECT_5F_NAME,
                                                                                                               const GGS_string & in_BUILD_5F_DIR_5F_NAME,
                                                                                                               Compiler * /* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom x86linux_on_macosx_gcc_tools_64 import buildForLinux64OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForLinux64OnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_verbose_x86linux64_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_debug_x86linux64_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_release_x86linux64_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_lto_x86linux64_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper clean_win32_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_win_33__32__5F_on_5F_mac (const GGS_string & /* in_PROJECT_5F_NAME */,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_win32_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_win_33__32__5F_on_5F_mac (const GGS_string & in_PROJECT_5F_NAME,
                                                                                                    const GGS_string & in_BUILD_5F_DIR_5F_NAME,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom mingw32_on_macosx_gcc_tools import buildForWin32OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForWin32OnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_verbose_win32_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_debug_win32_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_lto_win32_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper clean_arm64_linux_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_arm_36__34__5F_linux_5F_on_5F_mac (const GGS_string & /* in_PROJECT_5F_NAME */,
                                                                                                             Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_arm64_linux_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_arm_36__34__5F_linux_5F_on_5F_mac (const GGS_string & in_PROJECT_5F_NAME,
                                                                                                             const GGS_string & in_BUILD_5F_DIR_5F_NAME,
                                                                                                             Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom arm64linux_on_macosx_gcc_tools import buildForArm64LinuxOnMacOSX\n#----------------------------------------------------------------- Build\nbuildForArm64LinuxOnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_verbose_arm64_linux_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_debug_arm64_linux_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_release_arm64_linux_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_release_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper build_lto_arm64_linux_on_mac
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper codeblocks_project
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_codeblocks_5F_project (const GGS_string & in_PROJECT_5F_NAME,
                                                                                        const GGS__5B_string_5D_ & in_TOOL_5F_CPP_5F_FILE_5F_LIST,
                                                                                        const GGS_string & in_LIBPM_5F_PATH,
                                                                                        const GGS__5B_string_5D_ & in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST,
                                                                                        const GGS_string & in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY,
                                                                                        const GGS_bool & in_GENERATE_5F_FOR_5F_WINDOWS,
                                                                                        const GGS_string & in_PLATFORM,
                                                                                        const GGS_string & in_BUILD_5F_DIR_5F_NAME,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<\?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\" \?>\n<CodeBlocks_project_file>\n <FileVersion major=\"1\" minor=\"6\" />\n <Project>\n  <Option title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" />\n  <Option pch_mode=\"0\" />\n  <Option compiler=\"gcc\" />\n  <Build>\n   <Target title=\"Release\">\n    <Option platforms=\"") ;
  result.appendString (in_PLATFORM.stringValue ()) ;
  result.appendString (";\" />\n    <Option output=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  const GalgasBool test_0 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (GGS_string (".exe").stringValue ()) ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\" prefix_auto=\"0\" extension_auto=\"0\" />\n    <Option object_output=\"objects\" />\n    <Option type=\"1\" />\n    <Option compiler=\"gcc\" />\n    <Option projectResourceIncludeDirsRelation=\"1\" />\n    <Compiler>\n     <Add option=\"-fomit-frame-pointer\" />\n     <Add option=\"-O2\" />\n     <Add option=\"-Wnon-virtual-dtor\" />\n     <Add option=\"-Winit-self\" />\n     <Add option=\"-Wredundant-decls\" />\n     <Add option=\"-Wundef\" />\n     <Add option=\"-Wmissing-include-dirs\" />\n     <Add option=\"-Weffc++\" />\n     <Add option=\"-std=c++17\" />\n     <Add option=\"-Wshadow\" />\n     <Add option=\"-Wall\" />\n     <Add option=\"-W\" />\n     <Add option=\"-DDO_NOT_GENERATE_CHECKINGS\" />\n     ") ;
  const GalgasBool test_1 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString (GGS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />\n").stringValue ()) ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    </Compiler>\n   </Target>\n   <Target title=\"Debug\">\n    <Option platforms=\"") ;
  result.appendString (in_PLATFORM.stringValue ()) ;
  result.appendString (";\" />\n    <Option output=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-debug") ;
  const GalgasBool test_2 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString (GGS_string (".exe").stringValue ()) ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\" prefix_auto=\"0\" extension_auto=\"0\" />\n    <Option object_output=\"objects_debug\" />\n    <Option deps_output=\".deps_debug\" />\n    <Option type=\"1\" />\n    <Option compiler=\"gcc\" />\n    <Option projectResourceIncludeDirsRelation=\"1\" />\n    <Compiler>\n     <Add option=\"-g\" />\n     <Add option=\"-Wnon-virtual-dtor\" />\n     <Add option=\"-Winit-self\" />\n     <Add option=\"-Wredundant-decls\" />\n     <Add option=\"-Wundef\" />\n     <Add option=\"-Winline\" />\n     <Add option=\"-Wmissing-include-dirs\" />\n     <Add option=\"-Weffc++\" />\n     <Add option=\"-std=c++17\" />\n     <Add option=\"-Wshadow\" />\n     <Add option=\"-Wall\" />\n     <Add option=\"-W\" />\n     ") ;
  const GalgasBool test_3 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString (GGS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />\n").stringValue ()) ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    </Compiler>\n   </Target>\n  </Build>\n  <VirtualTargets>\n   <Add alias=\"All\" targets=\"Release;Debug;\" />\n  </VirtualTargets>\n  <Compiler>\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/generic-arraies\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/streams\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/time\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities\" />\n   <Add directory=\"../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/user-headers\" />\n   <Add directory=\"../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output\" />\n   <Add directory=\"") ;
  result.appendString (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY.stringValue ()) ;
  result.appendString ("\" />\n  </Compiler>\n  <Linker>\n") ;
  const GalgasBool test_4 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString (GGS_string ("   <Add option=\"-static\" />\n   <Add library=\"Comdlg32\" />\n").stringValue ()) ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("</Linker>\n") ;
  GGS_uint index_3005_ (0) ;
  if (in_TOOL_5F_CPP_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_3005 (in_TOOL_5F_CPP_5F_FILE_5F_LIST) ;
    while (enumerator_3005.hasCurrentObject ()) {
      result.appendString ("  <Unit filename=\"../") ;
      result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
      result.appendString ("/output/") ;
      result.appendString (enumerator_3005.current_entry (HERE).stringValue ()) ;
      result.appendString ("\" />\n") ;
      enumerator_3005.gotoNextObject () ;
      index_3005_.increment () ;
    }
  }
  GGS_uint index_3125_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_3125 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST) ;
    while (enumerator_3125.hasCurrentObject ()) {
      result.appendString ("  <Unit filename=\"../") ;
      result.appendString (enumerator_3125.current_entry (HERE).stringValue ()) ;
      result.appendString ("\" />\n") ;
      enumerator_3125.gotoNextObject () ;
      index_3125_.increment () ;
    }
  }
  result.appendString ("   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/AbstractCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/BoolCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/UIntCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/StringCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/analyzeCommandLineOptions.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/F_mainForLIBPM.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-add.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-bit.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-chunk-operations.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-constructors.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-conversions.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-divide.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-logic-operations.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-multiply.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-print.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-shifts.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-subtract.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-utilities.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-add.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-bit.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-chunk-operations.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-constructors.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-conversions.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-divide-naive.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-divide.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-logic-operations.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-multiply.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-print.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-shifts.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-subtract.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-utilities.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/ChunkSharedArray.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/UInt128.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd/BinaryDecisionDiagram.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd/BinaryDecisionDiagramRelationSingleType.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd/BinaryDecisionDiagramRelationConfiguration.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd/BinaryDecisionDiagramRelation.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files/FileManager.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files/AbstractFileHandle.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files/TextFileWrite.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files/HTMLFileWrite.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files/BinaryFileWrite.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/streams/AbstractOutputStream.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/streams/ColoredConsole.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/streams/ConsoleOut.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings/utf32.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings/String-class-getters.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings/String-class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings/HTMLString.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings/print.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/time/Timer.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/time/DateTime.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/PrologueEpilogue.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/SharedObject.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/U8Data.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/F_DisplayException.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/macroAssert.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/F_GetPrime.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/MF_MemoryControl.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/cpp-allocation.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/basic-allocation.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/UInt32Set.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/DirectedGraph.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/md5.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/SHA256.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/galgas-random.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/execution-mode.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/filewrapper-utilities.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/Compiler.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/Lexique.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/Lexique-parsing.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/LocationInSource.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/SourceTextInString.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_TypeDescriptor.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/galgas-input-output.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/C_galgas_class_inspector.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/IssueWithFixIt.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/Enumerator_range.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/IndexingDictionary.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/IssueDescriptor.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/LexiqueIntrospection.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_root.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_reference_class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_enumAssociatedValues.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AbstractPtrClass.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AbstractStrongPtrClass.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/PtrWeakReferenceProxy.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_weak_reference.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/PtrObject.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/scanner_actions.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_application.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_bigint.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_binaryset.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_bool.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_char.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_data.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_f64.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_filewrapper.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_location.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_sint.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_s64.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_string.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_string-getters.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_stringset.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_timer.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_u8.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_u16.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_uint.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_u64.cpp\" />\n  <Extensions>\n   <code_completion />\n   <envvars />\n   <debugger />\n   <lib_finder disable_auto=\"1\" />\n  </Extensions>\n </Project>\n</CodeBlocks_project_file>\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper makefile_info_plist
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_makefile_5F_info_5F_plist (const GGS_string & in_PROJECT_5F_NAME,
                                                                                            const GGS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                                            const GGS_string & in_VERSION_5F_STRING,
                                                                                            const GGS_stringset & in_HANDLED_5F_EXTENSION_5F_SET,
                                                                                            const GGS_string & in_MACOSX_5F_DEPLOYMENT_5F_TARGET,
                                                                                            const GGS_string & /* in_DOCUMENT_5F_CLASS */,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n<plist version=\"1.0\">\n<dict>\n <key>CFBundleDevelopmentRegion</key>\n <string>English</string>\n <key>CFBundleExecutable</key>\n <string>${EXECUTABLE_NAME}</string>\n <key>CFBundleIconFile</key>\n <string>application_icns</string>\n <key>CFBundleIdentifier</key>\n <string>") ;
  result.appendString (in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</string>\n <key>CFBundleInfoDictionaryVersion</key>\n <string>6.0</string>\n <key>CFBundleName</key>\n <string>${PRODUCT_NAME}</string>\n <key>CFBundlePackageType</key>\n <string>APPL</string>\n <key>LSMinimumSystemVersion</key>\n <string>") ;
  result.appendString (in_MACOSX_5F_DEPLOYMENT_5F_TARGET.stringValue ()) ;
  result.appendString ("</string>\n <key>CFBundleShortVersionString</key>\n <string>") ;
  result.appendString (in_VERSION_5F_STRING.stringValue ()) ;
  result.appendString ("</string>\n <key>NSMainNibFile</key>\n <string>MainMenu</string>\n <key>NSPrincipalClass</key>\n <string>NSApplication</string>\n <key>CFBundleDocumentTypes</key>\n <array>\n") ;
  GGS_uint index_986_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_986 (in_HANDLED_5F_EXTENSION_5F_SET) ;
    while (enumerator_986.hasCurrentObject ()) {
      result.appendString ("  <dict>\n			<key>CFBundleTypeIconFile</key>\n			<string>") ;
      result.appendString (enumerator_986.current_key (HERE).stringValue ()) ;
      result.appendString ("_icns</string>\n      <key>CFBundleTypeIconSystemGenerated</key>\n      <integer>0</integer>\n      <key>CFBundleTypeName</key>\n      <string>") ;
      result.appendString (enumerator_986.current_key (HERE).stringValue ()) ;
      result.appendString (" Source</string>\n      <key>CFBundleTypeRole</key>\n      <string>Editor</string>\n      <key>LSHandlerRank</key>\n      <string>Default</string>\n      <key>LSItemContentTypes</key>\n      <array>\n        <string>$(PRODUCT_BUNDLE_IDENTIFIER).") ;
      result.appendString (enumerator_986.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n      </array>\n  </dict>\n") ;
      enumerator_986.gotoNextObject () ;
      index_986_.increment () ;
    }
  }
  result.appendString ("\n </array>\n <key>UTExportedTypeDeclarations</key>\n <array>\n") ;
  GGS_uint index_1575_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_1575 (in_HANDLED_5F_EXTENSION_5F_SET) ;
    while (enumerator_1575.hasCurrentObject ()) {
      result.appendString ("  <dict>\n    <key>UTTypeConformsTo</key>\n    <array>\n      <string>public.text</string>\n    </array>\n    <key>UTTypeDescription</key>\n    <string>") ;
      result.appendString (enumerator_1575.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n    <key>UTTypeIcons</key>\n    <dict>\n      <key>UTTypeIconBadgeName</key>\n      <string>") ;
      result.appendString (enumerator_1575.current_key (HERE).stringValue ()) ;
      result.appendString ("_icns</string>\n    </dict>\n    <key>UTTypeIdentifier</key>\n    <string>$(PRODUCT_BUNDLE_IDENTIFIER).") ;
      result.appendString (enumerator_1575.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n    <key>UTTypeTagSpecification</key>\n    <dict>\n      <key>public.filename-extension</key>\n      <array>\n        <string>") ;
      result.appendString (enumerator_1575.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n      </array>\n    </dict>\n  </dict>\n") ;
      enumerator_1575.gotoNextObject () ;
      index_1575_.increment () ;
    }
  }
  result.appendString ("\n </array>\n</dict>\n</plist>\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper makefile_build_xcode
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_makefile_5F_build_5F_xcode (Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#!/bin/sh\ncd `dirname $0` && xcodebuild -alltargets -configuration Default\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper makefile_info_plist_strings
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_makefile_5F_info_5F_plist_5F_strings (const GGS_string & /* in_PROJECT_5F_NAME */,
                                                                                                       Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("/* Localized versions of Info.plist keys */\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper json_file_list
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_json_5F_file_5F_list (const GGS_stringset & in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET,
                                                                                       const GGS__5B_string_5D_ & in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST,
                                                                                       const GGS__5B_string_5D_ & in_MAKEFILE_5F_FILE_5F_LIST,
                                                                                       const GGS__5B_string_5D_ & in_TOOL_5F_LINK_5F_LIST,
                                                                                       const GGS_string & in_LIBPM_5F_DIRECTORY_5F_PATH,
                                                                                       const GGS_string & in_RELATIVE_5F_BUILD_5F_DIR,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("{ \"LIBPM_DIRECTORY_PATH\" : \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("\",\n  \"SOURCES_DIR\" : [\n     \"../") ;
  result.appendString (in_RELATIVE_5F_BUILD_5F_DIR.stringValue ()) ;
  result.appendString ("/output\",\n     \"../") ;
  result.appendString (in_RELATIVE_5F_BUILD_5F_DIR.stringValue ()) ;
  result.appendString ("/user-headers\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/files\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/generic-arraies\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/streams\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/strings\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/time\",\n     \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities\"") ;
  GGS_uint index_623_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_623 (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET) ;
    while (enumerator_623.hasCurrentObject ()) {
      result.appendString (",\n         \"") ;
      result.appendString (enumerator_623.current_key (HERE).stringValue ()) ;
      result.appendString ("\"") ;
      enumerator_623.gotoNextObject () ;
      index_623_.increment () ;
    }
  }
  result.appendString ("\n  ],\n  \"SOURCES\" : [\n") ;
  GGS_uint index_719_ (0) ;
  if (in_MAKEFILE_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_719 (in_MAKEFILE_5F_FILE_5F_LIST) ;
    while (enumerator_719.hasCurrentObject ()) {
      result.appendString ("    \"") ;
      result.appendString (enumerator_719.current_entry (HERE).stringValue ()) ;
      result.appendString ("\",\n") ;
      enumerator_719.gotoNextObject () ;
      index_719_.increment () ;
    }
  }
  GGS_uint index_797_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_797 (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST) ;
    while (enumerator_797.hasCurrentObject ()) {
      result.appendString ("    \"") ;
      result.appendString (enumerator_797.current_entry (HERE).stringValue ()) ;
      result.appendString ("\",\n") ;
      enumerator_797.gotoNextObject () ;
      index_797_.increment () ;
    }
  }
  result.appendString ("    \"AbstractCommandLineOption.cpp\",\n    \"BoolCommandLineOption.cpp\",\n    \"UIntCommandLineOption.cpp\",\n    \"StringCommandLineOption.cpp\",\n    \"analyzeCommandLineOptions.cpp\",\n    \"F_mainForLIBPM.cpp\",\n    \"BinaryDecisionDiagram.cpp\",\n    \"BinaryDecisionDiagramRelationSingleType.cpp\",\n    \"BinaryDecisionDiagramRelationConfiguration.cpp\",\n    \"BinaryDecisionDiagramRelation.cpp\",\n    \"FileManager.cpp\",\n    \"AbstractFileHandle.cpp\",\n    \"TextFileWrite.cpp\",\n    \"HTMLFileWrite.cpp\",\n    \"BinaryFileWrite.cpp\",\n    \"AbstractOutputStream.cpp\",\n    \"ColoredConsole.cpp\",\n    \"ConsoleOut.cpp\",\n    \"utf32.cpp\",\n    \"String-class-getters.cpp\",\n    \"String-class.cpp\",\n    \"HTMLString.cpp\",\n    \"print.cpp\",\n    \"Timer.cpp\",\n    \"DateTime.cpp\",\n    \"PrologueEpilogue.cpp\",\n    \"SharedObject.cpp\",\n    \"BigSigned-add.cpp\",\n    \"BigSigned-bit.cpp\",\n    \"BigSigned-chunk-operations.cpp\",\n    \"BigSigned-constructors.cpp\",\n    \"BigSigned-conversions.cpp\",\n    \"BigSigned-divide.cpp\",\n    \"BigSigned-logic-operations.cpp\",\n    \"BigSigned-multiply.cpp\",\n    \"BigSigned-print.cpp\",\n    \"BigSigned-shifts.cpp\",\n    \"BigSigned-subtract.cpp\",\n    \"BigSigned-utilities.cpp\",\n    \"BigSigned.cpp\",\n    \"BigUnsigned-add.cpp\",\n    \"BigUnsigned-bit.cpp\",\n    \"BigUnsigned-chunk-operations.cpp\",\n    \"BigUnsigned-constructors.cpp\",\n    \"BigUnsigned-conversions.cpp\",\n    \"BigUnsigned-divide-naive.cpp\",\n    \"BigUnsigned-divide.cpp\",\n    \"BigUnsigned-logic-operations.cpp\",\n    \"BigUnsigned-multiply.cpp\",\n    \"BigUnsigned-print.cpp\",\n    \"BigUnsigned-shifts.cpp\",\n    \"BigUnsigned-subtract.cpp\",\n    \"BigUnsigned-utilities.cpp\",\n    \"ChunkSharedArray.cpp\",\n    \"UInt128.cpp\",\n    \"U8Data.cpp\",\n    \"F_DisplayException.cpp\",\n    \"macroAssert.cpp\",\n    \"F_GetPrime.cpp\",\n    \"MF_MemoryControl.cpp\",\n    \"cpp-allocation.cpp\",\n    \"basic-allocation.cpp\",\n    \"UInt32Set.cpp\",\n    \"DirectedGraph.cpp\",\n    \"md5.cpp\",\n    \"SHA256.cpp\",\n    \"galgas-random.cpp\",\n    \"execution-mode.cpp\",\n    \"filewrapper-utilities.cpp\",\n    \"Compiler.cpp\",\n    \"Lexique.cpp\",\n    \"Lexique-parsing.cpp\",\n    \"LocationInSource.cpp\",\n    \"SourceTextInString.cpp\",\n    \"GALGAS_TypeDescriptor.cpp\",\n    \"galgas-input-output.cpp\",\n    \"C_galgas_class_inspector.cpp\",\n    \"IssueWithFixIt.cpp\",\n    \"Enumerator_range.cpp\",\n    \"IndexingDictionary.cpp\",\n    \"IssueDescriptor.cpp\",\n    \"LexiqueIntrospection.cpp\",\n    \"AC_GALGAS_root.cpp\",\n    \"AC_GALGAS_reference_class.cpp\",\n    \"AC_GALGAS_enumAssociatedValues.cpp\",\n    \"AbstractPtrClass.cpp\",\n    \"AbstractStrongPtrClass.cpp\",\n    \"PtrWeakReferenceProxy.cpp\",\n    \"AC_GALGAS_weak_reference.cpp\",\n    \"scanner_actions.cpp\",\n    \"GGS_application.cpp\",\n    \"GGS_bigint.cpp\",\n    \"GGS_binaryset.cpp\",\n    \"GGS_bool.cpp\",\n    \"GGS_char.cpp\",\n    \"GGS_data.cpp\",\n    \"GGS_f64.cpp\",\n    \"GGS_filewrapper.cpp\",\n    \"GGS_location.cpp\",\n    \"GGS_sint.cpp\",\n    \"GGS_s64.cpp\",\n    \"GGS_string.cpp\",\n    \"GGS_string-getters.cpp\",\n    \"GGS_stringset.cpp\",\n    \"GGS_timer.cpp\",\n    \"GGS_u8.cpp\",\n    \"GGS_u16.cpp\",\n    \"GGS_uint.cpp\",\n    \"GGS_u64.cpp\"\n  ],\n  \"USER_LINK_OPTIONS\" : [") ;
  GGS_uint index_3934_ (0) ;
  if (in_TOOL_5F_LINK_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_3934 (in_TOOL_5F_LINK_5F_LIST) ;
    while (enumerator_3934.hasCurrentObject ()) {
      result.appendString ("\n    \"") ;
      result.appendString (enumerator_3934.current_entry (HERE).stringValue ()) ;
      result.appendString ("\"") ;
      enumerator_3934.gotoNextObject () ;
      if (enumerator_3934.hasCurrentObject ()) {
        result.appendString (",") ;
      }
      index_3934_.increment () ;
    }
  }
  result.appendString ("\n  ]\n}\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @targetGalgas3GenerationFileWrapper project_header
//--------------------------------------------------------------------------------------------------

GGS_string GGS_targetGalgas_33_GenerationFileWrapper::class_func_project_5F_header (const GGS_string & in_VERSION_5F_STRING,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//     Project common header file                                                                \n//\n//--------------------------------------------------------------------------------------------------\n\n#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#define PROJECT_VERSION_STRING \"") ;
  result.appendString (in_VERSION_5F_STRING.stringValue ()) ;
  result.appendString ("\"\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//     @targetGalgas3GenerationFileWrapper generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_targetGalgas_33_GenerationFileWrapper ("targetGalgas3GenerationFileWrapper",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_targetGalgas_33_GenerationFileWrapper::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_targetGalgas_33_GenerationFileWrapper ;
}

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_projectComponentScanner::cTokenFor_projectComponentScanner (void) :
mLexicalAttribute_bigintValue (),
mLexicalAttribute_charValue (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//--------------------------------------------------------------------------------------------------

Lexique_projectComponentScanner::Lexique_projectComponentScanner (Compiler * inCallerCompiler,
                                                                  const String & inSourceFileName
                                                                  COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_projectComponentScanner::Lexique_projectComponentScanner (Compiler * inCallerCompiler,
                                                                  const String & inSourceString,
                                                                  const String & inStringForError
                                                                  COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_projectComponentScanner_attributeError = "in an attribute name, a letter or a digit should follow the '#' character" ;

static const char * gLexicalMessage_projectComponentScanner_incorrectCharConstant = "incorrect literal character" ;

static const char * gLexicalMessage_projectComponentScanner_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_projectComponentScanner_internalError = "internal error" ;

static const char * gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition4 = "\\u should be followed by exactly four hexadecimal digits" ;

static const char * gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 = "\\U should be followed by exactly eight hexadecimal digits" ;

static const char * gLexicalMessage_projectComponentScanner_unassignedUnicodeValue = "this value does not correspond to an assigned Unicode point" ;

static const char * gLexicalMessage_projectComponentScanner_undefinedAttribute = "undefined attribute" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_projectComponentScanner::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 29)) {
    static const char * syntaxErrorMessageArray [29] = {kEndOfSourceLexicalErrorMessage,
        "an identifier",
        "a literal integer",
        "a character constant",
        "a comment",
        "a comment",
        "a character string constant \"...\"",
        "the '#macAppBundleBaseName' keyword",
        "the '#codeblocks-linux32' keyword",
        "the '#codeblocks-linux64' keyword",
        "the '#codeblocks-windows' keyword",
        "the '#libpmCustomPath' keyword",
        "the '#productName' keyword",
        "the '#version' keyword",
        "the '#macCodeSign' keyword",
        "the '#makefile-macosx' keyword",
        "the '#makefile-unix' keyword",
        "the '#makefile-x86linux32-on-macosx' keyword",
        "the '#makefile-x86linux64-on-macosx' keyword",
        "the '#makefile-arm64-linux-on-macosx' keyword",
        "the '#makefile-win32-on-macosx' keyword",
        "the '#macSwiftApp' keyword",
        "the '#lexical-style' keyword",
        "the '#bool-build-option' keyword",
        "the '#string-build-option' keyword",
        "the '#u32-build-option' keyword",
        "the '.' delimitor",
        "the ':' delimitor",
        "the '->' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$->$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner__2D__3E_ = {
  utf32 ('-'),
  utf32 ('>'),
} ;

//--- Unicode string for '$.$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner__2E_ = {
  utf32 ('.'),
} ;

//--- Unicode string for '$//$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner__2F__2F_ = {
  utf32 ('/'),
  utf32 ('/'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner__3A_ = {
  utf32 (':'),
} ;

//--- Unicode string for '$bool-build-option$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_bool_2D_build_2D_option = {
  utf32 ('b'),
  utf32 ('o'),
  utf32 ('o'),
  utf32 ('l'),
  utf32 ('-'),
  utf32 ('b'),
  utf32 ('u'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('d'),
  utf32 ('-'),
  utf32 ('o'),
  utf32 ('p'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$codeblocks-linux32$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_codeblocks_2D_linux_33__32_ = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('s'),
  utf32 ('-'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('x'),
  utf32 ('3'),
  utf32 ('2'),
} ;

//--- Unicode string for '$codeblocks-linux64$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_codeblocks_2D_linux_36__34_ = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('s'),
  utf32 ('-'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('x'),
  utf32 ('6'),
  utf32 ('4'),
} ;

//--- Unicode string for '$codeblocks-windows$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_codeblocks_2D_windows = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('s'),
  utf32 ('-'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('o'),
  utf32 ('w'),
  utf32 ('s'),
} ;

//--- Unicode string for '$lexical-style$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_lexical_2D_style = {
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('i'),
  utf32 ('c'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('-'),
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('y'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$libpmCustomPath$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_libpmCustomPath = {
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('b'),
  utf32 ('p'),
  utf32 ('m'),
  utf32 ('C'),
  utf32 ('u'),
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('o'),
  utf32 ('m'),
  utf32 ('P'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('h'),
} ;

//--- Unicode string for '$macAppBundleBaseName$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_macAppBundleBaseName = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('A'),
  utf32 ('p'),
  utf32 ('p'),
  utf32 ('B'),
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('B'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('N'),
  utf32 ('a'),
  utf32 ('m'),
  utf32 ('e'),
} ;

//--- Unicode string for '$macCodeSign$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_macCodeSign = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('C'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('S'),
  utf32 ('i'),
  utf32 ('g'),
  utf32 ('n'),
} ;

//--- Unicode string for '$macSwiftApp$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_macSwiftApp = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('S'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('f'),
  utf32 ('t'),
  utf32 ('A'),
  utf32 ('p'),
  utf32 ('p'),
} ;

//--- Unicode string for '$makefile-arm64-linux-on-macosx$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('m'),
  utf32 ('6'),
  utf32 ('4'),
  utf32 ('-'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('x'),
  utf32 ('-'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('-'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('x'),
} ;

//--- Unicode string for '$makefile-macosx$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_makefile_2D_macosx = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('x'),
} ;

//--- Unicode string for '$makefile-unix$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_makefile_2D_unix = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('i'),
  utf32 ('x'),
} ;

//--- Unicode string for '$makefile-win32-on-macosx$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_makefile_2D_win_33__32__2D_on_2D_macosx = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('3'),
  utf32 ('2'),
  utf32 ('-'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('-'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('x'),
} ;

//--- Unicode string for '$makefile-x86linux32-on-macosx$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('x'),
  utf32 ('8'),
  utf32 ('6'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('x'),
  utf32 ('3'),
  utf32 ('2'),
  utf32 ('-'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('-'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('x'),
} ;

//--- Unicode string for '$makefile-x86linux64-on-macosx$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('x'),
  utf32 ('8'),
  utf32 ('6'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('x'),
  utf32 ('6'),
  utf32 ('4'),
  utf32 ('-'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('-'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('x'),
} ;

//--- Unicode string for '$productName$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_productName = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('u'),
  utf32 ('c'),
  utf32 ('t'),
  utf32 ('N'),
  utf32 ('a'),
  utf32 ('m'),
  utf32 ('e'),
} ;

//--- Unicode string for '$string-build-option$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_string_2D_build_2D_option = {
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('g'),
  utf32 ('-'),
  utf32 ('b'),
  utf32 ('u'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('d'),
  utf32 ('-'),
  utf32 ('o'),
  utf32 ('p'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$u32-build-option$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_u_33__32__2D_build_2D_option = {
  utf32 ('u'),
  utf32 ('3'),
  utf32 ('2'),
  utf32 ('-'),
  utf32 ('b'),
  utf32 ('u'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('d'),
  utf32 ('-'),
  utf32 ('o'),
  utf32 ('p'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$version$'
static const std::initializer_list <utf32> kUnicodeString_projectComponentScanner_version = {
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('s'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'attributeKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_projectComponentScanner_attributeKeyWordList = 19 ;

static const C_unicode_lexique_table_entry ktable_for_projectComponentScanner_attributeKeyWordList [ktable_size_projectComponentScanner_attributeKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_version, Lexique_projectComponentScanner::kToken__23_version),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_macCodeSign, Lexique_projectComponentScanner::kToken__23_macCodeSign),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_macSwiftApp, Lexique_projectComponentScanner::kToken__23_macSwiftApp),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_productName, Lexique_projectComponentScanner::kToken__23_productName),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_lexical_2D_style, Lexique_projectComponentScanner::kToken__23_lexical_2D_style),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_makefile_2D_unix, Lexique_projectComponentScanner::kToken__23_makefile_2D_unix),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_libpmCustomPath, Lexique_projectComponentScanner::kToken__23_libpmCustomPath),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_makefile_2D_macosx, Lexique_projectComponentScanner::kToken__23_makefile_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_u_33__32__2D_build_2D_option, Lexique_projectComponentScanner::kToken__23_u_33__32__2D_build_2D_option),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_bool_2D_build_2D_option, Lexique_projectComponentScanner::kToken__23_bool_2D_build_2D_option),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_codeblocks_2D_linux_33__32_, Lexique_projectComponentScanner::kToken__23_codeblocks_2D_linux_33__32_),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_codeblocks_2D_linux_36__34_, Lexique_projectComponentScanner::kToken__23_codeblocks_2D_linux_36__34_),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_codeblocks_2D_windows, Lexique_projectComponentScanner::kToken__23_codeblocks_2D_windows),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_string_2D_build_2D_option, Lexique_projectComponentScanner::kToken__23_string_2D_build_2D_option),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_macAppBundleBaseName, Lexique_projectComponentScanner::kToken__23_macAppBundleBaseName),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_makefile_2D_win_33__32__2D_on_2D_macosx, Lexique_projectComponentScanner::kToken__23_makefile_2D_win_33__32__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx, Lexique_projectComponentScanner::kToken__23_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx, Lexique_projectComponentScanner::kToken__23_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx, Lexique_projectComponentScanner::kToken__23_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx)
} ;

int32_t Lexique_projectComponentScanner::search_into_attributeKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_projectComponentScanner_attributeKeyWordList, ktable_size_projectComponentScanner_attributeKeyWordList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'galgasDelimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_projectComponentScanner_galgasDelimitorsList = 3 ;

static const C_unicode_lexique_table_entry ktable_for_projectComponentScanner_galgasDelimitorsList [ktable_size_projectComponentScanner_galgasDelimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner__2E_, Lexique_projectComponentScanner::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner__3A_, Lexique_projectComponentScanner::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_projectComponentScanner__2D__3E_, Lexique_projectComponentScanner::kToken__2D__3E_)
} ;

int32_t Lexique_projectComponentScanner::search_into_galgasDelimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_projectComponentScanner_galgasDelimitorsList, ktable_size_projectComponentScanner_galgasDelimitorsList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_projectComponentScanner::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_projectComponentScanner * ptr = (const cTokenFor_projectComponentScanner *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_identifier:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literalInt:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("literalInt") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_bigintValue.decimalString ()) ;
      break ;
    case kToken__27_char_27_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("'char'") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendChar (ptr->mLexicalAttribute_charValue) ;
      break ;
    case kToken_comment:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_commentMark:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("commentMark") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__22_string_22_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\"string\"") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__23_macAppBundleBaseName:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#macAppBundleBaseName") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_codeblocks_2D_linux_33__32_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#codeblocks-linux32") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_codeblocks_2D_linux_36__34_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#codeblocks-linux64") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_codeblocks_2D_windows:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#codeblocks-windows") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_libpmCustomPath:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#libpmCustomPath") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_productName:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#productName") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_version:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#version") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_macCodeSign:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#macCodeSign") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_makefile_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#makefile-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_makefile_2D_unix:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#makefile-unix") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#makefile-x86linux32-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#makefile-x86linux64-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#makefile-arm64-linux-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_makefile_2D_win_33__32__2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#makefile-win32-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_macSwiftApp:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#macSwiftApp") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_lexical_2D_style:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#lexical-style") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_bool_2D_build_2D_option:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#bool-build-option") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_string_2D_build_2D_option:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#string-build-option") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_u_33__32__2D_build_2D_option:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#u32-build-option") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (".") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (":") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("->") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void Lexique_projectComponentScanner::internalParseLexicalToken (cTokenFor_projectComponentScanner & token) {
  bool loop = true ;
  token.mLexicalAttribute_bigintValue = BigSigned () ;
  token.mLexicalAttribute_charValue = utf32 (0) ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForChar_isUnicodeLetter () || testForInputUTF32Char (utf32 ('_'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForChar_isUnicodeLetter () || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_identifier ;
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
      ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
      do {
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_projectComponentScanner_internalError) ;
      token.mTokenCode = kToken_literalInt ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('#'))) {
      if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32Char (utf32 ('-')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_projectComponentScanner_attributeError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_attributeKeyWordList (token.mLexicalAttribute_tokenString) ;
      }
      if (token.mTokenCode == -1) {
        lexicalError (gLexicalMessage_projectComponentScanner_undefinedAttribute COMMA_LINE_AND_SOURCE_FILE) ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\''))) {
      if (testForInputUTF32Char (utf32 ('\\'))) {
        if (testForInputUTF32Char (utf32 ('f'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\f')) ;
        }else if (testForInputUTF32Char (utf32 ('n'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\n')) ;
        }else if (testForInputUTF32Char (utf32 ('r'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\r')) ;
        }else if (testForInputUTF32Char (utf32 ('t'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\t')) ;
        }else if (testForInputUTF32Char (utf32 ('v'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\v')) ;
        }else if (testForInputUTF32Char (utf32 ('\\'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\\')) ;
        }else if (testForInputUTF32Char (utf32 ('0'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\0')) ;
        }else if (testForInputUTF32Char (utf32 ('\''))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\'')) ;
        }else if (testForInputUTF32Char (utf32 ('u'))) {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
            if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                  ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_projectComponentScanner_unassignedUnicodeValue) ;
                }else{
                  lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (utf32 ('U'))) {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
            if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                  if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                    if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                      if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                          ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_projectComponentScanner_unassignedUnicodeValue) ;
                        }else{
                          lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else{
          lexicalError (gLexicalMessage_projectComponentScanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32CharRange (utf32 (' '), utf32 (65533))) {
        ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, previousChar ()) ;
      }else{
        lexicalError (gLexicalMessage_projectComponentScanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (testForInputUTF32Char (utf32 ('\''))) {
        token.mTokenCode = kToken__27_char_27_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_projectComponentScanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_projectComponentScanner__2F__2F_, true)) {
      if (testForInputUTF32Char (utf32 ('!'))) {
        do {
          if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (65533))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_commentMark) ;
      }else{
        do {
          if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (1114111))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_comment) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_projectComponentScanner__2D__3E_, true)) {
      token.mTokenCode = kToken__2D__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_projectComponentScanner__3A_, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_projectComponentScanner__2E_, true)) {
      token.mTokenCode = kToken__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\"'))) {
      do {
        if (testForInputUTF32Char (utf32 ('\\'))) {
          if (testForInputUTF32Char (utf32 ('f'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\f')) ;
          }else if (testForInputUTF32Char (utf32 ('n'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\n')) ;
          }else if (testForInputUTF32Char (utf32 ('r'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\r')) ;
          }else if (testForInputUTF32Char (utf32 ('t'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\t')) ;
          }else if (testForInputUTF32Char (utf32 ('v'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\v')) ;
          }else if (testForInputUTF32Char (utf32 ('\\'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\\')) ;
          }else if (testForInputUTF32Char (utf32 ('\"'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\"')) ;
          }else if (testForInputUTF32Char (utf32 ('\''))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\'')) ;
          }else if (testForInputUTF32Char (utf32 ('\?'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\?')) ;
          }else if (testForInputUTF32Char (utf32 ('u'))) {
            if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                  if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                    ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_projectComponentScanner_unassignedUnicodeValue) ;
                    ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                  }else{
                    lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32Char (utf32 ('U'))) {
            if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                  if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                    if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                      if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_projectComponentScanner_internalError, gLexicalMessage_projectComponentScanner_internalError) ;
                            ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_projectComponentScanner_unassignedUnicodeValue) ;
                            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                          }else{
                            lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                          }
                        }else{
                          lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_projectComponentScanner_invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_projectComponentScanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (utf32 (' ')) || testForInputUTF32Char (utf32 ('!')) || testForInputUTF32CharRange (utf32 ('#'), utf32 (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('\"'))) {
        token.mTokenCode = kToken__22_string_22_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_projectComponentScanner_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32CharRange (utf32 (1), utf32 (' '))) {
    }else if (testForInputUTF32Char (utf32 ('\0'))) { // End of source text ? 
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

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool Lexique_projectComponentScanner::parseLexicalToken (void) {
  cTokenFor_projectComponentScanner token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (mCurrentChar.u32 () == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void Lexique_projectComponentScanner::enterToken (cTokenFor_projectComponentScanner & ioToken) {
  cTokenFor_projectComponentScanner * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_projectComponentScanner ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_bigintValue = ioToken.mLexicalAttribute_bigintValue ;
  ptr->mLexicalAttribute_charValue = ioToken.mLexicalAttribute_charValue ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

BigSigned Lexique_projectComponentScanner::attributeValue_bigintValue (void) const {
  cTokenFor_projectComponentScanner * ptr = (cTokenFor_projectComponentScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_bigintValue ;
}

//--------------------------------------------------------------------------------------------------

utf32 Lexique_projectComponentScanner::attributeValue_charValue (void) const {
  cTokenFor_projectComponentScanner * ptr = (cTokenFor_projectComponentScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_charValue ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_projectComponentScanner::attributeValue_tokenString (void) const {
  cTokenFor_projectComponentScanner * ptr = (cTokenFor_projectComponentScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------

uint32_t Lexique_projectComponentScanner::attributeValue_uint_33__32_value (void) const {
  cTokenFor_projectComponentScanner * ptr = (cTokenFor_projectComponentScanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_lbigint Lexique_projectComponentScanner::synthetizedAttribute_bigintValue (void) const {
  cTokenFor_projectComponentScanner * ptr = (cTokenFor_projectComponentScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_projectComponentScanner) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_bigint value (ptr->mLexicalAttribute_bigintValue) ;
  GGS_lbigint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lchar Lexique_projectComponentScanner::synthetizedAttribute_charValue (void) const {
  cTokenFor_projectComponentScanner * ptr = (cTokenFor_projectComponentScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_projectComponentScanner) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_char value (ptr->mLexicalAttribute_charValue) ;
  GGS_lchar result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_projectComponentScanner::synthetizedAttribute_tokenString (void) const {
  cTokenFor_projectComponentScanner * ptr = (cTokenFor_projectComponentScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_projectComponentScanner) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_tokenString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint Lexique_projectComponentScanner::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_projectComponentScanner * ptr = (cTokenFor_projectComponentScanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_projectComponentScanner) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GGS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

 GGS__5B_string_5D_ Lexique_projectComponentScanner::symbols (LOCATION_ARGS) {
  GGS__5B_string_5D_ result = GGS__5B_string_5D_::init (nullptr COMMA_THERE) ;
  result.plusPlusAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("literalInt") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("'char'") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("commentMark") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("\"string\"") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#macAppBundleBaseName") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#codeblocks-linux32") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#codeblocks-linux64") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#codeblocks-windows") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#libpmCustomPath") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#productName") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#version") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#macCodeSign") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#makefile-macosx") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#makefile-unix") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#makefile-x86linux32-on-macosx") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#makefile-x86linux64-on-macosx") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#makefile-arm64-linux-on-macosx") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#makefile-win32-on-macosx") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#macSwiftApp") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#lexical-style") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#bool-build-option") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#string-build-option") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#u32-build-option") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (".") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (":") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("->") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_projectComponentScanner (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("projectComponentScanner:attributeKeyWordList") ;
  ioList.appendObject ("projectComponentScanner:galgasDelimitorsList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_projectComponentScanner (const String & inIdentifier,
                                                              bool & ioFound,
                                                              GenericUniqueArray <String> & ioList) {
  if (inIdentifier == "projectComponentScanner:attributeKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("version") ;
    ioList.appendObject ("macCodeSign") ;
    ioList.appendObject ("macSwiftApp") ;
    ioList.appendObject ("productName") ;
    ioList.appendObject ("lexical-style") ;
    ioList.appendObject ("makefile-unix") ;
    ioList.appendObject ("libpmCustomPath") ;
    ioList.appendObject ("makefile-macosx") ;
    ioList.appendObject ("u32-build-option") ;
    ioList.appendObject ("bool-build-option") ;
    ioList.appendObject ("codeblocks-linux32") ;
    ioList.appendObject ("codeblocks-linux64") ;
    ioList.appendObject ("codeblocks-windows") ;
    ioList.appendObject ("string-build-option") ;
    ioList.appendObject ("macAppBundleBaseName") ;
    ioList.appendObject ("makefile-win32-on-macosx") ;
    ioList.appendObject ("makefile-x86linux32-on-macosx") ;
    ioList.appendObject ("makefile-x86linux64-on-macosx") ;
    ioList.appendObject ("makefile-arm64-linux-on-macosx") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "projectComponentScanner:galgasDelimitorsList") {
    ioFound = true ;
    ioList.appendObject (".") ;
    ioList.appendObject (":") ;
    ioList.appendObject ("->") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_projectComponentScanner
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_projectComponentScanner, getKeywordsForIdentifier_projectComponentScanner) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_projectComponentScanner::styleIndexForTerminal (const int32_t inTerminalIndex) const { // §§
  static const uint32_t kTerminalSymbolStyles [29] = {0,
    0 /* projectComponentScanner_1_identifier */,
    6 /* projectComponentScanner_1_literalInt */,
    8 /* projectComponentScanner_1__27_char_27_ */,
    12 /* projectComponentScanner_1_comment */,
    12 /* projectComponentScanner_1_commentMark */,
    9 /* projectComponentScanner_1__22_string_22_ */,
    11 /* projectComponentScanner_1__23_macAppBundleBaseName */,
    11 /* projectComponentScanner_1__23_codeblocks_2D_linux_33__32_ */,
    11 /* projectComponentScanner_1__23_codeblocks_2D_linux_36__34_ */,
    11 /* projectComponentScanner_1__23_codeblocks_2D_windows */,
    11 /* projectComponentScanner_1__23_libpmCustomPath */,
    11 /* projectComponentScanner_1__23_productName */,
    11 /* projectComponentScanner_1__23_version */,
    11 /* projectComponentScanner_1__23_macCodeSign */,
    11 /* projectComponentScanner_1__23_makefile_2D_macosx */,
    11 /* projectComponentScanner_1__23_makefile_2D_unix */,
    11 /* projectComponentScanner_1__23_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx */,
    11 /* projectComponentScanner_1__23_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx */,
    11 /* projectComponentScanner_1__23_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx */,
    11 /* projectComponentScanner_1__23_makefile_2D_win_33__32__2D_on_2D_macosx */,
    11 /* projectComponentScanner_1__23_macSwiftApp */,
    11 /* projectComponentScanner_1__23_lexical_2D_style */,
    11 /* projectComponentScanner_1__23_bool_2D_build_2D_option */,
    11 /* projectComponentScanner_1__23_string_2D_build_2D_option */,
    11 /* projectComponentScanner_1__23_u_33__32__2D_build_2D_option */,
    2 /* projectComponentScanner_1__2E_ */,
    2 /* projectComponentScanner_1__3A_ */,
    2 /* projectComponentScanner_1__2D__3E_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets::GGS_projectTargets (void) :
AC_GALGAS_root (),
mFlags (0),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets::GGS_projectTargets (const uint64_t inFlags) :
AC_GALGAS_root (),
mFlags (inFlags),
mIsValid (true) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_projectTargets (0) ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::class_func_makefileUnix (UNUSED_LOCATION_ARGS) {
  return GGS_projectTargets (uint64_t (1) << 0) ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::class_func_makefileMacOS (UNUSED_LOCATION_ARGS) {
  return GGS_projectTargets (uint64_t (1) << 1) ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::class_func_makefileX_38__36_Linux_33__32_OnMac (UNUSED_LOCATION_ARGS) {
  return GGS_projectTargets (uint64_t (1) << 2) ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::class_func_makefileX_38__36_Linux_36__34_OnMac (UNUSED_LOCATION_ARGS) {
  return GGS_projectTargets (uint64_t (1) << 3) ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::class_func_makefileARM_36__34_LinuxOnMac (UNUSED_LOCATION_ARGS) {
  return GGS_projectTargets (uint64_t (1) << 4) ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::class_func_makefileWin_33__32_OnMac (UNUSED_LOCATION_ARGS) {
  return GGS_projectTargets (uint64_t (1) << 5) ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::class_func_macSwiftApp (UNUSED_LOCATION_ARGS) {
  return GGS_projectTargets (uint64_t (1) << 6) ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::class_func_codeblocksWindows (UNUSED_LOCATION_ARGS) {
  return GGS_projectTargets (uint64_t (1) << 7) ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::class_func_codeblocksLinux_33__32_ (UNUSED_LOCATION_ARGS) {
  return GGS_projectTargets (uint64_t (1) << 8) ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::class_func_codeblocksLinux_36__34_ (UNUSED_LOCATION_ARGS) {
  return GGS_projectTargets (uint64_t (1) << 9) ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_projectTargets::isValid (void) const {
  return mIsValid ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_projectTargets::getter_contains (const GGS_projectTargets & inOperand
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool ((mFlags & inOperand.mFlags) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectTargets::andAssignOperation (const GGS_projectTargets inOperand,
                                             Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_projectTargets::orAssignOperation (const GGS_projectTargets inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags |= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_projectTargets::xorAssignOperation (const GGS_projectTargets inOperand,
                                             Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags ^= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_projectTargets::minusAssignOperation (const GGS_projectTargets inOperand,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= ~ inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::operator_or (const GGS_projectTargets & inOperand
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_projectTargets result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_projectTargets (mFlags | inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::operator_and (const GGS_projectTargets & inOperand
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_projectTargets result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_projectTargets (mFlags & inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::operator_xor (const GGS_projectTargets & inOperand
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_projectTargets result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_projectTargets (mFlags ^ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::subtract_operation (const GGS_projectTargets & inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_projectTargets result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_projectTargets (mFlags & ~ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectTargets GGS_projectTargets::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_projectTargets result ;
  if (mIsValid) {
    result = GGS_projectTargets (uint64_t (0x3FF) ^ mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectTargets::description (String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString.appendCString ("<optionset @projectTargets:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    if ((mFlags & (uint64_t (1) << 0)) != 0) {
      ioString.appendCString (" makefileUnix") ;
    }
    if ((mFlags & (uint64_t (1) << 1)) != 0) {
      ioString.appendCString (" makefileMacOS") ;
    }
    if ((mFlags & (uint64_t (1) << 2)) != 0) {
      ioString.appendCString (" makefileX86Linux32OnMac") ;
    }
    if ((mFlags & (uint64_t (1) << 3)) != 0) {
      ioString.appendCString (" makefileX86Linux64OnMac") ;
    }
    if ((mFlags & (uint64_t (1) << 4)) != 0) {
      ioString.appendCString (" makefileARM64LinuxOnMac") ;
    }
    if ((mFlags & (uint64_t (1) << 5)) != 0) {
      ioString.appendCString (" makefileWin32OnMac") ;
    }
    if ((mFlags & (uint64_t (1) << 6)) != 0) {
      ioString.appendCString (" macSwiftApp") ;
    }
    if ((mFlags & (uint64_t (1) << 7)) != 0) {
      ioString.appendCString (" codeblocksWindows") ;
    }
    if ((mFlags & (uint64_t (1) << 8)) != 0) {
      ioString.appendCString (" codeblocksLinux32") ;
    }
    if ((mFlags & (uint64_t (1) << 9)) != 0) {
      ioString.appendCString (" codeblocksLinux64") ;
    }
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @projectTargets generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectTargets ("projectTargets",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_projectTargets::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectTargets ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @lexicalStyleMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleMap::GGS_lexicalStyleMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleMap::~ GGS_lexicalStyleMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleMap::GGS_lexicalStyleMap (const GGS_lexicalStyleMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleMap & GGS_lexicalStyleMap::operator = (const GGS_lexicalStyleMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleMap GGS_lexicalStyleMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexicalStyleMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalStyleMap::getter_contains (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalStyleMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalStyleMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalStyleMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalStyleMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalStyleMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_lexicalStyleMap::getter_keyList (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalStyleMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalStyleMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleMap::performInsert (const GGS_lexicalStyleMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_lexicalStyleMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_lexicalStyleMap_2E_element>
GGS_lexicalStyleMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalStyleMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalStyleMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalStyleMap_2E_element>>
GGS_lexicalStyleMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalStyleMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_lexicalStyleMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleMap_2E_element_3F_ GGS_lexicalStyleMap
::readSubcript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalStyleMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalStyleMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_lexicalStyleMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexicalStyleMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mComment = info->mProperty_mComment ;
      element.mProperty_mStyleIndex = info->mProperty_mStyleIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleMap GGS_lexicalStyleMap::class_func_mapWithMapToOverride (const GGS_lexicalStyleMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalStyleMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalStyleMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleMap GGS_lexicalStyleMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_lexicalStyleMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleMap::setter_insert (GGS_lstring inLKey,
                                         GGS_lstring inArgument0,
                                         GGS_uint inArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  const GGS_lexicalStyleMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' style is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleMap::method_search (GGS_lstring inLKey,
                                         GGS_lstring & outArgument0,
                                         GGS_uint & outArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_lexicalStyleMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' style is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mComment ;
    outArgument1 = info->mProperty_mStyleIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalStyleMap::getter_mCommentForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalStyleMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mComment ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalStyleMap::getter_mStyleIndexForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalStyleMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mStyleIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleMap::setter_setMCommentForKey (GGS_lstring inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalStyleMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mComment = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleMap::setter_setMStyleIndexForKey (GGS_uint inValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalStyleMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mStyleIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_lexicalStyleMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalStyleMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mComment:") ;
    inArray (i COMMA_HERE)->mProperty_mComment.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mStyleIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mStyleIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @lexicalStyleMap") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalStyleMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalStyleMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_lexicalStyleMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_lexicalStyleMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexicalStyleMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalStyleMap::DownEnumerator_lexicalStyleMap (const GGS_lexicalStyleMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleMap_2E_element DownEnumerator_lexicalStyleMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalStyleMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalStyleMap::current_mComment (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_lexicalStyleMap::current_mStyleIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStyleIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexicalStyleMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalStyleMap::UpEnumerator_lexicalStyleMap (const GGS_lexicalStyleMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleMap_2E_element UpEnumerator_lexicalStyleMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalStyleMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalStyleMap::current_mComment (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_lexicalStyleMap::current_mStyleIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStyleIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @lexicalStyleMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStyleMap ("lexicalStyleMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalStyleMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStyleMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectBuildOption::GGS_projectBuildOption (void) :
mProperty_mIdentifier (),
mProperty_mInvocationChar (),
mProperty_mInvocationString (),
mProperty_mExplanationString () {
}

//--------------------------------------------------------------------------------------------------

GGS_projectBuildOption::GGS_projectBuildOption (const GGS_projectBuildOption & inSource) :
mProperty_mIdentifier (inSource.mProperty_mIdentifier),
mProperty_mInvocationChar (inSource.mProperty_mInvocationChar),
mProperty_mInvocationString (inSource.mProperty_mInvocationString),
mProperty_mExplanationString (inSource.mProperty_mExplanationString) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectBuildOption & GGS_projectBuildOption::operator = (const GGS_projectBuildOption & inSource) {
  mProperty_mIdentifier = inSource.mProperty_mIdentifier ;
  mProperty_mInvocationChar = inSource.mProperty_mInvocationChar ;
  mProperty_mInvocationString = inSource.mProperty_mInvocationString ;
  mProperty_mExplanationString = inSource.mProperty_mExplanationString ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_projectBuildOption GGS_projectBuildOption::init_21__21__21__21_ (const GGS_lstring & in_mIdentifier,
                                                                     const GGS_lchar & in_mInvocationChar,
                                                                     const GGS_lstring & in_mInvocationString,
                                                                     const GGS_lstring & in_mExplanationString,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_projectBuildOption result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIdentifier = in_mIdentifier ;
  result.mProperty_mInvocationChar = in_mInvocationChar ;
  result.mProperty_mInvocationString = in_mInvocationString ;
  result.mProperty_mExplanationString = in_mExplanationString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectBuildOption::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectBuildOption::GGS_projectBuildOption (const GGS_lstring & inOperand0,
                                                const GGS_lchar & inOperand1,
                                                const GGS_lstring & inOperand2,
                                                const GGS_lstring & inOperand3) :
mProperty_mIdentifier (inOperand0),
mProperty_mInvocationChar (inOperand1),
mProperty_mInvocationString (inOperand2),
mProperty_mExplanationString (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_projectBuildOption::isValid (void) const {
  return mProperty_mIdentifier.isValid () && mProperty_mInvocationChar.isValid () && mProperty_mInvocationString.isValid () && mProperty_mExplanationString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectBuildOption::drop (void) {
  mProperty_mIdentifier.drop () ;
  mProperty_mInvocationChar.drop () ;
  mProperty_mInvocationString.drop () ;
  mProperty_mExplanationString.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectBuildOption::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @projectBuildOption:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mIdentifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInvocationChar.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInvocationString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExplanationString.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @projectBuildOption generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectBuildOption ("projectBuildOption",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_projectBuildOption::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectBuildOption ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_projectBuildOption_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_projectBuildOption_5D_::GGS__5B_projectBuildOption_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_projectBuildOption_5D_::GGS__5B_projectBuildOption_5D_ (const GGS__5B_projectBuildOption_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_projectBuildOption_5D_ & GGS__5B_projectBuildOption_5D_::operator = (const GGS__5B_projectBuildOption_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_projectBuildOption_5D_ GGS__5B_projectBuildOption_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_projectBuildOption_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_projectBuildOption_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_projectBuildOption_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_projectBuildOption_5D_::plusPlusAssignOperation (const GGS_projectBuildOption & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_projectBuildOption_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_projectBuildOption_5D_ GGS__5B_projectBuildOption_5D_::add_operation (const GGS__5B_projectBuildOption_5D_ & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_projectBuildOption_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_projectBuildOption_5D_::description (String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@projectBuildOption], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_projectBuildOption_5D_::plusAssignOperation (const GGS__5B_projectBuildOption_5D_ inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_projectBuildOption_5D_::setter_append (const GGS_projectBuildOption inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_projectBuildOption_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_projectBuildOption_5D_::setter_set (const GGS_projectBuildOption inValue,
                                                 const GGS_uint inIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_projectBuildOption_5D_::setter_insert (const GGS_projectBuildOption inValue,
                                                    const GGS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_projectBuildOption_5D_::setter_remove (GGS_projectBuildOption & outValue,
                                                    const GGS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_projectBuildOption_5D_::setter_removeFirst (GGS_projectBuildOption & outValue,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_projectBuildOption_5D_::setter_removeLast (GGS_projectBuildOption & outValue,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_projectBuildOption_5D_ GGS__5B_projectBuildOption_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS__5B_projectBuildOption_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_projectBuildOption_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_projectBuildOption_5D_ GGS__5B_projectBuildOption_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                               const GGS_uint & inLength,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS__5B_projectBuildOption_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_projectBuildOption_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_projectBuildOption_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectBuildOption GGS__5B_projectBuildOption_5D_::getter_first (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_projectBuildOption result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectBuildOption GGS__5B_projectBuildOption_5D_::getter_last (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_projectBuildOption result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectBuildOption GGS__5B_projectBuildOption_5D_::readSubcript__3F_ (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_projectBuildOption result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_projectBuildOption_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_projectBuildOption_5D_::DownEnumerator__5B_projectBuildOption_5D_ (const GGS__5B_projectBuildOption_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectBuildOption DownEnumerator__5B_projectBuildOption_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectBuildOption DownEnumerator__5B_projectBuildOption_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_projectBuildOption_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_projectBuildOption_5D_::UpEnumerator__5B_projectBuildOption_5D_ (const GGS__5B_projectBuildOption_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectBuildOption UpEnumerator__5B_projectBuildOption_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectBuildOption UpEnumerator__5B_projectBuildOption_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[projectBuildOption] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_projectBuildOption_5D_ ("[projectBuildOption]",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_projectBuildOption_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_projectBuildOption_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectSettings::GGS_projectSettings (void) :
mProperty_productName (),
mProperty_majorVersion (),
mProperty_minorVersion (),
mProperty_revision (),
mProperty_targets (),
mProperty_libpmCustomPath (),
mProperty_macAppBundleBaseName (),
mProperty_macAppCodeSign (),
mProperty_lexicalStyleMap (),
mProperty_boolBuildOptionArray (),
mProperty_stringBuildOptionArray (),
mProperty_u_33__32_BuildOptionArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_projectSettings::GGS_projectSettings (const GGS_projectSettings & inSource) :
mProperty_productName (inSource.mProperty_productName),
mProperty_majorVersion (inSource.mProperty_majorVersion),
mProperty_minorVersion (inSource.mProperty_minorVersion),
mProperty_revision (inSource.mProperty_revision),
mProperty_targets (inSource.mProperty_targets),
mProperty_libpmCustomPath (inSource.mProperty_libpmCustomPath),
mProperty_macAppBundleBaseName (inSource.mProperty_macAppBundleBaseName),
mProperty_macAppCodeSign (inSource.mProperty_macAppCodeSign),
mProperty_lexicalStyleMap (inSource.mProperty_lexicalStyleMap),
mProperty_boolBuildOptionArray (inSource.mProperty_boolBuildOptionArray),
mProperty_stringBuildOptionArray (inSource.mProperty_stringBuildOptionArray),
mProperty_u_33__32_BuildOptionArray (inSource.mProperty_u_33__32_BuildOptionArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectSettings & GGS_projectSettings::operator = (const GGS_projectSettings & inSource) {
  mProperty_productName = inSource.mProperty_productName ;
  mProperty_majorVersion = inSource.mProperty_majorVersion ;
  mProperty_minorVersion = inSource.mProperty_minorVersion ;
  mProperty_revision = inSource.mProperty_revision ;
  mProperty_targets = inSource.mProperty_targets ;
  mProperty_libpmCustomPath = inSource.mProperty_libpmCustomPath ;
  mProperty_macAppBundleBaseName = inSource.mProperty_macAppBundleBaseName ;
  mProperty_macAppCodeSign = inSource.mProperty_macAppCodeSign ;
  mProperty_lexicalStyleMap = inSource.mProperty_lexicalStyleMap ;
  mProperty_boolBuildOptionArray = inSource.mProperty_boolBuildOptionArray ;
  mProperty_stringBuildOptionArray = inSource.mProperty_stringBuildOptionArray ;
  mProperty_u_33__32_BuildOptionArray = inSource.mProperty_u_33__32_BuildOptionArray ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_projectSettings GGS_projectSettings::init_21_productName_21_majorVersion_21_minorVersion_21_revision_21_targets_21_libpmCustomPath_21_macAppBundleBaseName_21_macAppCodeSign_21_lexicalStyleMap_21_boolBuildOptionArray_21_stringBuildOptionArray_21_u_33__32_BuildOptionArray (const GGS_string & in_productName,
                                                                                                                                                                                                                                                                                    const GGS_uint & in_majorVersion,
                                                                                                                                                                                                                                                                                    const GGS_uint & in_minorVersion,
                                                                                                                                                                                                                                                                                    const GGS_uint & in_revision,
                                                                                                                                                                                                                                                                                    const GGS_projectTargets & in_targets,
                                                                                                                                                                                                                                                                                    const GGS_lstring & in_libpmCustomPath,
                                                                                                                                                                                                                                                                                    const GGS_lstring & in_macAppBundleBaseName,
                                                                                                                                                                                                                                                                                    const GGS_lstring & in_macAppCodeSign,
                                                                                                                                                                                                                                                                                    const GGS_lexicalStyleMap & in_lexicalStyleMap,
                                                                                                                                                                                                                                                                                    const GGS__5B_projectBuildOption_5D_ & in_boolBuildOptionArray,
                                                                                                                                                                                                                                                                                    const GGS__5B_projectBuildOption_5D_ & in_stringBuildOptionArray,
                                                                                                                                                                                                                                                                                    const GGS__5B_projectBuildOption_5D_ & in_u_33__32_BuildOptionArray,
                                                                                                                                                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_projectSettings result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_productName = in_productName ;
  result.mProperty_majorVersion = in_majorVersion ;
  result.mProperty_minorVersion = in_minorVersion ;
  result.mProperty_revision = in_revision ;
  result.mProperty_targets = in_targets ;
  result.mProperty_libpmCustomPath = in_libpmCustomPath ;
  result.mProperty_macAppBundleBaseName = in_macAppBundleBaseName ;
  result.mProperty_macAppCodeSign = in_macAppCodeSign ;
  result.mProperty_lexicalStyleMap = in_lexicalStyleMap ;
  result.mProperty_boolBuildOptionArray = in_boolBuildOptionArray ;
  result.mProperty_stringBuildOptionArray = in_stringBuildOptionArray ;
  result.mProperty_u_33__32_BuildOptionArray = in_u_33__32_BuildOptionArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectSettings::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectSettings::GGS_projectSettings (const GGS_string & inOperand0,
                                          const GGS_uint & inOperand1,
                                          const GGS_uint & inOperand2,
                                          const GGS_uint & inOperand3,
                                          const GGS_projectTargets & inOperand4,
                                          const GGS_lstring & inOperand5,
                                          const GGS_lstring & inOperand6,
                                          const GGS_lstring & inOperand7,
                                          const GGS_lexicalStyleMap & inOperand8,
                                          const GGS__5B_projectBuildOption_5D_ & inOperand9,
                                          const GGS__5B_projectBuildOption_5D_ & inOperand10,
                                          const GGS__5B_projectBuildOption_5D_ & inOperand11) :
mProperty_productName (inOperand0),
mProperty_majorVersion (inOperand1),
mProperty_minorVersion (inOperand2),
mProperty_revision (inOperand3),
mProperty_targets (inOperand4),
mProperty_libpmCustomPath (inOperand5),
mProperty_macAppBundleBaseName (inOperand6),
mProperty_macAppCodeSign (inOperand7),
mProperty_lexicalStyleMap (inOperand8),
mProperty_boolBuildOptionArray (inOperand9),
mProperty_stringBuildOptionArray (inOperand10),
mProperty_u_33__32_BuildOptionArray (inOperand11) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_projectSettings::isValid (void) const {
  return mProperty_productName.isValid () && mProperty_majorVersion.isValid () && mProperty_minorVersion.isValid () && mProperty_revision.isValid () && mProperty_targets.isValid () && mProperty_libpmCustomPath.isValid () && mProperty_macAppBundleBaseName.isValid () && mProperty_macAppCodeSign.isValid () && mProperty_lexicalStyleMap.isValid () && mProperty_boolBuildOptionArray.isValid () && mProperty_stringBuildOptionArray.isValid () && mProperty_u_33__32_BuildOptionArray.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectSettings::drop (void) {
  mProperty_productName.drop () ;
  mProperty_majorVersion.drop () ;
  mProperty_minorVersion.drop () ;
  mProperty_revision.drop () ;
  mProperty_targets.drop () ;
  mProperty_libpmCustomPath.drop () ;
  mProperty_macAppBundleBaseName.drop () ;
  mProperty_macAppCodeSign.drop () ;
  mProperty_lexicalStyleMap.drop () ;
  mProperty_boolBuildOptionArray.drop () ;
  mProperty_stringBuildOptionArray.drop () ;
  mProperty_u_33__32_BuildOptionArray.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectSettings::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @projectSettings:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_productName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_majorVersion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_minorVersion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_revision.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_targets.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_libpmCustomPath.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_macAppBundleBaseName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_macAppCodeSign.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_lexicalStyleMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_boolBuildOptionArray.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_stringBuildOptionArray.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_u_33__32_BuildOptionArray.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @projectSettings generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectSettings ("projectSettings",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_projectSettings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectSettings ;
}



//------------------------------------------------------------------------------------------------

void cParser_projectComponentSyntax::rule_projectComponentSyntax_project_5F_component_5F_start_5F_symbol_i0_ (GGS_projectSettings & outArgument_outProject,
                                                                                                              Lexique_projectComponentScanner * inCompiler) {
  outArgument_outProject.drop () ; // Release 'out' argument
  GGS_projectTargets var_targets_1863 = GGS_projectTargets::init (inCompiler COMMA_HERE) ;
  GGS_lstring var_macAppBundleBaseName_1900 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("projectComponentGrammar.galgas4", 41)) ;
  GGS_bool var_macAppBundleBaseNameDefined_1942 = GGS_bool (false) ;
  GGS_lstring var_libpmCustomPath_1986 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("projectComponentGrammar.galgas4", 43)) ;
  GGS_bool var_libpmCustomPathDefined_2023 = GGS_bool (false) ;
  GGS_lstring var_macAppCodeSign_2062 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("projectComponentGrammar.galgas4", 45)) ;
  GGS_bool var_macAppCodeSignDefined_2098 = GGS_bool (false) ;
  GGS_bigint var_majorVersion_2136 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 47)) ;
  GGS_bigint var_minorVersion_2161 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 48)) ;
  GGS_bigint var_revision_2186 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 49)) ;
  GGS_bool var_versionDefined_2207 = GGS_bool (false) ;
  GGS_lstring var_productName_2238 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("projectComponentGrammar.galgas4", 51)) ;
  GGS_bool var_productNameDefined_2271 = GGS_bool (false) ;
  GGS_lexicalStyleMap var_lexicalStyleMap_2323 = GGS_lexicalStyleMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_projectBuildOption_5D_ var_boolBuildOptionArray_2375 = GGS__5B_projectBuildOption_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_projectBuildOption_5D_ var_stringBuildOptionArray_2432 = GGS__5B_projectBuildOption_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_projectBuildOption_5D_ var_u_33__32_BuildOptionArray_2491 = GGS__5B_projectBuildOption_5D_::init (inCompiler COMMA_HERE) ;
  var_boolBuildOptionArray_2375.plusPlusAssignOperation (GGS_projectBuildOption::init_21__21__21__21_ (GGS_string ("display_version").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 58)), GGS_lchar::init_21__21_ (GGS_char (utf32 (0)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 58)), inCompiler COMMA_HERE), GGS_string ("version").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 58)), GGS_string ("Display version").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 58)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 58)) ;
  var_boolBuildOptionArray_2375.plusPlusAssignOperation (GGS_projectBuildOption::init_21__21__21__21_ (GGS_string ("display_help").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 60)), GGS_lchar::init_21__21_ (GGS_char (utf32 (0)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 60)), inCompiler COMMA_HERE), GGS_string ("help").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 60)), GGS_string ("Display help").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 60)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 60)) ;
  var_stringBuildOptionArray_2432.plusPlusAssignOperation (GGS_projectBuildOption::init_21__21__21__21_ (GGS_string ("emit_issue_json_file").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 63)), GGS_lchar::init_21__21_ (GGS_char (utf32 (0)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 64)), inCompiler COMMA_HERE), GGS_string ("emit-issue-json-file").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 65)), GGS_string ("Emit a JSON file that contains all compilation issues").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 66)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 62)) ;
  var_boolBuildOptionArray_2375.plusPlusAssignOperation (GGS_projectBuildOption::init_21__21__21__21_ (GGS_string ("outputConcreteSyntaxTree").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 70)), GGS_lchar::init_21__21_ (GGS_char (utf32 (0)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 71)), inCompiler COMMA_HERE), GGS_string ("output-concrete-syntax-tree").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 72)), GGS_string ("Generate the concrete syntax tree, in .dot format (suitable for Graphviz)").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 73)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 69)) ;
  var_boolBuildOptionArray_2375.plusPlusAssignOperation (GGS_projectBuildOption::init_21__21__21__21_ (GGS_string ("log_file_read").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 77)), GGS_lchar::init_21__21_ (GGS_char (utf32 (0)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 78)), inCompiler COMMA_HERE), GGS_string ("log-file-read").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 79)), GGS_string ("Log every file read").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 80)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 76)) ;
  var_boolBuildOptionArray_2375.plusPlusAssignOperation (GGS_projectBuildOption::init_21__21__21__21_ (GGS_string ("do_not_generate_any_file").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 84)), GGS_lchar::init_21__21_ (GGS_char (utf32 (0)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 85)), inCompiler COMMA_HERE), GGS_string ("no-file-generation").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 86)), GGS_string ("Do not generate any file").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 87)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 83)) ;
  var_boolBuildOptionArray_2375.plusPlusAssignOperation (GGS_projectBuildOption::init_21__21__21__21_ (GGS_string ("treat_warnings_as_error").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 91)), GGS_lchar::init_21__21_ (GGS_char (utf32 (0)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 92)), inCompiler COMMA_HERE), GGS_string ("Werror").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 93)), GGS_string ("Treat warnings as errors").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 94)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 90)) ;
  var_boolBuildOptionArray_2375.plusPlusAssignOperation (GGS_projectBuildOption::init_21__21__21__21_ (GGS_string ("no_color").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 98)), GGS_lchar::init_21__21_ (GGS_char (utf32 (0)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 99)), inCompiler COMMA_HERE), GGS_string ("no-color").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 100)), GGS_string ("Do not issue colored messages (Unix Only)").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 101)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 97)) ;
  var_u_33__32_BuildOptionArray_2491.plusPlusAssignOperation (GGS_projectBuildOption::init_21__21__21__21_ (GGS_string ("max_errors").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 114)), GGS_lchar::init_21__21_ (GGS_char (utf32 (0)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 115)), inCompiler COMMA_HERE), GGS_string ("max-errors").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 116)), GGS_string ("Stop after the given number of errors has been reached").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 117)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 113)) ;
  var_u_33__32_BuildOptionArray_2491.plusPlusAssignOperation (GGS_projectBuildOption::init_21__21__21__21_ (GGS_string ("max_warnings").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 121)), GGS_lchar::init_21__21_ (GGS_char (utf32 (0)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 122)), inCompiler COMMA_HERE), GGS_string ("max-warnings").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 123)), GGS_string ("Stop after the given number of warnings has been reached").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 124)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 120)) ;
  var_stringBuildOptionArray_2432.plusPlusAssignOperation (GGS_projectBuildOption::init_21__21__21__21_ (GGS_string ("outputKeywordList").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 128)), GGS_lchar::init_21__21_ (GGS_char (utf32 (0)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 129)), inCompiler COMMA_HERE), GGS_string ("output-keyword-list-file").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 130)), GGS_string ("Output a Latex file containing keyword list").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 131)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 127)) ;
  var_stringBuildOptionArray_2432.plusPlusAssignOperation (GGS_projectBuildOption::init_21__21__21__21_ (GGS_string ("mode").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 135)), GGS_lchar::init_21__21_ (GGS_char (utf32 (0)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 136)), inCompiler COMMA_HERE), GGS_string ("mode").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 137)), GGS_string ("'lexical-only', 'syntax-only' or 'latex'").getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 138)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 134)) ;
  GGS_stringset var_optionInvocationStringSet_4995 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_optionInvocationCharSet_5046 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_optionIdentifierSet_5095 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_projectBuildOption_5D_ enumerator_5143 (var_boolBuildOptionArray_2375) ;
  while (enumerator_5143.hasCurrentObject ()) {
    var_optionIdentifierSet_5095.plusPlusAssignOperation (enumerator_5143.current (HERE).readProperty_mIdentifier ().readProperty_string ()  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 145)) ;
    var_optionInvocationStringSet_4995.plusPlusAssignOperation (enumerator_5143.current (HERE).readProperty_mInvocationString ().readProperty_string ()  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 146)) ;
    enumerator_5143.gotoNextObject () ;
  }
  UpEnumerator__5B_projectBuildOption_5D_ enumerator_5314 (var_stringBuildOptionArray_2432) ;
  while (enumerator_5314.hasCurrentObject ()) {
    var_optionIdentifierSet_5095.plusPlusAssignOperation (enumerator_5314.current (HERE).readProperty_mIdentifier ().readProperty_string ()  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 149)) ;
    var_optionInvocationStringSet_4995.plusPlusAssignOperation (enumerator_5314.current (HERE).readProperty_mInvocationString ().readProperty_string ()  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 150)) ;
    enumerator_5314.gotoNextObject () ;
  }
  UpEnumerator__5B_projectBuildOption_5D_ enumerator_5488 (var_stringBuildOptionArray_2432) ;
  while (enumerator_5488.hasCurrentObject ()) {
    var_optionIdentifierSet_5095.plusPlusAssignOperation (enumerator_5488.current (HERE).readProperty_mIdentifier ().readProperty_string ()  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 153)) ;
    var_optionInvocationStringSet_4995.plusPlusAssignOperation (enumerator_5488.current (HERE).readProperty_mInvocationString ().readProperty_string ()  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 154)) ;
    enumerator_5488.gotoNextObject () ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_projectComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_u_33__32__2D_build_2D_option COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 162)) ;
      GGS_lstring var_optionIdentifier_5837 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken_identifier COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 163)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_optionIdentifierSet_5095.getter_contains (var_optionIdentifier_5837.readProperty_string () COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 164)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_optionIdentifier_5837.readProperty_location (), GGS_string ("duplicated option identifier"), fixItArray2  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 165)) ;
        }
      }
      var_optionIdentifierSet_5095.plusPlusAssignOperation (var_optionIdentifier_5837.readProperty_string ()  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 167)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 168)) ;
      GGS_lchar var_invocationChar_6080 ;
      switch (select_projectComponentSyntax_1 (inCompiler)) {
      case 1: {
        var_invocationChar_6080 = inCompiler->synthetizedAttribute_charValue () ;
        inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 171)) ;
      } break ;
      case 2: {
        var_invocationChar_6080 = GGS_lchar::init_21__21_ (GGS_char (utf32 (0)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 173)), inCompiler COMMA_HERE) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_invocationString_6227 ;
      switch (select_projectComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_invocationString_6227 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 177)) ;
      } break ;
      case 2: {
        var_invocationString_6227 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 179)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 181)) ;
      GGS_lstring var_explanationString_6393 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 182)) ;
      var_u_33__32_BuildOptionArray_2491.plusPlusAssignOperation (GGS_projectBuildOption::init_21__21__21__21_ (var_optionIdentifier_5837, var_invocationChar_6080, var_invocationString_6227, var_explanationString_6393, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 183)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_invocationString_6227.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = var_optionInvocationStringSet_4995.getter_contains (var_invocationString_6227.readProperty_string () COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 185)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_invocationString_6227.readProperty_location (), GGS_string ("Duplicated invocation string"), fixItArray5  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 186)) ;
            }
          }
        }
      }
      var_optionInvocationStringSet_4995.plusPlusAssignOperation (var_invocationString_6227.readProperty_string ()  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 189)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, var_invocationChar_6080.readProperty_char ().objectCompare (GGS_char (utf32 (0)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = var_optionInvocationCharSet_5046.getter_contains (var_invocationChar_6080.readProperty_char ().getter_string (SOURCE_FILE ("projectComponentGrammar.galgas4", 191)) COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 191)).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (var_invocationChar_6080.readProperty_location (), GGS_string ("Duplicated invocation character"), fixItArray8  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 192)) ;
            }
          }
          var_optionInvocationCharSet_5046.plusPlusAssignOperation (var_invocationChar_6080.readProperty_char ().getter_string (SOURCE_FILE ("projectComponentGrammar.galgas4", 194))  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 194)) ;
        }
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::equal, var_invocationString_6227.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, var_invocationChar_6080.readProperty_char ().objectCompare (GGS_char (utf32 (0)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (var_optionIdentifier_5837.readProperty_location (), GGS_string ("both the invocation character and the invocation string must not be empty"), fixItArray10  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 197)) ;
          }
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_string_2D_build_2D_option COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 200)) ;
      GGS_lstring var_optionIdentifier_7321 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken_identifier COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 201)) ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = var_optionIdentifierSet_5095.getter_contains (var_optionIdentifier_7321.readProperty_string () COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 202)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (var_optionIdentifier_7321.readProperty_location (), GGS_string ("duplicated option identifier"), fixItArray12  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 203)) ;
        }
      }
      var_optionIdentifierSet_5095.plusPlusAssignOperation (var_optionIdentifier_7321.readProperty_string ()  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 205)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 206)) ;
      GGS_lchar var_invocationChar_7564 ;
      switch (select_projectComponentSyntax_3 (inCompiler)) {
      case 1: {
        var_invocationChar_7564 = inCompiler->synthetizedAttribute_charValue () ;
        inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 209)) ;
      } break ;
      case 2: {
        var_invocationChar_7564 = GGS_lchar::init_21__21_ (GGS_char (utf32 (0)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 211)), inCompiler COMMA_HERE) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_invocationString_7711 ;
      switch (select_projectComponentSyntax_4 (inCompiler)) {
      case 1: {
        var_invocationString_7711 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 215)) ;
      } break ;
      case 2: {
        var_invocationString_7711 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 217)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 219)) ;
      GGS_lstring var_explanationString_7877 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 220)) ;
      var_stringBuildOptionArray_2432.plusPlusAssignOperation (GGS_projectBuildOption::init_21__21__21__21_ (var_optionIdentifier_7321, var_invocationChar_7564, var_invocationString_7711, var_explanationString_7877, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 221)) ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, var_invocationString_7711.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GalgasBool test_14 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_14) {
            test_14 = var_optionInvocationStringSet_4995.getter_contains (var_invocationString_7711.readProperty_string () COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 223)).boolEnum () ;
            if (GalgasBool::boolTrue == test_14) {
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (var_invocationString_7711.readProperty_location (), GGS_string ("Duplicated invocation string"), fixItArray15  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 224)) ;
            }
          }
        }
      }
      var_optionInvocationStringSet_4995.plusPlusAssignOperation (var_invocationString_7711.readProperty_string ()  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 227)) ;
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = GGS_bool (ComparisonKind::notEqual, var_invocationChar_7564.readProperty_char ().objectCompare (GGS_char (utf32 (0)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          GalgasBool test_17 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_17) {
            test_17 = var_optionInvocationCharSet_5046.getter_contains (var_invocationChar_7564.readProperty_char ().getter_string (SOURCE_FILE ("projectComponentGrammar.galgas4", 229)) COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 229)).boolEnum () ;
            if (GalgasBool::boolTrue == test_17) {
              GenericArray <FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (var_invocationChar_7564.readProperty_location (), GGS_string ("Duplicated invocation character"), fixItArray18  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 230)) ;
            }
          }
          var_optionInvocationCharSet_5046.plusPlusAssignOperation (var_invocationChar_7564.readProperty_char ().getter_string (SOURCE_FILE ("projectComponentGrammar.galgas4", 232))  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 232)) ;
        }
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::equal, var_invocationString_7711.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          test_19 = GGS_bool (ComparisonKind::equal, var_invocationChar_7564.readProperty_char ().objectCompare (GGS_char (utf32 (0)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            GenericArray <FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (var_optionIdentifier_7321.readProperty_location (), GGS_string ("both the invocation character and the invocation string must not be empty"), fixItArray20  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 235)) ;
          }
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_bool_2D_build_2D_option COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 238)) ;
      GGS_lstring var_optionIdentifier_8806 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken_identifier COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 239)) ;
      GalgasBool test_21 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_21) {
        test_21 = var_optionIdentifierSet_5095.getter_contains (var_optionIdentifier_8806.readProperty_string () COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 240)).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          GenericArray <FixItDescription> fixItArray22 ;
          inCompiler->emitSemanticError (var_optionIdentifier_8806.readProperty_location (), GGS_string ("duplicated option identifier"), fixItArray22  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 241)) ;
        }
      }
      var_optionIdentifierSet_5095.plusPlusAssignOperation (var_optionIdentifier_8806.readProperty_string ()  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 243)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 244)) ;
      GGS_lchar var_invocationChar_9049 ;
      switch (select_projectComponentSyntax_5 (inCompiler)) {
      case 1: {
        var_invocationChar_9049 = inCompiler->synthetizedAttribute_charValue () ;
        inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 247)) ;
      } break ;
      case 2: {
        var_invocationChar_9049 = GGS_lchar::init_21__21_ (GGS_char (utf32 (0)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 249)), inCompiler COMMA_HERE) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_invocationString_9196 ;
      switch (select_projectComponentSyntax_6 (inCompiler)) {
      case 1: {
        var_invocationString_9196 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 253)) ;
      } break ;
      case 2: {
        var_invocationString_9196 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 255)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 257)) ;
      GGS_lstring var_explanationString_9362 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 258)) ;
      var_boolBuildOptionArray_2375.plusPlusAssignOperation (GGS_projectBuildOption::init_21__21__21__21_ (var_optionIdentifier_8806, var_invocationChar_9049, var_invocationString_9196, var_explanationString_9362, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 259)) ;
      GalgasBool test_23 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_23) {
        test_23 = GGS_bool (ComparisonKind::notEqual, var_invocationString_9196.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_23) {
          GalgasBool test_24 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_24) {
            test_24 = var_optionInvocationStringSet_4995.getter_contains (var_invocationString_9196.readProperty_string () COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 261)).boolEnum () ;
            if (GalgasBool::boolTrue == test_24) {
              GenericArray <FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticError (var_invocationString_9196.readProperty_location (), GGS_string ("Duplicated invocation string"), fixItArray25  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 262)) ;
            }
          }
        }
      }
      var_optionInvocationStringSet_4995.plusPlusAssignOperation (var_invocationString_9196.readProperty_string ()  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 265)) ;
      GalgasBool test_26 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_26) {
        test_26 = GGS_bool (ComparisonKind::notEqual, var_invocationChar_9049.readProperty_char ().objectCompare (GGS_char (utf32 (0)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_26) {
          GalgasBool test_27 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_27) {
            test_27 = var_optionInvocationCharSet_5046.getter_contains (var_invocationChar_9049.readProperty_char ().getter_string (SOURCE_FILE ("projectComponentGrammar.galgas4", 267)) COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 267)).boolEnum () ;
            if (GalgasBool::boolTrue == test_27) {
              GenericArray <FixItDescription> fixItArray28 ;
              inCompiler->emitSemanticError (var_invocationChar_9049.readProperty_location (), GGS_string ("Duplicated invocation character"), fixItArray28  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 268)) ;
            }
          }
          var_optionInvocationCharSet_5046.plusPlusAssignOperation (var_invocationChar_9049.readProperty_char ().getter_string (SOURCE_FILE ("projectComponentGrammar.galgas4", 270))  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 270)) ;
        }
      }
      GalgasBool test_29 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_29) {
        test_29 = GGS_bool (ComparisonKind::equal, var_invocationString_9196.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_29) {
          test_29 = GGS_bool (ComparisonKind::equal, var_invocationChar_9049.readProperty_char ().objectCompare (GGS_char (utf32 (0)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_29) {
            GenericArray <FixItDescription> fixItArray30 ;
            inCompiler->emitSemanticError (var_optionIdentifier_8806.readProperty_location (), GGS_string ("both the invocation character and the invocation string must not be empty"), fixItArray30  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 273)) ;
          }
        }
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_lexical_2D_style COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 276)) ;
      GGS_lstring var_styleName_10285 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken_identifier COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 277)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 278)) ;
      GGS_lstring var_styleComment_10338 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 279)) ;
      {
      var_lexicalStyleMap_2323.setter_insert (var_styleName_10285, var_styleComment_10338, var_lexicalStyleMap_2323.getter_count (SOURCE_FILE ("projectComponentGrammar.galgas4", 280)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 280)), inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 280)) ;
      }
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_productName COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 282)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 283)) ;
      GGS_lstring var_featureValue_10509 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 284)) ;
      GalgasBool test_31 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_31) {
        test_31 = var_productNameDefined_2271.boolEnum () ;
        if (GalgasBool::boolTrue == test_31) {
          GenericArray <FixItDescription> fixItArray32 ;
          inCompiler->emitSemanticError (var_featureValue_10509.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray32  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 286)) ;
        }
      }
      var_productName_2238 = var_featureValue_10509 ;
      var_productNameDefined_2271 = GGS_bool (true) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_version COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 291)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 292)) ;
      GGS_lbigint var_major_10749 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken_literalInt COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 293)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__2E_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 294)) ;
      GGS_lbigint var_minor_10791 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken_literalInt COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 295)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__2E_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 296)) ;
      GGS_lbigint var_rev_10833 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken_literalInt COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 297)) ;
      GalgasBool test_33 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_33) {
        test_33 = var_versionDefined_2207.boolEnum () ;
        if (GalgasBool::boolTrue == test_33) {
          GenericArray <FixItDescription> fixItArray34 ;
          inCompiler->emitSemanticError (var_rev_10833.readProperty_location ().getter_union (var_major_10749.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 299)), GGS_string ("duplicated attribute"), fixItArray34  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 299)) ;
        }
      }
      var_majorVersion_2136 = var_major_10749.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 301)).getter_bigint (SOURCE_FILE ("projectComponentGrammar.galgas4", 301)) ;
      var_minorVersion_2161 = var_minor_10791.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 302)).getter_bigint (SOURCE_FILE ("projectComponentGrammar.galgas4", 302)) ;
      var_revision_2186 = var_rev_10833.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 303)).getter_bigint (SOURCE_FILE ("projectComponentGrammar.galgas4", 303)) ;
      var_versionDefined_2207 = GGS_bool (true) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_macSwiftApp COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 306)) ;
      GalgasBool test_35 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_35) {
        test_35 = var_targets_1863.getter_contains (GGS_projectTargets::class_func_macSwiftApp (SOURCE_FILE ("projectComponentGrammar.galgas4", 307)) COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 307)).boolEnum () ;
        if (GalgasBool::boolTrue == test_35) {
          GenericArray <FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 308)), GGS_string ("duplicated attribute"), fixItArray36  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 308)) ;
        }
      }
      var_targets_1863.orAssignOperation(GGS_projectTargets::class_func_macSwiftApp (SOURCE_FILE ("projectComponentGrammar.galgas4", 310)), inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 310)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_makefile_2D_macosx COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 312)) ;
      GalgasBool test_37 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_37) {
        test_37 = var_targets_1863.getter_contains (GGS_projectTargets::class_func_makefileMacOS (SOURCE_FILE ("projectComponentGrammar.galgas4", 313)) COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 313)).boolEnum () ;
        if (GalgasBool::boolTrue == test_37) {
          GenericArray <FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 314)), GGS_string ("duplicated attribute"), fixItArray38  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 314)) ;
        }
      }
      var_targets_1863.orAssignOperation(GGS_projectTargets::class_func_makefileMacOS (SOURCE_FILE ("projectComponentGrammar.galgas4", 316)), inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 316)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_makefile_2D_unix COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 318)) ;
      GalgasBool test_39 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_39) {
        test_39 = var_targets_1863.getter_contains (GGS_projectTargets::class_func_makefileUnix (SOURCE_FILE ("projectComponentGrammar.galgas4", 319)) COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 319)).boolEnum () ;
        if (GalgasBool::boolTrue == test_39) {
          GenericArray <FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 320)), GGS_string ("duplicated attribute"), fixItArray40  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 320)) ;
        }
      }
      var_targets_1863.orAssignOperation(GGS_projectTargets::class_func_makefileUnix (SOURCE_FILE ("projectComponentGrammar.galgas4", 322)), inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 322)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 324)) ;
      GalgasBool test_41 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_41) {
        test_41 = var_targets_1863.getter_contains (GGS_projectTargets::class_func_makefileX_38__36_Linux_33__32_OnMac (SOURCE_FILE ("projectComponentGrammar.galgas4", 325)) COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 325)).boolEnum () ;
        if (GalgasBool::boolTrue == test_41) {
          GenericArray <FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 326)), GGS_string ("duplicated attribute"), fixItArray42  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 326)) ;
        }
      }
      var_targets_1863.orAssignOperation(GGS_projectTargets::class_func_makefileX_38__36_Linux_33__32_OnMac (SOURCE_FILE ("projectComponentGrammar.galgas4", 328)), inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 328)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 330)) ;
      GalgasBool test_43 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_43) {
        test_43 = var_targets_1863.getter_contains (GGS_projectTargets::class_func_makefileX_38__36_Linux_36__34_OnMac (SOURCE_FILE ("projectComponentGrammar.galgas4", 331)) COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 331)).boolEnum () ;
        if (GalgasBool::boolTrue == test_43) {
          GenericArray <FixItDescription> fixItArray44 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 332)), GGS_string ("duplicated attribute"), fixItArray44  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 332)) ;
        }
      }
      var_targets_1863.orAssignOperation(GGS_projectTargets::class_func_makefileX_38__36_Linux_36__34_OnMac (SOURCE_FILE ("projectComponentGrammar.galgas4", 334)), inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 334)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 336)) ;
      GalgasBool test_45 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_45) {
        test_45 = var_targets_1863.getter_contains (GGS_projectTargets::class_func_makefileARM_36__34_LinuxOnMac (SOURCE_FILE ("projectComponentGrammar.galgas4", 337)) COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 337)).boolEnum () ;
        if (GalgasBool::boolTrue == test_45) {
          GenericArray <FixItDescription> fixItArray46 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 338)), GGS_string ("duplicated attribute"), fixItArray46  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 338)) ;
        }
      }
      var_targets_1863.orAssignOperation(GGS_projectTargets::class_func_makefileARM_36__34_LinuxOnMac (SOURCE_FILE ("projectComponentGrammar.galgas4", 340)), inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 340)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 342)) ;
      GalgasBool test_47 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_47) {
        test_47 = var_targets_1863.getter_contains (GGS_projectTargets::class_func_makefileWin_33__32_OnMac (SOURCE_FILE ("projectComponentGrammar.galgas4", 343)) COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 343)).boolEnum () ;
        if (GalgasBool::boolTrue == test_47) {
          GenericArray <FixItDescription> fixItArray48 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 344)), GGS_string ("duplicated attribute"), fixItArray48  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 344)) ;
        }
      }
      var_targets_1863.orAssignOperation(GGS_projectTargets::class_func_makefileWin_33__32_OnMac (SOURCE_FILE ("projectComponentGrammar.galgas4", 346)), inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 346)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_codeblocks_2D_windows COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 348)) ;
      GalgasBool test_49 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_49) {
        test_49 = var_targets_1863.getter_contains (GGS_projectTargets::class_func_codeblocksWindows (SOURCE_FILE ("projectComponentGrammar.galgas4", 349)) COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 349)).boolEnum () ;
        if (GalgasBool::boolTrue == test_49) {
          GenericArray <FixItDescription> fixItArray50 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 350)), GGS_string ("duplicated attribute"), fixItArray50  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 350)) ;
        }
      }
      var_targets_1863.orAssignOperation(GGS_projectTargets::class_func_codeblocksWindows (SOURCE_FILE ("projectComponentGrammar.galgas4", 352)), inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 352)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 354)) ;
      GalgasBool test_51 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_51) {
        test_51 = var_targets_1863.getter_contains (GGS_projectTargets::class_func_codeblocksLinux_33__32_ (SOURCE_FILE ("projectComponentGrammar.galgas4", 355)) COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 355)).boolEnum () ;
        if (GalgasBool::boolTrue == test_51) {
          GenericArray <FixItDescription> fixItArray52 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 356)), GGS_string ("duplicated attribute"), fixItArray52  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 356)) ;
        }
      }
      var_targets_1863.orAssignOperation(GGS_projectTargets::class_func_codeblocksLinux_33__32_ (SOURCE_FILE ("projectComponentGrammar.galgas4", 358)), inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 358)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 360)) ;
      GalgasBool test_53 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_53) {
        test_53 = var_targets_1863.getter_contains (GGS_projectTargets::class_func_codeblocksLinux_36__34_ (SOURCE_FILE ("projectComponentGrammar.galgas4", 361)) COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 361)).boolEnum () ;
        if (GalgasBool::boolTrue == test_53) {
          GenericArray <FixItDescription> fixItArray54 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 362)), GGS_string ("duplicated attribute"), fixItArray54  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 362)) ;
        }
      }
      var_targets_1863.orAssignOperation(GGS_projectTargets::class_func_codeblocksLinux_36__34_ (SOURCE_FILE ("projectComponentGrammar.galgas4", 364)), inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 364)) ;
    } break ;
    case 18: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_macAppBundleBaseName COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 366)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 367)) ;
      GGS_lstring var_featureValue_13016 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 368)) ;
      GalgasBool test_55 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_55) {
        test_55 = var_macAppBundleBaseNameDefined_1942.boolEnum () ;
        if (GalgasBool::boolTrue == test_55) {
          GenericArray <FixItDescription> fixItArray56 ;
          inCompiler->emitSemanticError (var_featureValue_13016.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray56  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 370)) ;
        }
      }
      var_macAppBundleBaseName_1900 = var_featureValue_13016 ;
      var_macAppBundleBaseNameDefined_1942 = GGS_bool (true) ;
    } break ;
    case 19: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_libpmCustomPath COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 375)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 376)) ;
      GGS_lstring var_featureValue_13298 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 377)) ;
      GalgasBool test_57 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_57) {
        test_57 = var_libpmCustomPathDefined_2023.boolEnum () ;
        if (GalgasBool::boolTrue == test_57) {
          GenericArray <FixItDescription> fixItArray58 ;
          inCompiler->emitSemanticError (var_featureValue_13298.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray58  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 379)) ;
        }
      }
      var_libpmCustomPath_1986 = var_featureValue_13298 ;
      var_libpmCustomPathDefined_2023 = GGS_bool (true) ;
    } break ;
    case 20: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_macCodeSign COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 384)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 385)) ;
      GGS_lstring var_featureValue_13561 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 386)) ;
      GalgasBool test_59 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_59) {
        test_59 = var_macAppCodeSignDefined_2098.boolEnum () ;
        if (GalgasBool::boolTrue == test_59) {
          GenericArray <FixItDescription> fixItArray60 ;
          inCompiler->emitSemanticError (var_featureValue_13561.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray60  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 388)) ;
        }
      }
      var_macAppCodeSign_2062 = var_featureValue_13561 ;
      var_macAppCodeSignDefined_2098 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outProject = GGS_projectSettings::init_21_productName_21_majorVersion_21_minorVersion_21_revision_21_targets_21_libpmCustomPath_21_macAppBundleBaseName_21_macAppCodeSign_21_lexicalStyleMap_21_boolBuildOptionArray_21_stringBuildOptionArray_21_u_33__32_BuildOptionArray (var_productName_2238.readProperty_string (), var_majorVersion_2136.getter_uint (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 395)), var_minorVersion_2161.getter_uint (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 396)), var_revision_2186.getter_uint (inCompiler COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 397)), var_targets_1863, var_libpmCustomPath_1986, var_macAppBundleBaseName_1900, var_macAppCodeSign_2062, var_lexicalStyleMap_2323, var_boolBuildOptionArray_2375, var_stringBuildOptionArray_2432, var_u_33__32_BuildOptionArray_2491, inCompiler COMMA_HERE) ;
  GalgasBool test_61 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_61) {
    test_61 = var_versionDefined_2207.operator_not (SOURCE_FILE ("projectComponentGrammar.galgas4", 407)).boolEnum () ;
    if (GalgasBool::boolTrue == test_61) {
      GenericArray <FixItDescription> fixItArray62 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 408)), GGS_string ("#version should be defined"), fixItArray62  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 408)) ;
      outArgument_outProject.drop () ; // Release error dropped variable
    }
  }
  GalgasBool test_63 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_63) {
    test_63 = var_productNameDefined_2271.operator_not (SOURCE_FILE ("projectComponentGrammar.galgas4", 410)).boolEnum () ;
    if (GalgasBool::boolTrue == test_63) {
      GenericArray <FixItDescription> fixItArray64 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 411)), GGS_string ("#productName should be defined"), fixItArray64  COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 411)) ;
      outArgument_outProject.drop () ; // Release error dropped variable
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_projectComponentSyntax::rule_projectComponentSyntax_project_5F_component_5F_start_5F_symbol_i0_indexing (Lexique_projectComponentScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_projectComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_u_33__32__2D_build_2D_option COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 162)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken_identifier COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 163)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 168)) ;
      switch (select_projectComponentSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 171)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
      switch (select_projectComponentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 177)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 181)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 182)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_string_2D_build_2D_option COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 200)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken_identifier COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 201)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 206)) ;
      switch (select_projectComponentSyntax_3 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 209)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
      switch (select_projectComponentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 215)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 219)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 220)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_bool_2D_build_2D_option COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 238)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken_identifier COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 239)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 244)) ;
      switch (select_projectComponentSyntax_5 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 247)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
      switch (select_projectComponentSyntax_6 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 253)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 257)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 258)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_lexical_2D_style COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 276)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken_identifier COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 277)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 278)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 279)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_productName COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 282)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 283)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 284)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_version COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 291)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 292)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken_literalInt COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 293)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__2E_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 294)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken_literalInt COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 295)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__2E_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 296)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken_literalInt COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 297)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_macSwiftApp COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 306)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_makefile_2D_macosx COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 312)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_makefile_2D_unix COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 318)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 324)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 330)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 336)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 342)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_codeblocks_2D_windows COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 348)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 354)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 360)) ;
    } break ;
    case 18: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_macAppBundleBaseName COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 366)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 367)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 368)) ;
    } break ;
    case 19: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_libpmCustomPath COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 375)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 376)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 377)) ;
    } break ;
    case 20: {
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__23_macCodeSign COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 384)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__3A_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 385)) ;
      inCompiler->acceptTerminal (Lexique_projectComponentScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("projectComponentGrammar.galgas4", 386)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//  Enum lexicalTypeEnum
//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum::GGS_lexicalTypeEnum (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_string ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_char ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_uint ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_uint_36__34_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_sint ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_sint_36__34_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_double (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_double ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_bigint ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_lexicalTypeEnum [9] = {
  "(not built)",
  "lexicalType_string",
  "lexicalType_char",
  "lexicalType_uint",
  "lexicalType_uint64",
  "lexicalType_sint",
  "lexicalType_sint64",
  "lexicalType_double",
  "lexicalType_bigint"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_string (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_string == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_char (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_char == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_uint (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_uint == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_uint_36__34_ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_sint (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_sint == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_sint_36__34_ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_double (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_double == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_bigint (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_bigint == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTypeEnum::description (String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @lexicalTypeEnum: ") ;
  ioString.appendCString (gEnumNameArrayFor_lexicalTypeEnum [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalTypeEnum::objectCompare (const GGS_lexicalTypeEnum & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalTypeEnum generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTypeEnum ("lexicalTypeEnum",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalTypeEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeEnum ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum appendMethodName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_appendMethodName (const GGS_lexicalTypeEnum & inObject,
                                             Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result = GGS_string ("appendStringAsCLiteralStringConstant") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result = GGS_string ("appendChar") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result = GGS_string ("appendUnsigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result = GGS_string ("appendUnsigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result = GGS_string ("appendSigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result = GGS_string ("appendSigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result = GGS_string ("appendDouble") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result = GGS_string ("appendStringAsCLiteralStringConstant") ;
    }
    break ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum appendArgumentOfMethod'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_appendArgumentOfMethod (const GGS_lexicalTypeEnum & inObject,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result = GGS_string (".decimalString ()") ;
    }
    break ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum initialization'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initialization (const GGS_lexicalTypeEnum & inObject,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result = GGS_string (".removeAllKeepingCapacity ()") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result = GGS_string (" = utf32 (0)") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result = GGS_string (" = 0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result = GGS_string (" = BigSigned ()") ;
    }
    break ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaTypeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaTypeName (const GGS_lexicalTypeEnum & inObject,
                                          Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result = GGS_string ("NSMutableString *") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result = GGS_string ("UInt64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result = GGS_string ("SInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result = GGS_string ("SInt64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result = GGS_string ("double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result = GGS_string ("NSMutableString *") ;
    }
    break ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum swiftTypeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_swiftTypeName (const GGS_lexicalTypeEnum & inObject,
                                          Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result = GGS_string ("String") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result = GGS_string ("UInt64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result = GGS_string ("Int32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result = GGS_string ("Int64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result = GGS_string ("Double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result = GGS_string ("String") ;
    }
    break ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum needsReferenceInInputOutputInCocoa'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_needsReferenceInInputOutputInCocoa (const GGS_lexicalTypeEnum & inObject,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result = GGS_bool (false) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaInitializationCode'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaInitializationCode (const GGS_lexicalTypeEnum & inObject,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result = GGS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result = GGS_string ("0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result = GGS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum swiftInitializationCode'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_swiftInitializationCode (const GGS_lexicalTypeEnum & inObject,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result = GGS_string ("\"\"") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result = GGS_string ("0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result = GGS_string ("\"\"") ;
    }
    break ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaResetPrefix'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaResetPrefix (const GGS_lexicalTypeEnum & inObject,
                                             Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result = GGS_string ("[") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result = GGS_string ("[") ;
    }
    break ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaReset'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaReset (const GGS_lexicalTypeEnum & inObject,
                                       Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result = GGS_string (" setString:@\"\"]") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result = GGS_string (" = 0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result = GGS_string (" setString:@\"\"]") ;
    }
    break ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_formalParameterAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_formalParameterAST_5D_::GGS__5B_formalParameterAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalParameterAST_5D_::GGS__5B_formalParameterAST_5D_ (const GGS__5B_formalParameterAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalParameterAST_5D_ & GGS__5B_formalParameterAST_5D_::operator = (const GGS__5B_formalParameterAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalParameterAST_5D_ GGS__5B_formalParameterAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_formalParameterAST_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalParameterAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalParameterAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalParameterAST_5D_::plusPlusAssignOperation (const GGS_formalParameterAST & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_formalParameterAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalParameterAST_5D_ GGS__5B_formalParameterAST_5D_::add_operation (const GGS__5B_formalParameterAST_5D_ & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_formalParameterAST_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalParameterAST_5D_::description (String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@formalParameterAST], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalParameterAST_5D_::plusAssignOperation (const GGS__5B_formalParameterAST_5D_ inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalParameterAST_5D_::setter_append (const GGS_formalParameterAST inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalParameterAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalParameterAST_5D_::setter_set (const GGS_formalParameterAST inValue,
                                                 const GGS_uint inIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalParameterAST_5D_::setter_insert (const GGS_formalParameterAST inValue,
                                                    const GGS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalParameterAST_5D_::setter_remove (GGS_formalParameterAST & outValue,
                                                    const GGS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalParameterAST_5D_::setter_removeFirst (GGS_formalParameterAST & outValue,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalParameterAST_5D_::setter_removeLast (GGS_formalParameterAST & outValue,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalParameterAST_5D_ GGS__5B_formalParameterAST_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS__5B_formalParameterAST_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_formalParameterAST_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalParameterAST_5D_ GGS__5B_formalParameterAST_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                               const GGS_uint & inLength,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS__5B_formalParameterAST_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_formalParameterAST_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_formalParameterAST_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterAST GGS__5B_formalParameterAST_5D_::getter_first (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_formalParameterAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterAST GGS__5B_formalParameterAST_5D_::getter_last (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formalParameterAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterAST GGS__5B_formalParameterAST_5D_::readSubcript__3F_ (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_formalParameterAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_formalParameterAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_formalParameterAST_5D_::DownEnumerator__5B_formalParameterAST_5D_ (const GGS__5B_formalParameterAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterAST DownEnumerator__5B_formalParameterAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterAST DownEnumerator__5B_formalParameterAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_formalParameterAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_formalParameterAST_5D_::UpEnumerator__5B_formalParameterAST_5D_ (const GGS__5B_formalParameterAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterAST UpEnumerator__5B_formalParameterAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterAST UpEnumerator__5B_formalParameterAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[formalParameterAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_formalParameterAST_5D_ ("[formalParameterAST]",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_formalParameterAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_formalParameterAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_typedProperty_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_typedProperty_5D_::GGS__5B_typedProperty_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_typedProperty_5D_::GGS__5B_typedProperty_5D_ (const GGS__5B_typedProperty_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_typedProperty_5D_ & GGS__5B_typedProperty_5D_::operator = (const GGS__5B_typedProperty_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_typedProperty_5D_ GGS__5B_typedProperty_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_typedProperty_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_typedProperty_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_typedProperty_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_typedProperty_5D_::plusPlusAssignOperation (const GGS_typedProperty & inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_typedProperty_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_typedProperty_5D_ GGS__5B_typedProperty_5D_::add_operation (const GGS__5B_typedProperty_5D_ & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_typedProperty_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_typedProperty_5D_::description (String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@typedProperty], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_typedProperty_5D_::plusAssignOperation (const GGS__5B_typedProperty_5D_ inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_typedProperty_5D_::setter_append (const GGS_typedProperty inValue,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_typedProperty_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_typedProperty_5D_::setter_set (const GGS_typedProperty inValue,
                                            const GGS_uint inIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_typedProperty_5D_::setter_insert (const GGS_typedProperty inValue,
                                               const GGS_uint inInsertionIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_typedProperty_5D_::setter_remove (GGS_typedProperty & outValue,
                                               const GGS_uint inRemoveIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_typedProperty_5D_::setter_removeFirst (GGS_typedProperty & outValue,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_typedProperty_5D_::setter_removeLast (GGS_typedProperty & outValue,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_typedProperty_5D_ GGS__5B_typedProperty_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS__5B_typedProperty_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_typedProperty_5D_ GGS__5B_typedProperty_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                     const GGS_uint & inLength,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS__5B_typedProperty_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedProperty GGS__5B_typedProperty_5D_::getter_first (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_typedProperty result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedProperty GGS__5B_typedProperty_5D_::getter_last (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_typedProperty result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedProperty GGS__5B_typedProperty_5D_::readSubcript__3F_ (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_typedProperty result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_typedProperty_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_typedProperty_5D_::DownEnumerator__5B_typedProperty_5D_ (const GGS__5B_typedProperty_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_typedProperty DownEnumerator__5B_typedProperty_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedProperty DownEnumerator__5B_typedProperty_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_typedProperty_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_typedProperty_5D_::UpEnumerator__5B_typedProperty_5D_ (const GGS__5B_typedProperty_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typedProperty UpEnumerator__5B_typedProperty_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedProperty UpEnumerator__5B_typedProperty_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[typedProperty] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_typedProperty_5D_ ("[typedProperty]",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_typedProperty_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_typedProperty_5D_ ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_enumerationDescriptor_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_enumerationDescriptor_5D_::GGS__5B_enumerationDescriptor_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumerationDescriptor_5D_::GGS__5B_enumerationDescriptor_5D_ (const GGS__5B_enumerationDescriptor_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumerationDescriptor_5D_ & GGS__5B_enumerationDescriptor_5D_::operator = (const GGS__5B_enumerationDescriptor_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumerationDescriptor_5D_ GGS__5B_enumerationDescriptor_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_enumerationDescriptor_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumerationDescriptor_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumerationDescriptor_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumerationDescriptor_5D_::plusPlusAssignOperation (const GGS_enumerationDescriptor & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_enumerationDescriptor_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumerationDescriptor_5D_ GGS__5B_enumerationDescriptor_5D_::add_operation (const GGS__5B_enumerationDescriptor_5D_ & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_enumerationDescriptor_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumerationDescriptor_5D_::description (String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@enumerationDescriptor], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumerationDescriptor_5D_::plusAssignOperation (const GGS__5B_enumerationDescriptor_5D_ inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumerationDescriptor_5D_::setter_append (const GGS_enumerationDescriptor inValue,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumerationDescriptor_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumerationDescriptor_5D_::setter_set (const GGS_enumerationDescriptor inValue,
                                                    const GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumerationDescriptor_5D_::setter_insert (const GGS_enumerationDescriptor inValue,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumerationDescriptor_5D_::setter_remove (GGS_enumerationDescriptor & outValue,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumerationDescriptor_5D_::setter_removeFirst (GGS_enumerationDescriptor & outValue,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumerationDescriptor_5D_::setter_removeLast (GGS_enumerationDescriptor & outValue,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumerationDescriptor_5D_ GGS__5B_enumerationDescriptor_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS__5B_enumerationDescriptor_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumerationDescriptor_5D_ GGS__5B_enumerationDescriptor_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                     const GGS_uint & inLength,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS__5B_enumerationDescriptor_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptor GGS__5B_enumerationDescriptor_5D_::getter_first (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_enumerationDescriptor result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptor GGS__5B_enumerationDescriptor_5D_::getter_last (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_enumerationDescriptor result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptor GGS__5B_enumerationDescriptor_5D_::readSubcript__3F_ (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_enumerationDescriptor result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_enumerationDescriptor_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_enumerationDescriptor_5D_::DownEnumerator__5B_enumerationDescriptor_5D_ (const GGS__5B_enumerationDescriptor_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptor DownEnumerator__5B_enumerationDescriptor_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptor DownEnumerator__5B_enumerationDescriptor_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_enumerationDescriptor_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_enumerationDescriptor_5D_::UpEnumerator__5B_enumerationDescriptor_5D_ (const GGS__5B_enumerationDescriptor_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptor UpEnumerator__5B_enumerationDescriptor_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptor UpEnumerator__5B_enumerationDescriptor_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[enumerationDescriptor] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_enumerationDescriptor_5D_ ("[enumerationDescriptor]",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_enumerationDescriptor_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_enumerationDescriptor_5D_ ;
}

