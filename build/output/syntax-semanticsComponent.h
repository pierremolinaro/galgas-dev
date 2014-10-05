#ifndef syntax_2D_semanticsComponent_1_DEFINED
#define syntax_2D_semanticsComponent_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "lexique-galgas_scanner.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Parser class 'semanticsComponent' declaration                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_semanticsComponent {
//--- Virtual destructor
  public : virtual ~ cParser_semanticsComponent (void) {}

//--- Non terminal declarations
  protected : virtual void nt_semantic_5F_declaration_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                        class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantics_5F_component_5F_start_5F_symbol_ (class GALGAS_semanticsComponentAST & outArgument0,
                                                                          class C_String & ioSyntaxDirectedTranslationResult,
                                                                          class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantics_5F_component_5F_start_5F_symbol_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                               class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantics_5F_component_5F_start_5F_symbol_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_semanticsComponent_semantics_5F_component_5F_start_5F_symbol_i0_ (GALGAS_semanticsComponentAST & outArgument0,
                                                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                                                          C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_semanticsComponent_semantics_5F_component_5F_start_5F_symbol_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                               C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_semanticsComponent_semantics_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_semanticsComponent_0 (C_Lexique_galgas_5F_scanner *) = 0 ;


} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

