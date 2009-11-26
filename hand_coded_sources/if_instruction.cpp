//---------------------------------------------------------------------------*
//                                                                           *
//  Generate 'if' instruction                                                *
//                                                                           *
//  Copyright (C) 1999, ..., 2009 Pierre Molinaro.                           *
//                                                                           *
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

void cPtr_typeIfThenElseExpression::
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "((" ;
  mIfExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ").isBuiltAndTrue () ? (" ;
  mThenExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ") : (" ;
  mElseExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeIfThenElseExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mIfExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
    || mThenExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
    || mElseExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
  ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeIfThenElseExpression::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mIfExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
    || mThenExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
    || mElseExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
  ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeIfThenElseExpression::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mIfExpression (HERE)->isLexiqueFormalArgumentUsedForTest ()
    || mThenExpression (HERE)->isLexiqueFormalArgumentUsedForTest ()
    || mElseExpression (HERE)->isLexiqueFormalArgumentUsedForTest ()
  ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

void cPtr_typeClassToTypeOperand::
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "GGS_type  (& kTypeDescriptor_GGS_" << mTypeName << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeClassToTypeOperand::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeClassToTypeOperand::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeClassToTypeOperand::
isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

void cPtr_typeCastInExpression::
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "GGS_" << mCastTypeName <<"::castFrom (inLexique, " ;
  mCastedExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ".getPtr (), "
            << (mCheckForKindOfClass.boolValue () ? "true" : "false")
            << ", " ;
  mErrorLocationExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << " COMMA_SOURCE_FILE_AT_LINE (" ;
  ioCppFile.appendSigned (mCastTypeName.lineNumber ()) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeCastInExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mCastedExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
    || mErrorLocationExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeCastInExpression::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mCastedExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
    || mErrorLocationExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeCastInExpression::
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

void cPtr_objectCastInExpression::
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "GGS_" << mCastTypeName <<"::castFromObject (inLexique, " ;
  mCastedExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ", " ;
  mErrorLocationExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << " COMMA_SOURCE_FILE_AT_LINE (" ;
  ioCppFile.appendSigned (mCastTypeName.lineNumber ()) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_objectCastInExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mCastedExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
    || mErrorLocationExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_objectCastInExpression::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mCastedExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
    || mErrorLocationExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_objectCastInExpression::
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

void cPtr_typeUnaryMinusOperation::
generateExpression (AC_OutputStream & ioCppFile) const {
  mExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ".operator_unary_minus (inLexique COMMA_HERE)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeUnaryMinusOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeUnaryMinusOperation::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeUnaryMinusOperation::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

void cPtr_typeFunctionCall::
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "function_" << mFunctionName << " (inLexique" ;
  GGS_typeExpressionList::cEnumerator enumerator (mExpressionList, true) ;
  while (enumerator.hasCurrentObject ()) {
    ioCppFile << ", " ;
    enumerator._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
    enumerator.next () ;
  }
  ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
            << cStringWithSigned (mFunctionName.lineNumber ())
            << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFunctionCall::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  bool isUsed = false ;
  GGS_typeExpressionList::cEnumerator enumerator (mExpressionList, true) ;
  while (enumerator.hasCurrentObject () && ! isUsed) {
    isUsed = enumerator._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    enumerator.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFunctionCall::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  bool isUsed = false ;
  GGS_typeExpressionList::cEnumerator enumerator (mExpressionList, true) ;
  while (enumerator.hasCurrentObject () && ! isUsed) {
    isUsed = enumerator._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    enumerator.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFunctionCall::
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
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "(" ;
  mExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ").operator_not ()" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTestComplement::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTestComplement::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
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
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "(" ;
  mExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ").operator_tilde ()" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLogicalNegate::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLogicalNegate::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
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

void cPtr_typeAndOperation::generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ").operator_and (" ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeAndOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) || 
         mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeAndOperation::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () || 
         mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeAndOperation::
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

void cPtr_typeOrOperation::generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ").operator_or (" ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeOrOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) || 
         mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeOrOperation::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () || 
         mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeOrOperation::
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

void cPtr_typeXorOperation::generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ").operator_xor (" ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeXorOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) || 
         mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeXorOperation::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () || 
         mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeXorOperation::
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

void cPtr_typeConcatOperation::generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ").operator_concat (" ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeConcatOperation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mLeftExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) || 
         mRightExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeConcatOperation::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () || 
         mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeConcatOperation::
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

void cPtr_typeTrueBool::generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "GGS_bool (true)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTrueBool::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTrueBool::
formalCurrentObjectArgumentIsUsedForTest (void) const {
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

void cPtr_typeFalseBool::generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "GGS_bool (false)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFalseBool::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFalseBool::
formalCurrentObjectArgumentIsUsedForTest (void) const {
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
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "GGS_location (inLexique)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeHereExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeHereExpression::
formalCurrentObjectArgumentIsUsedForTest (void) const {
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
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "GGS_string (" ;
  GGS_stringlist::cEnumerator currentString (mLiteralStringList, true) ;
  bool first = true ;
  while (currentString.hasCurrentObject ()) {
    if (first) {
      first = false ;
    }else{
      ioCppFile << "\n  " ;
    }
    ioCppFile.appendCLiteralStringConstant (currentString._mValue (HERE).string ()) ;
    currentString.next () ;
  }
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralStringExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralStringExpression::
formalCurrentObjectArgumentIsUsedForTest (void) const {
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
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "GGS_sint (" << cStringWithSigned (mLiteralInt.sintValue ()) << "L)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralSIntExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralSIntExpression::
formalCurrentObjectArgumentIsUsedForTest (void) const {
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
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "GGS_sint64 (" ;
  ioCppFile.appendSigned64 (mLiteralInt.sint64Value ()) ;
  ioCppFile << "LL)" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralSInt64Expression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralSInt64Expression::
formalCurrentObjectArgumentIsUsedForTest (void) const {
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
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile.appendCString ("GGS_uint (") ;
  ioCppFile.appendUnsigned (mLiteralInt.uintValue ()) ;
  ioCppFile.appendCString ("U)") ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralUIntExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralUIntExpression::
formalCurrentObjectArgumentIsUsedForTest (void) const {
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
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile.appendCString ("GGS_uint64 (") ;
  ioCppFile.appendUnsigned64 (mLiteralInt.uint64Value ()) ;
  ioCppFile.appendCString ("ULL)") ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralUInt64Expression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralUInt64Expression::
formalCurrentObjectArgumentIsUsedForTest (void) const {
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
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "GGS_char (TO_UNICODE (" ;
  ioCppFile.appendCLiteralCharConstant (mLiteralChar.charValue ()) ;
  ioCppFile << "))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralCharExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralCharExpression::
formalCurrentObjectArgumentIsUsedForTest (void) const {
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

void cPtr_typeLiteralDoubleExpression::
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "GGS_double (" ;
  ioCppFile.appendDouble (mLiteralDouble.doubleValue ()) ;
   ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralDoubleExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralDoubleExpression::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeLiteralDoubleExpression::
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
generateExpression (AC_OutputStream & ioCppFile) const {
  mType (HERE)->generateCppClassName (ioCppFile) ;
  const bool hasLexiqueAndLocationArguments = mHasLexiqueAndLocationArguments.boolValue () ;
  ioCppFile << "::constructor_" << mClassMethodName << " (" ;
  if (hasLexiqueAndLocationArguments) {
    ioCppFile << "inLexique" ;
  }
  GGS_typeExpressionList::cEnumerator current (mExpressionList, true) ;
  bool first = ! hasLexiqueAndLocationArguments ;
  while (current.hasCurrentObject ()) {
    if (first) {
      first = false ;
    }else{
      ioCppFile << ", " ;
    }
    current._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
    current.next () ;
  }
  if (hasLexiqueAndLocationArguments) {
    ioCppFile << " COMMA_HERE" ;
  }
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeConstructorExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  bool isUsed = false ;
  GGS_typeExpressionList::cEnumerator current (mExpressionList, true) ;
  while (current.hasCurrentObject () && ! isUsed) {
    isUsed = current._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    current.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeConstructorExpression::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  bool isUsed = false ;
  GGS_typeExpressionList::cEnumerator current (mExpressionList, true) ;
  while (current.hasCurrentObject () && ! isUsed) {
    isUsed = current._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    current.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeConstructorExpression::
isLexiqueFormalArgumentUsedForTest (void) const {
  bool isUsed = mHasLexiqueAndLocationArguments.boolValue () ;
  GGS_typeExpressionList::cEnumerator current (mExpressionList, true) ;
  while (current.hasCurrentObject () && ! isUsed) {
    isUsed = current._mExpression (HERE) (HERE)->isLexiqueFormalArgumentUsedForTest () ;
    current.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeEqualTest::generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ").operator_isEqual (" ;
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
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
      || mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
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

void cPtr_typeNonEqualTest::generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ").operator_isNotEqual (" ;
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
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
      || mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeNonEqualTest::
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

void cPtr_typeInfOrEqualTest::generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ").operator_infOrEqual (" ;
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
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
      || mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
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

void cPtr_typeStrictInfTest::generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ").operator_strictInf (" ;
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
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
      || mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
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

void cPtr_typeSupOrEqualTest::generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ").operator_supOrEqual (" ;
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
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
      || mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
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

void cPtr_typeStrictSupTest::generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "(" ;
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ").operator_strictSup (" ;
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
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
      || mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
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

void cPtr_typeAddOperation::generateExpression (AC_OutputStream & ioCppFile) const {
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ".add_operation (inLexique, " ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << cStringWithSigned (mOperatorLocation.lineNumber ())
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
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
      || mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
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

void cPtr_typeSubOperation::generateExpression (AC_OutputStream & ioCppFile) const {
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ".substract_operation (inLexique, " ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << cStringWithSigned (mOperatorLocation.lineNumber ())
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
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
      || mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
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

void cPtr_typeMultiplyOperation::generateExpression (AC_OutputStream & ioCppFile) const {
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ".multiply_operation (inLexique, " ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << cStringWithSigned (mOperatorLocation.lineNumber ())
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
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
      || mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
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

void cPtr_typeDivideOperation::generateExpression (AC_OutputStream & ioCppFile) const {
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ".divide_operation (inLexique, " ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << cStringWithSigned (mOperatorLocation.lineNumber ())
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
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
      || mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
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

void cPtr_typeModuloOperation::generateExpression (AC_OutputStream & ioCppFile) const {
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ".modulo_operation (inLexique, " ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
            << cStringWithSigned (mOperatorLocation.lineNumber ())
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
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
      || mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
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
generateExpression (AC_OutputStream & ioCppFile) const {
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ".left_shift_operation (inLexique, " ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
            << cStringWithSigned (mOperatorLocation.lineNumber ())
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
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
      || mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
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
generateExpression (AC_OutputStream & ioCppFile) const {
  mLeftExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ".right_shift_operation (inLexique, " ;
  mRightExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
            << cStringWithSigned (mOperatorLocation.lineNumber ())
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
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mLeftExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
      || mRightExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
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
generateExpression (AC_OutputStream & ioCppFile) const {
  const bool hasLexiqueAndLocationArguments = mHasLexiqueAndLocationArguments.boolValue () ;
  if (mCategoryReaderClassBaseName.string ().length () == 0) {
    mExpressionValue (HERE)->generateExpression (ioCppFile) ;
    if (mConversionMethod.string ().length () > 0) {
      ioCppFile << "." << mConversionMethod << " ()" ;
    }
    ioCppFile << ".reader_" << mReaderName << " (" ;
    if (hasLexiqueAndLocationArguments) {
      ioCppFile << "inLexique" ;
    }
    bool first = ! hasLexiqueAndLocationArguments ;
    GGS_typeExpressionList::cEnumerator e (mExpressionList, true) ;
    while (e.hasCurrentObject ()) {
      if (first) {
        first = false ;
      }else{
        ioCppFile << ", " ;
      }
      e._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
      e.next () ;
    }
    if (hasLexiqueAndLocationArguments) {
      ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
                << cStringWithSigned (mReaderName.lineNumber ())
                << ")" ;
    }
    ioCppFile << ")" ;
  }else{
    ioCppFile << "(findCategoryReader__" << mCategoryReaderClassBaseName << "__" << mReaderName
              << " (" ;
    mExpressionValue (HERE)->generateExpression (ioCppFile) ;
    if (mConversionMethod.string ().length () > 0) {
      ioCppFile << "." << mConversionMethod << " ()" ;
    }
    ioCppFile << " (HERE)->galgasRTTI ()) (inLexique, " ;
    mExpressionValue (HERE)->generateExpression (ioCppFile) ;
    if (mConversionMethod.string ().length () > 0) {
      ioCppFile << "." << mConversionMethod << " ()" ;
    }
    ioCppFile << ".getPtr ()" ;
    GGS_typeExpressionList::cEnumerator e (mExpressionList, true) ;
    while (e.hasCurrentObject ()) {
      ioCppFile << ", " ;
      e._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
      e.next () ;
    }
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << cStringWithSigned (mReaderName.lineNumber ())
              << ")))" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeReaderCallInExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  bool used = mExpressionValue (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_typeExpressionList::cEnumerator e (mExpressionList, true) ;
  while (e.hasCurrentObject () && ! used) {
    used = e._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    e.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeReaderCallInExpression::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  bool used = mExpressionValue (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
  GGS_typeExpressionList::cEnumerator e (mExpressionList, true) ;
  while (e.hasCurrentObject () && ! used) {
    used = e._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    e.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeReaderCallInExpression::
isLexiqueFormalArgumentUsedForTest (void) const {
  bool used = mHasLexiqueAndLocationArguments.boolValue () ;
  if (! used) {
    used = mExpressionValue (HERE)->isLexiqueFormalArgumentUsedForTest () ;
  }
  GGS_typeExpressionList::cEnumerator e (mExpressionList, true) ;
  while (e.hasCurrentObject () && ! used) {
    used = e._mExpression (HERE) (HERE)->isLexiqueFormalArgumentUsedForTest () ;
    e.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeCategoryTemplateCall::
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "(findCategoryTemplate__" << mCategoryTemplateClassBaseName << "__" << mTemplateName
            << " (" ;
  mExpressionValue (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << " (HERE)->galgasRTTI ()) (inLexique, " ;
  mExpressionValue (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ".getPtr ()" ;
  GGS_typeExpressionList::cEnumerator e (mOutExpressionList, true) ;
  while (e.hasCurrentObject ()) {
    ioCppFile << ", " ;
    e._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
    e.next () ;
  }
  ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
            << cStringWithSigned (mTemplateName.lineNumber ())
            << ")))" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeCategoryTemplateCall::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  bool used = mExpressionValue (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_typeExpressionList::cEnumerator e (mOutExpressionList, true) ;
  while (e.hasCurrentObject () && ! used) {
    used = e._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    e.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeCategoryTemplateCall::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  bool used = mExpressionValue (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
  GGS_typeExpressionList::cEnumerator e (mOutExpressionList, true) ;
  while (e.hasCurrentObject () && ! used) {
    used = e._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    e.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeCategoryTemplateCall::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeVarInExpression::generateExpression (AC_OutputStream & ioCppFile) const {
  mCppVarName (HERE)->generateCplusPlusName (ioCppFile) ;
  GGS_lstringlist::cEnumerator structAttribute (mStructAttributeList, true) ;
  while (structAttribute.hasCurrentObject ()) {
    ioCppFile << "." << structAttribute._mValue (HERE) ;
    structAttribute.next () ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeVarInExpression::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mCppVarName.isSameObjectAs (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeVarInExpression::
isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeVarInExpression::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mCppVarName (HERE)->isCurrentObject () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeJokerInExpression::
generateExpression (AC_OutputStream & /* ioCppFile */) const {
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

bool cPtr_typeJokerInExpression::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeTextTableCall::generateExpression (AC_OutputStream & ioCppFile) const {
  mExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << "." << aNomMethodeTest << " (" ;
  aNomCppClef (HERE)->generateCplusPlusName (ioCppFile) ;
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTextTableCall::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  return mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
      || aNomCppClef.isSameObjectAs (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTextTableCall::
isLexiqueFormalArgumentUsedForTest (void) const {
  return mExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeTextTableCall::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeOptionAccess::generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "gOption_"
            << mOptionComponentName.string ().identifierRepresentation ()
            << "_"
            << mOptionName.string ().identifierRepresentation ()
            << ".reader_"
            << mAccessorName.string ()
            << " ()" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeOptionAccess::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeOptionAccess::
isLexiqueFormalArgumentUsedForTest (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeOptionAccess::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeFileWrapperWithStaticPath::
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile.appendCString ("GGS_string (gWrapperFileContent_") ;
  ioCppFile.appendUnsigned (mFileIndex.uintValue ()) ;
  ioCppFile.appendCString ("_") ;
  ioCppFile.appendString (mFileWrapperName) ;
  ioCppFile.appendCString (")") ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFileWrapperWithStaticPath::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFileWrapperWithStaticPath::
isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFileWrapperWithStaticPath::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeFileWrapperObjectInstanciation::
generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "GGS_filewrapper (gWrapperDirectory_0_" << mFileWrapperName << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFileWrapperObjectInstanciation::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & /* inArgumentCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFileWrapperObjectInstanciation::
isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFileWrapperObjectInstanciation::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark IF instruction
#endif

//---------------------------------------------------------------------------*

void cPtr_C_if_instruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & inTargetFileName,
                     PMSInt32 & ioPrototypeIndex,
                     const bool inGenerateDebug,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    GGS_L_expression_instructionsList_list::cEnumerator currentBranch (mIFbranchesList, true) ;
    PMSInt32 currentLocation = 0 ;
    bool first = true ;
    while (currentBranch.hasCurrentObject ()) {
      if (first) {
        first = false ;
      }else{
        ioCppFile << "}else if (cond_" << cStringWithSigned (currentLocation) << ".isBuiltAndFalse ()) {\n" ;
        ioCppFile.incIndentation (+2) ;
      }
      currentLocation = currentBranch._mLocation (HERE).location () ;
      ioCppFile << "const GGS_bool cond_"
                << cStringWithSigned (currentLocation)
                << " = " ;
      currentBranch._mIFexpression (HERE) (HERE)->generateExpression (ioCppFile) ;
      ioCppFile << " ;\n"
                   "if (cond_" << cStringWithSigned (currentLocation) << ".isBuiltAndTrue ()) {\n" ;
      generateInstructionListForList (currentBranch._mInstructionList (HERE),
                                      ioCppFile,
                                      inTargetFileName,
                                      ioPrototypeIndex,
                                      inGenerateDebug,
                                      true) ;
      currentBranch.next () ;
    }
    if (mElseInstructionsList.count () > 0) {
      ioCppFile << "}else if (cond_" << cStringWithSigned (currentLocation) << ".isBuiltAndFalse ()) {\n" ;
      generateInstructionListForList (mElseInstructionsList,
                                      ioCppFile,
                                      inTargetFileName,
                                      ioPrototypeIndex,
                                      inGenerateDebug,
                                      true) ;
    }
    ioCppFile.incIndentation (+2) ;
    currentBranch.rewind () ;
    while (currentBranch.hasCurrentObject ()) {
      ioCppFile.incIndentation (-2) ;
      ioCppFile << "}\n" ;
      currentBranch.next () ;
    }
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_if_instruction::
isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  bool used = isLexiqueFormalArgumentUsedForList (mElseInstructionsList, inGenerateSemanticInstructions) ;
  GGS_L_expression_instructionsList_list::cEnumerator currentBranch (mIFbranchesList, true) ;
  while ((! used) && currentBranch.hasCurrentObject ()) {
    used = currentBranch._mIFexpression (HERE) (HERE)->isLexiqueFormalArgumentUsedForTest ()
       || isLexiqueFormalArgumentUsedForList (currentBranch._mInstructionList (HERE), inGenerateSemanticInstructions) ;
    currentBranch.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_if_instruction::
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

bool cPtr_C_if_instruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = formalCurrentObjectArgumentIsUsedForList (mElseInstructionsList) ;
  GGS_L_expression_instructionsList_list::cEnumerator currentBranch (mIFbranchesList, true) ;
  while ((! used) && currentBranch.hasCurrentObject ()) {
    used = currentBranch._mIFexpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
      || formalCurrentObjectArgumentIsUsedForList (currentBranch._mInstructionList (HERE)) ;
    currentBranch.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark SWITCH instruction
#endif

//---------------------------------------------------------------------------*

void cPtr_C_switch_instruction::
generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & inTargetFileName,
                       PMSInt32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "switch (" ;
    mSwitchExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << ".enumValue ()) {\n" ;
    GGS_L_switchBranchlist::cEnumerator currentBranch (mBranchList, true) ;
    while (currentBranch.hasCurrentObject ()) {
      const GGS_stringset::cEnumerator enumerator (currentBranch._mConstantSet (HERE), true) ;
      while (enumerator.hasCurrentObject ()) {
        ioCppFile << "case GGS_" << mEnumTypeName << "::enum_" << enumerator._key (HERE) << ":\n" ;
        enumerator.next () ;
      }
      ioCppFile << "  {\n" ;
      generateInstructionListForList (currentBranch._mInstructionList (HERE), ioCppFile, inTargetFileName, ioPrototypeIndex,
                                      inGenerateDebug, true) ;
      ioCppFile << "  }\n"
                   "  break ;\n" ;
      currentBranch.next () ;
    }
    ioCppFile << "case GGS_" << mEnumTypeName << "::kNotBuilt:\n"
                 "  break ;\n"
                 "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_switch_instruction::
isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  bool used = mSwitchExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
  GGS_L_switchBranchlist::cEnumerator currentBranch (mBranchList, true) ;
  while ((! used) && currentBranch.hasCurrentObject ()) {
    used = isLexiqueFormalArgumentUsedForList (currentBranch._mInstructionList (HERE), inGenerateSemanticInstructions) ;
    currentBranch.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_switch_instruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool inGenerateSemanticInstructions) const {
  bool used = mSwitchExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_L_switchBranchlist::cEnumerator currentBranch (mBranchList, true) ;
  while ((! used) && currentBranch.hasCurrentObject ()) {
    used = formalArgumentIsUsedForList (currentBranch._mInstructionList (HERE), inArgumentCppName, inGenerateSemanticInstructions) ;
    currentBranch.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_switch_instruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = mSwitchExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
  GGS_L_switchBranchlist::cEnumerator currentBranch (mBranchList, true) ;
  while ((! used) && currentBranch.hasCurrentObject ()) {
    used = formalCurrentObjectArgumentIsUsedForList (currentBranch._mInstructionList (HERE)) ;
    currentBranch.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
