//---------------------------------------------------------------------------*
//                                                                           *
//  Generate parser instructions                                             *
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

#include "files/C_TextFileWrite.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

#include "semantics_instructions.h"
#include "scannerDecoderGeneration.h"
#include "parser_parser.h"

//---------------------------------------------------------------------------*

static bool
instructionsListHaveSameSyntaxSignatures (C_Compiler & _inLexique,
                                          const GGS_L_ruleSyntaxSignature & inReferenceList,
                                          const GGS_L_ruleSyntaxSignature & inOtherList,
                                          const GGS_location & inEndOfInstructionListLocation) {
  bool sameSignature = true ;
  GGS_L_ruleSyntaxSignature::element_type * currentReferenceInstruction = inReferenceList.firstObject () ;
  GGS_L_ruleSyntaxSignature::element_type * currentInstruction = inOtherList.firstObject () ;
  while ((currentReferenceInstruction != NULL) && (currentInstruction != NULL) && sameSignature) {
    sameSignature = currentReferenceInstruction->mInstruction (HERE)->isSameSyntaxInstructionThan (_inLexique, currentInstruction->mInstruction (HERE), inEndOfInstructionListLocation) ;
    currentReferenceInstruction = currentReferenceInstruction->nextObject () ;
    currentInstruction = currentInstruction->nextObject () ;
  }
  if (sameSignature) {
    if (currentReferenceInstruction != NULL) {
      currentInstruction = inOtherList.firstObject () ;
      if (currentInstruction == NULL) {
        inEndOfInstructionListLocation.signalSemanticError (_inLexique, 
                                "syntax signature error : the branch from this point is too short"
                                COMMA_HERE) ;
      }else{
        currentInstruction->mInstruction (HERE)->mStartLocation.signalSemanticError (_inLexique, 
                                "syntax signature error : the branch from this point is too short"
                                COMMA_HERE) ;
      }
      sameSignature = false ;
    }else if (currentInstruction != NULL) {
      currentInstruction = inOtherList.firstObject () ;
      currentInstruction->mInstruction (HERE)->mStartLocation.signalSemanticError (_inLexique, 
                                        "syntax signature error : the branch from this point is too long"
                                        COMMA_HERE) ;
      sameSignature = false ;
    }
  }
  return sameSignature ;
}

//---------------------------------------------------------------------------*

bool cPtr_T_repeatInstruction_forGrammarComponent::
isSameSyntaxInstructionThan (C_Compiler & _inLexique,
                             cPtr_AC_instruction_ForGrammar * inInstruction,
                             const GGS_location & inEndOfInstructionListLocation) const {
  const cPtr_T_repeatInstruction_forGrammarComponent * p = dynamic_cast <const cPtr_T_repeatInstruction_forGrammarComponent *> (inInstruction) ;
  bool sameSignature = p != NULL ;
  if (! sameSignature) {
    C_String errorMessage ;
    errorMessage << "syntax signature error : a repeat instruction is expected here" ;
    inInstruction->mStartLocation.signalSemanticError (_inLexique, errorMessage COMMA_HERE) ;
  }else{
    GGS_L_branchList_ForGrammarComponent::element_type * currentReferenceBranch = mRepeatList.firstObject () ;
    GGS_L_branchList_ForGrammarComponent::element_type * currentOperandBranch = p->mRepeatList.firstObject () ;
    while ((currentReferenceBranch != NULL) && (currentOperandBranch != NULL) && sameSignature) {
      macroValidPointer (currentReferenceBranch) ;
      macroValidPointer (currentOperandBranch) ;
      sameSignature = instructionsListHaveSameSyntaxSignatures (_inLexique, currentReferenceBranch->mInstructionList,
                                                                currentOperandBranch->mInstructionList, inEndOfInstructionListLocation) ;
      currentReferenceBranch = currentReferenceBranch->nextObject () ;
      currentOperandBranch = currentOperandBranch->nextObject () ;
    }
    if (sameSignature && (currentReferenceBranch == NULL) && (currentOperandBranch != NULL)) {
      C_String errorMessage ;
      errorMessage << "syntax signature error: the repeat instruction has more branches than the original one" ;
      inInstruction->mStartLocation.signalSemanticError (_inLexique, errorMessage COMMA_HERE) ;
      sameSignature = false ;
    }else if (sameSignature && (currentReferenceBranch != NULL) && (currentOperandBranch == NULL)) {
      C_String errorMessage ;
      errorMessage << "syntax signature error: the repeat instruction has less branches than the original one" ;
      inInstruction->mStartLocation.signalSemanticError (_inLexique, errorMessage COMMA_HERE) ;
      sameSignature = false ;
    }
  }
  return sameSignature ;
}

//---------------------------------------------------------------------------*

bool cPtr_T_selectInstruction_forGrammarComponent::
isSameSyntaxInstructionThan (C_Compiler & _inLexique,
                             cPtr_AC_instruction_ForGrammar * inInstruction,
                             const GGS_location & inEndOfInstructionListLocation) const {
  const cPtr_T_selectInstruction_forGrammarComponent * p = dynamic_cast <const cPtr_T_selectInstruction_forGrammarComponent *> (inInstruction) ;
  bool sameSignature = p != NULL ;
  if (! sameSignature) {
    C_String errorMessage ;
    errorMessage << "syntax signature error: a select instruction is expected here" ;
    inInstruction->mStartLocation.signalSemanticError (_inLexique, errorMessage COMMA_HERE) ;
  }else{
    GGS_L_branchList_ForGrammarComponent::element_type * currentReferenceBranch = mSelectList.firstObject () ;
    GGS_L_branchList_ForGrammarComponent::element_type * currentOperandBranch = p->mSelectList.firstObject () ;
    while ((currentReferenceBranch != NULL) && (currentOperandBranch != NULL) && sameSignature) {
      macroValidPointer (currentReferenceBranch) ;
      macroValidPointer (currentOperandBranch) ;
      sameSignature = instructionsListHaveSameSyntaxSignatures (_inLexique, currentReferenceBranch->mInstructionList,
                                                                currentOperandBranch->mInstructionList, inEndOfInstructionListLocation) ;
      currentReferenceBranch = currentReferenceBranch->nextObject () ;
      currentOperandBranch = currentOperandBranch->nextObject () ;
    }
    if (sameSignature && (currentReferenceBranch == NULL) && (currentOperandBranch != NULL)) {
      C_String errorMessage ;
      errorMessage << "syntax signature error: the select instruction has more branches than the original one" ;
      inInstruction->mStartLocation.signalSemanticError (_inLexique, errorMessage COMMA_HERE) ;
      sameSignature = false ;
    }else if (sameSignature && (currentReferenceBranch != NULL) && (currentOperandBranch == NULL)) {
      C_String errorMessage ;
      errorMessage << "syntax signature error: the select instruction has less branches than the original one" ;
      inInstruction->mStartLocation.signalSemanticError (_inLexique, errorMessage COMMA_HERE) ;
      sameSignature = false ;
    }
  }
  return sameSignature ;
}

//---------------------------------------------------------------------------*

bool cPtr_T_nonterminalInstruction_forGrammarComponent::
isSameSyntaxInstructionThan (C_Compiler & _inLexique,
                             cPtr_AC_instruction_ForGrammar * inInstruction,
                             const GGS_location & /* inEndOfInstructionListLocation */) const {
  const cPtr_T_nonterminalInstruction_forGrammarComponent * p = dynamic_cast <const cPtr_T_nonterminalInstruction_forGrammarComponent *> (inInstruction) ;
  if ((p == NULL) || (p->mNonterminalSymbolName.compare (mNonterminalSymbolName) != 0)) {
    C_String errorMessage ;
    errorMessage << "syntax signature error : <" << mNonterminalSymbolName << "> non terminal is expected here" ;
    inInstruction->mStartLocation.signalSemanticError (_inLexique, errorMessage COMMA_HERE) ;
    p = NULL ;
  }
  return p != NULL ;
}

//---------------------------------------------------------------------------*

bool cPtr_T_terminalInstruction_forGrammarComponent::
isSameSyntaxInstructionThan (C_Compiler & _inLexique,
                             cPtr_AC_instruction_ForGrammar * inInstruction,
                             const GGS_location & /* inEndOfInstructionListLocation */) const {
  const cPtr_T_terminalInstruction_forGrammarComponent * p = dynamic_cast <const cPtr_T_terminalInstruction_forGrammarComponent *> (inInstruction) ;
  if ((p == NULL) || (p->mTerminalSymbolName.compare (mTerminalSymbolName) != 0)) {
    C_String errorMessage ;
    errorMessage << "syntax signature error : $" << mTerminalSymbolName << "$ terminal is expected here" ;
    inInstruction->mStartLocation.signalSemanticError (_inLexique, errorMessage COMMA_HERE) ;
    p = NULL ;
  }
  return p != NULL ;
}

//---------------------------------------------------------------------------*

void
routine_checkLabelSignatures (C_Compiler & _inLexique,
                              GGS_typeAltProductionsMap & inAltProductionMap
                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeAltProductionsMap::element_type * current = inAltProductionMap.firstObject () ;
  if (current != NULL) { // current may be NULL in case of error
    macroValidPointer (current) ;
    GGS_L_ruleSyntaxSignature referenceSyntaxList = current->mInfo.mSyntaxSignature ;
    current = current->nextObject () ;
    while (current != NULL) {
      macroValidPointer (current) ;
      instructionsListHaveSameSyntaxSignatures (_inLexique, referenceSyntaxList,
                                                current->mInfo.mSyntaxSignature,
                                                current->mInfo.mEndOfInstructionListLocation) ;
      current = current->nextObject () ;
    }
  }
}

//---------------------------------------------------------------------------*

void
routine_checkParseRewindSignatures (C_Compiler & _inLexique,
                                    GGS_L_parse_rewind_signature_list & inParseRewindSignatureList
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_L_parse_rewind_signature_list::element_type * current = inParseRewindSignatureList.firstObject () ;
  macroValidPointer (current) ;
  GGS_L_ruleSyntaxSignature referenceList = current->mSignature ;
  current = current->nextObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    instructionsListHaveSameSyntaxSignatures (_inLexique, referenceList,
                                              current->mSignature,
                                              current->mErrorLocation) ;
    current = current->nextObject () ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeInstructionVerifSyntaxique::
generateSelectAndRepeatPrototypes (AC_OutputStream & /* inHfile */,
                                     const C_String & /* inLexiqueClassName */,
                                     const C_String & /* inTargetFileName */,
                                     sint32 & /* ioPrototypeIndex */,
                                     const bool /* inNotDeclared */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionVerifSyntaxique::
generateInstruction (AC_OutputStream & inCppFile,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    GGS_L_assignedVariables::element_type * argument = aListeTypeEffectifs.firstObject () ;
    while (argument != NULL) {
      macroValidPointer (argument) ;
      inCppFile << "_inLexique._assignFromAttribute_"
                << argument->aNomAttributSource << " (" ;
      argument->aNomVariableCible (HERE)->generateCplusPlusName (inCppFile) ;
      inCppFile << ") ;\n" ;
      argument = argument->nextObject () ;
    }
  }
  if (inGenerateDebug) {
    GGS_L_assignedVariables::element_type * argument = aListeTypeEffectifs.firstObject () ;
    inCppFile << "#ifdef DEBUG_TRACE_ENABLED\n"
                 "  { C_String message_ "
              << ((argument == NULL) ? "" : "(\" ?\") ")
              << ";\n" ;
    while (argument != NULL) {
      macroValidPointer (argument) ;
      inCppFile << "    message_ << ' ' << _inLexique._attributeValue_" << argument->aNomAttributSource << " () ;\n" ;
      argument = argument->nextObject () ;
    }
    inCppFile << "    _inLexique.didParseTerminal (\"$" << aNomTerminal << "$\", message_) ;\n"
                 "  }\n"
                 "#endif\n" ;
  }
  inCppFile << "_inLexique.acceptTerminal (ACCEPT_TERMINAL (" << mLexiqueClassName << "::"
            << mLexiqueClassName << "_1_" ;
  generateTerminalSymbolCppName (aNomTerminal, inCppFile) ;
  inCppFile << ") COMMA_HERE) ;\n" ;
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
  GGS_L_assignedVariables::element_type * argument = aListeTypeEffectifs.firstObject () ;
  while ((argument != NULL) && !used) {
    macroValidPointer (argument) ;
    used = argument->aNomVariableCible.isSameObjectAs (inArgumentCppName) ;
    argument = argument->nextObject () ;
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
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeInstructionAppelNonTerminal::
generateSelectAndRepeatPrototypes (AC_OutputStream & /* inHfile */,
                                     const C_String & /* inLexiqueClassName */,
                                     const C_String & /* inTargetFileName */,
                                     sint32 & /* ioPrototypeIndex */,
                                     const bool /* inNotDeclared */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionAppelNonTerminal::
generateInstruction (AC_OutputStream & inCppFile,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions && (mReturnedEntityVarName.length () > 0)) {
    if (mReturnedEntityShouldInsertedInList.boolValue ()) {
      inCppFile << "var_cas_" << mReturnedEntityVarName << "._addAssign_operation (" ;
    }else{
      inCppFile << "var_cas_" << mReturnedEntityVarName << " = " ;
    }
  }
  inCppFile << "nt_" << mNonterminalName << '_'
            << (inGenerateSemanticInstructions ? mAltName.cString () : "parse")
            << " (_inLexique" ;
  if (inGenerateSemanticInstructions) {
    GGS_typeExpressionList::element_type * argument = mParametersExpressionList.firstObject () ;
    while (argument != NULL) {
      macroValidPointer (argument) ;
      inCppFile << ", " ;
      argument->mExpression (HERE)->generateExpression (inCppFile) ;
      argument = argument->nextObject () ;
    }
  }
  if (inGenerateSemanticInstructions && mReturnedEntityShouldInsertedInList.boolValue ()) {
    inCppFile << ")" ;
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
    GGS_typeExpressionList::element_type * argument = mParametersExpressionList.firstObject () ;
    while ((argument != NULL) && !used) {
      macroValidPointer (argument) ;
      used = argument->mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
      argument = argument->nextObject () ;
    }
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionAppelNonTerminal::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = false ;
  GGS_typeExpressionList::element_type * argument = mParametersExpressionList.firstObject () ;
  while ((argument != NULL) && !used) {
    macroValidPointer (argument) ;
    used = argument->mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    argument = argument->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_C_select_instruction::
generateSelectAndRepeatPrototypes (AC_OutputStream & inHfile,
                                     const C_String & inLexiqueClassName,
                                     const C_String & inTargetFileName,
                                     sint32 & ioPrototypeIndex,
                                     const bool inNotDeclared) {
  if (inNotDeclared) {
    inHfile << "  protected : virtual sint16 select_" << inTargetFileName
             << '_' << ioPrototypeIndex
             << " (" << inLexiqueClassName << " &) = 0 ;\n\n" ;
  }
  ioPrototypeIndex ++ ;
  GGS_typeListeBranchesInstructions::element_type * currentBranch = mIFbranchesList.firstObject () ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    generateSelectAndRepeatPrototypesForList (currentBranch->mInstructionList,
                                              inHfile,
                                              inLexiqueClassName,
                                              inTargetFileName,
                                              ioPrototypeIndex,
                                              inNotDeclared) ;
    currentBranch = currentBranch->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_select_instruction::
generateInstruction (AC_OutputStream & inCppFile,
                       const C_String & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  inCppFile << "switch (select_" << inTargetFileName
           << '_' << ioPrototypeIndex
           << " (_inLexique)) {\n" ;
  ioPrototypeIndex ++ ;
  GGS_typeListeBranchesInstructions::element_type * currentBranch = mIFbranchesList.firstObject () ;
  sint16 numeroBranche = 1 ;
  inCppFile.incIndentation (+2) ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    inCppFile << "case " << numeroBranche << " : {\n" ;
    generateInstructionListForList (currentBranch->mInstructionList, inCppFile,
                                    inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, inGenerateSemanticInstructions) ;
    inCppFile << "  } break ;\n" ;
    currentBranch = currentBranch->nextObject () ;
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
  GGS_typeListeBranchesInstructions::element_type * currentBranch = mIFbranchesList.firstObject () ;
  while ((currentBranch != NULL) && ! used) {
    macroValidPointer (currentBranch) ;
    used = formalArgumentIsUsedForList (currentBranch->mInstructionList, inArgumentCppName, inGenerateSemanticInstructions) ;
    currentBranch = currentBranch->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_select_instruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = false ;
  GGS_typeListeBranchesInstructions::element_type * currentBranch = mIFbranchesList.firstObject () ;
  while ((currentBranch != NULL) && ! used) {
    macroValidPointer (currentBranch) ;
    used = formalCurrentObjectArgumentIsUsedForList (currentBranch->mInstructionList) ;
    currentBranch = currentBranch->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_C_repeat_instruction::
generateSelectAndRepeatPrototypes (AC_OutputStream & inHfile,
                                     const C_String & inLexiqueClassName,
                                     const C_String & inTargetFileName,
                                     sint32 & ioPrototypeIndex,
                                     const bool inNotDeclared) {
  if (inNotDeclared) {
    inHfile << "  protected : virtual sint16 select_repeat_" << inTargetFileName
            << '_' << ioPrototypeIndex
            << " (" << inLexiqueClassName << " &) = 0 ;\n\n" ;
  }
  ioPrototypeIndex ++ ;
  GGS_typeListeBranchesInstructions::element_type * currentBranch = aListesBranchesRepeter.firstObject () ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    generateSelectAndRepeatPrototypesForList (currentBranch->mInstructionList,
                                              inHfile,
                                              inLexiqueClassName,
                                              inTargetFileName,
                                              ioPrototypeIndex,
                                              inNotDeclared) ;
    currentBranch = currentBranch->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_repeat_instruction::
generateInstruction (AC_OutputStream & inCppFile,
                       const C_String & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  const sint32 prototypeIndex = ioPrototypeIndex ;
  ioPrototypeIndex ++ ;
  inCppFile << "{ bool syntaxRepeat = true ;\n"
               "  while (syntaxRepeat) {\n" ;
  inCppFile.incIndentation (+4) ;
  GGS_typeListeBranchesInstructions::element_type * currentBranch = aListesBranchesRepeter.firstObject () ;
  macroValidPointer (currentBranch) ;
  generateInstructionListForList (currentBranch->mInstructionList, inCppFile,
                                  inTargetFileName, ioPrototypeIndex,
                                  inGenerateDebug, inGenerateSemanticInstructions) ;
  inCppFile << "switch (select_repeat_" << inTargetFileName
           << '_' << prototypeIndex
           << " (_inLexique)) {\n" ;
  currentBranch = currentBranch->nextObject () ;
  sint16 numeroBranche = 1 ;
  inCppFile.incIndentation (+2) ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    inCppFile << "case " << ((sint32) (numeroBranche + 1)) << " : {\n" ;
    generateInstructionListForList (currentBranch->mInstructionList, inCppFile,
                                    inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, inGenerateSemanticInstructions) ;
    inCppFile << "  } break ;\n" ;
    currentBranch = currentBranch->nextObject () ;
    numeroBranche ++ ;
  }
  inCppFile.incIndentation (-2) ;
  inCppFile << "  default :\n"
               "    syntaxRepeat = false ;\n"
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
  GGS_typeListeBranchesInstructions::element_type * currentBranch = aListesBranchesRepeter.firstObject () ;
  while ((currentBranch != NULL) && ! used) {
    macroValidPointer (currentBranch) ;
    used = formalArgumentIsUsedForList (currentBranch->mInstructionList, inArgumentCppName, inGenerateSemanticInstructions) ;
    currentBranch = currentBranch->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_repeat_instruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = false ;
  GGS_typeListeBranchesInstructions::element_type * currentBranch = aListesBranchesRepeter.firstObject () ;
  while ((currentBranch != NULL) && ! used) {
    macroValidPointer (currentBranch) ;
    used = formalCurrentObjectArgumentIsUsedForList (currentBranch->mInstructionList) ;
    currentBranch = currentBranch->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_C_parse_rewind_instruction::
generateSelectAndRepeatPrototypes (AC_OutputStream & inHfile,
                                     const C_String & inLexiqueClassName,
                                     const C_String & inTargetFileName,
                                     sint32 & ioPrototypeIndex,
                                     const bool inNotDeclared) {
  GGS_typeListeBranchesInstructions::element_type * p = mBranchList.firstObject () ;
  const sint32 prototypeIndex = ioPrototypeIndex ;
//--- First branch
  generateSelectAndRepeatPrototypesForList (p->mInstructionList,
                                            inHfile,
                                            inLexiqueClassName,
                                            inTargetFileName,
                                            ioPrototypeIndex,
                                            inNotDeclared) ;
//--- Other branches
  p = p->nextObject () ;
  while (p != NULL) {
    sint32 tempPrototypeIndex = prototypeIndex ;
    generateSelectAndRepeatPrototypesForList (p->mInstructionList,
                                              inHfile,
                                              inLexiqueClassName,
                                              inTargetFileName,
                                              tempPrototypeIndex,
                                              false) ;
    p = p->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_parse_rewind_instruction::
generateInstruction (AC_OutputStream & inCppFile,
                       const C_String & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  GGS_typeListeBranchesInstructions::element_type * p = mBranchList.firstObject () ;
  const sint32 v = mInstructionLocation.location () ; // For making 'context_xxx' variable unique
  const sint32 prototypeIndex = ioPrototypeIndex ;
//--- First branch
  inCppFile << "//--- First branch of parse/rewind instruction\n"
            << "  const C_parsingContext context_" << v << " = _inLexique.parsingContext () ;\n" ;
  generateInstructionListForList (p->mInstructionList, inCppFile,
                                  inTargetFileName, ioPrototypeIndex,
                                  inGenerateDebug, inGenerateSemanticInstructions) ;
//--- Other branches
  p = p->nextObject () ;
  while (p != NULL) {
    inCppFile << "//--- Branch of parse/rewind instruction\n"
              << "  _inLexique.setParsingContext (context_" << v << ") ;\n" ;
    sint32 tempPrototypeIndex = prototypeIndex ;
    generateInstructionListForList (p->mInstructionList, inCppFile,
                                    inTargetFileName, tempPrototypeIndex,
                                    inGenerateDebug, inGenerateSemanticInstructions) ;
    p = p->nextObject () ;
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
  GGS_typeListeBranchesInstructions::element_type * currentBranch = mBranchList.firstObject () ;
  while ((currentBranch != NULL) && ! used) {
    macroValidPointer (currentBranch) ;
    used = formalArgumentIsUsedForList (currentBranch->mInstructionList, inArgumentCppName, inGenerateSemanticInstructions) ;
    currentBranch = currentBranch->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_parse_rewind_instruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = false ;
  GGS_typeListeBranchesInstructions::element_type * currentBranch = mBranchList.firstObject () ;
  while ((currentBranch != NULL) && ! used) {
    macroValidPointer (currentBranch) ;
    used = formalCurrentObjectArgumentIsUsedForList (currentBranch->mInstructionList) ;
    currentBranch = currentBranch->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_C_parse_when_else_instruction::
generateSelectAndRepeatPrototypes (AC_OutputStream & inHfile,
                                   const C_String & inLexiqueClassName,
                                   const C_String & inTargetFileName,
                                   sint32 & ioPrototypeIndex,
                                   const bool inNotDeclared) {
  GGS_L_expression_instructionsList_list::element_type * currentBranch = mIFbranchesList.firstObject () ;
  const sint32 kPrototypeIndex = ioPrototypeIndex ;
//--- Generate for first branch
  generateSelectAndRepeatPrototypesForList (currentBranch->mInstructionList,
                                            inHfile,
                                            inLexiqueClassName,
                                            inTargetFileName,
                                            ioPrototypeIndex,
                                            inNotDeclared) ;
//--- Generate for other branches
  currentBranch = currentBranch->nextObject () ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    sint32 localPrototypeIndex = kPrototypeIndex ;
    generateSelectAndRepeatPrototypesForList (currentBranch->mInstructionList,
                                              inHfile,
                                              inLexiqueClassName,
                                              inTargetFileName,
                                              localPrototypeIndex,
                                              false) ;
    currentBranch = currentBranch->nextObject () ;
  }
//--- Generate for 'else' branch
  sint32 localPrototypeIndex = kPrototypeIndex ;
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
                     sint32 & ioPrototypeIndex,
                     const bool inGenerateDebug,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    GGS_L_expression_instructionsList_list::element_type * currentBranch = mIFbranchesList.firstObject () ;
    const sint32 kPrototypeIndex = ioPrototypeIndex ;
    bool first = true ;
    while (currentBranch != NULL) {
      macroValidPointer (currentBranch) ;
      if (first) {
        first = false ;
      }else{
        inCppFile << "}else " ;
      }
      inCppFile << "if ((" ;
      currentBranch->mIFexpression (HERE)->generateExpression (inCppFile) ;
      inCppFile << ").isBuiltAndTrue ()) {\n" ;
      sint32 localPrototypeIndex = kPrototypeIndex ;
      generateInstructionListForList (currentBranch->mInstructionList, inCppFile,
                                      inTargetFileName, localPrototypeIndex,
                                      inGenerateDebug, inGenerateSemanticInstructions) ;
      currentBranch = currentBranch->nextObject () ;
    }
    if (mElseInstructionsList.count () > 0) {
      inCppFile << "}else{\n" ;
      sint32 localPrototypeIndex = kPrototypeIndex ;
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
  GGS_L_expression_instructionsList_list::element_type * currentBranch = mIFbranchesList.firstObject () ;
  while ((currentBranch != NULL) && ! used) {
    macroValidPointer (currentBranch) ;
    used = currentBranch->mIFexpression (HERE)->isLexiqueFormalArgumentUsedForTest ()
       || isLexiqueFormalArgumentUsedForList (currentBranch->mInstructionList, inGenerateSemanticInstructions) ;
    currentBranch = currentBranch->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_parse_when_else_instruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool inGenerateSemanticInstructions) const {
  bool used = formalArgumentIsUsedForList (mElseInstructionsList, inArgumentCppName, inGenerateSemanticInstructions) ;
  GGS_L_expression_instructionsList_list::element_type * currentBranch = mIFbranchesList.firstObject () ;
  while ((! used) && (currentBranch != NULL)) {
    macroValidPointer (currentBranch) ;
    used = currentBranch->mIFexpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || formalArgumentIsUsedForList (currentBranch->mInstructionList, inArgumentCppName, inGenerateSemanticInstructions) ;
    currentBranch = currentBranch->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_parse_when_else_instruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = false ;
  GGS_L_expression_instructionsList_list::element_type * currentBranch = mIFbranchesList.firstObject () ;
  while ((! used) && (currentBranch != NULL)) {
    macroValidPointer (currentBranch) ;
    used = formalCurrentObjectArgumentIsUsedForList (currentBranch->mInstructionList) ;
    currentBranch = currentBranch->nextObject () ;
  }
  return used ;
}
//---------------------------------------------------------------------------*
