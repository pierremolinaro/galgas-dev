//---------------------------------------------------------------------------*
//                                                                           *
//  Generate semantics instructions                                          *
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

#include "semantics_instructions.h"
#include "semantics_semantics.h"

//---------------------------------------------------------------------------*

void
generateInstructionListForList (const GGS_typeInstructionList & inList,
                                AC_OutputStream & ioCppFile,
                                const C_String & inTargetFileName,
                                sint32 & ioPrototypeIndex,
                                const bool inGenerateDebug,
                                const bool inGenerateSemanticInstructions) {
  ioCppFile.incIndentation (+2) ;
  GGS_typeInstructionList::element_type * current = inList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (inGenerateSemanticInstructions || current->mInstruction(HERE)->isSyntacticInstruction ()) {
      current->mInstruction(HERE)->generateInstruction (ioCppFile,
                                                        inTargetFileName,
                                                        ioPrototypeIndex,
                                                        inGenerateDebug,
                                                        inGenerateSemanticInstructions) ;
    }
    current = current->nextObject () ;
  }
  ioCppFile.incIndentation (-2) ;
}

//---------------------------------------------------------------------------*

void
generateSelectAndRepeatPrototypesForList (const GGS_typeInstructionList & inList,
                                          AC_OutputStream & inHfile,
                                          const C_String & inLexiqueClassName,
                                          const C_String & inTargetFileName,
                                          sint32 & ioPrototypeIndex,
                                          const bool inNotDeclared) {
  GGS_typeInstructionList::element_type * current = inList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mInstruction(HERE)->generateSelectAndRepeatPrototypes (inHfile,
                                                                inLexiqueClassName,
                                                                inTargetFileName,
                                                                ioPrototypeIndex,
                                                                inNotDeclared) ;
    current = current->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

bool
isLexiqueFormalArgumentUsedForList (const GGS_typeInstructionList & inList,
                                    const bool inGenerateSemanticInstructions) {
  GGS_typeInstructionList::element_type * current = inList.firstObject () ;
  bool formalArgumentIsUsed = false ;
  while ((current != NULL) && ! formalArgumentIsUsed) {
    macroValidPointer (current) ;
    if (inGenerateSemanticInstructions || current->mInstruction(HERE)->isSyntacticInstruction ()) {
      formalArgumentIsUsed = current->mInstruction(HERE)->isLexiqueFormalArgumentUsed (inGenerateSemanticInstructions) ;
    }
    current = current->nextObject () ;
  }
  return formalArgumentIsUsed ;
}

//---------------------------------------------------------------------------*

bool
formalArgumentIsUsedForList (const GGS_typeInstructionList & inList,
                             const GGS_typeCplusPlusName & inArgumentCppName,
                             const bool inGenerateSemanticInstructions) {
  GGS_typeInstructionList::element_type * current = inList.firstObject () ;
  bool formalArgumentIsUsed = false ;
  while (current != NULL && ! formalArgumentIsUsed) {
    macroValidPointer (current) ;
    if (inGenerateSemanticInstructions || current->mInstruction(HERE)->isSyntacticInstruction ()) {
      formalArgumentIsUsed = current->mInstruction(HERE)->formalArgumentIsUsed (inArgumentCppName, inGenerateSemanticInstructions) ;
    }
    current = current->nextObject () ;
  }
  return formalArgumentIsUsed ;
}

//---------------------------------------------------------------------------*

bool
formalCurrentObjectArgumentIsUsedForList (const GGS_typeInstructionList & inList) {
  GGS_typeInstructionList::element_type * current = inList.firstObject () ;
  bool formalArgumentIsUsed = false ;
  while (current != NULL && ! formalArgumentIsUsed) {
    macroValidPointer (current) ;
    formalArgumentIsUsed = current->mInstruction(HERE)->formalCurrentObjectArgumentIsUsed () ;
    current = current->nextObject () ;
  }
  return formalArgumentIsUsed ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInstruction::
generateSelectAndRepeatPrototypes (AC_OutputStream & /* inHfile */,
                                     const C_String & /* inLexiqueClassName */,
                                     const C_String & /* inTargetFileName */,
                                     sint32 & /* ioPrototypeIndex */,
                                     const bool /* inNotDeclared */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeSimpleExtractInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "{ cPtr_" << aNomClasse << " * ptrExtraire_ = dynamic_cast <"
                 "cPtr_" << aNomClasse << " *> (" ;
    aNomVariable (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".getPtr ()) ;\n"
             << "  if (ptrExtraire_ == NULL) {\n" ;
    GGS_L_assignedVariables::element_type * affectationCourante = aListeAffectationParametresEffectifs.firstObject () ;
    while (affectationCourante != NULL) {
      macroValidPointer (affectationCourante) ;
      ioCppFile << "    " ;
      affectationCourante->aNomVariableCible (HERE)->generateCplusPlusName (ioCppFile) ;
      ioCppFile << "._drop_operation () ;\n" ;
      affectationCourante = affectationCourante->nextObject () ;
    }
    ioCppFile << "    if (" ;
    aNomVariable (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".getPtr () != NULL) {\n"
                 "      TC_UniqueArray <C_String> message1_ (1, \"\" COMMA_HERE) ;\n"
                 "      C_String message2_ ;\n"
                 "      message1_ (0 COMMA_HERE) << "
                 "cPtr_" << aNomClasse << "::static_string_message_" << aNomMessage << " () ;\n"
                 "      message2_ << " ; 
    aNomVariable (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << " (HERE)->message_" << aNomMessage << " () ;\n" 
                 "      " ;
    mErrorLocationExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << ".signalExtractError (_inLexique, message1_, message2_ COMMA_SOURCE_FILE_AT_LINE ("
              << aNomMessage.lineNumber () << ")) ;\n"
                 "    }\n"
                 "  }else{\n" ;
    ioCppFile.incIndentation (4) ;
    ioCppFile << "macroValidPointer (ptrExtraire_) ;\n" ;
    affectationCourante = aListeAffectationParametresEffectifs.firstObject () ;
    while (affectationCourante != NULL) {
      macroValidPointer (affectationCourante) ;
      affectationCourante->aNomVariableCible (HERE)->generateCplusPlusName (ioCppFile) ;
      ioCppFile << " = ptrExtraire_->" << affectationCourante->aNomAttributSource << " ;\n" ;
      affectationCourante = affectationCourante->nextObject () ;
    }
    ioCppFile.incIndentation (-4) ;
    ioCppFile << "  }\n"
                 "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeSimpleExtractInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeSimpleExtractInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = aNomVariable.isEqualTo (inArgumentCppName)
    || mErrorLocationExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_L_assignedVariables::element_type * affectationCourante = aListeAffectationParametresEffectifs.firstObject () ;
  while ((! isUsed) && (affectationCourante != NULL)) {
    macroValidPointer (affectationCourante) ;
    isUsed = affectationCourante->aNomVariableCible.isEqualTo (inArgumentCppName) ;
    affectationCourante = affectationCourante->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeSimpleExtractInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = aNomVariable (HERE)->isCurrentObject ()
    || mErrorLocationExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
  GGS_L_assignedVariables::element_type * affectationCourante = aListeAffectationParametresEffectifs.firstObject () ;
  while ((! isUsed) && (affectationCourante != NULL)) {
    macroValidPointer (affectationCourante) ;
    isUsed = affectationCourante->aNomVariableCible (HERE)->isCurrentObject () ;
    affectationCourante = affectationCourante->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeStructuredExtractInstructionWithElse::
generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "if (" ;
    mVariableName (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << "._isBuilt ()) {\n" ;
    ioCppFile.incIndentation (+2) ;
    bool first = true ;
    sint32 branchCount = 0 ;
    GGS_typeStructuredExtractCasesList::element_type * p = mCasesList.firstObject () ;
    while (p != NULL) {
      macroValidPointer (p) ;
      if (first) {
        first = false ;
      }else{
        ioCppFile << "}else{\n" ;
        ioCppFile.incIndentation (+2) ;
      }
      ioCppFile << "cPtr_" << p->mClassName << " * operand_"
                << p->mResultVarID.location ()
                << " = dynamic_cast <cPtr_" << p->mClassName << " *> (" ;
      mVariableName (HERE)->generateCplusPlusName (ioCppFile) ;
      ioCppFile << ".getPtr ()) ;\n"
                   "if (operand_" << p->mResultVarID.location () << " != NULL) {\n"
                   "  macroValidPointer (operand_"
                << p->mResultVarID.location ()
                << ") ; \n" ;
      generateInstructionListForList (p->mInstructionList, ioCppFile,
                                      inTargetFileName, ioPrototypeIndex,
                                      inGenerateDebug, inGenerateSemanticInstructions) ;
      p = p->nextObject () ;
      branchCount ++ ;
    }
    ioCppFile << "}else{ // Else part\n" ;
  //--- Generate _drop_operation instructions
    generateInstructionListForList (mElseInstructionList, ioCppFile,
                                    inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, inGenerateSemanticInstructions) ;
    for (sint32 i=0 ; i<branchCount ; i++) {
      ioCppFile << "}\n" ;
      ioCppFile.incIndentation (-2) ;
    }
    ioCppFile << "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeStructuredExtractInstructionWithElse::
isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  bool used = isLexiqueFormalArgumentUsedForList (mElseInstructionList, inGenerateSemanticInstructions) ;
  GGS_typeStructuredExtractCasesList::element_type * p = mCasesList.firstObject () ;
  while ((p != NULL) && ! used) {
    macroValidPointer (p) ;
    used = isLexiqueFormalArgumentUsedForList (p->mInstructionList, inGenerateSemanticInstructions) ;
    p = p->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStructuredExtractInstructionWithElse::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool inGenerateSemanticInstructions) const {
  bool used = mVariableName.isEqualTo (inArgumentCppName)
        || formalArgumentIsUsedForList (mElseInstructionList, inArgumentCppName, inGenerateSemanticInstructions) ;
  GGS_typeStructuredExtractCasesList::element_type * p = mCasesList.firstObject () ;
  while ((p != NULL) && ! used) {
    macroValidPointer (p) ;
    used = formalArgumentIsUsedForList (p->mInstructionList, inArgumentCppName, inGenerateSemanticInstructions) ;
    p = p->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStructuredExtractInstructionWithElse::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = mVariableName (HERE)->isCurrentObject ()
    || formalCurrentObjectArgumentIsUsedForList (mElseInstructionList) ;
  GGS_typeStructuredExtractCasesList::element_type * p = mCasesList.firstObject () ;
  while ((p != NULL) && ! used) {
    macroValidPointer (p) ;
    used = formalCurrentObjectArgumentIsUsedForList (p->mInstructionList) ;
    p = p->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeDropInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    aVariableConsommee (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << "._drop_operation () ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeDropInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeDropInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  return aVariableConsommee.isEqualTo (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeDropInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeLogInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "_inLexique.printMessage (C_String (\"LOGGING "
              << mGalgasVariableName << ": \") + " ;
    mLoggedVariable (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile  << ".reader_description (_inLexique COMMA_HERE) + \"\\n\""
                 " COMMA_SOURCE_FILE_AT_LINE ("
              << mGalgasVariableName.lineNumber ()
              << ")) ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeLogInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLogInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  return mLoggedVariable.isEqualTo (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLogInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return mLoggedVariable (HERE)->isCurrentObject () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeErrorInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    mErrorLocationExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << ".reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, " ;
    mErrorMessageExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << mLocation.lineNumber ()
              << ")) ;\n" ;
    GGS_varToDropList::element_type * currentVarToDrop = mVarToDropList.firstObject () ;
    while (currentVarToDrop != NULL) {
      macroValidPointer (currentVarToDrop) ;
      currentVarToDrop->mVarToDrop (HERE)->generateCplusPlusName (ioCppFile) ;
      ioCppFile << "._drop_operation () ;\n" ;
      currentVarToDrop = currentVarToDrop->nextObject () ;
    }
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeErrorInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeErrorInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = mErrorLocationExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
             || mErrorMessageExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_varToDropList::element_type * currentVarToDrop = mVarToDropList.firstObject () ;
  while ((currentVarToDrop != NULL) && ! isUsed) {
    macroValidPointer (currentVarToDrop) ;
    isUsed = currentVarToDrop->mVarToDrop.isEqualTo (inArgumentCppName)  ;
    currentVarToDrop = currentVarToDrop->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeErrorInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = mErrorLocationExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
             || mErrorMessageExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
  GGS_varToDropList::element_type * currentVarToDrop = mVarToDropList.firstObject () ;
  while ((currentVarToDrop != NULL) && ! isUsed) {
    macroValidPointer (currentVarToDrop) ;
    isUsed = currentVarToDrop->mVarToDrop (HERE)->isCurrentObject ()  ;
    currentVarToDrop = currentVarToDrop->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeWarningInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    mWarningLocationExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << ".reader_location (_inLexique COMMA_HERE).signalGGSSemanticWarning (_inLexique, " ;
    mWarningMessageExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << mLocation.lineNumber ()
              << ")) ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeWarningInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeWarningInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  return mWarningLocationExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || mWarningMessageExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeWarningInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return mWarningLocationExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
       || mWarningMessageExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeMessageInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "_inLexique.printMessage (" ;
    mMessageExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << mInstructionLocation.lineNumber ()
              << ")) ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeMessageInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMessageInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  return mMessageExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMessageInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return mMessageExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeInstructionDeclarationVarLocale::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    aTypeVariable (HERE)->generateCppClassName (ioCppFile) ;
    ioCppFile << " " ;
    aNomCppVariable (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << " ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionDeclarationVarLocale::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionDeclarationVarLocale::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  return aNomCppVariable.isEqualTo (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionDeclarationVarLocale::
formalCurrentObjectArgumentIsUsed (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeMatchInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & inTargetFileName,
                     sint32 & ioPrototypeIndex,
                     const bool inGenerateDebug,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "if (" ;
    aNomCppVariable1 (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << "._isBuilt () && " ;
    aNomCppVariable2 (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << "._isBuilt ()) {\n" ;
    ioCppFile.incIndentation (+2) ;
    if (! mOperand1_isEnumeration.boolValue ()) {
      ioCppFile << "cPtr_" << aNomTypeBase1 << " * ptr_" << aIndicatif1.location () << " = " ;
      aNomCppVariable1 (HERE)->generateCplusPlusName (ioCppFile) ;
      ioCppFile << " (HERE) ;\n" ;
    }
    if (! mOperand2_isEnumeration.boolValue ()) {
      ioCppFile << "cPtr_" << aNomTypeBase2 << " * ptr_" << aIndicatif2.location () << " = " ;
      aNomCppVariable2 (HERE)->generateCplusPlusName (ioCppFile) ;
      ioCppFile << " (HERE) ;\n" ;
    }
    sint32 index = 0 ;
    GGS_L_matchInstructionCasesList::element_type * casCourant = aListeCas.firstObject () ;
    while (casCourant != NULL) {
      macroValidPointer (casCourant) ;
      if (! mOperand1_isEnumeration.boolValue ()) {
        ioCppFile << "cPtr_" << casCourant->mCase1_name
                  << " * operand_" << aIndicatif1.location ()
                  << " = dynamic_cast <"
                     "cPtr_" << casCourant->mCase1_name
                  << " *> (ptr_" << aIndicatif1.location () << ") ;\n" ;
      }
      if (! mOperand2_isEnumeration.boolValue ()) {
        ioCppFile << "cPtr_" << casCourant->mCase2_name
                  << " * operand_" << aIndicatif2.location ()
                  << " = dynamic_cast <"
                     "cPtr_" << casCourant->mCase2_name
                  << " *> (ptr_" << aIndicatif2.location () << ") ;\n" ;
      }
      ioCppFile << "if ((" ;
      if (mOperand1_isEnumeration.boolValue ()) {
        aNomCppVariable1 (HERE)->generateCplusPlusName (ioCppFile) ;
        ioCppFile << ".enumValue () == GGS_" << aNomTypeBase1 << "::enum_" << casCourant->mCase1_name ;
      }else{
        ioCppFile <<  "operand_" << aIndicatif1.location () << " != NULL" ;
      }
      ioCppFile <<   ") && (" ;
      if (mOperand2_isEnumeration.boolValue ()) {
        aNomCppVariable2 (HERE)->generateCplusPlusName (ioCppFile) ;
        ioCppFile << ".enumValue () == GGS_" << aNomTypeBase2 << "::enum_" << casCourant->mCase2_name ;
      }else{
        ioCppFile << "operand_" << aIndicatif2.location () << " != NULL" ;
      }
      ioCppFile << ")) {\n" ;
      generateInstructionListForList (casCourant->mInstructionList, ioCppFile,
                                      inTargetFileName, ioPrototypeIndex,
                                      inGenerateDebug, inGenerateSemanticInstructions) ;
      ioCppFile << "}else{\n" ;
      casCourant = casCourant->nextObject () ;
      ioCppFile.incIndentation (2) ;
      index ++ ;
    }
    ioCppFile.incIndentation (-2) ;
    generateInstructionListForList (mElseInstructionsList, ioCppFile,
                                    inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, inGenerateSemanticInstructions) ;
    for (sint32 i=0 ; i<index ; i++) {
      ioCppFile << "}\n" ;
      ioCppFile.incIndentation (-2) ;
    }
    ioCppFile << "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeMatchInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMatchInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool inGenerateSemanticInstructions) const {
  bool isUsed = aNomCppVariable1.isEqualTo (inArgumentCppName)
   || aNomCppVariable2.isEqualTo (inArgumentCppName)
   || formalArgumentIsUsedForList (mElseInstructionsList, inArgumentCppName, inGenerateSemanticInstructions) ;
  GGS_L_matchInstructionCasesList::element_type * casCourant = aListeCas.firstObject () ;
  while ((! isUsed) && (casCourant != NULL)) {
    macroValidPointer (casCourant) ;
    isUsed = formalArgumentIsUsedForList (casCourant->mInstructionList, inArgumentCppName, inGenerateSemanticInstructions) ;
    casCourant = casCourant->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMatchInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = aNomCppVariable1 (HERE)->isCurrentObject ()
   || aNomCppVariable2 (HERE)->isCurrentObject ()
   || formalCurrentObjectArgumentIsUsedForList (mElseInstructionsList) ;
  GGS_L_matchInstructionCasesList::element_type * casCourant = aListeCas.firstObject () ;
  while ((! isUsed) && (casCourant != NULL)) {
    macroValidPointer (casCourant) ;
    isUsed = formalCurrentObjectArgumentIsUsedForList (casCourant->mInstructionList) ;
    casCourant = casCourant->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeIncrementInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    mTargetVarCppName (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << "._increment_operation (_inLexique COMMA_SOURCE_FILE_AT_LINE ("
              << mInstructionLocation.lineNumber ()
              << ")) ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeIncrementInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeIncrementInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  return mTargetVarCppName.isEqualTo (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeIncrementInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeDecrementInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    mTargetVarCppName (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << "._decrement_operation (_inLexique COMMA_SOURCE_FILE_AT_LINE ("
              << mInstructionLocation.lineNumber ()
              << ")) ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeDecrementInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeDecrementInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  return mTargetVarCppName.isEqualTo (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeDecrementInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeAppendInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    mTargetVarCppName (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << "._addAssign_operation (" ;
    GGS_typeExpressionList::element_type * exp = mSourceExpressions.firstObject () ;
    bool first = true ;
    while (exp != NULL) {
      macroValidPointer (exp) ;
      if (first) {
        first = false ;
      }else{
        ioCppFile << ", " ;
      }
      exp->mExpression (HERE)->generateExpression (ioCppFile) ;
      exp = exp->nextObject () ;
    }
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeAppendInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  bool used = false ;
  GGS_typeExpressionList::element_type * exp = mSourceExpressions.firstObject () ;
  while ((exp != NULL) && ! used) {
    macroValidPointer (exp) ;
    used = exp->mExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
    exp = exp->nextObject () ;
  }
  return used ;    
}

//---------------------------------------------------------------------------*

bool cPtr_typeAppendInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  bool used = mTargetVarCppName.isEqualTo (inArgumentCppName) ;
  GGS_typeExpressionList::element_type * exp = mSourceExpressions.firstObject () ;
  while ((exp != NULL) && ! used) {
    macroValidPointer (exp) ;
    used = exp->mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    exp = exp->nextObject () ;
  }
  return used ;    
}

//---------------------------------------------------------------------------*

bool cPtr_typeAppendInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = mTargetVarCppName (HERE)->isCurrentObject () ;
  GGS_typeExpressionList::element_type * exp = mSourceExpressions.firstObject () ;
  while ((exp != NULL) && ! used) {
    macroValidPointer (exp) ;
    used = exp->mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    exp = exp->nextObject () ;
  }
  return used ;    
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeRemoveInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    mTargetVarCppName (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".minusAssign_operation (" ;
    GGS_typeExpressionList::element_type * exp = mSourceExpressions.firstObject () ;
    bool first = true ;
    while (exp != NULL) {
      macroValidPointer (exp) ;
      if (first) {
        first = false ;
      }else{
        ioCppFile << ", " ;
      }
      exp->mExpression (HERE)->generateExpression (ioCppFile) ;
      exp = exp->nextObject () ;
    }
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeRemoveInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  bool used = false ;
  GGS_typeExpressionList::element_type * exp = mSourceExpressions.firstObject () ;
  while ((exp != NULL) && ! used) {
    macroValidPointer (exp) ;
    used = exp->mExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
    exp = exp->nextObject () ;
  }
  return used ;    
}

//---------------------------------------------------------------------------*

bool cPtr_typeRemoveInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  bool used = mTargetVarCppName.isEqualTo (inArgumentCppName) ;
  GGS_typeExpressionList::element_type * exp = mSourceExpressions.firstObject () ;
  while ((exp != NULL) && ! used) {
    macroValidPointer (exp) ;
    used = exp->mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    exp = exp->nextObject () ;
  }
  return used ;    
}

//---------------------------------------------------------------------------*

bool cPtr_typeRemoveInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = mTargetVarCppName (HERE)->isCurrentObject () ;
  GGS_typeExpressionList::element_type * exp = mSourceExpressions.firstObject () ;
  while ((exp != NULL) && ! used) {
    macroValidPointer (exp) ;
    used = exp->mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    exp = exp->nextObject () ;
  }
  return used ;    
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeMapBlockPrologueInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    aNomVariableTable (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".prologue_" << aNomMethodeBloc << " (_inLexique" ;
    GGS_typeExpressionList::element_type * current = mPrologueExpressionList.firstObject () ;
    while (current != NULL) {
      macroValidPointer (current) ;
      ioCppFile << ", " ;
      current->mExpression (HERE)->generateExpression (ioCppFile) ;
      current = current->nextObject () ;
    }
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << aNomMethodeBloc.lineNumber ()
              << ")) ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapBlockPrologueInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapBlockPrologueInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = aNomVariableTable.isEqualTo (inArgumentCppName) ;
  GGS_typeExpressionList::element_type * argCourant = mPrologueExpressionList.firstObject () ;
  while ((! isUsed) && (argCourant != NULL)) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant = argCourant->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapBlockPrologueInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = aNomVariableTable (HERE)->isCurrentObject () ;
  GGS_typeExpressionList::element_type * exp = mPrologueExpressionList.firstObject () ;
  while ((exp != NULL) && ! used) {
    macroValidPointer (exp) ;
    used = exp->mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    exp = exp->nextObject () ;
  }
  return used ;    
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeMapBlockEpilogueInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    aNomVariableTable (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".epilogue_" << aNomMethodeBloc << " (_inLexique" ;
    GGS_typeExpressionList::element_type * current = mEpilogueExpressionList.firstObject () ;
    while (current != NULL) {
      macroValidPointer (current) ;
      ioCppFile << ", " ;
      current->mExpression (HERE)->generateExpression (ioCppFile) ;
      current = current->nextObject () ;
    }
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << aNomMethodeBloc.lineNumber ()
              << ")) ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapBlockEpilogueInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapBlockEpilogueInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = aNomVariableTable.isEqualTo (inArgumentCppName)  ;
  GGS_typeExpressionList::element_type * argCourant = mEpilogueExpressionList.firstObject () ;
  while ((! isUsed) && (argCourant != NULL)) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant = argCourant->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapBlockEpilogueInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = aNomVariableTable (HERE)->isCurrentObject () ;
  GGS_typeExpressionList::element_type * exp = mEpilogueExpressionList.firstObject () ;
  while ((exp != NULL) && ! used) {
    macroValidPointer (exp) ;
    used = exp->mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    exp = exp->nextObject () ;
  }
  return used ;    
}

//---------------------------------------------------------------------------*
