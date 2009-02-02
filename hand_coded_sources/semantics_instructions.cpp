//---------------------------------------------------------------------------*
//                                                                           *
//  Generate semantics instructions                                          *
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
  GGS_typeInstructionList::cEnumerator current (inList, true) ;
  while (current.hc ()) {
    if (inGenerateSemanticInstructions || current._mInstruction (HERE) (HERE)->isSyntacticInstruction ()) {
      current._mInstruction (HERE)(HERE)->generateInstruction (ioCppFile,
                                                        inTargetFileName,
                                                        ioPrototypeIndex,
                                                        inGenerateDebug,
                                                        inGenerateSemanticInstructions) ;
    }
    current.next () ;
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
  GGS_typeInstructionList::cEnumerator current (inList, true) ;
  while (current.hc ()) {
    current._mInstruction (HERE) (HERE)->generateSelectAndRepeatPrototypes (inHfile,
                                                                inLexiqueClassName,
                                                                inTargetFileName,
                                                                ioPrototypeIndex,
                                                                inNotDeclared) ;
    current.next () ;
  }
}

//---------------------------------------------------------------------------*

bool
isLexiqueFormalArgumentUsedForList (const GGS_typeInstructionList & inList,
                                    const bool inGenerateSemanticInstructions) {
  GGS_typeInstructionList::cEnumerator current (inList, true) ;
  bool formalArgumentIsUsed = false ;
  while (current.hc () && ! formalArgumentIsUsed) {
    if (inGenerateSemanticInstructions || current._mInstruction (HERE) (HERE)->isSyntacticInstruction ()) {
      formalArgumentIsUsed = current._mInstruction (HERE) (HERE)->isLexiqueFormalArgumentUsed (inGenerateSemanticInstructions) ;
    }
    current.next () ;
  }
  return formalArgumentIsUsed ;
}

//---------------------------------------------------------------------------*

bool
formalArgumentIsUsedForList (const GGS_typeInstructionList & inList,
                             const GGS_typeCplusPlusName & inArgumentCppName,
                             const bool inGenerateSemanticInstructions) {
  GGS_typeInstructionList::cEnumerator current (inList, true) ;
  bool formalArgumentIsUsed = false ;
  while (current.hc () && ! formalArgumentIsUsed) {
    if (inGenerateSemanticInstructions || current._mInstruction (HERE)(HERE)->isSyntacticInstruction ()) {
      formalArgumentIsUsed = current._mInstruction (HERE)(HERE)->formalArgumentIsUsed (inArgumentCppName, inGenerateSemanticInstructions) ;
    }
    current.next () ;
  }
  return formalArgumentIsUsed ;
}

//---------------------------------------------------------------------------*

bool
formalCurrentObjectArgumentIsUsedForList (const GGS_typeInstructionList & inList) {
  GGS_typeInstructionList::cEnumerator current (inList, true) ;
  bool formalArgumentIsUsed = false ;
  while (current.hc () && ! formalArgumentIsUsed) {
    formalArgumentIsUsed = current._mInstruction (HERE)(HERE)->formalCurrentObjectArgumentIsUsed () ;
    current.next () ;
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
    GGS_L_assignedVariables::cEnumerator affectationCourante (aListeAffectationParametresEffectifs, true) ;
    while (affectationCourante.hc ()) {
      ioCppFile << "    " ;
      affectationCourante._aNomVariableCible (HERE) (HERE)->generateCplusPlusName (ioCppFile) ;
      ioCppFile << "._drop () ;\n" ;
      affectationCourante.next () ;
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
    affectationCourante.rewind () ;
    while (affectationCourante.hc ()) {
      affectationCourante._aNomVariableCible (HERE) (HERE)->generateCplusPlusName (ioCppFile) ;
      ioCppFile << " = ptrExtraire_->" << affectationCourante._aNomAttributSource (HERE) << " ;\n" ;
      affectationCourante.next () ;
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
  bool isUsed = aNomVariable.isSameObjectAs (inArgumentCppName)
    || mErrorLocationExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_L_assignedVariables::cEnumerator affectationCourante (aListeAffectationParametresEffectifs, true) ;
  while ((! isUsed) && affectationCourante.hc ()) {
    isUsed = affectationCourante._aNomVariableCible (HERE).isSameObjectAs (inArgumentCppName) ;
    affectationCourante.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeSimpleExtractInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = aNomVariable (HERE)->isCurrentObject ()
    || mErrorLocationExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
  GGS_L_assignedVariables::cEnumerator affectationCourante (aListeAffectationParametresEffectifs, true) ;
  while ((! isUsed) && affectationCourante.hc ()) {
    isUsed = affectationCourante._aNomVariableCible (HERE) (HERE)->isCurrentObject () ;
    affectationCourante.next () ;
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
    GGS_typeStructuredExtractCasesList::cEnumerator p (mCasesList, true) ;
    while (p.hc ()) {
      if (first) {
        first = false ;
      }else{
        ioCppFile << "}else{\n" ;
        ioCppFile.incIndentation (+2) ;
      }
      ioCppFile << "cPtr_" << p._mClassName (HERE) << " * operand_"
                << p._mResultVarID (HERE).location ()
                << " = dynamic_cast <cPtr_" << p._mClassName (HERE) << " *> (" ;
      mVariableName (HERE)->generateCplusPlusName (ioCppFile) ;
      ioCppFile << ".getPtr ()) ;\n"
                   "if (operand_" << p._mResultVarID (HERE).location () << " != NULL) {\n"
                   "  macroValidPointer (operand_"
                << p._mResultVarID (HERE).location ()
                << ") ; \n" ;
      generateInstructionListForList (p._mInstructionList (HERE), ioCppFile,
                                      inTargetFileName, ioPrototypeIndex,
                                      inGenerateDebug, inGenerateSemanticInstructions) ;
      p.next () ;
      branchCount ++ ;
    }
    ioCppFile << "}else{ // Else part\n" ;
  //--- Generate _drop instructions
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
  GGS_typeStructuredExtractCasesList::cEnumerator p (mCasesList, true) ;
  while (p.hc () && ! used) {
    used = isLexiqueFormalArgumentUsedForList (p._mInstructionList (HERE), inGenerateSemanticInstructions) ;
    p.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStructuredExtractInstructionWithElse::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool inGenerateSemanticInstructions) const {
  bool used = mVariableName.isSameObjectAs (inArgumentCppName)
        || formalArgumentIsUsedForList (mElseInstructionList, inArgumentCppName, inGenerateSemanticInstructions) ;
  GGS_typeStructuredExtractCasesList::cEnumerator p (mCasesList, true) ;
  while (p.hc () && ! used) {
    used = formalArgumentIsUsedForList (p._mInstructionList (HERE), inArgumentCppName, inGenerateSemanticInstructions) ;
    p.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStructuredExtractInstructionWithElse::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = mVariableName (HERE)->isCurrentObject ()
    || formalCurrentObjectArgumentIsUsedForList (mElseInstructionList) ;
  GGS_typeStructuredExtractCasesList::cEnumerator p (mCasesList, true) ;
  while (p.hc () && ! used) {
    used = formalCurrentObjectArgumentIsUsedForList (p._mInstructionList (HERE)) ;
    p.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Structured CAST instruction
#endif

//---------------------------------------------------------------------------*

void cPtr_C_elseForCastInstruction::
generateInstructions (AC_OutputStream & inCppFile,
                      const GGS_typeStructuredCastBranchList & /* inBranchList */,
                      const C_String & /* inTemporaryVarName */,
                      const C_String & inTargetFileName,
                      sint32 & ioPrototypeIndex,
                      const bool inGenerateDebug) const {
  generateInstructionListForList (mElseInstructionList, inCppFile,
                                  inTargetFileName, ioPrototypeIndex,
                                  inGenerateDebug, true) ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_elseForCastInstruction::
isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  return isLexiqueFormalArgumentUsedForList (mElseInstructionList, inGenerateSemanticInstructions) ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_elseForCastInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool inGenerateSemanticInstructions) const {
  return formalArgumentIsUsedForList (mElseInstructionList, inArgumentCppName, inGenerateSemanticInstructions) ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_elseForCastInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return formalCurrentObjectArgumentIsUsedForList (mElseInstructionList) ;
}

//---------------------------------------------------------------------------*

void cPtr_C_defaultForCastInstruction::
generateInstructions (AC_OutputStream & inCppFile,
                      const GGS_typeStructuredCastBranchList & inBranchList,
                      const C_String & inTemporaryVarName,
                      const C_String & /* inTargetFileName */,
                      sint32 & /* ioPrototypeIndex */,
                      const bool /* inGenerateDebug */) const {
  inCppFile << "const castBranchDescriptorType _castBranchDescriptor ["
            << inBranchList.count () << "] = {\n" ;
  GGS_typeStructuredCastBranchList::cEnumerator p (inBranchList, true) ;
  bool first = true ;
  while (p.hc ()) {
    if (first) {
      first = false ;
    }else{
      inCppFile << ",\n" ;
    }
    inCppFile << "  {& typeid (cPtr_" << p._mCastClassName (HERE) << "), "
              << (p._mCheckForKindOfClass (HERE).boolValue () ? "true" : "false") << "}" ;
    p.next () ;
  }
  inCppFile << "\n"
               "} ;\n" ;
  mErrorLocationExpression (HERE)->generateExpression (inCppFile) ;
  inCppFile << "._castDefaultErrorMessage (_inLexique, _castBranchDescriptor, "
            << inBranchList.count ()
            << ", & typeid (* (" << inTemporaryVarName << ".getPtr ())) COMMA_SOURCE_FILE_AT_LINE ("
            << mLocation.lineNumber ()
            << ")) ;\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_defaultForCastInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
//  return mErrorLocationExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_defaultForCastInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  return mErrorLocationExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_defaultForCastInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return mErrorLocationExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*

void cPtr_typeStructuredCastInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & inTargetFileName,
                     sint32 & ioPrototypeIndex,
                     const bool inGenerateDebug,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    const C_String varName = C_String ("_var_") + C_String (mCastInstructionLocation.location ()) ;
    ioCppFile << "{ const GGS_" << mSourceExpressionTypeName
              << " " << varName << " = " ;
    mSourceExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " ; // CAST instruction\n"
              << "  if (" << varName << ".getPtr () != NULL) {\n"
              << "    macroValidPointer (" << varName << ".getPtr ()) ;\n" ;
    ioCppFile.incIndentation (+4) ;
    bool first = true ;
    GGS_typeStructuredCastBranchList::cEnumerator p (mBranchList, true) ;
    while (p.hc ()) {
      if (first) {
        first = false ;
      }else{
        ioCppFile << "}else " ;
      }
      if (p._mCheckForKindOfClass (HERE).boolValue ()) {
        ioCppFile << "if (dynamic_cast <cPtr_" << p._mCastClassName (HERE) << " *> (" << varName << ".getPtr ()) != NULL) {\n" ;
       }else{
        ioCppFile << "if (typeid (cPtr_" << p._mCastClassName (HERE) << ") == typeid (* (" << varName << ".getPtr ()))) {\n" ;
      }
      GGS_typeCplusPlusNameList::cEnumerator cstName (p._mLocalConstantName (HERE), true) ;
      if (cstName.hc ()) {
        ioCppFile << "  const GGS_" << p._mCastClassName (HERE) << " " ;
        cstName._mCppName (HERE) (HERE)->generateCplusPlusName (ioCppFile) ;
        ioCppFile << " (" << varName << ".getPtr ()) ;\n" ;
      }
      generateInstructionListForList (p._mInstructionList (HERE), ioCppFile,
                                      inTargetFileName, ioPrototypeIndex,
                                      inGenerateDebug, inGenerateSemanticInstructions) ;
      p.next () ;
    }
    ioCppFile << "}else{\n" ;
    mElseOrDefault (HERE)->generateInstructions (ioCppFile,
                                                 mBranchList,
                                                 varName,
                                                 inTargetFileName,
                                                 ioPrototypeIndex,
                                                 inGenerateDebug) ;
    ioCppFile.incIndentation (-4) ;
    ioCppFile << "    }\n"
                 "  }\n"
                 "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeStructuredCastInstruction::
isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  bool used = mElseOrDefault (HERE)->isLexiqueFormalArgumentUsed (inGenerateSemanticInstructions)
    || mSourceExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
  GGS_typeStructuredCastBranchList::cEnumerator p (mBranchList, true) ;
  while (p.hc () && ! used) {
    used = isLexiqueFormalArgumentUsedForList (p._mInstructionList (HERE), inGenerateSemanticInstructions) ;
    p.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStructuredCastInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool inGenerateSemanticInstructions) const {
  bool used = mElseOrDefault (HERE)->formalArgumentIsUsed (inArgumentCppName, inGenerateSemanticInstructions)
    || mSourceExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_typeStructuredCastBranchList::cEnumerator p (mBranchList, true) ;
  while (p.hc () && ! used) {
    used = formalArgumentIsUsedForList (p._mInstructionList (HERE), inArgumentCppName, inGenerateSemanticInstructions) ;
    p.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStructuredCastInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = mElseOrDefault (HERE)->formalCurrentObjectArgumentIsUsed ()
    || mSourceExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
  GGS_typeStructuredCastBranchList::cEnumerator p (mBranchList, true) ;
  while (p.hc () && ! used) {
    used = formalCurrentObjectArgumentIsUsedForList (p._mInstructionList (HERE)) ;
    p.next () ;
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
    ioCppFile << "._drop () ;\n" ;
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
  return aVariableConsommee.isSameObjectAs (inArgumentCppName) ;
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
    ioCppFile  << ".reader_description (_inLexique COMMA_HERE).string () + \"\\n\""
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
  return mLoggedVariable.isSameObjectAs (inArgumentCppName) ;
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
    GGS_varToDropList::cEnumerator currentVarToDrop (mVarToDropList, true) ;
    while (currentVarToDrop.hc ()) {
      currentVarToDrop._mVarToDrop (HERE) (HERE)->generateCplusPlusName (ioCppFile) ;
      ioCppFile << "._drop () ;\n" ;
      currentVarToDrop.next () ;
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
  GGS_varToDropList::cEnumerator currentVarToDrop (mVarToDropList, true) ;
  while (currentVarToDrop.hc () && ! isUsed) {
    isUsed = currentVarToDrop._mVarToDrop (HERE).isSameObjectAs (inArgumentCppName)  ;
    currentVarToDrop.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeErrorInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = mErrorLocationExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
             || mErrorMessageExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
  GGS_varToDropList::cEnumerator currentVarToDrop (mVarToDropList, true) ;
  while (currentVarToDrop.hc () && ! isUsed) {
    isUsed = currentVarToDrop._mVarToDrop (HERE) (HERE)->isCurrentObject ()  ;
    currentVarToDrop.next () ;
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
    GGS_L_matchInstructionCasesList::cEnumerator casCourant (aListeCas, true) ;
    while (casCourant.hc ()) {
      if (! mOperand1_isEnumeration.boolValue ()) {
        ioCppFile << "cPtr_" << casCourant._mCase1_name (HERE)
                  << " * operand_" << aIndicatif1.location ()
                  << " = dynamic_cast <"
                     "cPtr_" << casCourant._mCase1_name (HERE)
                  << " *> (ptr_" << aIndicatif1.location () << ") ;\n" ;
      }
      if (! mOperand2_isEnumeration.boolValue ()) {
        ioCppFile << "cPtr_" << casCourant._mCase2_name (HERE)
                  << " * operand_" << aIndicatif2.location ()
                  << " = dynamic_cast <"
                     "cPtr_" << casCourant._mCase2_name (HERE)
                  << " *> (ptr_" << aIndicatif2.location () << ") ;\n" ;
      }
      ioCppFile << "if ((" ;
      if (mOperand1_isEnumeration.boolValue ()) {
        aNomCppVariable1 (HERE)->generateCplusPlusName (ioCppFile) ;
        ioCppFile << ".enumValue () == GGS_" << aNomTypeBase1 << "::enum_" << casCourant._mCase1_name (HERE) ;
      }else{
        ioCppFile <<  "operand_" << aIndicatif1.location () << " != NULL" ;
      }
      ioCppFile <<   ") && (" ;
      if (mOperand2_isEnumeration.boolValue ()) {
        aNomCppVariable2 (HERE)->generateCplusPlusName (ioCppFile) ;
        ioCppFile << ".enumValue () == GGS_" << aNomTypeBase2 << "::enum_" << casCourant._mCase2_name (HERE) ;
      }else{
        ioCppFile << "operand_" << aIndicatif2.location () << " != NULL" ;
      }
      ioCppFile << ")) {\n" ;
      generateInstructionListForList (casCourant._mInstructionList (HERE), ioCppFile,
                                      inTargetFileName, ioPrototypeIndex,
                                      inGenerateDebug, inGenerateSemanticInstructions) ;
      ioCppFile << "}else{\n" ;
      casCourant.next () ;
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
  bool isUsed = aNomCppVariable1.isSameObjectAs (inArgumentCppName)
   || aNomCppVariable2.isSameObjectAs (inArgumentCppName)
   || formalArgumentIsUsedForList (mElseInstructionsList, inArgumentCppName, inGenerateSemanticInstructions) ;
  GGS_L_matchInstructionCasesList::cEnumerator casCourant (aListeCas, true) ;
  while ((! isUsed) && casCourant.hc ()) {
    isUsed = formalArgumentIsUsedForList (casCourant._mInstructionList (HERE), inArgumentCppName, inGenerateSemanticInstructions) ;
    casCourant.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMatchInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = aNomCppVariable1 (HERE)->isCurrentObject ()
   || aNomCppVariable2 (HERE)->isCurrentObject ()
   || formalCurrentObjectArgumentIsUsedForList (mElseInstructionsList) ;
  GGS_L_matchInstructionCasesList::cEnumerator casCourant (aListeCas, true) ;
  while ((! isUsed) && casCourant.hc ()) {
    isUsed = formalCurrentObjectArgumentIsUsedForList (casCourant._mInstructionList (HERE)) ;
    casCourant.next () ;
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
    GGS_lstringlist::cEnumerator structAttribute (mStructAttributeList, true) ;
    while (structAttribute.hc ()) {
      ioCppFile << "." << structAttribute._mValue (HERE) ;
      structAttribute.next () ;
    }
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
  return mTargetVarCppName.isSameObjectAs (inArgumentCppName) ;
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
    GGS_lstringlist::cEnumerator structAttribute (mStructAttributeList, true) ;
    while (structAttribute.hc ()) {
      ioCppFile << "." << structAttribute._mValue (HERE) ;
      structAttribute.next () ;
    }
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
  return mTargetVarCppName.isSameObjectAs (inArgumentCppName) ;
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
    GGS_lstringlist::cEnumerator structAttribute (mStructAttributeList, true) ;
    while (structAttribute.hc ()) {
      ioCppFile << "." << structAttribute._mValue (HERE) ;
      structAttribute.next () ;
    }
    ioCppFile << "._addAssign_operation (" ;
    GGS_typeExpressionList::cEnumerator exp (mSourceExpressions, true) ;
    bool first = true ;
    while (exp.hc ()) {
      if (first) {
        first = false ;
      }else{
        ioCppFile << ", " ;
      }
      exp._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
      exp.next () ;
    }
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeAppendInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  bool used = false ;
  GGS_typeExpressionList::cEnumerator exp (mSourceExpressions, true) ;
  while (exp.hc () && ! used) {
    used = exp._mExpression (HERE) (HERE)->isLexiqueFormalArgumentUsedForTest () ;
    exp.next () ;
  }
  return used ;    
}

//---------------------------------------------------------------------------*

bool cPtr_typeAppendInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  bool used = mTargetVarCppName.isSameObjectAs (inArgumentCppName) ;
  GGS_typeExpressionList::cEnumerator exp (mSourceExpressions, true) ;
  while (exp.hc () && ! used) {
    used = exp._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    exp.next () ;
  }
  return used ;    
}

//---------------------------------------------------------------------------*

bool cPtr_typeAppendInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = mTargetVarCppName (HERE)->isCurrentObject () ;
  GGS_typeExpressionList::cEnumerator exp (mSourceExpressions, true) ;
  while (exp.hc () && ! used) {
    used = exp._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    exp.next () ;
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
    GGS_lstringlist::cEnumerator structAttribute (mStructAttributeList, true) ;
    while (structAttribute.hc ()) {
      ioCppFile << "." << structAttribute._mValue (HERE) ;
      structAttribute.next () ;
    }
    ioCppFile << ".minusAssign_operation (" ;
    GGS_typeExpressionList::cEnumerator exp (mSourceExpressions, true) ;
    bool first = true ;
    while (exp.hc ()) {
      if (first) {
        first = false ;
      }else{
        ioCppFile << ", " ;
      }
      exp._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
      exp.next () ;
    }
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeRemoveInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  bool used = false ;
  GGS_typeExpressionList::cEnumerator exp (mSourceExpressions, true) ;
  while (exp.hc () && ! used) {
    used = exp._mExpression (HERE) (HERE)->isLexiqueFormalArgumentUsedForTest () ;
    exp.next () ;
  }
  return used ;    
}

//---------------------------------------------------------------------------*

bool cPtr_typeRemoveInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  bool used = mTargetVarCppName.isSameObjectAs (inArgumentCppName) ;
  GGS_typeExpressionList::cEnumerator exp (mSourceExpressions, true) ;
  while (exp.hc () && ! used) {
    used = exp._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    exp.next () ;
  }
  return used ;    
}

//---------------------------------------------------------------------------*

bool cPtr_typeRemoveInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = mTargetVarCppName (HERE)->isCurrentObject () ;
  GGS_typeExpressionList::cEnumerator exp (mSourceExpressions, true) ;
  while (exp.hc () && ! used) {
    used = exp._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    exp.next () ;
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
    GGS_typeExpressionList::cEnumerator current (mPrologueExpressionList, true) ;
    while (current.hc ()) {
      ioCppFile << ", " ;
      current._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
      current.next () ;
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
  bool isUsed = aNomVariableTable.isSameObjectAs (inArgumentCppName) ;
  GGS_typeExpressionList::cEnumerator argCourant (mPrologueExpressionList, true) ;
  while ((! isUsed) && argCourant.hc ()) {
    isUsed = argCourant._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapBlockPrologueInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = aNomVariableTable (HERE)->isCurrentObject () ;
  GGS_typeExpressionList::cEnumerator exp (mPrologueExpressionList, true) ;
  while (exp.hc () && ! used) {
    used = exp._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    exp.next () ;
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
    GGS_typeExpressionList::cEnumerator current (mEpilogueExpressionList, true) ;
    while (current.hc ()) {
      ioCppFile << ", " ;
      current._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
      current.next () ;
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
  bool isUsed = aNomVariableTable.isSameObjectAs (inArgumentCppName)  ;
  GGS_typeExpressionList::cEnumerator argCourant (mEpilogueExpressionList, true) ;
  while ((! isUsed) && argCourant.hc ()) {
    isUsed = argCourant._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapBlockEpilogueInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = aNomVariableTable (HERE)->isCurrentObject () ;
  GGS_typeExpressionList::cEnumerator exp (mEpilogueExpressionList, true) ;
  while (exp.hc () && ! used) {
    used = exp._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    exp.next () ;
  }
  return used ;    
}

//---------------------------------------------------------------------------*
