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


#include "utilities/MF_MemoryControl.h"
#include "semantics_instructions.h"
#include "semantics_semantics.h"

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

void cPtr_typeUnaryMinusOperation::
generateExpression (AC_OutputStream & ioCppFile) {
  mExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "._unary_minus_operation (_inLexique SOURCE_FILE_AT_LINE ("
              << mInstructionLocation.currentLineNumber ()
              << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeUnaryMinusOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeUnaryMinusOperation::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

void cPtr_typeTestComplement::
generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "(! (" ;
  mExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTestComplement::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTestComplement::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

void cPtr_typeLogicalNegate::
generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "(~ (" ;
  mExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLogicalNegate::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLogicalNegate::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeAndOperation::generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "((" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ") & (" ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeAndOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) || 
         mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeAndOperation::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression (HERE)->isLexiqueFormalArgumentUsedForTest () || 
         mRightExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeOrOperation::generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "((" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ") | (" ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeOrOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) || 
         mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeOrOperation::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression (HERE)->isLexiqueFormalArgumentUsedForTest () || 
         mRightExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeXorOperation::generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "((" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ") ^ (" ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeXorOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) || 
         mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeXorOperation::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression (HERE)->isLexiqueFormalArgumentUsedForTest () || 
         mRightExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeConcatOperation::generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "((" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ") + (" ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeConcatOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) || 
         mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeConcatOperation::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression (HERE)->isLexiqueFormalArgumentUsedForTest () || 
         mRightExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeTrueBool::generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "GGS_bool (true, true)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTrueBool::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTrueBool::
isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeFalseBool::generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "GGS_bool (true, false)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFalseBool::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFalseBool::
isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeHereExpression::
generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "GGS_location (_inLexique)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeHereExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeHereExpression::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeLiteralStringExpression::
generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "GGS_string (true, " ;
  ioCppFile.writeCstringConstant (mLiteralString) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralStringExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralStringExpression::
isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeLiteralSIntExpression::
generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "GGS_sint (true, " << mLiteralInt.sintValue () << "L)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralSIntExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralSIntExpression::
isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeLiteralSInt64Expression::
generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "GGS_sint64 (true, " << mLiteralInt.sint64Value () << "LL)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralSInt64Expression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralSInt64Expression::
isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeLiteralUIntExpression::
generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "GGS_uint (true, " << mLiteralInt.uintValue () << "U)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralUIntExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralUIntExpression::
isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeLiteralUInt64Expression::
generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "GGS_uint64 (true, " << mLiteralInt.uint64Value () << "LLU)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralUInt64Expression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralUInt64Expression::
isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeLiteralCharExpression::
generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "GGS_char (true, " ;
  ioCppFile.writeCcharConstant (mLiteralChar.charValue ()) ;
  ioCppFile << ')' ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralCharExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralCharExpression::
isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeConstructorExpression::
generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "GGS_" << mClassName << "::constructor_" << mClassMethodName << " (_inLexique" ;
  GGS_typeExpressionList::element_type * current = mExpressionList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    ioCppFile << ", " ;
    current->mExpression (HERE)->generateExpression (ioCppFile) ;
    current = current->nextObject () ;
  }
  ioCppFile << " COMMA_HERE)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeConstructorExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  bool isUsed = false ;
  GGS_typeExpressionList::element_type * current = mExpressionList.firstObject () ;
  while ((current != NULL) && ! isUsed) {
    macroValidPointer (current) ;
    isUsed = current->mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    current = current->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeConstructorExpression::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeEqualTest::generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ") == (" ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeEqualTest::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeEqualTest::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression (HERE)->isLexiqueFormalArgumentUsedForTest ()
      || mRightExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeNonEqualTest::generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ") != (" ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeNonEqualTest::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeNonEqualTest::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression (HERE)->isLexiqueFormalArgumentUsedForTest ()
      || mRightExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInfOrEqualTest::generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ") <= (" ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInfOrEqualTest::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInfOrEqualTest::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression (HERE)->isLexiqueFormalArgumentUsedForTest ()
      || mRightExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeStrictInfTest::generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ") < (" ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStrictInfTest::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStrictInfTest::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression (HERE)->isLexiqueFormalArgumentUsedForTest ()
      || mRightExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeSupOrEqualTest::generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ") <= (" ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeSupOrEqualTest::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeSupOrEqualTest::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression (HERE)->isLexiqueFormalArgumentUsedForTest ()
      || mRightExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeStrictSupTest::generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ") > (" ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStrictSupTest::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStrictSupTest::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mLeftExpression (HERE)->isLexiqueFormalArgumentUsedForTest ()
      || mRightExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeAddOperation::generateExpression (AC_OutputStream & ioCppFile) {
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "._add_operation (_inLexique, " ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " SOURCE_FILE_AT_LINE ("
              << mInstructionLocation.currentLineNumber ()
              << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeAddOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeAddOperation::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeSubOperation::generateExpression (AC_OutputStream & ioCppFile) {
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "._substract_operation (_inLexique, " ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " SOURCE_FILE_AT_LINE ("
              << mInstructionLocation.currentLineNumber ()
              << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeSubOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeSubOperation::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeMultiplyOperation::generateExpression (AC_OutputStream & ioCppFile) {
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "._multiply_operation (_inLexique, " ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " SOURCE_FILE_AT_LINE ("
              << mInstructionLocation.currentLineNumber ()
              << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMultiplyOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMultiplyOperation::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeDivideOperation::generateExpression (AC_OutputStream & ioCppFile) {
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "._divide_operation (_inLexique, " ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " SOURCE_FILE_AT_LINE ("
              << mInstructionLocation.currentLineNumber ()
              << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeDivideOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeDivideOperation::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeModuloOperation::generateExpression (AC_OutputStream & ioCppFile) {
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "._modulo_operation (_inLexique, " ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << " SOURCE_FILE_AT_LINE ("
            << mInstructionLocation.currentLineNumber ()
            << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeModuloOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeModuloOperation::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeLeftShiftOperation::
generateExpression (AC_OutputStream & ioCppFile) {
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "._left_shift_operation (_inLexique, " ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << " SOURCE_FILE_AT_LINE ("
            << mInstructionLocation.currentLineNumber ()
            << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLeftShiftOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLeftShiftOperation::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeRightShiftOperation::
generateExpression (AC_OutputStream & ioCppFile) {
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "._left_shift_operation (_inLexique, " ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << " SOURCE_FILE_AT_LINE ("
            << mInstructionLocation.currentLineNumber ()
            << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeRightShiftOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeRightShiftOperation::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeReaderCallInExpression::
generateExpression (AC_OutputStream & ioCppFile) {
  mExpressionValue (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ".reader_" << mReaderName << " (_inLexique" ;
  GGS_typeExpressionList::element_type * e = mExpressionList.firstObject () ;
  while (e != NULL) {
    ioCppFile << ", " ;
    e->mExpression (HERE)->generateExpression (ioCppFile) ;
    e = e->nextObject () ;
  }
  ioCppFile << " SOURCE_FILE_AT_LINE ("
            << mInstructionLocation.currentLineNumber ()
            << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeReaderCallInExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  bool used = mExpressionValue (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_typeExpressionList::element_type * e = mExpressionList.firstObject () ;
  while ((e != NULL) && ! used) {
    used = e->mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    e = e->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeReaderCallInExpression::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeVarInExpression::generateExpression (AC_OutputStream & ioCppFile) {
  mCppVarName (HERE)->generateCplusPlusName (ioCppFile) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeVarInExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mCppVarName.isEqualTo (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeVarInExpression::
isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeJokerInExpression::generateExpression (AC_OutputStream & /* ioCppFile */) {
}

//---------------------------------------------------------------------------*

bool cPtr_typeJokerInExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeJokerInExpression::
isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeTextTableCall::generateExpression (AC_OutputStream & ioCppFile) {
  mExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << '.' << aNomMethodeTest << " (" ;
  aNomCppClef (HERE)->generateCplusPlusName (ioCppFile) ;
  ioCppFile << ')' ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTextTableCall::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || aNomCppClef.isEqualTo (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTextTableCall::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeBoolOption::generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "GGS_bool (true, _inLexique.boolOptionValueFromKeys (" ;
  ioCppFile.writeCstringConstant (mOptionComponentName) ;
  ioCppFile << ", " ;
  ioCppFile.writeCstringConstant (mOptionName) ;
  ioCppFile << ", true))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeBoolOption::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeBoolOption::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeUIntOption::generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "GGS_uint (true, _inLexique.uintOptionValueFromKeys (" ;
  ioCppFile.writeCstringConstant (mOptionComponentName) ;
  ioCppFile << ", " ;
  ioCppFile.writeCstringConstant (mOptionName) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeUIntOption::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeUIntOption::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

void cPtr_typeStringOption::generateExpression (AC_OutputStream & ioCppFile) {
  ioCppFile << "GGS_string (true, _inLexique.stringOptionValueFromKeys (" ;
  ioCppFile.writeCstringConstant (mOptionComponentName) ;
  ioCppFile << ", " ;
  ioCppFile.writeCstringConstant (mOptionName) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStringOption::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeStringOption::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_C_if_instruction::
generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & inLexiqueClassName,
                       const C_String & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    GGS_L_expression_instructionsList_list::element_type * currentBranch = mIFbranchesList.firstObject () ;
    bool first = true ;
    while (currentBranch != NULL) {
      macroValidPointer (currentBranch) ;
      if (first) {
        first = false ;
      }else{
        ioCppFile << "}else " ;
      }
      ioCppFile << "if ((" ;
      currentBranch->mIFexpression (HERE)->generateExpression (ioCppFile) ;
      ioCppFile << ").isBuiltAndTrue ()) {\n" ;
      generateInstructionListForList (currentBranch->mInstructionList, ioCppFile, inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                      inGenerateDebug, true) ;
      currentBranch = currentBranch->nextObject () ;
    }
    if (mElseInstructionsList.count () > 0) {
      ioCppFile << "}else{\n" ;
      generateInstructionListForList (mElseInstructionsList, ioCppFile, inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                      inGenerateDebug, true) ;
    }
    ioCppFile << "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_if_instruction::
isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  bool used = isLexiqueFormalArgumentUsedForList (mElseInstructionsList, inGenerateSemanticInstructions) ;
  GGS_L_expression_instructionsList_list::element_type * currentBranch = mIFbranchesList.firstObject () ;
  while ((! used) && (currentBranch != NULL)) {
    macroValidPointer (currentBranch) ;
    used = currentBranch->mIFexpression (HERE)->isLexiqueFormalArgumentUsedForTest ()
       || isLexiqueFormalArgumentUsedForList (currentBranch->mInstructionList, inGenerateSemanticInstructions) ;
    currentBranch = currentBranch->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_if_instruction::
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
