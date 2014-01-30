//-----------------------------------------------------------------------------*
//                                                                             *
//  Routines for printing original grammar (with 'select' and 'repeat')      *
//                                                                             *
//  Copyright (C) 1999, ..., 2007 Pierre Molinaro.                             *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
//                                                                             *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                             *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//  more details.                                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "files/C_HTML_FileWrite.h"
#include "galgas2/C_SourceTextInString.h"

#include "printOriginalGrammar.h"
#include "grammarCompilation.h"

//-----------------------------------------------------------------------------*

static void
printInstructionsListForGrammar (const GALGAS_syntaxInstructionListForGrammarAnalysis & inInstructionsList,
                                 C_HTML_FileWrite & inHTMLfile) {
  cEnumerator_syntaxInstructionListForGrammarAnalysis currentInstruction (inInstructionsList, kEnumeration_up) ;
  while (currentInstruction.hasCurrentObject ()) {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis * instruction = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) currentInstruction.current_mInstruction (HERE).ptr () ;
    instruction->printInstructionForGrammar (inHTMLfile) ;
    currentInstruction.gotoNextObject () ;
  }
}

//-----------------------------------------------------------------------------*

void cPtr_repeatInstructionForGrammarAnalysis::
printInstructionForGrammar (C_HTML_FileWrite & inHTMLfile) {
  inHTMLfile.outputRawData ("<span class=\"galgas_structure\">") ;
  inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile << "repeat " ;
  inHTMLfile.outputRawData ("</span>") ;
  cEnumerator_branchListForGrammarAnalysis currentBranch (mAttribute_mRepeatBranchList, kEnumeration_up) ;
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
    printInstructionsListForGrammar (currentBranch.current_mSyntaxInstructionList (HERE), inHTMLfile) ;
    inHTMLfile.outputRawData ("</span>") ;
    currentBranch.gotoNextObject () ;
  }
  inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile << "end repeat;" ;
  inHTMLfile.outputRawData ("</span></span>") ;
}

//-----------------------------------------------------------------------------*

void cPtr_selectInstructionForGrammarAnalysis::
printInstructionForGrammar (C_HTML_FileWrite & inHTMLfile) {
  inHTMLfile.outputRawData ("<span class=\"galgas_structure\">") ;
  inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile << "select " ;
  inHTMLfile.outputRawData ("</span>") ;
  cEnumerator_branchListForGrammarAnalysis currentBranch (mAttribute_mSelectBranchList, kEnumeration_up) ;
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
    printInstructionsListForGrammar (currentBranch.current_mSyntaxInstructionList (HERE), inHTMLfile) ;
    inHTMLfile.outputRawData ("</span>") ;
    currentBranch.gotoNextObject () ;
  }
  inHTMLfile.outputRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile << "end select;" ;
  inHTMLfile.outputRawData ("</span></span>") ;
}

//-----------------------------------------------------------------------------*

void cPtr_nonTerminalInstructionForGrammarAnalysis::
printInstructionForGrammar (C_HTML_FileWrite & inHTMLfile) {
  inHTMLfile.outputRawData ("<span class=\"galgas_nonterminal\">") ;
  inHTMLfile << "<" << mAttribute_mNonterminalSymbolName.mAttribute_string.stringValue () << ">; " ;
  inHTMLfile.outputRawData ("</span>") ;
}

//-----------------------------------------------------------------------------*

void cPtr_terminalInstructionForGrammarAnalysis::
printInstructionForGrammar (C_HTML_FileWrite & inHTMLfile) {
  inHTMLfile.outputRawData ("<span class=\"galgas_terminal\">") ;
  inHTMLfile << "$" << mAttribute_mTerminalSymbolName.mAttribute_string.stringValue () << "$; " ;
  inHTMLfile.outputRawData ("</span>") ;
}

//-----------------------------------------------------------------------------*

void printOriginalGrammar (C_HTML_FileWrite & inHTMLfile,
                           const GALGAS_syntaxComponentListForGrammarAnalysis & inSyntaxComponentsList) {
//--- Print message
  PMSInt32 productionsCount = 0 ;
  cEnumerator_syntaxComponentListForGrammarAnalysis currentSyntaxComponent (inSyntaxComponentsList, kEnumeration_up) ;
  while (currentSyntaxComponent.hasCurrentObject ()) {
    productionsCount += currentSyntaxComponent.current_mProductionRulesList (HERE).count () ;
    currentSyntaxComponent.gotoNextObject () ;
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
               << currentSyntaxComponent.current_mSyntaxComponentName (HERE).mAttribute_string.stringValue ()
               << "' component" ;
    inHTMLfile.outputRawData ("</td></tr>") ;
    cEnumerator_productionRuleListForGrammarAnalysis currentRule (currentSyntaxComponent.current_mProductionRulesList (HERE), kEnumeration_up) ;
    while (currentRule.hasCurrentObject ()) {
      inHTMLfile.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    //--- Print rule
      inHTMLfile << "rule " ;
      inHTMLfile.outputRawData ("<code>") ;
      inHTMLfile << "<"
                 << currentRule.current_mLeftNonterminalSymbol (HERE).mAttribute_string.stringValue ()
                 << ">" ;
      inHTMLfile.outputRawData ("</code><br>") ;
      inHTMLfile << "file '" 
                 << currentSyntaxComponent.current_mSyntaxComponentName (HERE).mAttribute_location.sourceText ()->sourceFilePath ()
                 << "'" ;
      inHTMLfile.outputRawData ("<br>") ;
      inHTMLfile << "line "
                 << cStringWithSigned (currentRule.current_mLeftNonterminalSymbol (HERE).mAttribute_location.startLocation ().lineNumber ()) ;
      inHTMLfile.outputRawData ("</td><td><code>") ;
      printInstructionsListForGrammar (currentRule.current_mInstructionList (HERE),
                                       inHTMLfile) ;
      inHTMLfile.outputRawData ("</code></td></tr>") ;
    //--- Next rule
      currentRule.gotoNextObject () ;
    }
    currentSyntaxComponent.gotoNextObject () ;
  }
  inHTMLfile.outputRawData ("</table>") ;
}

//-----------------------------------------------------------------------------*
