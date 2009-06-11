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
  GGS_L_ruleSyntaxSignature::cEnumerator currentInstruction (inInstructionsList, true) ;
  while (currentInstruction.hasCurrentObject ()) {
    currentInstruction._mInstruction (HERE) (HERE)->printInstructionForGrammar (inHTMLfile) ;
    currentInstruction.next () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_T_repeatInstruction_forGrammarComponent::
printInstructionForGrammar (C_HTML_FileWrite & inHTMLfile) {
  inHTMLfile.outputRawData ("<span class=\"galgas_structure\">") ;
  inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile << "repeat " ;
  inHTMLfile.outputRawData ("</span>") ;
  GGS_L_branchList_ForGrammarComponent::cEnumerator currentBranch (mRepeatList, true) ;
  bool first = true ;
  while (currentBranch.hasCurrentObject ()) {
    if (first) {
      first = false ;
    }else{
      inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
      inHTMLfile << "while " ;
      inHTMLfile.outputRawData ("</span>") ;
    }
    inHTMLfile.outputRawData ("<span class=\"within_galgas_structure\">") ;
    printInstructionsListForGrammar (currentBranch._mInstructionList (HERE), inHTMLfile) ;
    inHTMLfile.outputRawData ("</span>") ;
    currentBranch.next () ;
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
  GGS_L_branchList_ForGrammarComponent::cEnumerator currentBranch (mSelectList, true) ;
  bool first = true ;
  while (currentBranch.hasCurrentObject ()) {
    if (first) {
      first = false ;
    }else{
      inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
      inHTMLfile << "or " ;
      inHTMLfile.outputRawData ("</span>") ;
    }
    inHTMLfile.outputRawData ("<span class=\"within_galgas_structure\">") ;
    printInstructionsListForGrammar (currentBranch._mInstructionList (HERE), inHTMLfile) ;
    inHTMLfile.outputRawData ("</span>") ;
    currentBranch.next () ;
  }
  inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile << "end select;" ;
  inHTMLfile.outputRawData ("</span></span>") ;
}

//---------------------------------------------------------------------------*

void cPtr_T_nonterminalInstruction_forGrammarComponent::
printInstructionForGrammar (C_HTML_FileWrite & inHTMLfile) {
  inHTMLfile.outputRawData ("<span class=\"galgas_nonterminal\">") ;
  inHTMLfile << "<" << mNonterminalSymbolName << ">; " ;
  inHTMLfile.outputRawData ("</span>") ;
}

//---------------------------------------------------------------------------*

void cPtr_T_terminalInstruction_forGrammarComponent::
printInstructionForGrammar (C_HTML_FileWrite & inHTMLfile) {
  inHTMLfile.outputRawData ("<span class=\"galgas_terminal\">") ;
  inHTMLfile << "$" << mTerminalSymbolName << "$; " ;
  inHTMLfile.outputRawData ("</span>") ;
}

//---------------------------------------------------------------------------*

void printOriginalGrammar (C_HTML_FileWrite & inHTMLfile,
                           const GGS_L_syntaxComponents_ForGrammar & inSyntaxComponentsList) {
//--- Print message
  sint32 productionsCount = 0 ;
  GGS_L_syntaxComponents_ForGrammar::cEnumerator currentSyntaxComponent (inSyntaxComponentsList, true) ;
  while (currentSyntaxComponent.hasCurrentObject ()) {
    productionsCount += currentSyntaxComponent._mProductionRulesList (HERE).count () ;
    currentSyntaxComponent.next () ;
  }
  inHTMLfile.outputRawData ("<p>") ;
  inHTMLfile << "The original grammar has "
             << cStringWithSigned (productionsCount)
             << " production"
             << ((productionsCount > 1) ? "s" : "")
             << "." ;
  inHTMLfile.outputRawData ("</p><table class=\"result\">") ;

//--- Print productions rules by traversing syntax components
  currentSyntaxComponent.rewind () ;
  while (currentSyntaxComponent.hasCurrentObject ()) {
    inHTMLfile.outputRawData ("<tr><td class=\"result_title\" colspan=\"2\">") ;
    inHTMLfile << "RULES FROM '"
               << currentSyntaxComponent._mSyntaxComponentName (HERE)
               << "' component" ;
    inHTMLfile.outputRawData ("</td></tr>") ;
    GGS_L_productionRules_ForGrammarComponent::cEnumerator currentRule (currentSyntaxComponent._mProductionRulesList (HERE), true) ;
    while (currentRule.hasCurrentObject ()) {
      inHTMLfile.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    //--- Print rule
      inHTMLfile << "rule " ;
      inHTMLfile.outputRawData ("<code>") ;
      inHTMLfile << "<"
                 << currentRule._mLeftNonterminalSymbol (HERE)
                 << ">" ;
      inHTMLfile.outputRawData ("</code><br>") ;
      inHTMLfile << "file '" 
                 << currentSyntaxComponent._mSyntaxComponentName (HERE).sourceFileName ()
                 << "'" ;
      inHTMLfile.outputRawData ("<br>") ;
      inHTMLfile << "line "
                 << cStringWithSigned (currentRule._mLeftNonterminalSymbol (HERE).lineNumber ()) ;
      inHTMLfile.outputRawData ("</td><td><code>") ;
      printInstructionsListForGrammar (currentRule._mInstructionList (HERE),
                                       inHTMLfile) ;
      inHTMLfile.outputRawData ("</code></td></tr>") ;
    //--- Next rule
      currentRule.next () ;
    }
    currentSyntaxComponent.next () ;
  }
  inHTMLfile.outputRawData ("</table>") ;
}

//---------------------------------------------------------------------------*
