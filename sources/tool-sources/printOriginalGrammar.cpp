//--------------------------------------------------------------------------------------------------
//
//  Routines for printing original grammar (with 'select' and 'repeat')                          
//
//  Copyright (C) 1999, ..., 2023 Pierre Molinaro.
//                                           
//  MIT License
//                                           
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without restriction,
// including without limitation the rights to use, copy, modify, merge, publish, distribute,
// sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//                                           
//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "HTMLString.h"
#include "SourceTextInString.h"

//--------------------------------------------------------------------------------------------------

#include "printOriginalGrammar.h"
#include "grammarCompilation.h"

//--------------------------------------------------------------------------------------------------

static void
printInstructionsListForGrammar (const GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & inInstructionsList,
                                 HTMLString & inHTMLfile) {
  UpEnumerator__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ currentInstruction (inInstructionsList) ;
  while (currentInstruction.hasCurrentObject ()) {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis * instruction = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) currentInstruction.current (HERE).ptr () ;
    if (instruction == nullptr) {
      printf ("nullptr in '%s', line %d\n", __FILE__, __LINE__) ;
      exit (1) ;
    }else{
      instruction->printInstructionForGrammar (inHTMLfile) ;
    }
    currentInstruction.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGrammarAnalysis::printInstructionForGrammar (HTMLString & inHTMLfile) const {
  inHTMLfile.addRawData ("<span class=\"galgas_structure\">") ;
  inHTMLfile.addRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile.appendCString ("repeat ") ;
  inHTMLfile.addRawData ("</span>") ;
  UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ currentBranch (mProperty_mRepeatBranchList) ;
  bool first = true ;
  while (currentBranch.hasCurrentObject ()) {
    if (first) {
      first = false ;
    }else{
      inHTMLfile.addRawData ("<span class=\"galgas_keyword\">") ;
      inHTMLfile.appendCString ("while ") ;
      inHTMLfile.addRawData ("</span>") ;
    }
    inHTMLfile.addRawData ("<span class=\"within_galgas_structure\">") ;
    printInstructionsListForGrammar (currentBranch.current (HERE), inHTMLfile) ;
    inHTMLfile.addRawData ("</span>") ;
    currentBranch.gotoNextObject () ;
  }
  inHTMLfile.addRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile.appendCString ("end repeat;") ;
  inHTMLfile.addRawData ("</span></span>") ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGrammarAnalysis::
printInstructionForGrammar (HTMLString & inHTMLfile) const {
  inHTMLfile.addRawData ("<span class=\"galgas_structure\">") ;
  inHTMLfile.addRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile.appendCString ("select ") ;
  inHTMLfile.addRawData ("</span>") ;
  UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ currentBranch (mProperty_mSelectBranchList) ;
  bool first = true ;
  while (currentBranch.hasCurrentObject ()) {
    if (first) {
      first = false ;
    }else{
      inHTMLfile.addRawData ("<span class=\"galgas_keyword\">") ;
      inHTMLfile.appendCString ("or ") ;
      inHTMLfile.addRawData ("</span>") ;
    }
    inHTMLfile.addRawData ("<span class=\"within_galgas_structure\">") ;
    printInstructionsListForGrammar (currentBranch.current (HERE), inHTMLfile) ;
    inHTMLfile.addRawData ("</span>") ;
    currentBranch.gotoNextObject () ;
  }
  inHTMLfile.addRawData ("<span class=\"galgas_keyword\">") ;
  inHTMLfile.appendCString ("end select;") ;
  inHTMLfile.addRawData ("</span></span>") ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nonTerminalInstructionForGrammarAnalysis::
printInstructionForGrammar (HTMLString & inHTMLfile) const {
  inHTMLfile.addRawData ("<span class=\"galgas_nonterminal\">") ;
  inHTMLfile.appendCString ("<") ;
  inHTMLfile.appendString (mProperty_mNonterminalSymbolName.mProperty_string.stringValue ()) ;
  inHTMLfile.appendCString (">; ") ;
  inHTMLfile.addRawData ("</span>") ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_terminalInstructionForGrammarAnalysis::
printInstructionForGrammar (HTMLString & inHTMLfile) const {
  inHTMLfile.addRawData ("<span class=\"galgas_terminal\">") ;
  inHTMLfile.appendCString ("$") ;
  inHTMLfile.appendString (mProperty_mTerminalSymbolName.mProperty_string.stringValue ()) ;
  inHTMLfile.appendCString ("$; ") ;
  inHTMLfile.addRawData ("</span>") ;
}

//--------------------------------------------------------------------------------------------------

void printOriginalGrammar (HTMLString & inHTMLfile,
                           const GGS__5B_syntaxComponentForGrammarAnalysis_5D_ & inSyntaxComponentsList) {
//--- Print message
  int32_t productionsCount = 0 ;
  UpEnumerator__5B_syntaxComponentForGrammarAnalysis_5D_ currentSyntaxComponent (inSyntaxComponentsList) ;
  while (currentSyntaxComponent.hasCurrentObject ()) {
    productionsCount += currentSyntaxComponent.current (HERE).mProperty_mProductionRulesList.count () ;
    currentSyntaxComponent.gotoNextObject () ;
  }
  inHTMLfile.addRawData ("<p>") ;
  inHTMLfile.appendCString ("The original grammar has ") ;
  inHTMLfile.appendSigned (productionsCount) ;
  inHTMLfile.appendCString (" production") ;
  inHTMLfile.appendString ((productionsCount > 1) ? "s" : "") ;
  inHTMLfile.appendCString (".") ;
  inHTMLfile.addRawData ("</p><table class=\"result\">") ;

//--- Print productions rules by traversing syntax components
  currentSyntaxComponent.rewind () ;
  while (currentSyntaxComponent.hasCurrentObject ()) {
    inHTMLfile.addRawData ("<tr><td class=\"result_title\" colspan=\"2\">") ;
    inHTMLfile.appendCString ("RULES FROM '") ;
    inHTMLfile.appendString (currentSyntaxComponent.current (HERE).mProperty_mSyntaxComponentName.mProperty_string.stringValue ()) ;
    inHTMLfile.appendCString ("' component") ;
    inHTMLfile.addRawData ("</td></tr>") ;
    UpEnumerator__5B_productionRuleForGrammarAnalysis_5D_ currentRule (currentSyntaxComponent.current (HERE).mProperty_mProductionRulesList) ;
    while (currentRule.hasCurrentObject ()) {
      inHTMLfile.addRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    //--- Print rule
      inHTMLfile.appendCString ("rule ") ;
      inHTMLfile.addRawData ("<code>") ;
      inHTMLfile.appendCString ("<") ;
      inHTMLfile.appendString (currentRule.current (HERE).mProperty_mLeftNonterminalSymbol.mProperty_string.stringValue ()) ;
      inHTMLfile.appendCString (">") ;
      inHTMLfile.addRawData ("</code><br>") ;
      inHTMLfile.appendCString ("file '")  ;
      inHTMLfile.appendString (currentSyntaxComponent.current (HERE).mProperty_mSyntaxComponentName.mProperty_location.sourceText ().sourceFilePath ()) ;
      inHTMLfile.appendCString ("'") ;
      inHTMLfile.addRawData ("<br>") ;
      inHTMLfile.appendCString ("line ") ;
      inHTMLfile.appendSigned (currentRule.current (HERE).mProperty_mLeftNonterminalSymbol.mProperty_location.startLocation ().lineNumber ()) ;
      inHTMLfile.addRawData ("</td><td><code>") ;
      printInstructionsListForGrammar (currentRule.current (HERE).mProperty_mInstructionList, inHTMLfile) ;
      inHTMLfile.addRawData ("</code></td></tr>") ;
    //--- Next rule
      currentRule.gotoNextObject () ;
    }
    currentSyntaxComponent.gotoNextObject () ;
  }
  inHTMLfile.addRawData ("</table>") ;
}

//--------------------------------------------------------------------------------------------------
