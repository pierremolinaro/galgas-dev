//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        File 'syntax-programModelBuilder.h'                                          *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'34"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef programModelBuilder_ENTITIES_DEFINED
#define programModelBuilder_ENTITIES_DEFINED

//-----------------------------------------------------------------------------*

#include <stdint.h>

//-----------------------------------------------------------------------------*

#include "lexique-galgas_scanner.h"
#include "syntax-programModelBuilder.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Parser class 'programModelBuilder' declaration                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_programModelBuilder {
//--- Virtual destructor
  public : virtual ~ cParser_programModelBuilder (void) {}

//--- Non terminal declarations
  protected : virtual void nt_program_5F_component_5F_start_5F_symbol_ (class GALGAS_programComponentAST & outArgument0,
                                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                                        class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_program_5F_component_5F_start_5F_symbol_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                             class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_program_5F_component_5F_start_5F_symbol_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                        class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                                class C_String & ioSyntaxDirectedTranslationResult,
                                                                class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                     class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_programModelBuilder_program_5F_component_5F_start_5F_symbol_i0_ (GALGAS_programComponentAST & outArgument0,
                                                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                                                         C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_programModelBuilder_program_5F_component_5F_start_5F_symbol_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_programModelBuilder_program_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_programModelBuilder_0 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_programModelBuilder_1 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_programModelBuilder_2 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_programModelBuilder_3 (C_Lexique_galgas_5F_scanner *) = 0 ;


} ;

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

#endif