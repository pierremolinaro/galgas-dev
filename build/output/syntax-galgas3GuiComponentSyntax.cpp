//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    File 'syntax-galgas3GuiComponentSyntax.cpp'                                      *
//                                             Generated by version 2.7.0                                              *
//                                           august 9th, 2014, at 16h25'30"                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#include "grammar-galgas3Grammar.h"
#include "grammar-galgas3ProjectGrammar.h"
#include "grammar-grammarLL1grammar.h"
#include "grammar-guiGrammar.h"
#include "grammar-lexiqueLL1grammar.h"
#include "grammar-optionLL1grammar.h"
#include "grammar-programSLRgrammar.h"
#include "grammar-projectLL1grammar.h"
#include "grammar-semanticsSLRgrammar.h"
#include "grammar-syntaxSLRgrammar.h"
#include "grammar-templateGrammar.h"
#include "list-galgas3GUIComponentListAST.h"
#include "list-guiCompoundAttributeListAST.h"
#include "list-guiLabelListAST.h"
#include "list-guiSimpleAttributeListAST.h"
#include "list-terminalLabelListAST.h"
#include "list-withLexiqueListAST.h"
#include "option-galgas_cli_options.h"
#include "struct-galgas3DeclarationAST.h"


//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_gui) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 28)) ;
  GALGAS_lstring var_mGUIName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 30)) ;
  GALGAS_lstringlist var_importedOptionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 31)) ;
  GALGAS_guiSimpleAttributeListAST var_simpleGlobalAttributes = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 32)) ;
  GALGAS_withLexiqueListAST var_withLexiqueList = GALGAS_withLexiqueListAST::constructor_emptyList (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 33)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_mKey = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 36)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 37)) ;
      GALGAS_lstring var_mValue = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 38))  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 38)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_value = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 40)) ;
        var_mValue = GALGAS_lstring::constructor_new (var_mValue.reader_string (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 41)).add_operation (var_value.reader_string (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 41)), var_value.reader_location (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 41))  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 41)) ;
        switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      var_simpleGlobalAttributes.addAssign_operation (var_mKey, var_mValue  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 44)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 46)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_option) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 48)) ;
        GALGAS_lstring var_optionReference = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 49)) ;
        var_importedOptionList.addAssign_operation (var_optionReference  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 50)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 52)) ;
        GALGAS_lstring var_lexiqueReference = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 53)) ;
        GALGAS_guiLabelListAST var_labels = GALGAS_guiLabelListAST::constructor_emptyList (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 54)) ;
        GALGAS_guiSimpleAttributeListAST var_simpleAttributes = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 55)) ;
        GALGAS_guiCompoundAttributeListAST var_compoundAttributes = GALGAS_guiCompoundAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 56)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 57)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_galgas_33_GuiComponentSyntax_3 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 60)) ;
            GALGAS_uint var_displayStyle ;
            switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
            case 1: {
              var_displayStyle = GALGAS_uint ((uint32_t) 0U) ;
            } break ;
            case 2: {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 65)) ;
              var_displayStyle = GALGAS_uint ((uint32_t) 1U) ;
            } break ;
            default:
              break ;
            }
            GALGAS_terminalLabelListAST var_terminalList = GALGAS_terminalLabelListAST::constructor_emptyList (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 68)) ;
            bool repeatFlag_3 = true ;
            while (repeatFlag_3) {
              GALGAS_lstring var_terminal = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 70)) ;
              GALGAS_uint var_displayFlags ;
              switch (select_galgas_33_GuiComponentSyntax_6 (inCompiler)) {
              case 1: {
                var_displayFlags = GALGAS_uint ((uint32_t) 0U) ;
              } break ;
              case 2: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 75)) ;
                var_displayFlags = GALGAS_uint ((uint32_t) 65535U) ;
              } break ;
              case 3: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 78)) ;
                GALGAS_luint var_leadingStrip = inCompiler->synthetizedAttribute_uint_33__32_value () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 79)) ;
                const enumGalgasBool test_4 = GALGAS_bool (kIsSupOrEqual, var_leadingStrip.mAttribute_uint.objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
                if (kBoolTrue == test_4) {
                  GALGAS_location location_5 (var_leadingStrip.reader_location (HERE)) ; // Implicit use of 'location' reader
                  inCompiler->emitSemanticError (location_5, GALGAS_string ("leading strip should be < 15")  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 81)) ;
                }
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 83)) ;
                GALGAS_luint var_endingStrip = inCompiler->synthetizedAttribute_uint_33__32_value () ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 84)) ;
                const enumGalgasBool test_6 = GALGAS_bool (kIsSupOrEqual, var_endingStrip.mAttribute_uint.objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
                if (kBoolTrue == test_6) {
                  GALGAS_location location_7 (var_endingStrip.reader_location (HERE)) ; // Implicit use of 'location' reader
                  inCompiler->emitSemanticError (location_7, GALGAS_string ("tail strip should be < 15")  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 86)) ;
                }
                var_displayFlags = var_leadingStrip.mAttribute_uint.left_shift_operation (GALGAS_uint ((uint32_t) 4U) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 88)).operator_or (var_endingStrip.reader_uint (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 88)) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 88)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 89)) ;
              } break ;
              default:
                break ;
              }
              var_terminalList.addAssign_operation (var_terminal, var_displayFlags  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 91)) ;
              switch (select_galgas_33_GuiComponentSyntax_5 (inCompiler)) {
              case 2: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 93)) ;
              } break ;
              default:
                repeatFlag_3 = false ;
                break ;
              }
            }
            var_labels.addAssign_operation (var_displayStyle, var_terminalList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 95))  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 95)) ;
          } break ;
          case 3: {
            GALGAS_lstring var_key = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 97)) ;
            GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 98)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 99)) ;
            GALGAS_lstring var_value = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 100))  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 100)) ;
            bool repeatFlag_8 = true ;
            while (repeatFlag_8) {
              GALGAS_lstring var_v = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 102)) ;
              var_value = GALGAS_lstring::constructor_new (var_value.reader_string (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 103)).add_operation (var_v.reader_string (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 103)), var_v.reader_location (SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 103))  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 103)) ;
              switch (select_galgas_33_GuiComponentSyntax_7 (inCompiler)) {
              case 2: {
              } break ;
              default:
                repeatFlag_8 = false ;
                break ;
              }
            }
            var_compoundAttributes.addAssign_operation (var_key, var_name, var_value  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 106)) ;
          } break ;
          case 4: {
            GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 108)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 109)) ;
            GALGAS_lstring var_value = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 110)) ;
            var_simpleAttributes.addAssign_operation (var_name, var_value  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 111)) ;
          } break ;
          default:
            repeatFlag_2 = false ;
            break ;
          }
        }
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 113)) ;
        var_withLexiqueList.addAssign_operation (var_lexiqueReference, var_labels, var_simpleAttributes, var_compoundAttributes  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 114)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 122)) ;
  ioArgument_ioDeclarations.mAttribute_mGUIComponentList.addAssign_operation (var_mGUIName, var_importedOptionList, var_simpleGlobalAttributes, var_withLexiqueList  COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_gui) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 36)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 37)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 40)) ;
        switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 46)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_option) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 48)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 49)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 52)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 53)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 57)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_galgas_33_GuiComponentSyntax_3 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 60)) ;
            switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 65)) ;
            } break ;
            default:
              break ;
            }
            bool repeatFlag_3 = true ;
            while (repeatFlag_3) {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 70)) ;
              switch (select_galgas_33_GuiComponentSyntax_6 (inCompiler)) {
              case 1: {
              } break ;
              case 2: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 75)) ;
              } break ;
              case 3: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 78)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 79)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 83)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 84)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 89)) ;
              } break ;
              default:
                break ;
              }
              switch (select_galgas_33_GuiComponentSyntax_5 (inCompiler)) {
              case 2: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 93)) ;
              } break ;
              default:
                repeatFlag_3 = false ;
                break ;
              }
            }
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 97)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 98)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 99)) ;
            bool repeatFlag_4 = true ;
            while (repeatFlag_4) {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 102)) ;
              switch (select_galgas_33_GuiComponentSyntax_7 (inCompiler)) {
              case 2: {
              } break ;
              default:
                repeatFlag_4 = false ;
                break ;
              }
            }
          } break ;
          case 4: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 108)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 109)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 110)) ;
          } break ;
          default:
            repeatFlag_2 = false ;
            break ;
          }
        }
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 113)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 122)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_gui) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 36)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 37)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 40)) ;
        switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 46)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_option) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 48)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 49)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 52)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 53)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 57)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_galgas_33_GuiComponentSyntax_3 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 60)) ;
            switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 65)) ;
            } break ;
            default:
              break ;
            }
            bool repeatFlag_3 = true ;
            while (repeatFlag_3) {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_terminal) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 70)) ;
              switch (select_galgas_33_GuiComponentSyntax_6 (inCompiler)) {
              case 1: {
              } break ;
              case 2: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 75)) ;
              } break ;
              case 3: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 78)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 79)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 83)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 84)) ;
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 89)) ;
              } break ;
              default:
                break ;
              }
              switch (select_galgas_33_GuiComponentSyntax_5 (inCompiler)) {
              case 2: {
                inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 93)) ;
              } break ;
              default:
                repeatFlag_3 = false ;
                break ;
              }
            }
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 97)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 98)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 99)) ;
            bool repeatFlag_4 = true ;
            while (repeatFlag_4) {
              inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 102)) ;
              switch (select_galgas_33_GuiComponentSyntax_7 (inCompiler)) {
              case 2: {
              } break ;
              default:
                repeatFlag_4 = false ;
                break ;
              }
            }
          } break ;
          case 4: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 108)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 109)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 110)) ;
          } break ;
          default:
            repeatFlag_2 = false ;
            break ;
          }
        }
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 113)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3GuiComponentSyntax.galgas", 122)) ;
}

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

