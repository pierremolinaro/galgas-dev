//---------------------------------------------------------------------------*
//                                                                           *
//  Generate parser instructions                                             *
//                                                                           *
//  Copyright (C) 1999, ..., 2008 Pierre Molinaro.                           *
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

#include "files/C_TextFileWrite.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

#include "semantics_instructions.h"
#include "parser_parser.h"

//---------------------------------------------------------------------------*

static bool
instructionsListHaveSameSyntaxSignatures (C_Compiler & inLexique,
                                          const GGS_syntaxInstructionListForGrammarAnalysis & inReferenceList,
                                          const GGS_syntaxInstructionListForGrammarAnalysis & inOtherList,
                                          const GGS_location & inEndOfInstructionListLocation) {
  bool sameSignature = true ;
  GGS_syntaxInstructionListForGrammarAnalysis::cEnumerator currentReferenceInstruction (inReferenceList, true) ;
  GGS_syntaxInstructionListForGrammarAnalysis::cEnumerator currentInstruction (inOtherList, true) ;
  while (currentReferenceInstruction.hasCurrentObject () && currentInstruction.hasCurrentObject () && sameSignature) {
    sameSignature = currentReferenceInstruction._mInstruction (HERE) (HERE)->isSameSyntaxInstructionThan (inLexique, currentInstruction._mInstruction (HERE) (HERE), inEndOfInstructionListLocation) ;
    currentReferenceInstruction.next () ;
    currentInstruction.next () ;
  }
  if (sameSignature) {
    if (currentReferenceInstruction.hasCurrentObject ()) {
      currentInstruction.rewind () ;
      if (! currentInstruction.hasCurrentObject ()) {
        inEndOfInstructionListLocation.signalSemanticError (inLexique, 
                                "syntax signature error : the branch from this point is too short"
                                COMMA_HERE) ;
      }else{
        currentInstruction._mInstruction (HERE) (HERE)->mStartLocation.signalSemanticError (inLexique, 
                                "syntax signature error : the branch from this point is too short"
                                COMMA_HERE) ;
      }
      sameSignature = false ;
    }else if (currentInstruction.hasCurrentObject ()) {
      currentInstruction.rewind () ;
      currentInstruction._mInstruction (HERE) (HERE)->mStartLocation.signalSemanticError (inLexique, 
                                        "syntax signature error : the branch from this point is too long"
                                        COMMA_HERE) ;
      sameSignature = false ;
    }
  }
  return sameSignature ;
}

//---------------------------------------------------------------------------*

bool cPtr_repeatInstructionForGrammarAnalysis::
isSameSyntaxInstructionThan (C_Compiler & inLexique,
                             cPtr_abstractSyntaxInstructionForGrammarAnalysis * inInstruction,
                             const GGS_location & inEndOfInstructionListLocation) const {
  const cPtr_repeatInstructionForGrammarAnalysis * p = dynamic_cast <const cPtr_repeatInstructionForGrammarAnalysis *> (inInstruction) ;
  bool sameSignature = p != NULL ;
  if (! sameSignature) {
    C_String errorMessage ;
    errorMessage << "syntax signature error : a repeat instruction is expected here" ;
    inInstruction->mStartLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
  }else{
    GGS_branchListForGrammarAnalysis::cEnumerator currentReferenceBranch (mRepeatBranchList, true) ;
    GGS_branchListForGrammarAnalysis::cEnumerator currentOperandBranch (p->mRepeatBranchList, true) ;
    while (currentReferenceBranch.hasCurrentObject () && currentOperandBranch.hasCurrentObject () && sameSignature) {
      sameSignature = instructionsListHaveSameSyntaxSignatures (inLexique, currentReferenceBranch._mSyntaxInstructionList (HERE),
                                                                currentOperandBranch._mSyntaxInstructionList (HERE), inEndOfInstructionListLocation) ;
      currentReferenceBranch.next () ;
      currentOperandBranch.next () ;
    }
    if (sameSignature && (! currentReferenceBranch. hasCurrentObject()) && currentOperandBranch.hasCurrentObject ()) {
      C_String errorMessage ;
      errorMessage << "syntax signature error: the repeat instruction has more branches than the original one" ;
      inInstruction->mStartLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      sameSignature = false ;
    }else if (sameSignature && currentReferenceBranch.hasCurrentObject () && ! currentOperandBranch.hasCurrentObject ()) {
      C_String errorMessage ;
      errorMessage << "syntax signature error: the repeat instruction has less branches than the original one" ;
      inInstruction->mStartLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      sameSignature = false ;
    }
  }
  return sameSignature ;
}

//---------------------------------------------------------------------------*

bool cPtr_selectInstructionForGrammarAnalysis::
isSameSyntaxInstructionThan (C_Compiler & inLexique,
                             cPtr_abstractSyntaxInstructionForGrammarAnalysis * inInstruction,
                             const GGS_location & inEndOfInstructionListLocation) const {
  const cPtr_selectInstructionForGrammarAnalysis * p = dynamic_cast <const cPtr_selectInstructionForGrammarAnalysis *> (inInstruction) ;
  bool sameSignature = p != NULL ;
  if (! sameSignature) {
    C_String errorMessage ;
    errorMessage << "syntax signature error: a select instruction is expected here" ;
    inInstruction->mStartLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
  }else{
    GGS_branchListForGrammarAnalysis::cEnumerator currentReferenceBranch (mSelectBranchList, true) ;
    GGS_branchListForGrammarAnalysis::cEnumerator currentOperandBranch (p->mSelectBranchList, true) ;
    while (currentReferenceBranch.hasCurrentObject () && currentOperandBranch.hasCurrentObject () && sameSignature) {
      sameSignature = instructionsListHaveSameSyntaxSignatures (inLexique, currentReferenceBranch._mSyntaxInstructionList (HERE),
                                                                currentOperandBranch._mSyntaxInstructionList (HERE), inEndOfInstructionListLocation) ;
      currentReferenceBranch.next () ;
      currentOperandBranch.next () ;
    }
    if (sameSignature && (! currentReferenceBranch. hasCurrentObject()) && currentOperandBranch.hasCurrentObject ()) {
      C_String errorMessage ;
      errorMessage << "syntax signature error: the select instruction has more branches than the original one" ;
      inInstruction->mStartLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      sameSignature = false ;
    }else if (sameSignature && currentReferenceBranch.hasCurrentObject () && ! currentOperandBranch.hasCurrentObject ()) {
      C_String errorMessage ;
      errorMessage << "syntax signature error: the select instruction has less branches than the original one" ;
      inInstruction->mStartLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
      sameSignature = false ;
    }
  }
  return sameSignature ;
}

//---------------------------------------------------------------------------*

bool cPtr_nonTerminalInstructionForGrammarAnalysis::
isSameSyntaxInstructionThan (C_Compiler & inLexique,
                             cPtr_abstractSyntaxInstructionForGrammarAnalysis * inInstruction,
                             const GGS_location & /* inEndOfInstructionListLocation */) const {
  const cPtr_nonTerminalInstructionForGrammarAnalysis * p = dynamic_cast <const cPtr_nonTerminalInstructionForGrammarAnalysis *> (inInstruction) ;
  if ((p == NULL) || (p->mNonterminalSymbolName.compare (mNonterminalSymbolName) != 0)) {
    C_String errorMessage ;
    errorMessage << "syntax signature error : <" << mNonterminalSymbolName << "> non terminal is expected here" ;
    inInstruction->mStartLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
    p = NULL ;
  }
  return p != NULL ;
}

//---------------------------------------------------------------------------*

bool cPtr_terminalInstructionForGrammarAnalysis::
isSameSyntaxInstructionThan (C_Compiler & inLexique,
                             cPtr_abstractSyntaxInstructionForGrammarAnalysis * inInstruction,
                             const GGS_location & /* inEndOfInstructionListLocation */) const {
  const cPtr_terminalInstructionForGrammarAnalysis * p = dynamic_cast <const cPtr_terminalInstructionForGrammarAnalysis *> (inInstruction) ;
  if ((p == NULL) || (p->mTerminalSymbolName.compare (mTerminalSymbolName) != 0)) {
    C_String errorMessage ;
    errorMessage << "syntax signature error : $" << mTerminalSymbolName << "$ terminal is expected here" ;
    inInstruction->mStartLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
    p = NULL ;
  }
  return p != NULL ;
}

//---------------------------------------------------------------------------*

void
routine_checkLabelSignatures (C_Compiler & inLexique,
                              GGS_typeAltProductionsMap & inAltProductionMap
                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeAltProductionsMap::cEnumerator current (inAltProductionMap, true) ;
  if (current.hasCurrentObject ()) { // current may be NULL in case of error
    GGS_syntaxInstructionListForGrammarAnalysis referenceSyntaxList = current._mSyntaxSignature (HERE) ;
    current.next () ;
    while (current.hasCurrentObject ()) {
      instructionsListHaveSameSyntaxSignatures (inLexique, referenceSyntaxList,
                                                current._mSyntaxSignature (HERE),
                                                current._mEndOfInstructionListLocation (HERE)) ;
      current.next () ;
    }
  }
}

//---------------------------------------------------------------------------*

void
routine_checkParseRewindSignatures (C_Compiler & inLexique,
                                    GGS_L_parse_rewind_signature_list & inParseRewindSignatureList
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_parse_rewind_signature_list::cEnumerator current (inParseRewindSignatureList, true) ;
  GGS_syntaxInstructionListForGrammarAnalysis referenceList = current._mSignature (HERE) ;
  current.next () ;
  while (current.hasCurrentObject ()) {
    instructionsListHaveSameSyntaxSignatures (inLexique, referenceList,
                                              current._mSignature (HERE),
                                              current._mErrorLocation (HERE)) ;
    current.next () ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark CLASS cPtr_typeInstructionVerifSyntaxique
#endif

//---------------------------------------------------------------------------*

void cPtr_typeInstructionVerifSyntaxique::
generateSelectAndRepeatPrototypes (AC_OutputStream & /* inHfile */,
                                     const C_String & /* inLexiqueClassName */,
                                     const C_String & /* inTargetFileName */,
                                     PMSInt32 & /* ioPrototypeIndex */,
                                     const bool /* inNotDeclared */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionVerifSyntaxique::
generateInstruction (AC_OutputStream & inCppFile,
                       const C_String & /* inTargetFileName */,
                       PMSInt32 & /* ioPrototypeIndex */,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    GGS_L_assignedVariables::cEnumerator argument (aListeTypeEffectifs, true) ;
    while (argument.hasCurrentObject ()) {
      inCppFile << "inLexique.assignFromAttribute_"
                << argument._aNomAttributSource (HERE) << " (" ;
      argument._aNomVariableCible (HERE) (HERE)->generateCplusPlusName (inCppFile) ;
      inCppFile << ") ;\n" ;
      argument.next () ;
    }
  }
  if (inGenerateDebug) {
    GGS_L_assignedVariables::cEnumerator argument (aListeTypeEffectifs, true) ;
    inCppFile << "#ifdef DEBUG_TRACE_ENABLED\n"
                 "  { C_String message_ "
              << ((! argument .hasCurrentObject ()) ? "" : "(\" ?\") ")
              << ";\n" ;
    while (argument.hasCurrentObject ()) {
      inCppFile << "    message_ << \" \" << inLexique.attributeValue_" << argument._aNomAttributSource (HERE) << " () ;\n" ;
      argument.next () ;
    }
    inCppFile << "    inLexique.didParseTerminal (\"$" << aNomTerminal << "$\", message_) ;\n"
                 "  }\n"
                 "#endif\n" ;
  }
  inCppFile << "inLexique.acceptTerminal (ACCEPT_TERMINAL (" << mLexiqueClassName << "::"
            << mLexiqueClassName << "_1_"
            << aNomTerminal.identifierRepresentation ()
            << ") COMMA_HERE) ;\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionVerifSyntaxique::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionVerifSyntaxique::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool used = false ;
  GGS_L_assignedVariables::cEnumerator argument (aListeTypeEffectifs, true) ;
  while (argument.hasCurrentObject () && !used) {
    used = argument._aNomVariableCible (HERE).isSameObjectAs (inArgumentCppName) ;
    argument.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionVerifSyntaxique::
formalCurrentObjectArgumentIsUsed (void) const {
  return false ;    
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark CLASS cPtr_typeInstructionAppelNonTerminal
#endif

//---------------------------------------------------------------------------*

void cPtr_typeInstructionAppelNonTerminal::
generateSelectAndRepeatPrototypes (AC_OutputStream & /* inHfile */,
                                     const C_String & /* inLexiqueClassName */,
                                     const C_String & /* inTargetFileName */,
                                     PMSInt32 & /* ioPrototypeIndex */,
                                     const bool /* inNotDeclared */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionAppelNonTerminal::
generateInstruction (AC_OutputStream & inCppFile,
                       const C_String & /* inTargetFileName */,
                       PMSInt32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  inCppFile << "nt_" << mNonterminalName << "_"
            << (inGenerateSemanticInstructions ? mAltName.string () : C_String ("parse"))
            << " (inLexique" ;
  if (inGenerateSemanticInstructions) {
    GGS_typeExpressionList::cEnumerator argument (mParametersExpressionList, true) ;
    while (argument.hasCurrentObject ()) {
      inCppFile << ", " ;
      argument._mExpression (HERE) (HERE)->generateExpression (inCppFile) ;
      argument.next () ;
    }
  }
  inCppFile << ") ;\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionAppelNonTerminal::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionAppelNonTerminal::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool inGenerateSemanticInstructions) const {
  bool used = false ;
  if (inGenerateSemanticInstructions) {
    GGS_typeExpressionList::cEnumerator argument (mParametersExpressionList, true) ;
    while (argument.hasCurrentObject () && !used) {
      used = argument._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
      argument.next () ;
    }
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionAppelNonTerminal::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = false ;
  GGS_typeExpressionList::cEnumerator argument (mParametersExpressionList, true) ;
  while (argument.hasCurrentObject () && !used) {
    used = argument._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    argument.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark CLASS cPtr_C_select_instruction
#endif

//---------------------------------------------------------------------------*

void cPtr_C_select_instruction::
generateSelectAndRepeatPrototypes (AC_OutputStream & inHfile,
                                     const C_String & inLexiqueClassName,
                                     const C_String & inTargetFileName,
                                     PMSInt32 & ioPrototypeIndex,
                                     const bool inNotDeclared) {
  if (inNotDeclared) {
    inHfile << "  protected : virtual PMSInt16 select_" << inTargetFileName
             << "_" << cStringWithSigned (ioPrototypeIndex)
             << " (" << inLexiqueClassName << " &) = 0 ;\n\n" ;
  }
  ioPrototypeIndex ++ ;
  GGS_typeListeBranchesInstructions::cEnumerator currentBranch (mIFbranchesList, true) ;
  while (currentBranch.hasCurrentObject ()) {
    generateSelectAndRepeatPrototypesForList (currentBranch._mInstructionList (HERE),
                                              inHfile,
                                              inLexiqueClassName,
                                              inTargetFileName,
                                              ioPrototypeIndex,
                                              inNotDeclared) ;
    currentBranch.next () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_select_instruction::
generateInstruction (AC_OutputStream & inCppFile,
                       const C_String & inTargetFileName,
                       PMSInt32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  inCppFile << "switch (select_" << inTargetFileName
           << "_" << cStringWithSigned (ioPrototypeIndex)
           << " (inLexique)) {\n" ;
  ioPrototypeIndex ++ ;
  GGS_typeListeBranchesInstructions::cEnumerator currentBranch (mIFbranchesList, true) ;
  PMSInt16 numeroBranche = 1 ;
  inCppFile.incIndentation (+2) ;
  while (currentBranch.hasCurrentObject ()) {
    inCppFile << "case " << cStringWithSigned (numeroBranche) << " : {\n" ;
    generateInstructionListForList (currentBranch._mInstructionList (HERE), inCppFile,
                                    inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, inGenerateSemanticInstructions) ;
    inCppFile << "  } break ;\n" ;
    currentBranch.next () ;
    numeroBranche ++ ;
  }
  inCppFile.incIndentation (-2) ;
  inCppFile << "  default :\n"
              "    break ;\n"
              "}\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_select_instruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_select_instruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool inGenerateSemanticInstructions) const {
  bool used = false ;
  GGS_typeListeBranchesInstructions::cEnumerator currentBranch (mIFbranchesList, true) ;
  while (currentBranch.hasCurrentObject () && ! used) {
    used = formalArgumentIsUsedForList (currentBranch._mInstructionList (HERE), inArgumentCppName, inGenerateSemanticInstructions) ;
    currentBranch.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_select_instruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = false ;
  GGS_typeListeBranchesInstructions::cEnumerator currentBranch (mIFbranchesList, true) ;
  while (currentBranch.hasCurrentObject () && ! used) {
    used = formalCurrentObjectArgumentIsUsedForList (currentBranch._mInstructionList (HERE)) ;
    currentBranch.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark CLASS cPtr_C_repeat_instruction
#endif

//---------------------------------------------------------------------------*

void cPtr_C_repeat_instruction::
generateSelectAndRepeatPrototypes (AC_OutputStream & inHfile,
                                     const C_String & inLexiqueClassName,
                                     const C_String & inTargetFileName,
                                     PMSInt32 & ioPrototypeIndex,
                                     const bool inNotDeclared) {
  if (inNotDeclared) {
    inHfile << "  protected : virtual PMSInt16 select_repeat_" << inTargetFileName
            << "_" << cStringWithSigned (ioPrototypeIndex)
            << " (" << inLexiqueClassName << " &) = 0 ;\n\n" ;
  }
  ioPrototypeIndex ++ ;
  GGS_typeListeBranchesInstructions::cEnumerator currentBranch (aListesBranchesRepeter, true) ;
  while (currentBranch.hasCurrentObject ()) {
    generateSelectAndRepeatPrototypesForList (currentBranch._mInstructionList (HERE),
                                              inHfile,
                                              inLexiqueClassName,
                                              inTargetFileName,
                                              ioPrototypeIndex,
                                              inNotDeclared) ;
    currentBranch.next () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_repeat_instruction::
generateInstruction (AC_OutputStream & inCppFile,
                     const C_String & inTargetFileName,
                     PMSInt32 & ioPrototypeIndex,
                     const bool inGenerateDebug,
                     const bool inGenerateSemanticInstructions) const {
  const PMSInt32 prototypeIndex = ioPrototypeIndex ;
  ioPrototypeIndex ++ ;
  inCppFile << "{ bool syntaxRepeat_" << cStringWithSigned (prototypeIndex) << " = true ;\n"
               "  while (syntaxRepeat_" << cStringWithSigned (prototypeIndex) << ") {\n" ;
  inCppFile.incIndentation (+4) ;
  GGS_typeListeBranchesInstructions::cEnumerator currentBranch (aListesBranchesRepeter, true) ;
  generateInstructionListForList (currentBranch._mInstructionList (HERE), inCppFile,
                                  inTargetFileName, ioPrototypeIndex,
                                  inGenerateDebug, inGenerateSemanticInstructions) ;
  inCppFile << "switch (select_repeat_" << inTargetFileName
           << "_" << cStringWithSigned (prototypeIndex)
           << " (inLexique)) {\n" ;
  currentBranch.next () ;
  PMSInt16 numeroBranche = 1 ;
  inCppFile.incIndentation (+2) ;
  while (currentBranch.hasCurrentObject ()) {
    inCppFile << "case " << cStringWithSigned ((PMSInt32) (numeroBranche + 1)) << " : {\n" ;
    generateInstructionListForList (currentBranch._mInstructionList (HERE), inCppFile,
                                    inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, inGenerateSemanticInstructions) ;
    inCppFile << "  } break ;\n" ;
    currentBranch.next () ;
    numeroBranche ++ ;
  }
  inCppFile.incIndentation (-2) ;
  inCppFile << "  default :\n"
               "    syntaxRepeat_" << cStringWithSigned (prototypeIndex) << " = false ;\n"
               "    break ;\n"
               "}\n" ;
  inCppFile.incIndentation (-4) ;
  inCppFile << "  }\n"
               "}\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_repeat_instruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_repeat_instruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool inGenerateSemanticInstructions) const {
  bool used = false ;
  GGS_typeListeBranchesInstructions::cEnumerator currentBranch (aListesBranchesRepeter, true) ;
  while (currentBranch.hasCurrentObject () && ! used) {
    used = formalArgumentIsUsedForList (currentBranch._mInstructionList (HERE), inArgumentCppName, inGenerateSemanticInstructions) ;
    currentBranch.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_repeat_instruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = false ;
  GGS_typeListeBranchesInstructions::cEnumerator currentBranch (aListesBranchesRepeter, true) ;
  while (currentBranch.hasCurrentObject () && ! used) {
    used = formalCurrentObjectArgumentIsUsedForList (currentBranch._mInstructionList (HERE)) ;
    currentBranch.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark CLASS cPtr_C_parse_rewind_instruction
#endif

//---------------------------------------------------------------------------*

void cPtr_C_parse_rewind_instruction::
generateSelectAndRepeatPrototypes (AC_OutputStream & inHfile,
                                     const C_String & inLexiqueClassName,
                                     const C_String & inTargetFileName,
                                     PMSInt32 & ioPrototypeIndex,
                                     const bool inNotDeclared) {
  GGS_typeListeBranchesInstructions::cEnumerator p (mBranchList, true) ;
  const PMSInt32 prototypeIndex = ioPrototypeIndex ;
//--- First branch
  generateSelectAndRepeatPrototypesForList (p._mInstructionList (HERE),
                                            inHfile,
                                            inLexiqueClassName,
                                            inTargetFileName,
                                            ioPrototypeIndex,
                                            inNotDeclared) ;
//--- Other branches
  p.next () ;
  while (p.hasCurrentObject ()) {
    PMSInt32 tempPrototypeIndex = prototypeIndex ;
    generateSelectAndRepeatPrototypesForList (p._mInstructionList (HERE),
                                              inHfile,
                                              inLexiqueClassName,
                                              inTargetFileName,
                                              tempPrototypeIndex,
                                              false) ;
    p.next () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_parse_rewind_instruction::
generateInstruction (AC_OutputStream & inCppFile,
                       const C_String & inTargetFileName,
                       PMSInt32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  GGS_typeListeBranchesInstructions::cEnumerator p (mBranchList, true) ;
  const PMSInt32 v = mInstructionLocation.location () ; // For making 'context_xxx' variable unique
  const PMSInt32 prototypeIndex = ioPrototypeIndex ;
//--- First branch
  inCppFile << "//--- First branch of parse/rewind instruction\n"
            << "  const C_parsingContext context_" << cStringWithSigned (v) << " = inLexique.parsingContext () ;\n" ;
  generateInstructionListForList (p._mInstructionList (HERE), inCppFile,
                                  inTargetFileName, ioPrototypeIndex,
                                  inGenerateDebug, inGenerateSemanticInstructions) ;
//--- Other branches
  p.next () ;
  while (p.hasCurrentObject ()) {
    inCppFile << "//--- Branch of parse/rewind instruction\n"
              << "  inLexique.setParsingContext (context_" << cStringWithSigned (v) << ") ;\n" ;
    PMSInt32 tempPrototypeIndex = prototypeIndex ;
    generateInstructionListForList (p._mInstructionList (HERE), inCppFile,
                                    inTargetFileName, tempPrototypeIndex,
                                    inGenerateDebug, inGenerateSemanticInstructions) ;
    p.next () ;
  }
  inCppFile << "//--- End of parse/rewind instruction\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_parse_rewind_instruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_parse_rewind_instruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool inGenerateSemanticInstructions) const {
  bool used = false ;
  GGS_typeListeBranchesInstructions::cEnumerator currentBranch (mBranchList, true) ;
  while (currentBranch.hasCurrentObject () && ! used) {
    used = formalArgumentIsUsedForList (currentBranch._mInstructionList (HERE), inArgumentCppName, inGenerateSemanticInstructions) ;
    currentBranch.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_parse_rewind_instruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = false ;
  GGS_typeListeBranchesInstructions::cEnumerator currentBranch (mBranchList, true) ;
  while (currentBranch.hasCurrentObject () && ! used) {
    used = formalCurrentObjectArgumentIsUsedForList (currentBranch._mInstructionList (HERE)) ;
    currentBranch.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark CLASS cPtr_C_parse_when_else_instruction
#endif

//---------------------------------------------------------------------------*

void cPtr_C_parse_when_else_instruction::
generateSelectAndRepeatPrototypes (AC_OutputStream & inHfile,
                                   const C_String & inLexiqueClassName,
                                   const C_String & inTargetFileName,
                                   PMSInt32 & ioPrototypeIndex,
                                   const bool inNotDeclared) {
  GGS_L_expression_instructionsList_list::cEnumerator currentBranch (mIFbranchesList, true) ;
  const PMSInt32 kPrototypeIndex = ioPrototypeIndex ;
//--- Generate for first branch
  generateSelectAndRepeatPrototypesForList (currentBranch._mInstructionList (HERE),
                                            inHfile,
                                            inLexiqueClassName,
                                            inTargetFileName,
                                            ioPrototypeIndex,
                                            inNotDeclared) ;
//--- Generate for other branches
  currentBranch.next () ;
  while (currentBranch.hasCurrentObject ()) {
    PMSInt32 localPrototypeIndex = kPrototypeIndex ;
    generateSelectAndRepeatPrototypesForList (currentBranch._mInstructionList (HERE),
                                              inHfile,
                                              inLexiqueClassName,
                                              inTargetFileName,
                                              localPrototypeIndex,
                                              false) ;
    currentBranch.next () ;
  }
//--- Generate for 'else' branch
  PMSInt32 localPrototypeIndex = kPrototypeIndex ;
  generateSelectAndRepeatPrototypesForList (mElseInstructionsList,
                                            inHfile,
                                            inLexiqueClassName,
                                            inTargetFileName,
                                            localPrototypeIndex,
                                            false) ;
}

//---------------------------------------------------------------------------*

void cPtr_C_parse_when_else_instruction::
generateInstruction (AC_OutputStream & inCppFile,
                     const C_String & inTargetFileName,
                     PMSInt32 & ioPrototypeIndex,
                     const bool inGenerateDebug,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    GGS_L_expression_instructionsList_list::cEnumerator currentBranch (mIFbranchesList, true) ;
    const PMSInt32 kPrototypeIndex = ioPrototypeIndex ;
    bool first = true ;
    while (currentBranch.hasCurrentObject ()) {
      if (first) {
        first = false ;
      }else{
        inCppFile << "}else " ;
      }
      inCppFile << "if ((" ;
      currentBranch._mIFexpression (HERE) (HERE)->generateExpression (inCppFile) ;
      inCppFile << ").isBuiltAndTrue ()) {\n" ;
      PMSInt32 localPrototypeIndex = kPrototypeIndex ;
      generateInstructionListForList (currentBranch._mInstructionList (HERE), inCppFile,
                                      inTargetFileName, localPrototypeIndex,
                                      inGenerateDebug, inGenerateSemanticInstructions) ;
      currentBranch.next () ;
    }
    if (mElseInstructionsList.count () > 0) {
      inCppFile << "}else{\n" ;
      PMSInt32 localPrototypeIndex = kPrototypeIndex ;
      generateInstructionListForList (mElseInstructionsList, inCppFile,
                                      inTargetFileName, localPrototypeIndex,
                                      inGenerateDebug, inGenerateSemanticInstructions) ;
    }
    inCppFile << "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_parse_when_else_instruction::
isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  bool used = isLexiqueFormalArgumentUsedForList (mElseInstructionsList, inGenerateSemanticInstructions) ;
  GGS_L_expression_instructionsList_list::cEnumerator currentBranch (mIFbranchesList, true) ;
  while (currentBranch.hasCurrentObject () && ! used) {
    used = currentBranch._mIFexpression (HERE) (HERE)->isLexiqueFormalArgumentUsedForTest ()
       || isLexiqueFormalArgumentUsedForList (currentBranch._mInstructionList (HERE), inGenerateSemanticInstructions) ;
    currentBranch.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_parse_when_else_instruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool inGenerateSemanticInstructions) const {
  bool used = formalArgumentIsUsedForList (mElseInstructionsList, inArgumentCppName, inGenerateSemanticInstructions) ;
  GGS_L_expression_instructionsList_list::cEnumerator currentBranch (mIFbranchesList, true) ;
  while ((! used) && currentBranch.hasCurrentObject ()) {
    used = currentBranch._mIFexpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || formalArgumentIsUsedForList (currentBranch._mInstructionList (HERE), inArgumentCppName, inGenerateSemanticInstructions) ;
    currentBranch.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_parse_when_else_instruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = false ;
  GGS_L_expression_instructionsList_list::cEnumerator currentBranch (mIFbranchesList, true) ;
  while ((! used) && currentBranch.hasCurrentObject ()) {
    used = formalCurrentObjectArgumentIsUsedForList (currentBranch._mInstructionList (HERE)) ;
    currentBranch.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark CLASS cPtr_C_parse_loop_instruction
#endif

//---------------------------------------------------------------------------*

void cPtr_C_parse_loop_instruction::
generateSelectAndRepeatPrototypes (AC_OutputStream & inHfile,
                                   const C_String & inLexiqueClassName,
                                   const C_String & inTargetFileName,
                                   PMSInt32 & ioPrototypeIndex,
                                   const bool inNotDeclared) {
  generateSelectAndRepeatPrototypesForList (mInstructionList,
                                            inHfile,
                                            inLexiqueClassName,
                                            inTargetFileName,
                                            ioPrototypeIndex,
                                            inNotDeclared) ;
}

//---------------------------------------------------------------------------*

void cPtr_C_parse_loop_instruction::
generateInstruction (AC_OutputStream & inCppFile,
                     const C_String & inTargetFileName,
                     PMSInt32 & ioPrototypeIndex,
                     const bool inGenerateDebug,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
  //--- 'condition' variable
    C_String conditionVariable ;
    conditionVariable << "_condition_" << cStringWithSigned (mEndOfInstructionLocation.location ()) ;
  //--- 'variant' variable
    C_String variantVariable ;
    variantVariable << "_variant_" << cStringWithSigned (mEndOfInstructionLocation.location ()) ;
  //--- Loop header : compute variant initial value
    inCppFile << "GGS_uint " << variantVariable << " = " ;
    mVariantExpression (HERE)->generateExpression (inCppFile) ;
    inCppFile << " ;\n" ;
  //--- First pass on instruction list (parse only)
    const PMSInt32 v = mEndOfInstructionLocation.location () ; // For making 'context_xxx' variable unique
    inCppFile << "const C_parsingContext context_" << cStringWithSigned (v) << " = inLexique.parsingContext () ;\n" ;
    const PMSInt32 prototypeIndex = ioPrototypeIndex ;
    inCppFile.incIndentation (-2) ;
    generateInstructionListForList (mInstructionList, inCppFile,
                                    inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, false) ;
    inCppFile.incIndentation (+2) ;
  //--- Condition variable
    inCppFile << "GGS_bool " << conditionVariable << " ;\n"
              << "if (" << variantVariable << ".isBuilt ()) {\n"
              << "  " << conditionVariable << " = " ;
    mWhileExpression (HERE)->generateExpression (inCppFile) ;
    inCppFile << " ;\n" 
                 "}\n"
                 "while (" << conditionVariable << ".isBuiltAndTrue ()) {\n"
                 "  inLexique.setParsingContext (context_" << cStringWithSigned (v) << ") ;\n"
                 "  if (" << variantVariable << ".uintValue () == 0) {\n"
                 "    inLexique.onTheFlyRunTimeError (\"loop variant error\" COMMA_SOURCE_FILE_AT_LINE ("
              << cStringWithSigned (mEndOfInstructionLocation.lineNumber ())
              << ")) ;\n"
                 "    " << conditionVariable << " = GGS_bool (false) ;\n"
                 "  }else{\n" 
                 "    " << variantVariable << ".decrement_operation (inLexique COMMA_HERE) ;\n" ;
    PMSInt32 tempPrototypeIndex = prototypeIndex ;
    inCppFile.incIndentation (+2) ;
    generateInstructionListForList (mInstructionList, inCppFile,
                                    inTargetFileName, tempPrototypeIndex,
                                    inGenerateDebug, inGenerateSemanticInstructions) ;
    inCppFile.incIndentation (-2) ;
    inCppFile << "    " << conditionVariable << " = " ;
    mWhileExpression (HERE)->generateExpression (inCppFile) ;
    inCppFile << " ;\n" 
                 "  }\n"
                 "}\n" ;   
  }else{
    generateInstructionListForList (mInstructionList, inCppFile,
                                    inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, inGenerateSemanticInstructions) ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_parse_loop_instruction::
isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  return inGenerateSemanticInstructions
    || isLexiqueFormalArgumentUsedForList (mInstructionList, inGenerateSemanticInstructions)
    || mVariantExpression (HERE)->isLexiqueFormalArgumentUsedForTest ()
    || mWhileExpression (HERE)->isLexiqueFormalArgumentUsedForTest ()
  ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_parse_loop_instruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool inGenerateSemanticInstructions) const {
  return formalArgumentIsUsedForList (mInstructionList, inArgumentCppName, inGenerateSemanticInstructions)
    || mVariantExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
    || mWhileExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
  ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_parse_loop_instruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return formalCurrentObjectArgumentIsUsedForList (mInstructionList) ;
}

//---------------------------------------------------------------------------*
