#ifndef filewrapper_2D_grammarGenerationTemplate_1_DEFINED
#define filewrapper_2D_grammarGenerationTemplate_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'grammarGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_grammarGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'grammarGenerationTemplate grammarZone2Header'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_32_Header (class C_Compiler * inCompiler,
                                                                                   const class GALGAS_galgas_33_GrammarComponentListAST_2D_element & in_GRAMMAR_5F_COMPONENT_5F_ROOT
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'grammarGenerationTemplate grammarZone2HeaderGalgas3'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_32_HeaderGalgas_33_ (class C_Compiler * inCompiler,
                                                                                             const class GALGAS_galgas_33_GrammarComponentListAST_2D_element & in_GRAMMAR_5F_COMPONENT_5F_ROOT
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'grammarGenerationTemplate grammarZone3Header'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_Header (class C_Compiler * inCompiler,
                                                                                   const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                   const class GALGAS_galgas_33_GrammarComponentListAST_2D_element & in_GRAMMAR_5F_COMPONENT_5F_ROOT,
                                                                                   const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_NON_5F_TERMINAL_5F_MAP,
                                                                                   const class GALGAS_nonTerminalToAddList & in_ADDED_5F_NON_5F_TERMINAL_5F_LIST,
                                                                                   const class GALGAS_bool & in_HAS_5F_INDEXING
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'grammarGenerationTemplate grammarZone3HeaderGalgas3'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (class C_Compiler * inCompiler,
                                                                                             const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                             const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_NON_5F_TERMINAL_5F_MAP,
                                                                                             const class GALGAS_nonTerminalToAddList & in_ADDED_5F_NON_5F_TERMINAL_5F_LIST,
                                                                                             const class GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                             const class GALGAS_string & in_START_5F_SYMBOL_5F_NAME,
                                                                                             const class GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE,
                                                                                             const class GALGAS_string & in_GRAMMAR_5F_NAME,
                                                                                             const class GALGAS_lstringlist & in_SYNTAX_5F_COMPONENTS
                                                                                             COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

