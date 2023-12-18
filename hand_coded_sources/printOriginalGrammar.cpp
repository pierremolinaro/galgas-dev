//--------------------------------------------------------------------------------------------------
//
//  Routines for printing original grammar (with 'select' and 'repeat')                          
//
//  Copyright (C) 1999, ..., 2023 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public  *
//  License as published by the Free Software Foundation.                                        
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#include "utilities/MF_MemoryControl.h"
#include "strings/C_HTMLString.h"
#include "galgas2/SourceTextInString.h"

//--------------------------------------------------------------------------------------------------

#include "printOriginalGrammar.h"
#include "grammarCompilation.h"

//--------------------------------------------------------------------------------------------------

static void
printInstructionsListForGrammar (const GALGAS_syntaxInstructionListForGrammarAnalysis & inInstructionsList,
                                 C_HTMLString & inHTMLfile) {
  cEnumerator_syntaxInstructionListForGrammarAnalysis currentInstruction (inInstructionsList, kENUMERATION_UP) ;
  while (currentInstruction.hasCurrentObject ()) {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis * instruction = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) currentInstruction.current_mInstruction (HERE).ptr () ;
    if (instruction == nullptr) {
      printf ("NULL pointer in '%s', line %d\n", __FILE__, __LINE__) ;
      exit (1) ;
    }else{
      instruction->printInstructionForGrammar (inHTMLfile) ;
    }
    currentInstruction.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGrammarAnalysis::
printInstructionForGrammar (C_HTMLString & inHTMLfile) const {
  inHTMLfile.addRawData ("<span class=\"galgas_structure\">") ;
  inHTMLfile.addRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile.addString ("repeat ") ;
  inHTMLfile.addRawData ("</span>") ;
  cEnumerator_branchListForGrammarAnalysis currentBranch (mProperty_mRepeatBranchList, kENUMERATION_UP) ;
  bool first = true ;
  while (currentBranch.hasCurrentObject ()) {
    if (first) {
      first = false ;
    }else{
      inHTMLfile.addRawData ("<span class=\"galgas_keyword\">") ;
      inHTMLfile.addString ("while ") ;
      inHTMLfile.addRawData ("</span>") ;
    }
    inHTMLfile.addRawData ("<span class=\"within_galgas_structure\">") ;
    printInstructionsListForGrammar (currentBranch.current_mSyntaxInstructionList (HERE), inHTMLfile) ;
    inHTMLfile.addRawData ("</span>") ;
    currentBranch.gotoNextObject () ;
  }
  inHTMLfile.addRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile.addString ("end repeat;") ;
  inHTMLfile.addRawData ("</span></span>") ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGrammarAnalysis::
printInstructionForGrammar (C_HTMLString & inHTMLfile) const {
  inHTMLfile.addRawData ("<span class=\"galgas_structure\">") ;
  inHTMLfile.addRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile.addString ("select ") ;
  inHTMLfile.addRawData ("</span>") ;
  cEnumerator_branchListForGrammarAnalysis currentBranch (mProperty_mSelectBranchList, kENUMERATION_UP) ;
  bool first = true ;
  while (currentBranch.hasCurrentObject ()) {
    if (first) {
      first = false ;
    }else{
      inHTMLfile.addRawData ("<span class=\"galgas_keyword\">") ;
      inHTMLfile.addString ("or ") ;
      inHTMLfile.addRawData ("</span>") ;
    }
    inHTMLfile.addRawData ("<span class=\"within_galgas_structure\">") ;
    printInstructionsListForGrammar (currentBranch.current_mSyntaxInstructionList (HERE), inHTMLfile) ;
    inHTMLfile.addRawData ("</span>") ;
    currentBranch.gotoNextObject () ;
  }
  inHTMLfile.addRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile.addString ("end select;") ;
  inHTMLfile.addRawData ("</span></span>") ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nonTerminalInstructionForGrammarAnalysis::
printInstructionForGrammar (C_HTMLString & inHTMLfile) const {
  inHTMLfile.addRawData ("<span class=\"galgas_nonterminal\">") ;
  inHTMLfile.addString ("<") ;
  inHTMLfile.addString (mProperty_mNonterminalSymbolName.mProperty_string.stringValue ()) ;
  inHTMLfile.addString (">; ") ;
  inHTMLfile.addRawData ("</span>") ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_terminalInstructionForGrammarAnalysis::
printInstructionForGrammar (C_HTMLString & inHTMLfile) const {
  inHTMLfile.addRawData ("<span class=\"galgas_terminal\">") ;
  inHTMLfile.addString ("$") ;
  inHTMLfile.addString (mProperty_mTerminalSymbolName.mProperty_string.stringValue ()) ;
  inHTMLfile.addString ("$; ") ;
  inHTMLfile.addRawData ("</span>") ;
}

//--------------------------------------------------------------------------------------------------

void printOriginalGrammar (C_HTMLString & inHTMLfile,
                           const GALGAS_syntaxComponentListForGrammarAnalysis & inSyntaxComponentsList) {
//--- Print message
  int32_t productionsCount = 0 ;
  cEnumerator_syntaxComponentListForGrammarAnalysis currentSyntaxComponent (inSyntaxComponentsList, kENUMERATION_UP) ;
  while (currentSyntaxComponent.hasCurrentObject ()) {
    productionsCount += currentSyntaxComponent.current_mProductionRulesList (HERE).count () ;
    currentSyntaxComponent.gotoNextObject () ;
  }
  inHTMLfile.addRawData ("<p>") ;
  inHTMLfile.addString ("The original grammar has ") ;
  inHTMLfile.addSigned (productionsCount) ;
  inHTMLfile.addString (" production") ;
  inHTMLfile.addString ((productionsCount > 1) ? "s" : "") ;
  inHTMLfile.addString (".") ;
  inHTMLfile.addRawData ("</p><table class=\"result\">") ;

//--- Print productions rules by traversing syntax components
  currentSyntaxComponent.rewind () ;
  while (currentSyntaxComponent.hasCurrentObject ()) {
    inHTMLfile.addRawData ("<tr><td class=\"result_title\" colspan=\"2\">") ;
    inHTMLfile.addString ("RULES FROM '") ;
    inHTMLfile.addString (currentSyntaxComponent.current_mSyntaxComponentName (HERE).mProperty_string.stringValue ()) ;
    inHTMLfile.addString ("' component") ;
    inHTMLfile.addRawData ("</td></tr>") ;
    cEnumerator_productionRuleListForGrammarAnalysis currentRule (currentSyntaxComponent.current_mProductionRulesList (HERE), kENUMERATION_UP) ;
    while (currentRule.hasCurrentObject ()) {
      inHTMLfile.addRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    //--- Print rule
      inHTMLfile.addString ("rule ") ;
      inHTMLfile.addRawData ("<code>") ;
      inHTMLfile.addString ("<") ;
      inHTMLfile.addString (currentRule.current_mLeftNonterminalSymbol (HERE).mProperty_string.stringValue ()) ;
      inHTMLfile.addString (">") ;
      inHTMLfile.addRawData ("</code><br>") ;
      inHTMLfile.addString ("file '")  ;
      inHTMLfile.addString (currentSyntaxComponent.current_mSyntaxComponentName (HERE).mProperty_location.sourceText ().sourceFilePath ()) ;
      inHTMLfile.addString ("'") ;
      inHTMLfile.addRawData ("<br>") ;
      inHTMLfile.addString ("line ") ;
      inHTMLfile.addSigned (currentRule.current_mLeftNonterminalSymbol (HERE).mProperty_location.startLocation ().lineNumber ()) ;
      inHTMLfile.addRawData ("</td><td><code>") ;
      printInstructionsListForGrammar (currentRule.current_mInstructionList (HERE),
                                       inHTMLfile) ;
      inHTMLfile.addRawData ("</code></td></tr>") ;
    //--- Next rule
      currentRule.gotoNextObject () ;
    }
    currentSyntaxComponent.gotoNextObject () ;
  }
  inHTMLfile.addRawData ("</table>") ;
}

//--------------------------------------------------------------------------------------------------
