#ifndef grammar_2D_projectLL_31_grammar_1_DEFINED
#define grammar_2D_projectLL_31_grammar_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "syntax-projectModelBuilder.h"
//---------------------------------------------------------------------------------------------------------------------*

class C_Compiler ;
class GALGAS_lstring ;
class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_projectLL_31_grammar : public cParser_projectModelBuilder {
//------------------------------------- 'project_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_ (GALGAS_projectComponentAST & outArgument0,
                                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_projectComponentAST & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_projectComponentAST & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Start symbol indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

  public : virtual int32_t select_projectModelBuilder_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_projectModelBuilder_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_projectModelBuilder_2 (C_Lexique_galgas_5F_scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

#endif

