#ifndef grammar_2D_galgas_33_ProjectGrammar_1_DEFINED
#define grammar_2D_galgas_33_ProjectGrammar_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "syntax-galgas3ProjectSyntax.h"
//---------------------------------------------------------------------------------------------------------------------*

//class C_Compiler ;
//class GALGAS_lstring ;
//class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_galgas_33_ProjectGrammar : public cParser_galgas_33_ProjectSyntax {
//------------------------------------- 'project_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_ (GALGAS_galgas_33_ProjectComponentAST & outArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_galgas_33_ProjectComponentAST & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_galgas_33_ProjectComponentAST & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Start symbol indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

  public : virtual int32_t select_galgas_33_ProjectSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ProjectSyntax_1 (C_Lexique_galgas_33_Scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

#endif

