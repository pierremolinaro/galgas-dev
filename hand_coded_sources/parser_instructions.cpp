//---------------------------------------------------------------------------*
//                                                                           *
//  Generate parser instructions                                             *
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

#include "files/C_TextFileWrite.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

#include "semantics_instructions.h"
#include "scanner_generation.h"
#include "parser_parser.h"

//---------------------------------------------------------------------------*

static bool
instructionsListHaveSameSyntaxSignatures (C_Lexique & lexique_var_,
                                          const GGS_L_ruleSyntaxSignature & inReferenceList,
                                          const GGS_L_ruleSyntaxSignature & inOtherList,
                                          const GGS_location & inEndOfInstructionListLocation) {
  bool sameSignature = true ;
  GGS_L_ruleSyntaxSignature::element_type * currentReferenceInstruction = inReferenceList.firstObject () ;
  GGS_L_ruleSyntaxSignature::element_type * currentInstruction = inOtherList.firstObject () ;
  while ((currentReferenceInstruction != NULL) && (currentInstruction != NULL) && sameSignature) {
    sameSignature = currentReferenceInstruction->mInstruction ()->isSameSyntaxInstructionThan (lexique_var_, currentInstruction->mInstruction (), inEndOfInstructionListLocation) ;
    currentReferenceInstruction = currentReferenceInstruction->nextObject () ;
    currentInstruction = currentInstruction->nextObject () ;
  }
  if (sameSignature) {
    if (currentReferenceInstruction != NULL) {
      currentInstruction = inOtherList.firstObject () ;
      if (currentInstruction == NULL) {
        inEndOfInstructionListLocation.signalSemanticError (lexique_var_, 
                                "syntax signature error : the branch from this point is too short") ;
      }else{
        currentInstruction->mInstruction ()->mStartLocation.signalSemanticError (lexique_var_, 
                                "syntax signature error : the branch from this point is too short") ;
      }
      sameSignature = false ;
    }else if (currentInstruction != NULL) {
      currentInstruction = inOtherList.firstObject () ;
      currentInstruction->mInstruction ()->mStartLocation.signalSemanticError (lexique_var_, 
                                       "syntax signature error : the branch from this point is too long") ;
      sameSignature = false ;
    }
  }
  return sameSignature ;
}

//---------------------------------------------------------------------------*

bool cPtr_T_repeatInstruction_forGrammarComponent::
isSameSyntaxInstructionThan (C_Lexique & lexique_var_,
                             cPtr_AC_instruction_ForGrammar * inInstruction,
                             const GGS_location & inEndOfInstructionListLocation) const {
  const cPtr_T_repeatInstruction_forGrammarComponent * p = dynamic_cast <const cPtr_T_repeatInstruction_forGrammarComponent *> (inInstruction) ;
  bool sameSignature = p != NULL ;
  if (! sameSignature) {
    C_String errorMessage ;
    errorMessage << "syntax signature error : a repeat instruction is expected here" ;
    inInstruction->mStartLocation.signalSemanticError (lexique_var_, errorMessage) ;
  }else{
    GGS_L_branchList_ForGrammarComponent::element_type * currentReferenceBranch = mRepeatList.firstObject () ;
    GGS_L_branchList_ForGrammarComponent::element_type * currentOperandBranch = p->mRepeatList.firstObject () ;
    while ((currentReferenceBranch != NULL) && (currentOperandBranch != NULL) && sameSignature) {
      macroValidPointer (currentReferenceBranch) ;
      macroValidPointer (currentOperandBranch) ;
      sameSignature = instructionsListHaveSameSyntaxSignatures (lexique_var_, currentReferenceBranch->mInstructionsList,
                                                                currentOperandBranch->mInstructionsList, inEndOfInstructionListLocation) ;
      currentReferenceBranch = currentReferenceBranch->nextObject () ;
      currentOperandBranch = currentOperandBranch->nextObject () ;
    }
    sameSignature = sameSignature && (currentReferenceBranch == NULL) && (currentOperandBranch == NULL) ;
  }
  return sameSignature ;
}

//---------------------------------------------------------------------------*

bool cPtr_T_selectInstruction_forGrammarComponent::
isSameSyntaxInstructionThan (C_Lexique & lexique_var_,
                             cPtr_AC_instruction_ForGrammar * inInstruction,
                             const GGS_location & inEndOfInstructionListLocation) const {
  const cPtr_T_selectInstruction_forGrammarComponent * p = dynamic_cast <const cPtr_T_selectInstruction_forGrammarComponent *> (inInstruction) ;
  bool sameSignature = p != NULL ;
  if (! sameSignature) {
    C_String errorMessage ;
    errorMessage << "syntax signature error : a select instruction is expected here" ;
    inInstruction->mStartLocation.signalSemanticError (lexique_var_, errorMessage) ;
  }else{
    GGS_L_branchList_ForGrammarComponent::element_type * currentReferenceBranch = mSelectList.firstObject () ;
    GGS_L_branchList_ForGrammarComponent::element_type * currentOperandBranch = p->mSelectList.firstObject () ;
    while ((currentReferenceBranch != NULL) && (currentOperandBranch != NULL) && sameSignature) {
      macroValidPointer (currentReferenceBranch) ;
      macroValidPointer (currentOperandBranch) ;
      sameSignature = instructionsListHaveSameSyntaxSignatures (lexique_var_, currentReferenceBranch->mInstructionsList,
                                                                currentOperandBranch->mInstructionsList, inEndOfInstructionListLocation) ;
      currentReferenceBranch = currentReferenceBranch->nextObject () ;
      currentOperandBranch = currentOperandBranch->nextObject () ;
    }
    sameSignature = sameSignature &&
                   (currentReferenceBranch == NULL) &&
                   (currentOperandBranch == NULL) ;
  }
  return sameSignature ;
}

//---------------------------------------------------------------------------*

bool cPtr_T_nonterminalInstruction_forGrammarComponent::
isSameSyntaxInstructionThan (C_Lexique & lexique_var_,
                             cPtr_AC_instruction_ForGrammar * inInstruction,
                             const GGS_location & /* inEndOfInstructionListLocation */) const {
  const cPtr_T_nonterminalInstruction_forGrammarComponent * p = dynamic_cast <const cPtr_T_nonterminalInstruction_forGrammarComponent *> (inInstruction) ;
  if ((p == NULL) || (p->mNonterminalSymbolName.compareString (mNonterminalSymbolName) != 0)) {
    C_String errorMessage ;
    errorMessage << "syntax signature error : <" << mNonterminalSymbolName << "> non terminal is expected here" ;
    inInstruction->mStartLocation.signalSemanticError (lexique_var_, errorMessage) ;
    p = NULL ;
  }
  return p != NULL ;
}

//---------------------------------------------------------------------------*

bool cPtr_T_terminalInstruction_forGrammarComponent::
isSameSyntaxInstructionThan (C_Lexique & lexique_var_,
                             cPtr_AC_instruction_ForGrammar * inInstruction,
                             const GGS_location & /* inEndOfInstructionListLocation */) const {
  const cPtr_T_terminalInstruction_forGrammarComponent * p = dynamic_cast <const cPtr_T_terminalInstruction_forGrammarComponent *> (inInstruction) ;
  if ((p == NULL) || (p->mTerminalSymbolName.compareString (mTerminalSymbolName) != 0)) {
    C_String errorMessage ;
    errorMessage << "syntax signature error : $" << mTerminalSymbolName << "$ terminal is expected here" ;
    inInstruction->mStartLocation.signalSemanticError (lexique_var_, errorMessage) ;
    p = NULL ;
  }
  return p != NULL ;
}

//---------------------------------------------------------------------------*

void
checkLabelSignatures (C_Lexique & lexique_var_,
                      GGS_typeAltProductionsMap & inAltProductionMap) {
  GGS_typeAltProductionsMap::element_type * current = inAltProductionMap.firstObject () ;
  macroValidPointer (current) ;
  GGS_L_ruleSyntaxSignature referenceSyntaxList = current->mInfo.mSyntaxSignature ;
  current = current->nextObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    instructionsListHaveSameSyntaxSignatures (lexique_var_, referenceSyntaxList,
                                              current->mInfo.mSyntaxSignature,
                                              current->mInfo.mEndOfInstructionListLocation) ;
    current = current->nextObject () ;
  }

}

//---------------------------------------------------------------------------*

void
checkParseRewindSignatures (C_Lexique & lexique_var_,
                            GGS_L_parse_rewind_signature_list & inParseRewindSignatureList) {
  GGS_L_parse_rewind_signature_list::element_type * current = inParseRewindSignatureList.firstObject () ;
  macroValidPointer (current) ;
  GGS_L_ruleSyntaxSignature referenceList = current->mSignature ;
  current = current->nextObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    instructionsListHaveSameSyntaxSignatures (lexique_var_, referenceList,
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

void cPtr_typeInstructionVerifSyntaxique
::generateSelectAndRepeatPrototypes (AC_OutputStream & /* inHfile */,
                                     const C_String & /* inLexiqueClassName */,
                                     const C_String & /* inTargetFileName */,
                                     sint32 & /* ioPrototypeIndex */,
                                     const bool /* inNotDeclared */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionVerifSyntaxique
::generateInstruction (AC_OutputStream & inCppFile,
                       const C_String & inLexiqueClassName,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  inCppFile << "lexique_var_.acceptTerminal (" << inLexiqueClassName << "::"
            << inLexiqueClassName << "_1_" ;
  generateTerminalSymbolCppName (aNomTerminal, inCppFile) ;
  inCppFile << ") ;\n" ;
  if (inGenerateSemanticInstructions) {
    GGS_L_assignedVariables::element_type * argument = aListeTypeEffectifs.firstObject () ;
    while (argument != NULL) {
      macroValidPointer (argument) ;
      argument->aNomVariableCible ()->generateCplusPlusName (inCppFile) ;
      inCppFile << ".defineAttribute (lexique_var_."
               << argument->aNomAttributSource << ", lexique_var_) ;\n" ;
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
      inCppFile << "    message_ << ' ' << lexique_var_." << argument->aNomAttributSource << " ;\n" ;
      argument = argument->nextObject () ;
    }
    inCppFile << "    lexique_var_.didParseTerminal (\"$" << aNomTerminal << "$\", message_) ;\n"
                 "  }\n"
                 "#endif\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionVerifSyntaxique
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionVerifSyntaxique
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool used = false ;
  GGS_L_assignedVariables::element_type * argument = aListeTypeEffectifs.firstObject () ;
  while ((argument != NULL) && !used) {
    macroValidPointer (argument) ;
    used = argument->aNomVariableCible.isEqualTo (inArgumentCppName) ;
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

void cPtr_typeInstructionAppelNonTerminal
::generateSelectAndRepeatPrototypes (AC_OutputStream & /* inHfile */,
                                     const C_String & /* inLexiqueClassName */,
                                     const C_String & /* inTargetFileName */,
                                     sint32 & /* ioPrototypeIndex */,
                                     const bool /* inNotDeclared */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionAppelNonTerminal
::generateInstruction (AC_OutputStream & inCppFile,
                       const C_String & /* inLexiqueClassName */,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  inCppFile << "nt_" << mNonterminalName << '_'
            << (inGenerateSemanticInstructions ? mAltName.cString () : "parse")
            << " (lexique_var_" ;
  if (inGenerateSemanticInstructions) {
    GGS_typeExpressionList::element_type * argument = mParametersExpressionList.firstObject () ;
    while (argument != NULL) {
      macroValidPointer (argument) ;
      inCppFile << ", " ;
      argument->mExpression ()->generateExpression (inCppFile) ;
      argument = argument->nextObject () ;
    }
  }
  inCppFile << ") ;\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionAppelNonTerminal
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionAppelNonTerminal
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool inGenerateSemanticInstructions) const {
  bool used = false ;
  if (inGenerateSemanticInstructions) {
    GGS_typeExpressionList::element_type * argument = mParametersExpressionList.firstObject () ;
    while ((argument != NULL) && !used) {
      macroValidPointer (argument) ;
      used = argument->mExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
      argument = argument->nextObject () ;
    }
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_C_select_instruction
::generateSelectAndRepeatPrototypes (AC_OutputStream & inHfile,
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
    generateSelectAndRepeatPrototypesForList (currentBranch->mInstructionsList,
                                              inHfile,
                                              inLexiqueClassName,
                                              inTargetFileName,
                                              ioPrototypeIndex,
                                              inNotDeclared) ;
    currentBranch = currentBranch->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_select_instruction
::generateInstruction (AC_OutputStream & inCppFile,
                       const C_String & inLexiqueClassName,
                       const C_String & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  inCppFile << "switch (select_" << inTargetFileName
           << '_' << ioPrototypeIndex
           << " (lexique_var_)) {\n" ;
  ioPrototypeIndex ++ ;
  GGS_typeListeBranchesInstructions::element_type * currentBranch = mIFbranchesList.firstObject () ;
  sint16 numeroBranche = 1 ;
  inCppFile.incIndentation (+2) ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    inCppFile << "case " << numeroBranche << " : {\n" ;
    generateInstructionListForList (currentBranch->mInstructionsList, inCppFile, inLexiqueClassName,
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

bool cPtr_C_select_instruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_select_instruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool inGenerateSemanticInstructions) const {
  bool used = false ;
  GGS_typeListeBranchesInstructions::element_type * currentBranch = mIFbranchesList.firstObject () ;
  while ((currentBranch != NULL) && ! used) {
    macroValidPointer (currentBranch) ;
    used = formalArgumentIsUsedForList (currentBranch->mInstructionsList, inArgumentCppName, inGenerateSemanticInstructions) ;
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

void cPtr_C_repeat_instruction
::generateSelectAndRepeatPrototypes (AC_OutputStream & inHfile,
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
    generateSelectAndRepeatPrototypesForList (currentBranch->mInstructionsList,
                                              inHfile,
                                              inLexiqueClassName,
                                              inTargetFileName,
                                              ioPrototypeIndex,
                                              inNotDeclared) ;
    currentBranch = currentBranch->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_repeat_instruction
::generateInstruction (AC_OutputStream & inCppFile,
                       const C_String & inLexiqueClassName,
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
  generateInstructionListForList (currentBranch->mInstructionsList, inCppFile,
                                  inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                  inGenerateDebug, inGenerateSemanticInstructions) ;
  inCppFile << "switch (select_repeat_" << inTargetFileName
           << '_' << prototypeIndex
           << " (lexique_var_)) {\n" ;
  currentBranch = currentBranch->nextObject () ;
  sint16 numeroBranche = 1 ;
  inCppFile.incIndentation (+2) ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    inCppFile << "case " << ((sint32) (numeroBranche + 1)) << " : {\n" ;
    generateInstructionListForList (currentBranch->mInstructionsList, inCppFile,
                                    inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
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

bool cPtr_C_repeat_instruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_repeat_instruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool inGenerateSemanticInstructions) const {
  bool used = false ;
  GGS_typeListeBranchesInstructions::element_type * currentBranch = aListesBranchesRepeter.firstObject () ;
  while ((currentBranch != NULL) && ! used) {
    macroValidPointer (currentBranch) ;
    used = formalArgumentIsUsedForList (currentBranch->mInstructionsList, inArgumentCppName, inGenerateSemanticInstructions) ;
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

void cPtr_C_parse_rewind_instruction
::generateSelectAndRepeatPrototypes (AC_OutputStream & inHfile,
                                     const C_String & inLexiqueClassName,
                                     const C_String & inTargetFileName,
                                     sint32 & ioPrototypeIndex,
                                     const bool inNotDeclared) {
  GGS_typeListeBranchesInstructions::element_type * p = mBranchList.firstObject () ;
  const sint32 prototypeIndex = ioPrototypeIndex ;
//--- First branch
  generateSelectAndRepeatPrototypesForList (p->mInstructionsList,
                                            inHfile,
                                            inLexiqueClassName,
                                            inTargetFileName,
                                            ioPrototypeIndex,
                                            inNotDeclared) ;
//--- Other branches
  p = p->nextObject () ;
  while (p != NULL) {
    sint32 tempPrototypeIndex = prototypeIndex ;
    generateSelectAndRepeatPrototypesForList (p->mInstructionsList,
                                              inHfile,
                                              inLexiqueClassName,
                                              inTargetFileName,
                                              tempPrototypeIndex,
                                              false) ;
    p = p->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_parse_rewind_instruction
::generateInstruction (AC_OutputStream & inCppFile,
                       const C_String & inLexiqueClassName,
                       const C_String & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  GGS_typeListeBranchesInstructions::element_type * p = mBranchList.firstObject () ;
  const sint32 v = mInstructionLocation.currentLocation () ; // For making 'context_xxx' variable unique
  const sint32 prototypeIndex = ioPrototypeIndex ;
//--- First branch
  inCppFile << "//--- First branch of parse/rewind instruction\n"
            << "  const C_parsingContext context_" << v << " = lexique_var_.parsingContext () ;\n" ;
  generateInstructionListForList (p->mInstructionsList, inCppFile,
                                  inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                  inGenerateDebug, inGenerateSemanticInstructions) ;
//--- Other branches
  p = p->nextObject () ;
  while (p != NULL) {
    inCppFile << "//--- Branch of parse/rewind instruction\n"
              << "  lexique_var_.setParsingContext (context_" << v << ") ;\n" ;
    sint32 tempPrototypeIndex = prototypeIndex ;
    generateInstructionListForList (p->mInstructionsList, inCppFile,
                                    inLexiqueClassName, inTargetFileName, tempPrototypeIndex,
                                    inGenerateDebug, inGenerateSemanticInstructions) ;
    p = p->nextObject () ;
  }
  inCppFile << "//--- End of parse/rewind instruction\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_parse_rewind_instruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_parse_rewind_instruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool inGenerateSemanticInstructions) const {
  bool used = false ;
  GGS_typeListeBranchesInstructions::element_type * currentBranch = mBranchList.firstObject () ;
  while ((currentBranch != NULL) && ! used) {
    macroValidPointer (currentBranch) ;
    used = formalArgumentIsUsedForList (currentBranch->mInstructionsList, inArgumentCppName, inGenerateSemanticInstructions) ;
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
  generateSelectAndRepeatPrototypesForList (currentBranch->mInstructionsList,
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
    generateSelectAndRepeatPrototypesForList (currentBranch->mInstructionsList,
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
                     const C_String & inLexiqueClassName,
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
      currentBranch->mIFexpression ()->generateExpression (inCppFile) ;
      inCppFile << ").isBuiltAndTrue ()) {\n" ;
      sint32 localPrototypeIndex = kPrototypeIndex ;
      generateInstructionListForList (currentBranch->mInstructionsList, inCppFile,
                                      inLexiqueClassName, inTargetFileName, localPrototypeIndex,
                                      inGenerateDebug, inGenerateSemanticInstructions) ;
      currentBranch = currentBranch->nextObject () ;
    }
    if (mElseInstructionsList.count () > 0) {
      inCppFile << "}else{\n" ;
      sint32 localPrototypeIndex = kPrototypeIndex ;
      generateInstructionListForList (mElseInstructionsList, inCppFile,
                                      inLexiqueClassName, inTargetFileName, localPrototypeIndex,
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
    used = currentBranch->mIFexpression ()->isLexiqueFormalArgumentUsedForTest ()
       || isLexiqueFormalArgumentUsedForList (currentBranch->mInstructionsList, inGenerateSemanticInstructions) ;
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
    used = currentBranch->mIFexpression ()->formalArgumentIsUsedForTest (inArgumentCppName)
      || formalArgumentIsUsedForList (currentBranch->mInstructionsList, inArgumentCppName, inGenerateSemanticInstructions) ;
    currentBranch = currentBranch->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
