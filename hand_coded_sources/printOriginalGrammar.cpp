//---------------------------------------------------------------------------*
//                                                                           *
//  Routines for printing original grammar (with 'select' and 'repeat')      *
//                                                                           *
//  Copyright (C) 1999, ..., 2007 Pierre Molinaro.                           *
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

#include "utilities/MF_MemoryControl.h"
#include "files/C_HTML_FileWrite.h"

#include "printOriginalGrammar.h"
#include "common_semantics.h"

//---------------------------------------------------------------------------*

static void
printInstructionsListForGrammar (const GGS_L_ruleSyntaxSignature & inInstructionsList,
                                 C_HTML_FileWrite & inHTMLfile) {
  GGS_L_ruleSyntaxSignature::element_type * currentInstruction = inInstructionsList.firstObject () ;
  while (currentInstruction != NULL) {
    macroValidPointer (currentInstruction) ;
    currentInstruction->mInstruction (HERE)->printInstructionForGrammar (inHTMLfile) ;
    currentInstruction = currentInstruction->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_T_repeatInstruction_forGrammarComponent::
printInstructionForGrammar (C_HTML_FileWrite & inHTMLfile) {
  inHTMLfile.outputRawData ("<span class=\"galgas_structure\">") ;
  inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile << "repeat " ;
  inHTMLfile.outputRawData ("</span>") ;
  GGS_L_branchList_ForGrammarComponent::element_type * currentBranch = mRepeatList.firstObject () ;
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
    printInstructionsListForGrammar (currentBranch->mInstructionList, inHTMLfile) ;
    inHTMLfile.outputRawData ("</span>") ;
    currentBranch = currentBranch->nextObject () ;
  }
  inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile << "end repeat;" ;
  inHTMLfile.outputRawData ("</span></span>") ;
}

//---------------------------------------------------------------------------*

void cPtr_T_selectInstruction_forGrammarComponent::
printInstructionForGrammar (C_HTML_FileWrite & inHTMLfile) {
  inHTMLfile.outputRawData ("<span class=\"galgas_structure\">") ;
  inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile << "select " ;
  inHTMLfile.outputRawData ("</span>") ;
  GGS_L_branchList_ForGrammarComponent::element_type * currentBranch = mSelectList.firstObject () ;
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
    printInstructionsListForGrammar (currentBranch->mInstructionList, inHTMLfile) ;
    inHTMLfile.outputRawData ("</span>") ;
    currentBranch = currentBranch->nextObject () ;
  }
  inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile << "end select;" ;
  inHTMLfile.outputRawData ("</span></span>") ;
}

//---------------------------------------------------------------------------*

void cPtr_T_nonterminalInstruction_forGrammarComponent::
printInstructionForGrammar (C_HTML_FileWrite & inHTMLfile) {
  inHTMLfile.outputRawData ("<span class=\"galgas_nonterminal\">") ;
  inHTMLfile << '<' << mNonterminalSymbolName << ">; " ;
  inHTMLfile.outputRawData ("</span>") ;
}

//---------------------------------------------------------------------------*

void cPtr_T_terminalInstruction_forGrammarComponent::
printInstructionForGrammar (C_HTML_FileWrite & inHTMLfile) {
  inHTMLfile.outputRawData ("<span class=\"galgas_terminal\">") ;
  inHTMLfile << '$' << mTerminalSymbolName << "$; " ;
  inHTMLfile.outputRawData ("</span>") ;
}

//---------------------------------------------------------------------------*

void printOriginalGrammar (C_HTML_FileWrite & inHTMLfile,
                           const GGS_L_syntaxComponents_ForGrammar & inSyntaxComponentsList) {
//--- Print message
  sint32 productionsCount = 0 ;
  GGS_L_syntaxComponents_ForGrammar::element_type * currentSyntaxComponent = inSyntaxComponentsList.firstObject () ;
  while (currentSyntaxComponent != NULL) {
    macroValidPointer (currentSyntaxComponent) ;
    productionsCount += currentSyntaxComponent->mProductionRulesList.count () ;
    currentSyntaxComponent = currentSyntaxComponent->nextObject () ;
  }
  inHTMLfile.outputRawData ("<p>") ;
  inHTMLfile << "The original grammar has "
             << productionsCount
             << " productions." ;
  inHTMLfile.outputRawData ("</p><table class=\"result\">") ;

//--- Print productions rules by traversing syntax components
  currentSyntaxComponent = inSyntaxComponentsList.firstObject () ;
  while (currentSyntaxComponent != NULL) {
    macroValidPointer (currentSyntaxComponent) ;
    inHTMLfile.outputRawData ("<tr><td class=\"result_title\" colspan=\"2\">") ;
    inHTMLfile << "RULES FROM '"
               << currentSyntaxComponent->mSyntaxComponentName
               << "' component" ;
    inHTMLfile.outputRawData ("</td></tr>") ;
    GGS_L_productionRules_ForGrammarComponent::element_type * currentRule = currentSyntaxComponent->mProductionRulesList.firstObject () ;
    while (currentRule != NULL) {
      macroValidPointer (currentRule) ;
      inHTMLfile.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    //--- Print rule
      inHTMLfile << "rule " ;
      inHTMLfile.outputRawData ("<code>") ;
      inHTMLfile << "<"
                 << currentRule->mLeftNonterminalSymbol
                 << ">" ;
      inHTMLfile.outputRawData ("</code><br>") ;
      inHTMLfile << "file '" 
                 << currentSyntaxComponent->mSyntaxComponentName.sourceFileName ()
                 << "'" ;
      inHTMLfile.outputRawData ("<br>") ;
      inHTMLfile << "line "
                 << currentRule->mLeftNonterminalSymbol.lineNumber () ;
      inHTMLfile.outputRawData ("</td><td><code>") ;
      printInstructionsListForGrammar (currentRule->mInstructionList,
                                       inHTMLfile) ;
      inHTMLfile.outputRawData ("</code></td></tr>") ;
    //--- Next rule
      currentRule = currentRule->nextObject () ;
    }
    currentSyntaxComponent = currentSyntaxComponent->nextObject () ;
  }
  inHTMLfile.outputRawData ("</table>") ;
}

//---------------------------------------------------------------------------*
