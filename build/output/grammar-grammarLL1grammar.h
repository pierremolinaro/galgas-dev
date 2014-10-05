#ifndef grammar_2D_grammarLL_31_grammar_1_DEFINED
#define grammar_2D_grammarLL_31_grammar_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "syntax-grammarModelBuilder.h"
//---------------------------------------------------------------------------------------------------------------------*

class C_Compiler ;
class GALGAS_lstring ;
class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_grammarLL_31_grammar : public cParser_grammarModelBuilder {
//------------------------------------- 'grammar_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_grammar_5F_component_5F_start_5F_symbol_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_grammar_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_grammar_5F_component_5F_start_5F_symbol_ (GALGAS_galgas_33_GrammarComponentListAST_2D_element & outArgument0,
                                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_galgas_33_GrammarComponentListAST_2D_element & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_galgas_33_GrammarComponentListAST_2D_element & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Start symbol indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//------------------------------------- 'grammar_start_symbol_label' non terminal
//--- 'parse' label
  public : virtual void nt_grammar_5F_start_5F_symbol_5F_label_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_grammar_5F_start_5F_symbol_5F_label_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_grammar_5F_start_5F_symbol_5F_label_ (const GALGAS_lstring inArgument0,
                                                                 GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'label_formal_parameter' non terminal
//--- 'parse' label
  public : virtual void nt_label_5F_formal_5F_parameter_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                               C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_label_5F_formal_5F_parameter_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_label_5F_formal_5F_parameter_ (GALGAS_lstring & outArgument0,
                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

  public : virtual int32_t select_grammarModelBuilder_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_2 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_3 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_4 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_5 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_6 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_7 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_8 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_grammarModelBuilder_9 (C_Lexique_galgas_5F_scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

#endif

