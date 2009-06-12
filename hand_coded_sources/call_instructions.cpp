//---------------------------------------------------------------------------*
//                                                                           *
//  Generate call instructions                                               *
//                                                                           *
//  Copyright (C) 1999, ..., 2009 Pierre Molinaro.                           *
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
#include "semantics_semantics.h"
#include "semantics_instructions.h"

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeCallOfTypeMethodInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {

  if (inGenerateSemanticInstructions) {
    ioCppFile << "GGS_" << mTypeName << "::class_method_" << mTypeMethodName << " (inLexique"  ;
    GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
    while (argCourant.hasCurrentObject ()) {
      ioCppFile << ", " ;
      argCourant._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
      argCourant.next () ;
    }
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << cStringWithSigned (mTypeMethodName.lineNumber ())
              << ")) ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeCallOfTypeMethodInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeCallOfTypeMethodInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  bool used = false ;
  GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
  while ((! used) && argCourant.hasCurrentObject ()) {
    used = argCourant._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeCallOfTypeMethodInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = false ;
  GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
  while ((! isUsed) && argCourant.hasCurrentObject ()) {
    isUsed = argCourant._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    argCourant.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeMethodCallInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {

  if (inGenerateSemanticInstructions) {
    cPtr_typeVarInExpression * varInExpression = dynamic_cast <cPtr_typeVarInExpression *> (mExpression (HERE)) ;
    bool handled = false ;
    if (varInExpression != NULL) {
      if (dynamic_cast <cPtr_typeCppInheritedName *> (varInExpression->mCppVarName (HERE)) != NULL) {
        handled = true ;
        ioCppFile << "inherited::method_" << mMethodName << " (inLexique"  ;
        GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
        while (argCourant.hasCurrentObject ()) {
          ioCppFile << ", " ;
          argCourant._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
          argCourant.next () ;
        }
        ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
                  << cStringWithSigned (mMethodName.lineNumber ())
                  << ")) ;\n" ;
      }else if (dynamic_cast <cPtr_typeCppThisName *> (varInExpression->mCppVarName (HERE)) != NULL) {
        handled = true ;
        ioCppFile << "method_" << mMethodName << " (inLexique"  ;
        GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
        while (argCourant.hasCurrentObject ()) {
          ioCppFile << ", " ;
          argCourant._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
          argCourant.next () ;
        }
        ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
                  << cStringWithSigned (mMethodName.lineNumber ())
                  << ")) ;\n" ;
      }else if (dynamic_cast <cPtr_typeCppThisInCategoryName *> (varInExpression->mCppVarName (HERE)) != NULL) {
        cPtr_typeCppThisInCategoryName * p = dynamic_cast <cPtr_typeCppThisInCategoryName *> (varInExpression->mCppVarName (HERE)) ;
        handled = true ;
        ioCppFile << "operand_" << cStringWithSigned (p->mVariableLocation.location ()) << "->method_" << mMethodName << " (inLexique"  ;
        GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
        while (argCourant.hasCurrentObject ()) {
          ioCppFile << ", " ;
          argCourant._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
          argCourant.next () ;
        }
        ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
                  << cStringWithSigned (mMethodName.lineNumber ())
                  << ")) ;\n" ;
      }
    }
    if ((! handled) && (mCategoryMethodClassBaseName.string ().length () > 0)) {
      C_String var ; var << "temp_" << cStringWithSigned (mMethodName.location ()) ;
      C_String staticClassName ; mExpressionType (HERE)->generateCppClassName (staticClassName) ;
      ioCppFile << "const " << staticClassName << " " << var << " = " ;
      mExpression (HERE)->generateExpression (ioCppFile) ;
      ioCppFile << " ;\n"
                   "if (" << var << ".isBuilt ()) {\n"
                   "  typeCategoryMethod__" << mCategoryMethodClassBaseName
                << "__" << mMethodName << " method = findCategoryMethod__"
                << mCategoryMethodClassBaseName << "__" << mMethodName
                << " (temp_" << cStringWithSigned (mMethodName.location ()) << ".galgasObjectRunTimeInfo ()) ;\n"
                   "  if (method != NULL) {\n"
                   "    method (inLexique, " << var << " (HERE)"  ;
      GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
      while (argCourant.hasCurrentObject ()) {
        ioCppFile << ", " ;
        argCourant._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
        argCourant.next () ;
      }
      ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
                << cStringWithSigned (mMethodName.lineNumber ())
                << ")) ;\n"
                   "  }\n"
                   "}\n" ;
    }else if (! handled) {
      C_String var ; var << "temp_" << cStringWithSigned (mMethodName.location ()) ;
      ioCppFile << "const " ;
      mExpressionType (HERE)->generateCppClassName (ioCppFile) ;
      ioCppFile << " " << var << " = " ;
      mExpression (HERE)->generateExpression (ioCppFile) ;
      ioCppFile << " ;\n"
                   "if (" << var << ".isBuilt ()) {\n"
                   "  " << var << " (HERE)->method_"
                << mMethodName << " (inLexique"  ;
      GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
      while (argCourant.hasCurrentObject ()) {
        ioCppFile << ", " ;
        argCourant._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
        argCourant.next () ;
      }
      ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
                << cStringWithSigned (mMethodName.lineNumber ())
                << ")) ;\n"
                   "}\n" ;
    }
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeMethodCallInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMethodCallInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = false ;
  GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
  while ((! isUsed) && argCourant.hasCurrentObject ()) {
    isUsed = argCourant._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    argCourant.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMethodCallInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool used = mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
  while ((! used) && argCourant.hasCurrentObject ()) {
    used = argCourant._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeModifierCallInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {

  if (inGenerateSemanticInstructions) {
    aNomCppVariable (HERE)->generateCplusPlusName (ioCppFile) ;
    GGS_lstringlist::cEnumerator structAttribute (mStructAttributeList, true) ;
    while (structAttribute.hasCurrentObject ()) {
      ioCppFile << "." << structAttribute._mValue (HERE) ;
      structAttribute.next () ;
    }
    ioCppFile << ".modifier_" << aNomMethodeSimple << " (inLexique"  ;
    GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
    while (argCourant.hasCurrentObject ()) {
      ioCppFile << ", " ;
      argCourant._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
      argCourant.next () ;
    }
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << cStringWithSigned (aNomMethodeSimple.lineNumber ())
              << ")) ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeModifierCallInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeModifierCallInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = false ;
  GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
  while ((! isUsed) && argCourant.hasCurrentObject ()) {
    isUsed = argCourant._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    argCourant.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeModifierCallInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool used = aNomCppVariable.isSameObjectAs (inArgumentCppName) ;
  GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
  while ((! used) && argCourant.hasCurrentObject ()) {
    used = argCourant._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeInstructionAppelMethodeListe::
generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    aNomCppAttribut (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".method_" << aMethodeDeListe << " (inLexique" ;
    GGS_typeCplusPlusNameList::cEnumerator current (aListeNomsCppArguments, true) ;
    while (current.hasCurrentObject ()) {
      ioCppFile << ",  " ;
      current._mCppName (HERE) (HERE)->generateCplusPlusName (ioCppFile) ;
      current.next () ;
    }
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionAppelMethodeListe::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionAppelMethodeListe::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = false ;
  GGS_typeCplusPlusNameList::cEnumerator argCourant (aListeNomsCppArguments, true) ;
  while ((! isUsed) && argCourant.hasCurrentObject ()) {
    isUsed = argCourant._mCppName (HERE) (HERE)->isCurrentObject () ;
    argCourant.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionAppelMethodeListe::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = aNomCppAttribut.isSameObjectAs (inArgumentCppName) ;
  GGS_typeCplusPlusNameList::cEnumerator argCourant (aListeNomsCppArguments, true) ;
  while ((! isUsed) && argCourant.hasCurrentObject ()) {
    isUsed = argCourant._mCppName (HERE).isSameObjectAs (inArgumentCppName) ;
    argCourant.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_C_grammarInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    if (mSourceIsFile.boolValue ()) {
      ioCppFile << "const GGS_string _depExtension = " ;
      mDependencyFileExtension (HERE)->generateExpression (ioCppFile) ;
      ioCppFile << " ;\n"
                   "const GGS_string _depPath = " ;
      mDependancyFilePath (HERE)->generateExpression (ioCppFile) ;
      ioCppFile << " ;\n"
                   "if (_depExtension.isBuilt () && _depPath.isBuilt ()) {\n  " ;
    }
    ioCppFile << mGrammarName << "::"
              << (mSourceIsFile.boolValue () ? "_performSourceFileParsing_" : "_performSourceStringParsing_")
              << mAltSymbol
              << " (inLexique"
                 ",\n                                " ;
    if (mSourceIsFile.boolValue ()) {
      ioCppFile << "_depExtension.string (),\n                                "
                   "_depPath.string (),\n                                " ;
    }
    if (dynamic_cast <cPtr_typeNullName *> (mSentStringName (HERE)) != NULL) {
      ioCppFile << "NULL" ;
    }else{
      ioCppFile << "& " ;
      mSentStringName (HERE)->generateCplusPlusName (ioCppFile) ;
    }
    ioCppFile << ",\n                                " ;
    mSourceExpression (HERE)->generateExpression (ioCppFile) ;
    GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
    while (argCourant.hasCurrentObject ()) {
      ioCppFile << ",\n                                " ;
      argCourant._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
      argCourant.next () ;
    }
    ioCppFile << "\n                                "
                 "COMMA_SOURCE_FILE_AT_LINE ("
              << cStringWithSigned (mGrammarName.lineNumber ())
              << ")) ;\n" ; 
    if (mSourceIsFile.boolValue ()) {
      ioCppFile << "}\n" ;
    }
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_grammarInstruction::
isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  return inGenerateSemanticInstructions ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_grammarInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = mSourceExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
  while ((! isUsed) && argCourant.hasCurrentObject ()) {
    isUsed = argCourant._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_grammarInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = mSourceExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
  GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
  while ((! isUsed) && argCourant.hasCurrentObject ()) {
    isUsed = argCourant._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    argCourant.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeSendInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "inLexique.appendToSentString (" ;
    mExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << ") ;\n" ; 
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeSendInstruction::
isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  return inGenerateSemanticInstructions ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeSendInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
            const bool /* inGenerateSemanticInstructions */) const {
  return mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeSendInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeRoutineCallInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    sint16 nombreArgumentsTestes = 0 ;
    if (mIsExternActionCall.boolValue ()) {
      GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
      GGS_L_EXsignature::cEnumerator typeArgumentCourant (mFormalParameterList, true) ;
      while (typeArgumentCourant.hasCurrentObject ()) {
        if (typeArgumentCourant._mFormalArgumentPassingMode (HERE).enumValue () != GGS_EXformalArgumentPassingMode::enum_argumentOut) {
          if (nombreArgumentsTestes == 0) {
            ioCppFile << "if (" ;
          }else{
            ioCppFile << " &&\n    " ;
          }
          argCourant._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
          ioCppFile << ".isBuilt ()" ;
          nombreArgumentsTestes ++ ;
        }
        typeArgumentCourant.next () ;
        argCourant.next () ;
      }
      if (nombreArgumentsTestes > 0) {
        ioCppFile << ") {\n  " ;
      }
    }
    ioCppFile << "::routine_" << mRoutineName << " (inLexique" ;
    GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
    while (argCourant.hasCurrentObject ()) {
      ioCppFile << ",  " ;
      argCourant._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
      argCourant.next () ;
    }
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << cStringWithSigned (mRoutineName.lineNumber ())
              << ")) ;\n" ; 
    if (nombreArgumentsTestes > 0) {
      ioCppFile << "}\n" ;
    }
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeRoutineCallInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeRoutineCallInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = false ;
  GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
  while ((! isUsed) && argCourant.hasCurrentObject ()) {
    isUsed = argCourant._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeRoutineCallInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = false ;
  GGS_typeExpressionList::cEnumerator argCourant (mExpressionsList, true) ;
  while ((! isUsed) && argCourant.hasCurrentObject ()) {
    isUsed = argCourant._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    argCourant.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeWithInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & inTargetFileName,
                     sint32 & ioPrototypeIndex,
                     const bool inGenerateDebug,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "elementOf_GGS_" << mMapTypeName << " * operand_" << cStringWithSigned (mInstructionLocation.location ())
              << " = (elementOf_GGS_" << mMapTypeName << " *) " ;
    mAccessedVariableCppName (HERE)->generateCplusPlusName (ioCppFile) ;
    GGS_lstringlist::cEnumerator structAttribute (mStructAttributeList, true) ;
    while (structAttribute.hasCurrentObject ()) {
      ioCppFile << "." << structAttribute._mValue (HERE) ;
      structAttribute.next () ;
    }
    if (mErrorMessageName.string ().length () > 0) {
      ioCppFile << ".searchForWithInstruction (inLexique, " ;
      mKeyExpression (HERE)->generateExpression (ioCppFile) ;
      ioCppFile << ", GGS_" << mMapTypeName << "::kSearchMessage_" << mErrorMessageName << " COMMA_SOURCE_FILE_AT_LINE ("
                << cStringWithSigned (mInstructionLocation.lineNumber ())
                << ")) ;\n" ;
    }else{
      ioCppFile << ".searchForTolerantWithInstruction (" ;
      mKeyExpression (HERE)->generateExpression (ioCppFile) ;
      ioCppFile << ") ;\n" ;
    }
    ioCppFile << "if (NULL != operand_" << cStringWithSigned (mInstructionLocation.location ()) << ") {\n" ;
    generateInstructionListForList (mDoBranchInstructionList, ioCppFile, inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, true) ;
    if (mElseBranchInstructionList.count () > 0) {
      ioCppFile << "}else{\n" ;
      generateInstructionListForList (mElseBranchInstructionList, ioCppFile, inTargetFileName, ioPrototypeIndex,
                                      inGenerateDebug, true) ;
    }
    ioCppFile << "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeWithInstruction::
isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  bool isUsed = mErrorMessageName.string ().length () > 0 ;
  if (! isUsed) {
    isUsed = isLexiqueFormalArgumentUsedForList (mDoBranchInstructionList, inGenerateSemanticInstructions) ;
  }
  if (! isUsed) {
    isUsed = isLexiqueFormalArgumentUsedForList (mElseBranchInstructionList, inGenerateSemanticInstructions) ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeWithInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool inGenerateSemanticInstructions) const {
  return mAccessedVariableCppName.isSameObjectAs (inArgumentCppName)
   || mKeyExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
   || formalArgumentIsUsedForList (mDoBranchInstructionList, inArgumentCppName, inGenerateSemanticInstructions)
   || formalArgumentIsUsedForList (mElseBranchInstructionList, inArgumentCppName, inGenerateSemanticInstructions) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeWithInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return mKeyExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
   || formalCurrentObjectArgumentIsUsedForList (mDoBranchInstructionList)
   || formalCurrentObjectArgumentIsUsedForList (mElseBranchInstructionList) ;
}

//---------------------------------------------------------------------------*
