//---------------------------------------------------------------------------*
//                                                                           *
//  Routines for printing original grammar (with 'select' and 'repeat')      *
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include "memory/M_memory_control.h"
#include "files/C_html_file_write.h"
#include "galgas/C_galgas_stringset.h"

#include "printOriginalGrammar.h"
#include "common_semantics.h"

//---------------------------------------------------------------------------*

static void
printInstructionsListForGrammar (const GGS_L_ruleSyntaxSignature & inInstructionsList,
                                 C_html_file_write & inHTMLfile) {
  GGS_L_ruleSyntaxSignature::element_type * currentInstruction = inInstructionsList.getFirstItem () ;
  while (currentInstruction != NULL) {
    macroValidPointer (currentInstruction) ;
    currentInstruction->mInstruction ()->printInstructionForGrammar (inHTMLfile) ;
    currentInstruction = currentInstruction->getNextItem () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_T_repeatInstruction_forGrammarComponent::
printInstructionForGrammar (C_html_file_write & inHTMLfile) {
  inHTMLfile.outputRawData ("<span class=\"galgas_structure\">") ;
  inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile << "repeat " ;
  inHTMLfile.outputRawData ("</span>") ;
  GGS_L_branchList_ForGrammarComponent::element_type * currentBranch = mRepeatList.getFirstItem () ;
  bool first = true ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    if (first) {
      first = false ;
    }else{
      inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
      inHTMLfile << "while " ;
      inHTMLfile.outputRawData ("</span>") ;
    }
    inHTMLfile.outputRawData ("<span class=\"within_galgas_structure\">") ;
    printInstructionsListForGrammar (currentBranch->mInstructionsList, inHTMLfile) ;
    inHTMLfile.outputRawData ("</span>") ;
    currentBranch = currentBranch->getNextItem () ;
  }
  inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile << "end repeat;" ;
  inHTMLfile.outputRawData ("</span></span>") ;
}

//---------------------------------------------------------------------------*

void cPtr_T_selectInstruction_forGrammarComponent::
printInstructionForGrammar (C_html_file_write & inHTMLfile) {
  inHTMLfile.outputRawData ("<span class=\"galgas_structure\">") ;
  inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile << "select " ;
  inHTMLfile.outputRawData ("</span>") ;
  GGS_L_branchList_ForGrammarComponent::element_type * currentBranch = mSelectList.getFirstItem () ;
  bool first = true ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    if (first) {
      first = false ;
    }else{
      inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
      inHTMLfile << "or " ;
      inHTMLfile.outputRawData ("</span>") ;
    }
    inHTMLfile.outputRawData ("<span class=\"within_galgas_structure\">") ;
    printInstructionsListForGrammar (currentBranch->mInstructionsList, inHTMLfile) ;
    inHTMLfile.outputRawData ("</span>") ;
    currentBranch = currentBranch->getNextItem () ;
  }
  inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile << "end select;" ;
  inHTMLfile.outputRawData ("</span></span>") ;
}

//---------------------------------------------------------------------------*

void cPtr_T_nonterminalInstruction_forGrammarComponent::
printInstructionForGrammar (C_html_file_write & inHTMLfile) {
  inHTMLfile.outputRawData ("<span class=\"galgas_nonterminal\">") ;
  inHTMLfile << '<' << mNonterminalSymbolName << ">; " ;
  inHTMLfile.outputRawData ("</span>") ;
}

//---------------------------------------------------------------------------*

void cPtr_T_terminalInstruction_forGrammarComponent::
printInstructionForGrammar (C_html_file_write & inHTMLfile) {
  inHTMLfile.outputRawData ("<span class=\"galgas_terminal\">") ;
  inHTMLfile << '$' << mTerminalSymbolName << "$; " ;
  inHTMLfile.outputRawData ("</span>") ;
}

//---------------------------------------------------------------------------*

void printOriginalGrammar (C_html_file_write & inHTMLfile,
                           const GGS_L_syntaxComponents_ForGrammar & inSyntaxComponentsList) {
//--- Print message
  sint32 productionsCount = 0 ;
  GGS_L_syntaxComponents_ForGrammar::element_type * currentSyntaxComponent = inSyntaxComponentsList.getFirstItem () ;
  while (currentSyntaxComponent != NULL) {
    macroValidPointer (currentSyntaxComponent) ;
    productionsCount += currentSyntaxComponent->mProductionRulesList.count () ;
    currentSyntaxComponent = currentSyntaxComponent->getNextItem () ;
  }
  inHTMLfile.outputRawData ("<p>") ;
  inHTMLfile << "The original grammar has "
             << productionsCount
             << " productions." ;
  inHTMLfile.outputRawData ("</p><table class=\"result\">") ;

//--- Print productions rules by traversing syntax components
  currentSyntaxComponent = inSyntaxComponentsList.getFirstItem () ;
  while (currentSyntaxComponent != NULL) {
    macroValidPointer (currentSyntaxComponent) ;
    inHTMLfile.outputRawData ("<tr><td class=\"result_title\" colspan=\"2\">") ;
    inHTMLfile << "RULES FROM '"
               << currentSyntaxComponent->mSyntaxComponentName
               << "' component" ;
    inHTMLfile.outputRawData ("</td></tr>") ;
    GGS_L_productionRules_ForGrammarComponent::element_type * currentRule = currentSyntaxComponent->mProductionRulesList.getFirstItem () ;
    while (currentRule != NULL) {
      macroValidPointer (currentRule) ;
      inHTMLfile.outputRawData ("<tr class=\"result_line\"><td>") ;
    //--- Print rule
      inHTMLfile << "rule " ;
      inHTMLfile.outputRawData ("<code>") ;
      inHTMLfile << "<"
                 << currentRule->mLeftNonterminalSymbol
                 << ">" ;
      inHTMLfile.outputRawData ("</code>") ;
      inHTMLfile << " file '" 
                << currentSyntaxComponent->mSyntaxComponentName.getSourceFile ()
                << "', line "
                << currentRule->mLeftNonterminalSymbol.getCurrentLineNumber () ;
      inHTMLfile.outputRawData ("</td><td><code>") ;
      printInstructionsListForGrammar (currentRule->mInstructionsList,
                                       inHTMLfile) ;
      inHTMLfile.outputRawData ("</code></td></tr>") ;
    //--- Next rule
      currentRule = currentRule->getNextItem () ;
    }
    currentSyntaxComponent = currentSyntaxComponent->getNextItem () ;
  }
  inHTMLfile.outputRawData ("</table>") ;
}

//---------------------------------------------------------------------------*
