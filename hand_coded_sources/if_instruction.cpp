//---------------------------------------------------------------------------*
//                                                                           *
//  Generate 'if' instruction                                                *
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

#include "semantics_instructions.h"
#include "semantics_semantics.h"

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

void cPtr_typeTestComplement::
generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "(! " ;
  mTest ()->generateExpression (ioCppFile) ;
  ioCppFile << ')' ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTestComplement
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mTest ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTestComplement
::isLexiqueFormalArgumentUsedForTest (void) const {
  return mTest ()->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeAndOperation::generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "((" ;
  mLeftExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << ") && (" ;
  mRightExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeAndOperation
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) || 
         mRightExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeAndOperation
::isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression ()->isLexiqueFormalArgumentUsedForTest () || 
         mRightExpression ()->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeOrOperation::generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "((" ;
  mLeftExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << ") || (" ;
  mRightExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeOrOperation
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) || 
         mRightExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeOrOperation
::isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression ()->isLexiqueFormalArgumentUsedForTest () || 
         mRightExpression ()->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeConcatOperation::generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "((" ;
  mLeftExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << ") + (" ;
  mRightExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeConcatOperation
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) || 
         mRightExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeConcatOperation
::isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression ()->isLexiqueFormalArgumentUsedForTest () || 
         mRightExpression ()->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeTrueBool::generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "GGS_bool (true, true)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTrueBool
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTrueBool
::isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeFalseBool::generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "GGS_bool (true, false)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFalseBool
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFalseBool
::isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeHereExpression::
generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "GGS_location (lexique_var_)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeHereExpression
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeHereExpression
::isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeLiteralStringExpression::
generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "GGS_string (true, " ;
  ioCppFile.writeCstringConstant (mLiteralString) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralStringExpression
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralStringExpression
::isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeLiteralSIntExpression::
generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "GGS_sint (true, " << mLiteralInt.getValue () << "L)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralSIntExpression
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralSIntExpression
::isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeLiteralUIntExpression::
generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "GGS_uint (true, " << mLiteralInt.getValue () << "UL)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralUIntExpression
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralUIntExpression
::isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeLiteralCharExpression::
generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "GGS_char (true, " ;
  ioCppFile.writeCcharConstant (mLiteralChar.getValue ()) ;
  ioCppFile << ')' ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralCharExpression
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralCharExpression
::isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeConstructorExpression::
generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "GGS_" << mClassName << "::constructor_" << mClassMethodName << " (" ;
  GGS_typeExpressionList::element_type * current = mExpressionList.getFirstItem () ;
  bool first = true ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (first) {
      first = false ;
    }else{
      ioCppFile << ", " ;
    }
    current->mExpression ()->generateExpression (ioCppFile) ;
    current = current->getNextItem () ;
  }
  ioCppFile << ')' ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeConstructorExpression
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  bool isUsed = false ;
  GGS_typeExpressionList::element_type * current = mExpressionList.getFirstItem () ;
  while ((current != NULL) && ! isUsed) {
    macroValidPointer (current) ;
    isUsed = current->mExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
    current = current->getNextItem () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeConstructorExpression
::isLexiqueFormalArgumentUsedForTest (void) const {
  bool isUsed = false ;
  GGS_typeExpressionList::element_type * current = mExpressionList.getFirstItem () ;
  while ((current != NULL) && ! isUsed) {
    macroValidPointer (current) ;
    isUsed = current->mExpression ()->isLexiqueFormalArgumentUsedForTest () ;
    current = current->getNextItem () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeEqualTest::generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "(" ;
  mLeftExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << ") == (" ;
  mRightExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeEqualTest
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression ()->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeEqualTest
::isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression ()->isLexiqueFormalArgumentUsedForTest ()
      || mRightExpression ()->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeNonEqualTest::generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "(" ;
  mLeftExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << ") != (" ;
  mRightExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeNonEqualTest
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression ()->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeNonEqualTest
::isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression ()->isLexiqueFormalArgumentUsedForTest ()
      || mRightExpression ()->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInfOrEqualTest::generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "(" ;
  mLeftExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << ") <= (" ;
  mRightExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInfOrEqualTest
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression ()->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInfOrEqualTest
::isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression ()->isLexiqueFormalArgumentUsedForTest ()
      || mRightExpression ()->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeStrictInfTest::generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "(" ;
  mLeftExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << ") < (" ;
  mRightExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStrictInfTest
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression ()->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStrictInfTest
::isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression ()->isLexiqueFormalArgumentUsedForTest ()
      || mRightExpression ()->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeSupOrEqualTest::generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "(" ;
  mLeftExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << ") <= (" ;
  mRightExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeSupOrEqualTest
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression ()->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeSupOrEqualTest
::isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression ()->isLexiqueFormalArgumentUsedForTest ()
      || mRightExpression ()->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeStrictSupTest::generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "(" ;
  mLeftExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << ") > (" ;
  mRightExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStrictSupTest
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression ()->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStrictSupTest
::isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression ()->isLexiqueFormalArgumentUsedForTest ()
      || mRightExpression ()->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeReaderCallInExpression::
generateExpression (AC_output_stream & ioCppFile) {
  mExpressionValue ()->generateExpression (ioCppFile) ;
  ioCppFile << ".reader_" << mReaderName << " (" ;
  GGS_typeExpressionList::element_type * e = mExpressionList.getFirstItem () ;
  bool first = true ;
  while (e != NULL) {
    if (first) {
      first = false ;
    }else{
      ioCppFile << ", " ;
    }
    e->mExpression ()->generateExpression (ioCppFile) ;
    e = e->getNextItem () ;
  }
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeReaderCallInExpression
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  bool used = mExpressionValue ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_typeExpressionList::element_type * e = mExpressionList.getFirstItem () ;
  while ((e != NULL) && ! used) {
    used = e->mExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
    e = e->getNextItem () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeReaderCallInExpression
::isLexiqueFormalArgumentUsedForTest (void) const {
  bool used = false ;
  GGS_typeExpressionList::element_type * e = mExpressionList.getFirstItem () ;
  while ((e != NULL) && ! used) {
    used = e->mExpression ()->isLexiqueFormalArgumentUsedForTest () ;
    e = e->getNextItem () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeVarInExpression::generateExpression (AC_output_stream & ioCppFile) {
  mCppVarName ()->generateCplusPlusName (ioCppFile) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeVarInExpression
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mCppVarName.isEqualTo (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeVarInExpression
::isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeJokerInExpression::generateExpression (AC_output_stream & /* ioCppFile */) {
}

//---------------------------------------------------------------------------*

bool cPtr_typeJokerInExpression
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeJokerInExpression
::isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeTextTableCall::generateExpression (AC_output_stream & ioCppFile) {
  mExpression ()->generateExpression (ioCppFile) ;
  ioCppFile << '.' << aNomMethodeTest << " (" ;
  aNomCppClef ()->generateCplusPlusName (ioCppFile) ;
  ioCppFile << ')' ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTextTableCall
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mExpression ()->formalArgumentIsUsedForTest (inArgumentCppName)
      || aNomCppClef.isEqualTo (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTextTableCall
::isLexiqueFormalArgumentUsedForTest (void) const {
  return mExpression ()->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeBoolOption::generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "GGS_bool (true, lexique_var_.getBoolOptionValueFromKeys (" ;
  ioCppFile.writeCstringConstant (mOptionComponentName) ;
  ioCppFile << ", " ;
  ioCppFile.writeCstringConstant (mOptionName) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeBoolOption
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeBoolOption
::isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeUIntOption::generateExpression (AC_output_stream & ioCppFile) {
  ioCppFile << "GGS_uint (true, lexique_var_.getUintOptionValueFromKeys (" ;
  ioCppFile.writeCstringConstant (mOptionComponentName) ;
  ioCppFile << ", " ;
  ioCppFile.writeCstringConstant (mOptionName) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeUIntOption
::formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeUIntOption
::isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_C_if_instruction
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & inLexiqueClassName,
                       const C_string & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    GGS_L_expression_instructionsList_list::element_type * currentBranch = mIFbranchesList.getFirstItem () ;
    bool first = true ;
    while (currentBranch != NULL) {
      macroValidPointer (currentBranch) ;
      if (first) {
        first = false ;
      }else{
        ioCppFile << "}else " ;
      }
      ioCppFile << "if ((" ;
      currentBranch->mIFexpression ()->generateExpression (ioCppFile) ;
      ioCppFile << ").isBuiltAndTrue ()) {\n" ;
      generateInstructionListForList (currentBranch->mInstructionsList, ioCppFile, inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                      inGenerateDebug, true) ;
      currentBranch = currentBranch->getNextItem () ;
    }
    if (mElseInstructionsList.getCount () > 0) {
      ioCppFile << "}else{\n" ;
      generateInstructionListForList (mElseInstructionsList, ioCppFile, inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                      inGenerateDebug, true) ;
    }
    ioCppFile << "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_if_instruction
::isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  bool used = isLexiqueFormalArgumentUsedForList (mElseInstructionsList, inGenerateSemanticInstructions) ;
  GGS_L_expression_instructionsList_list::element_type * currentBranch = mIFbranchesList.getFirstItem () ;
  while ((! used) && (currentBranch != NULL)) {
    macroValidPointer (currentBranch) ;
    used = currentBranch->mIFexpression ()->isLexiqueFormalArgumentUsedForTest ()
       || isLexiqueFormalArgumentUsedForList (currentBranch->mInstructionsList, inGenerateSemanticInstructions) ;
    currentBranch = currentBranch->getNextItem () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_if_instruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool inGenerateSemanticInstructions) const {
  bool used = formalArgumentIsUsedForList (mElseInstructionsList, inArgumentCppName, inGenerateSemanticInstructions) ;
  GGS_L_expression_instructionsList_list::element_type * currentBranch = mIFbranchesList.getFirstItem () ;
  while ((! used) && (currentBranch != NULL)) {
    macroValidPointer (currentBranch) ;
    used = currentBranch->mIFexpression ()->formalArgumentIsUsedForTest (inArgumentCppName)
      || formalArgumentIsUsedForList (currentBranch->mInstructionsList, inArgumentCppName, inGenerateSemanticInstructions) ;
    currentBranch = currentBranch->getNextItem () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
