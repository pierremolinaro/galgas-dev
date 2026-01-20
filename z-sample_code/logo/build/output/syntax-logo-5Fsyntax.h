#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "lexique-logo-5Flexique.h"
//--------------------------------------------------------------------------------------------------
//
//Parser class 'logo_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_logo_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_logo_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_instruction_ (class GGS_routineMap & ioArgument0,
                                           class GGS_instructionList & ioArgument1,
                                           class Lexique_logo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_parse (class Lexique_logo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_indexing (class Lexique_logo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_ (class GGS_routineMap & ioArgument0,
                                                   class GGS_instructionList & ioArgument1,
                                                   class Lexique_logo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_parse (class Lexique_logo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_indexing (class Lexique_logo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_pen_5F_direction_ (class GGS_instructionList & ioArgument0,
                                                class Lexique_logo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_pen_5F_direction_parse (class Lexique_logo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_pen_5F_direction_indexing (class Lexique_logo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_ (class GGS_routineMap & ioArgument0,
                                                     class Lexique_logo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_parse (class Lexique_logo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_indexing (class Lexique_logo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class Lexique_logo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_logo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_logo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_logo_5F_syntax_pen_5F_direction_i0_ (GGS_instructionList & ioArgument0,
                                                            Lexique_logo_5F_lexique * inLexique) ;

  protected: void rule_logo_5F_syntax_pen_5F_direction_i0_parse (Lexique_logo_5F_lexique * inLexique) ;

  protected: void rule_logo_5F_syntax_pen_5F_direction_i0_indexing (Lexique_logo_5F_lexique * inLexique) ;

  protected: void rule_logo_5F_syntax_instruction_i1_ (GGS_routineMap & ioArgument0,
                                                       GGS_instructionList & ioArgument1,
                                                       Lexique_logo_5F_lexique * inLexique) ;

  protected: void rule_logo_5F_syntax_instruction_i1_parse (Lexique_logo_5F_lexique * inLexique) ;

  protected: void rule_logo_5F_syntax_instruction_i1_indexing (Lexique_logo_5F_lexique * inLexique) ;

  protected: void rule_logo_5F_syntax_instruction_5F_list_i2_ (GGS_routineMap & ioArgument0,
                                                               GGS_instructionList & ioArgument1,
                                                               Lexique_logo_5F_lexique * inLexique) ;

  protected: void rule_logo_5F_syntax_instruction_5F_list_i2_parse (Lexique_logo_5F_lexique * inLexique) ;

  protected: void rule_logo_5F_syntax_instruction_5F_list_i2_indexing (Lexique_logo_5F_lexique * inLexique) ;

  protected: void rule_logo_5F_syntax_routine_5F_definition_i3_ (GGS_routineMap & ioArgument0,
                                                                 Lexique_logo_5F_lexique * inLexique) ;

  protected: void rule_logo_5F_syntax_routine_5F_definition_i3_parse (Lexique_logo_5F_lexique * inLexique) ;

  protected: void rule_logo_5F_syntax_routine_5F_definition_i3_indexing (Lexique_logo_5F_lexique * inLexique) ;

  protected: void rule_logo_5F_syntax_start_5F_symbol_i4_ (Lexique_logo_5F_lexique * inLexique) ;

  protected: void rule_logo_5F_syntax_start_5F_symbol_i4_parse (Lexique_logo_5F_lexique * inLexique) ;

  protected: void rule_logo_5F_syntax_start_5F_symbol_i4_indexing (Lexique_logo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_logo_5F_syntax_0 (Lexique_logo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_logo_5F_syntax_1 (Lexique_logo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_logo_5F_syntax_2 (Lexique_logo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_logo_5F_syntax_3 (Lexique_logo_5F_lexique *) = 0 ;


} ;


//----------------------------------------------------------------------------------------------------------------------

