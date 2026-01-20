#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-forward.h"
#include "class-instruction.h"
#include "class-pen+down.h"
#include "class-pen+up.h"
#include "class-rotate.h"
#include "filewrapper-generationTemplate.h"
#include "list-instruction+list.h"
#include "map-routine+map.h"
#include "method-instruction-code+display.h"
#include "struct-instruction+list-2Eelement.h"
#include "syntax-logo-5Fsyntax.h"



//------------------------------------------------------------------------------------------------

void cParser_logo_5F_syntax::rule_logo_5F_syntax_pen_5F_direction_i0_ (GGS_instructionList & ioArgument_il,
                                                                       Lexique_logo_5F_lexique * inCompiler) {
  switch (select_logo_5F_syntax_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_UP COMMA_SOURCE_FILE ("logo-syntax.galgas", 7)) ;
    GGS_instruction var_ins_231 = GGS_penUp::init (inCompiler COMMA_HERE) ;
    ioArgument_il.addAssignOperation (var_ins_231  COMMA_SOURCE_FILE ("logo-syntax.galgas", 9)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_DOWN COMMA_SOURCE_FILE ("logo-syntax.galgas", 11)) ;
    GGS_instruction var_ins_308 = GGS_penDown::init (inCompiler COMMA_HERE) ;
    ioArgument_il.addAssignOperation (var_ins_308  COMMA_SOURCE_FILE ("logo-syntax.galgas", 13)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_logo_5F_syntax::rule_logo_5F_syntax_pen_5F_direction_i0_parse (Lexique_logo_5F_lexique * inCompiler) {
  switch (select_logo_5F_syntax_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_UP COMMA_SOURCE_FILE ("logo-syntax.galgas", 7)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_DOWN COMMA_SOURCE_FILE ("logo-syntax.galgas", 11)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_logo_5F_syntax::rule_logo_5F_syntax_pen_5F_direction_i0_indexing (Lexique_logo_5F_lexique * inCompiler) {
  switch (select_logo_5F_syntax_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_UP COMMA_SOURCE_FILE ("logo-syntax.galgas", 7)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_DOWN COMMA_SOURCE_FILE ("logo-syntax.galgas", 11)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_logo_5F_syntax::rule_logo_5F_syntax_instruction_i1_ (GGS_routineMap & ioArgument_ioTableRoutines,
                                                                  GGS_instructionList & ioArgument_il,
                                                                  Lexique_logo_5F_lexique * inCompiler) {
  switch (select_logo_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_FORWARD COMMA_SOURCE_FILE ("logo-syntax.galgas", 21)) ;
    GGS_luint var_param_586 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("logo-syntax.galgas", 22)) ;
    GGS_instruction var_ins_615 = GGS_forward::init_21_ (var_param_586, inCompiler COMMA_HERE) ;
    ioArgument_il.addAssignOperation (var_ins_615  COMMA_SOURCE_FILE ("logo-syntax.galgas", 24)) ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("logo-syntax.galgas", 25)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_ROTATE COMMA_SOURCE_FILE ("logo-syntax.galgas", 27)) ;
    GGS_luint var_param_716 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("logo-syntax.galgas", 28)) ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("logo-syntax.galgas", 29)) ;
    GGS_instruction var_ins_755 = GGS_rotate::init_21_ (var_param_716, inCompiler COMMA_HERE) ;
    ioArgument_il.addAssignOperation (var_ins_755  COMMA_SOURCE_FILE ("logo-syntax.galgas", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_PEN COMMA_SOURCE_FILE ("logo-syntax.galgas", 33)) ;
    nt_pen_5F_direction_ (ioArgument_il, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("logo-syntax.galgas", 35)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_CALL COMMA_SOURCE_FILE ("logo-syntax.galgas", 37)) ;
    GGS_lstring var_routineName_905 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_logo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("logo-syntax.galgas", 38)) ;
    GGS_instructionList var_routineContent_989 ;
    ioArgument_ioTableRoutines.method_searchKey (var_routineName_905, var_routineContent_989, inCompiler COMMA_SOURCE_FILE ("logo-syntax.galgas", 39)) ;
    UpEnumerator_instructionList enumerator_1020 (var_routineContent_989) ;
    while (enumerator_1020.hasCurrentObject ()) {
      ioArgument_il.addAssignOperation (enumerator_1020.current (HERE).readProperty_mInstruction ()  COMMA_SOURCE_FILE ("logo-syntax.galgas", 41)) ;
      enumerator_1020.gotoNextObject () ;
    }
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("logo-syntax.galgas", 43)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_logo_5F_syntax::rule_logo_5F_syntax_instruction_i1_parse (Lexique_logo_5F_lexique * inCompiler) {
  switch (select_logo_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_FORWARD COMMA_SOURCE_FILE ("logo-syntax.galgas", 21)) ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("logo-syntax.galgas", 22)) ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("logo-syntax.galgas", 25)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_ROTATE COMMA_SOURCE_FILE ("logo-syntax.galgas", 27)) ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("logo-syntax.galgas", 28)) ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("logo-syntax.galgas", 29)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_PEN COMMA_SOURCE_FILE ("logo-syntax.galgas", 33)) ;
    nt_pen_5F_direction_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("logo-syntax.galgas", 35)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_CALL COMMA_SOURCE_FILE ("logo-syntax.galgas", 37)) ;
    inCompiler->enterIndexing (Lexique_logo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("logo-syntax.galgas", 38)) ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("logo-syntax.galgas", 43)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_logo_5F_syntax::rule_logo_5F_syntax_instruction_i1_indexing (Lexique_logo_5F_lexique * inCompiler) {
  switch (select_logo_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_FORWARD COMMA_SOURCE_FILE ("logo-syntax.galgas", 21)) ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("logo-syntax.galgas", 22)) ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("logo-syntax.galgas", 25)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_ROTATE COMMA_SOURCE_FILE ("logo-syntax.galgas", 27)) ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("logo-syntax.galgas", 28)) ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("logo-syntax.galgas", 29)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_PEN COMMA_SOURCE_FILE ("logo-syntax.galgas", 33)) ;
    nt_pen_5F_direction_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("logo-syntax.galgas", 35)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_CALL COMMA_SOURCE_FILE ("logo-syntax.galgas", 37)) ;
    inCompiler->enterIndexing (Lexique_logo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("logo-syntax.galgas", 38)) ;
    inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("logo-syntax.galgas", 43)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_logo_5F_syntax::rule_logo_5F_syntax_instruction_5F_list_i2_ (GGS_routineMap & ioArgument_ioTableRoutines,
                                                                          GGS_instructionList & ioArgument_il,
                                                                          Lexique_logo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_logo_5F_syntax_2 (inCompiler) == 2) {
      nt_instruction_ (ioArgument_ioTableRoutines, ioArgument_il, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_logo_5F_syntax::rule_logo_5F_syntax_instruction_5F_list_i2_parse (Lexique_logo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_logo_5F_syntax_2 (inCompiler) == 2) {
      nt_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_logo_5F_syntax::rule_logo_5F_syntax_instruction_5F_list_i2_indexing (Lexique_logo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_logo_5F_syntax_2 (inCompiler) == 2) {
      nt_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_logo_5F_syntax::rule_logo_5F_syntax_routine_5F_definition_i3_ (GGS_routineMap & ioArgument_ioTableRoutines,
                                                                            Lexique_logo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_ROUTINE COMMA_SOURCE_FILE ("logo-syntax.galgas", 59)) ;
  GGS_lstring var_routineName_1565 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_logo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("logo-syntax.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_BEGIN COMMA_SOURCE_FILE ("logo-syntax.galgas", 61)) ;
  GGS_instructionList var_il_1641 = GGS_instructionList::init (inCompiler COMMA_HERE) ;
  nt_instruction_5F_list_ (ioArgument_ioTableRoutines, var_il_1641, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_END COMMA_SOURCE_FILE ("logo-syntax.galgas", 64)) ;
  {
  ioArgument_ioTableRoutines.setter_insertKey (var_routineName_1565, var_il_1641, inCompiler COMMA_SOURCE_FILE ("logo-syntax.galgas", 66)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_logo_5F_syntax::rule_logo_5F_syntax_routine_5F_definition_i3_parse (Lexique_logo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_ROUTINE COMMA_SOURCE_FILE ("logo-syntax.galgas", 59)) ;
  inCompiler->enterIndexing (Lexique_logo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("logo-syntax.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_BEGIN COMMA_SOURCE_FILE ("logo-syntax.galgas", 61)) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_END COMMA_SOURCE_FILE ("logo-syntax.galgas", 64)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_logo_5F_syntax::rule_logo_5F_syntax_routine_5F_definition_i3_indexing (Lexique_logo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_ROUTINE COMMA_SOURCE_FILE ("logo-syntax.galgas", 59)) ;
  inCompiler->enterIndexing (Lexique_logo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("logo-syntax.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_BEGIN COMMA_SOURCE_FILE ("logo-syntax.galgas", 61)) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_END COMMA_SOURCE_FILE ("logo-syntax.galgas", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_logo_5F_syntax::rule_logo_5F_syntax_start_5F_symbol_i4_ (Lexique_logo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_PROGRAM COMMA_SOURCE_FILE ("logo-syntax.galgas", 73)) ;
  GGS_routineMap var_tableRoutines_1985 = GGS_routineMap::init (inCompiler COMMA_HERE) ;
  GGS_instructionList var_instructions_2030 = GGS_instructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_logo_5F_syntax_3 (inCompiler) == 2) {
      nt_routine_5F_definition_ (var_tableRoutines_1985, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_BEGIN COMMA_SOURCE_FILE ("logo-syntax.galgas", 81)) ;
  nt_instruction_5F_list_ (var_tableRoutines_1985, var_instructions_2030, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_END COMMA_SOURCE_FILE ("logo-syntax.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("logo-syntax.galgas", 84)) ;
  GGS_bool var_pendown_2283 = GGS_bool (false) ;
  GGS_double var_x_2315 = GGS_double (0) ;
  GGS_double var_y_2339 = GGS_double (0) ;
  GGS_double var_angle_2363 = GGS_double (0) ;
  GGS_string var_SVG_2410 = GGS_string::makeEmptyString () ;
  UpEnumerator_instructionList enumerator_2432 (var_instructions_2030) ;
  while (enumerator_2432.hasCurrentObject ()) {
    callExtensionMethod_codeDisplay ((cPtr_instruction *) enumerator_2432.current (HERE).readProperty_mInstruction ().ptr (), var_pendown_2283, var_x_2315, var_y_2339, var_angle_2363, var_SVG_2410, inCompiler COMMA_SOURCE_FILE ("logo-syntax.galgas", 92)) ;
    enumerator_2432.gotoNextObject () ;
  }
  GGS_string var_sourceFilePath_2559 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("logo-syntax.galgas", 95)) ;
  GGS_string var_code_2625 = GGS_string (filewrapperTemplate_generationTemplate_svg (inCompiler, var_sourceFilePath_2559.getter_lastPathComponent (SOURCE_FILE ("logo-syntax.galgas", 97)), var_SVG_2410 COMMA_SOURCE_FILE ("logo-syntax.galgas", 96))) ;
  var_code_2625.method_writeToFile (var_sourceFilePath_2559.getter_deletingPathExtension (SOURCE_FILE ("logo-syntax.galgas", 100)).add_operation (GGS_string (".svg"), inCompiler COMMA_SOURCE_FILE ("logo-syntax.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("logo-syntax.galgas", 100)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_logo_5F_syntax::rule_logo_5F_syntax_start_5F_symbol_i4_parse (Lexique_logo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_PROGRAM COMMA_SOURCE_FILE ("logo-syntax.galgas", 73)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_logo_5F_syntax_3 (inCompiler) == 2) {
      nt_routine_5F_definition_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_BEGIN COMMA_SOURCE_FILE ("logo-syntax.galgas", 81)) ;
  nt_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_END COMMA_SOURCE_FILE ("logo-syntax.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("logo-syntax.galgas", 84)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_logo_5F_syntax::rule_logo_5F_syntax_start_5F_symbol_i4_indexing (Lexique_logo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_PROGRAM COMMA_SOURCE_FILE ("logo-syntax.galgas", 73)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_logo_5F_syntax_3 (inCompiler) == 2) {
      nt_routine_5F_definition_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_BEGIN COMMA_SOURCE_FILE ("logo-syntax.galgas", 81)) ;
  nt_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken_END COMMA_SOURCE_FILE ("logo-syntax.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_logo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("logo-syntax.galgas", 84)) ;
}

