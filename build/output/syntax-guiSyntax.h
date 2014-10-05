#ifndef syntax_2D_guiSyntax_1_DEFINED
#define syntax_2D_guiSyntax_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "lexique-galgas_scanner.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Parser class 'guiSyntax' declaration                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_guiSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_guiSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_gui_5F_component_5F_start_5F_symbol_ (class GALGAS_guiComponentAST & outArgument0,
                                                                    class C_String & ioSyntaxDirectedTranslationResult,
                                                                    class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gui_5F_component_5F_start_5F_symbol_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                         class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gui_5F_component_5F_start_5F_symbol_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_guiSyntax_gui_5F_component_5F_start_5F_symbol_i0_ (GALGAS_guiComponentAST & outArgument0,
                                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                                           C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_guiSyntax_gui_5F_component_5F_start_5F_symbol_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_guiSyntax_gui_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_guiSyntax_0 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_guiSyntax_1 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_guiSyntax_2 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_guiSyntax_3 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_guiSyntax_4 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_guiSyntax_5 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_guiSyntax_6 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_guiSyntax_7 (C_Lexique_galgas_5F_scanner *) = 0 ;


} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

