//---------------------------------------------------------------------------*
//                                                                           *
//  Generate semantics instructions                                          *
//                                                                           *
//  Copyright (C) 1999-2004 Pierre Molinaro.                                 *
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

#include "files/C_text_file_write.h"

#include "semantics_instructions.h"
#include "semantics_semantics.h"

//---------------------------------------------------------------------------*

void
generateInstructionListForList (const GGS_typeInstructionsList & inList,
                                AC_output_stream & ioCppFile,
                                const C_string & inLexiqueClassName,
                                const C_string & inTargetFileName,
                                sint32 & ioPrototypeIndex,
                                const bool inGenerateDebug,
                                const bool inGenerateSemanticInstructions) {
  ioCppFile.incIndentation (+2) ;
  GGS_typeInstructionsList::element_type * current = inList.getFirstItem () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (inGenerateSemanticInstructions || current->aInstruction()->isSyntacticInstruction ()) {
      current->aInstruction()->generateInstruction (ioCppFile, inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                                    inGenerateDebug, inGenerateSemanticInstructions) ;
    }
    current = current->getNextItem () ;
  }
  ioCppFile.incIndentation (-2) ;
}

//---------------------------------------------------------------------------*

void
generateSelectAndRepeatPrototypesForList (const GGS_typeInstructionsList & inList,
                                          AC_output_stream & inHfile,
                                          const C_string & inLexiqueClassName,
                                          const C_string & inTargetFileName,
                                          sint32 & ioPrototypeIndex,
                                          const bool inNotDeclared) {
  GGS_typeInstructionsList::element_type * current = inList.getFirstItem () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->aInstruction()->generateSelectAndRepeatPrototypes (inHfile,
                                                                inLexiqueClassName,
                                                                inTargetFileName,
                                                                ioPrototypeIndex,
                                                                inNotDeclared) ;
    current = current->getNextItem () ;
  }
}

//---------------------------------------------------------------------------*

bool
isLexiqueFormalArgumentUsedForList (const GGS_typeInstructionsList & inList,
                                    const bool inGenerateSemanticInstructions) {
  GGS_typeInstructionsList::element_type * current = inList.getFirstItem () ;
  bool formalArgumentIsUsed = false ;
  while ((current != NULL) && ! formalArgumentIsUsed) {
    macroValidPointer (current) ;
    if (inGenerateSemanticInstructions || current->aInstruction()->isSyntacticInstruction ()) {
      formalArgumentIsUsed = current->aInstruction()->isLexiqueFormalArgumentUsed (inGenerateSemanticInstructions) ;
    }
    current = current->getNextItem () ;
  }
  return formalArgumentIsUsed ;
}

//---------------------------------------------------------------------------*

bool
formalArgumentIsUsedForList (const GGS_typeInstructionsList & inList,
                             const GGS_typeCplusPlusName & inArgumentCppName,
                             const bool inGenerateSemanticInstructions) {
  GGS_typeInstructionsList::element_type * current = inList.getFirstItem () ;
  bool formalArgumentIsUsed = false ;
  while (current != NULL && ! formalArgumentIsUsed) {
    macroValidPointer (current) ;
    if (inGenerateSemanticInstructions || current->aInstruction()->isSyntacticInstruction ()) {
      formalArgumentIsUsed = current->aInstruction()->formalArgumentIsUsed (inArgumentCppName, inGenerateSemanticInstructions) ;
    }
    current = current->getNextItem () ;
  }
  return formalArgumentIsUsed ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInstruction
::generateSelectAndRepeatPrototypes (AC_output_stream & /* inHfile */,
                                     const C_string & /* inLexiqueClassName */,
                                     const C_string & /* inTargetFileName */,
                                     sint32 & /* ioPrototypeIndex */,
                                     const bool /* inNotDeclared */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef __MWERK__
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeSimpleExtractInstruction
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & /* inLexiqueClassName */,
                       const C_string & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "{ cPtr_" << aNomClasse << " * ptrExtraire_ = dynamic_cast <"
                 "cPtr_" << aNomClasse << " *> (" ;
    aNomVariable ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".getPtr ()) ;\n"
             << "  if (ptrExtraire_ == NULL) {\n" ;
    GGS_L_assignedVariables::element_type * affectationCourante = aListeAffectationParametresEffectifs.getFirstItem () ;
    while (affectationCourante != NULL) {
      macroValidPointer (affectationCourante) ;
      ioCppFile << "    " ;
      affectationCourante->aNomVariableCible ()->generateCplusPlusName (ioCppFile) ;
      ioCppFile << ".drop_operation () ;\n" ;
      affectationCourante = affectationCourante->getNextItem () ;
    }
    ioCppFile << "    if (" ;
    aNomVariable ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".getPtr () != NULL) {\n"
                 "      TC_unique_dyn_array <C_string> message1_ (1 COMMA_HERE) ;\n"
                 "      C_string message2_ ;\n"
                 "      message1_ (0 COMMA_HERE) << "
                 "cPtr_" << aNomClasse << "::static_string_message_" << aNomMessage << " () ;\n"
                 "      message2_ << " ; 
    aNomVariable ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << " ()->message_" << aNomMessage << " () ;\n" 
                 "      " ;
    mErrorLocationExpression ()->generateExpression (ioCppFile) ;
    ioCppFile << ".signalExtractError (lexique_var_, message1_, message2_) ;\n"
                 "    }\n"
                 "  }else{\n" ;
    ioCppFile.incIndentation (4) ;
    ioCppFile << "macroValidPointer (ptrExtraire_) ;\n" ;
    affectationCourante = aListeAffectationParametresEffectifs.getFirstItem () ;
    while (affectationCourante != NULL) {
      macroValidPointer (affectationCourante) ;
      affectationCourante->aNomVariableCible ()->generateCplusPlusName (ioCppFile) ;
      ioCppFile << " = ptrExtraire_->" << affectationCourante->aNomAttributSource << " ;\n" ;
      affectationCourante = affectationCourante->getNextItem () ;
    }
    ioCppFile.incIndentation (-4) ;
    ioCppFile << "  }\n"
                 "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeSimpleExtractInstruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeSimpleExtractInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = aNomVariable.isEqualTo (inArgumentCppName)
    || mErrorLocationExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_L_assignedVariables::element_type * affectationCourante = aListeAffectationParametresEffectifs.getFirstItem () ;
  while ((! isUsed) && (affectationCourante != NULL)) {
    macroValidPointer (affectationCourante) ;
    isUsed = affectationCourante->aNomVariableCible.isEqualTo (inArgumentCppName) ;
    affectationCourante = affectationCourante->getNextItem () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef __MWERK__
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeStructuredExtractInstructionWithElse
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & inLexiqueClassName,
                       const C_string & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "if (" ;
    mVariableName ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".isBuilt ()) {\n" ;
    ioCppFile.incIndentation (+2) ;
    bool first = true ;
    sint32 branchCount = 0 ;
    GGS_typeStructuredExtractCasesList::element_type * p = mCasesList.getFirstItem () ;
    while (p != NULL) {
      macroValidPointer (p) ;
      if (first) {
        first = false ;
      }else{
        ioCppFile << "}else " ;
      }
      ioCppFile << "if (dynamic_cast <"
                   "cPtr_" << p->mClassName << " *> (" ;
      mVariableName ()->generateCplusPlusName (ioCppFile) ;
      ioCppFile << ".getPtr ()) != NULL) {\n" ;
      if (! p->mNoUsedParameter.getValue ()) {
        ioCppFile << "  cPtr_" << p->mClassName << " * operand_"
                  << p->mResultVarID.getCurrentLocation ()
                  << " = dynamic_cast <"
                     "cPtr_" << p->mClassName << " *> (" ;
        mVariableName ()->generateCplusPlusName (ioCppFile) ;
        ioCppFile << ".getPtr ()) ;\n"
                     "  macroValidPointer (operand_"
                  << p->mResultVarID.getCurrentLocation ()
                  << ") ; \n" ;
      }
      generateInstructionListForList (p->mInstructionsList, ioCppFile,
                                      inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                      inGenerateDebug, inGenerateSemanticInstructions) ;
      p = p->getNextItem () ;
      branchCount ++ ;
    }
    ioCppFile << "}else{ // Else part\n" ;
  //--- Generate drop_operation instructions
    generateInstructionListForList (mElseInstructionList, ioCppFile,
                                    inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, inGenerateSemanticInstructions) ;
    ioCppFile << "}\n" ;
    ioCppFile.incIndentation (-2) ;
    ioCppFile << "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeStructuredExtractInstructionWithElse
::isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  bool used = isLexiqueFormalArgumentUsedForList (mElseInstructionList, inGenerateSemanticInstructions) ;
  GGS_typeStructuredExtractCasesList::element_type * p = mCasesList.getFirstItem () ;
  while ((p != NULL) && ! used) {
    macroValidPointer (p) ;
    used = isLexiqueFormalArgumentUsedForList (p->mInstructionsList, inGenerateSemanticInstructions) ;
    p = p->getNextItem () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStructuredExtractInstructionWithElse
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool inGenerateSemanticInstructions) const {
  bool used = mVariableName.isEqualTo (inArgumentCppName)
        || formalArgumentIsUsedForList (mElseInstructionList, inArgumentCppName, inGenerateSemanticInstructions) ;
  GGS_typeStructuredExtractCasesList::element_type * p = mCasesList.getFirstItem () ;
  while ((p != NULL) && ! used) {
    macroValidPointer (p) ;
    used = formalArgumentIsUsedForList (p->mInstructionsList, inArgumentCppName, inGenerateSemanticInstructions) ;
    p = p->getNextItem () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef __MWERK__
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeDropInstruction
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & /* inLexiqueClassName */,
                       const C_string & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    aVariableConsommee ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".drop_operation () ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeDropInstruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeDropInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  return aVariableConsommee.isEqualTo (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef __MWERK__
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeErrorInstruction
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & /* inLexiqueClassName */,
                       const C_string & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "  " ;
    mErrorLocationExpression ()->generateExpression (ioCppFile) ;
    ioCppFile << ".reader_location ().signalGGSSemanticError (lexique_var_, " ;
    mErrorMessageExpression ()->generateExpression (ioCppFile) ;
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeErrorInstruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeErrorInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  return mErrorLocationExpression ()->formalArgumentIsUsedForTest (inArgumentCppName)
      || mErrorMessageExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef __MWERK__
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeWarningInstruction
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & /* inLexiqueClassName */,
                       const C_string & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "  " ;
    mWarningLocationExpression ()->generateExpression (ioCppFile) ;
    ioCppFile << ".reader_location ().signalGGSSemanticWarning (lexique_var_, " ;
    mWarningMessageExpression ()->generateExpression (ioCppFile) ;
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeWarningInstruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeWarningInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  return mWarningLocationExpression ()->formalArgumentIsUsedForTest (inArgumentCppName)
      || mWarningMessageExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef __MWERK__
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeMessageInstruction
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & /* inLexiqueClassName */,
                       const C_string & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "lexique_var_.printMessage (" ;
    mMessageExpression ()->generateExpression (ioCppFile) ;
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeMessageInstruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMessageInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  return mMessageExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef __MWERK__
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeInstructionDeclarationVarLocale
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & /* inLexiqueClassName */,
                       const C_string & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    aTypeVariable ()->generateCppClassName (ioCppFile) ;
    ioCppFile << ' ' ;
    aNomCppVariable ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << " ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionDeclarationVarLocale
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionDeclarationVarLocale
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  return aNomCppVariable.isEqualTo (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef __MWERK__
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeMatchInstruction
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & inLexiqueClassName,
                       const C_string & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "if (" ;
    aNomCppVariable1 ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".isBuilt () && " ;
    aNomCppVariable2 ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".isBuilt ()) {\n" ;
    ioCppFile.incIndentation (+2) ;
    if (! mOperand1_isEnumeration.getValue ()) {
      ioCppFile << "cPtr_" << aNomTypeBase1 << " * ptr_" << aIndicatif1.getCurrentLocation () << " = " ;
      aNomCppVariable1 ()->generateCplusPlusName (ioCppFile) ;
      ioCppFile << " () ;\n" ;
    }
    if (! mOperand2_isEnumeration.getValue ()) {
      ioCppFile << "cPtr_" << aNomTypeBase2 << " * ptr_" << aIndicatif2.getCurrentLocation () << " = " ;
      aNomCppVariable2 ()->generateCplusPlusName (ioCppFile) ;
      ioCppFile << " () ;\n" ;
    }
    sint32 index = 0 ;
    GGS_L_matchInstructionCasesList::element_type * casCourant = aListeCas.getFirstItem () ;
    while (casCourant != NULL) {
      macroValidPointer (casCourant) ;
      if (! mOperand1_isEnumeration.getValue ()) {
        ioCppFile << "cPtr_" << casCourant->mCase1_name
                  << " * operand_" << aIndicatif1.getCurrentLocation ()
                  << " = dynamic_cast <"
                     "cPtr_" << casCourant->mCase1_name
                  << " *> (ptr_" << aIndicatif1.getCurrentLocation () << ") ;\n" ;
      }
      if (! mOperand2_isEnumeration.getValue ()) {
        ioCppFile << "cPtr_" << casCourant->mCase2_name
                  << " * operand_" << aIndicatif2.getCurrentLocation ()
                  << " = dynamic_cast <"
                     "cPtr_" << casCourant->mCase2_name
                  << " *> (ptr_" << aIndicatif2.getCurrentLocation () << ") ;\n" ;
      }
      ioCppFile << "if ((" ;
      if (mOperand1_isEnumeration.getValue ()) {
        aNomCppVariable1 ()->generateCplusPlusName (ioCppFile) ;
        ioCppFile << ".getValue () == GGS_" << aNomTypeBase1 << "::enum_" << casCourant->mCase1_name ;
      }else{
        ioCppFile <<  "operand_" << aIndicatif1.getCurrentLocation () << " != NULL" ;
      }
      ioCppFile <<   ") && (" ;
      if (mOperand2_isEnumeration.getValue ()) {
        aNomCppVariable2 ()->generateCplusPlusName (ioCppFile) ;
        ioCppFile << ".getValue () == GGS_" << aNomTypeBase2 << "::enum_" << casCourant->mCase2_name ;
      }else{
        ioCppFile << "operand_" << aIndicatif2.getCurrentLocation () << " != NULL" ;
      }
      ioCppFile << ")) {\n" ;
      generateInstructionListForList (casCourant->mInstructionsList, ioCppFile,
                                      inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                      inGenerateDebug, inGenerateSemanticInstructions) ;
      ioCppFile << "}else{\n" ;
      casCourant = casCourant->getNextItem () ;
      ioCppFile.incIndentation (2) ;
      index ++ ;
    }
    ioCppFile.incIndentation (-2) ;
    generateInstructionListForList (mElseInstructionsList, ioCppFile,
                                   inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                   inGenerateDebug, inGenerateSemanticInstructions) ;
    for (sint32 i=0 ; i<index ; i++) {
      ioCppFile << "}\n" ;
      ioCppFile.incIndentation (-2) ;
    }
    ioCppFile << "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeMatchInstruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMatchInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool inGenerateSemanticInstructions) const {
  bool isUsed = aNomCppVariable1.isEqualTo (inArgumentCppName)
   || aNomCppVariable2.isEqualTo (inArgumentCppName)
   || formalArgumentIsUsedForList (mElseInstructionsList, inArgumentCppName, inGenerateSemanticInstructions) ;
  GGS_L_matchInstructionCasesList::element_type * casCourant = aListeCas.getFirstItem () ;
  while ((! isUsed) && (casCourant != NULL)) {
    macroValidPointer (casCourant) ;
    isUsed = formalArgumentIsUsedForList (casCourant->mInstructionsList, inArgumentCppName, inGenerateSemanticInstructions) ;
    casCourant = casCourant->getNextItem () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef __MWERK__
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeAppendInstruction
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & /* inLexiqueClassName */,
                       const C_string & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    mTargetVarCppName ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".addAssign_operation (" ;
    GGS_typeExpressionList::element_type * exp = mSourceExpressions.getFirstItem () ;
    bool first = true ;
    while (exp != NULL) {
      macroValidPointer (exp) ;
      if (first) {
        first = false ;
      }else{
        ioCppFile << ", " ;
      }
      exp->mExpression ()->generateExpression (ioCppFile) ;
      exp = exp->getNextItem () ;
    }
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeAppendInstruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeAppendInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool used = mTargetVarCppName.isEqualTo (inArgumentCppName) ;
  GGS_typeExpressionList::element_type * exp = mSourceExpressions.getFirstItem () ;
  while ((exp != NULL) && ! used) {
    macroValidPointer (exp) ;
    used = exp->mExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
    exp = exp->getNextItem () ;
  }
  return used ;    
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef __MWERK__
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeAppendInstructionWithAssignment
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & /* inLexiqueClassName */,
                       const C_string & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    mTargetVarCppName ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".addAssign_operation (" ;
    GGS_typeExpressionList::element_type * exp = mSourceExpressions.getFirstItem () ;
    bool first = true ;
    while (exp != NULL) {
      macroValidPointer (exp) ;
      if (first) {
        first = false ;
      }else{
        ioCppFile << ", " ;
      }
      exp->mExpression ()->generateExpression (ioCppFile) ;
      exp = exp->getNextItem () ;
    }
    ioCppFile << "& " ;
    m_luint_TargetVarCppName ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeAppendInstructionWithAssignment
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeAppendInstructionWithAssignment
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool used = mTargetVarCppName.isEqualTo (inArgumentCppName)
    || m_luint_TargetVarCppName.isEqualTo (inArgumentCppName) ;
  GGS_typeExpressionList::element_type * exp = mSourceExpressions.getFirstItem () ;
  while ((exp != NULL) && ! used) {
    macroValidPointer (exp) ;
    used = exp->mExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
    exp = exp->getNextItem () ;
  }
  return used ;    
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef __MWERK__
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeMapBlockPrologueInstruction::
generateInstruction (AC_output_stream & ioCppFile,
                     const C_string & /* inLexiqueClassName */,
                     const C_string & /* inTargetFileName */,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    aNomVariableTable ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".prologue_" << aNomMethodeBloc << " (lexique_var_" ;
    GGS_typeExpressionList::element_type * current = mPrologueExpressionList.getFirstItem () ;
    while (current != NULL) {
      macroValidPointer (current) ;
      ioCppFile << ", " ;
      current->mExpression ()->generateExpression (ioCppFile) ;
      current = current->getNextItem () ;
    }
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapBlockPrologueInstruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapBlockPrologueInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = aNomVariableTable.isEqualTo (inArgumentCppName) ;
  GGS_typeExpressionList::element_type * argCourant = mPrologueExpressionList.getFirstItem () ;
  while ((! isUsed) && (argCourant != NULL)) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant = argCourant->getNextItem () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef __MWERK__
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeMapBlockEpilogueInstruction
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & /* inLexiqueClassName */,
                       const C_string & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    aNomVariableTable ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".epilogue_" << aNomMethodeBloc << " (lexique_var_" ;
    GGS_typeExpressionList::element_type * current = mEpilogueExpressionList.getFirstItem () ;
    while (current != NULL) {
      macroValidPointer (current) ;
      ioCppFile << ", " ;
      current->mExpression ()->generateExpression (ioCppFile) ;
      current = current->getNextItem () ;
    }
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapBlockEpilogueInstruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapBlockEpilogueInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = aNomVariableTable.isEqualTo (inArgumentCppName)  ;
  GGS_typeExpressionList::element_type * argCourant = mEpilogueExpressionList.getFirstItem () ;
  while ((! isUsed) && (argCourant != NULL)) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant = argCourant->getNextItem () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
 