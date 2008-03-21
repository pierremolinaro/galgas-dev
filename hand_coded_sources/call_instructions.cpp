//---------------------------------------------------------------------------*
//                                                                           *
//  Generate call instructions                                               *
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

#include "utilities/MF_MemoryControl.h"
#include "semantics_semantics.h"

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

void cPtr_C_treewalkingInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "_walk_throught_" << mTreeWalkingComponentName << " (_inLexique, " ;
    mModelVariableCppName (HERE)->generateCplusPlusName (ioCppFile) ;
    GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
    while (argCourant != NULL) {
      macroValidPointer (argCourant) ;
      ioCppFile << ", " ;
      argCourant->mExpression (HERE)->generateExpression (ioCppFile) ;
      argCourant = argCourant->nextObject () ;
    }
    ioCppFile << ") ;\n" ; 
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_treewalkingInstruction::
isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  return inGenerateSemanticInstructions ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_treewalkingInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = mModelVariableCppName.isSameObjectAs (inArgumentCppName) ;
  GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant = argCourant->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_treewalkingInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = false ;
  GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    argCourant = argCourant->nextObject () ;
  }
  return isUsed ;
}

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
    ioCppFile << "GGS_" << mTypeName << "::class_method_" << mTypeMethodName << " (_inLexique"  ;
    GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
    while (argCourant != NULL) {
      macroValidPointer (argCourant) ;
      ioCppFile << ", " ;
      argCourant->mExpression (HERE)->generateExpression (ioCppFile) ;
      argCourant = argCourant->nextObject () ;
    }
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << mTypeMethodName.lineNumber ()
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
  GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
  while ((! used) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    used = argCourant->mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant = argCourant->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeCallOfTypeMethodInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = false ;
  GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    argCourant = argCourant->nextObject () ;
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
    cPtr_typeCppInheritedName * inheritedAccess = dynamic_cast <cPtr_typeCppInheritedName *> (mExpression (HERE)) ;
    if (inheritedAccess != NULL) {
      ioCppFile << "inherited::" ;
    }else{
      C_String var ; var << "_temp_" << aNomMethodeSimple.location () ;
      ioCppFile << "const " ;
      mExpressionType (HERE)->generateCppClassName (ioCppFile) ;
      ioCppFile << " " << var << " = " ;
      mExpression (HERE)->generateExpression (ioCppFile) ;
      ioCppFile << " ;\n"
                   "if (" << var << "._isBuilt ()) {\n"
                   "  " << var << " (HERE)->method_" ;
    }
    ioCppFile << aNomMethodeSimple << " (_inLexique"  ;
    GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
    while (argCourant != NULL) {
      macroValidPointer (argCourant) ;
      ioCppFile << ", " ;
      argCourant->mExpression (HERE)->generateExpression (ioCppFile) ;
      argCourant = argCourant->nextObject () ;
    }
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << aNomMethodeSimple.lineNumber ()
              << ")) ;\n" ;
    if (inheritedAccess == NULL) {
      ioCppFile << "}\n" ;
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
  GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    argCourant = argCourant->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMethodCallInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool used = mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
  while ((! used) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    used = argCourant->mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant = argCourant->nextObject () ;
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
    GGS_lstringlist::cElement * structAttribute = mStructAttributeList.firstObject () ;
    while (structAttribute != NULL) {
      macroValidPointer (structAttribute) ;
      ioCppFile << "." << structAttribute->mValue ;
      structAttribute = structAttribute->nextObject () ;
    }
    ioCppFile << ".modifier_" << aNomMethodeSimple << " (_inLexique"  ;
    GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
    while (argCourant != NULL) {
      macroValidPointer (argCourant) ;
      ioCppFile << ", " ;
      argCourant->mExpression (HERE)->generateExpression (ioCppFile) ;
      argCourant = argCourant->nextObject () ;
    }
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << aNomMethodeSimple.lineNumber ()
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
  GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    argCourant = argCourant->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeModifierCallInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool used = aNomCppVariable.isSameObjectAs (inArgumentCppName) ;
  GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
  while ((! used) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    used = argCourant->mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant = argCourant->nextObject () ;
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
    ioCppFile << ".method_" << aMethodeDeListe << " (_inLexique" ;
    GGS_typeCplusPlusNameList::cElement * current = aListeNomsCppArguments.firstObject () ;
    while (current != NULL) {
      macroValidPointer (current) ;
      ioCppFile << ",  " ;
      current->mCppName (HERE)->generateCplusPlusName (ioCppFile) ;
      current = current->nextObject () ;
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
  GGS_typeCplusPlusNameList::cElement * argCourant = aListeNomsCppArguments.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mCppName (HERE)->isCurrentObject () ;
    argCourant = argCourant->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionAppelMethodeListe::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = aNomCppAttribut.isSameObjectAs (inArgumentCppName) ;
  GGS_typeCplusPlusNameList::cElement * argCourant = aListeNomsCppArguments.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mCppName.isSameObjectAs (inArgumentCppName) ;
    argCourant = argCourant->nextObject () ;
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
    if (mMetamodelClassVariableName.length () > 0) {
      ioCppFile << "var_cas_" << mMetamodelClassVariableName << " = " ;
    }
    ioCppFile << mGrammarName << "::"
              << (mSourceIsFile.boolValue () ? "_performSourceFileParsing_" : "_performSourceStringParsing_")
              << mAltSymbol
              << " (_inLexique"
                 ",\n                                " ;
    if (dynamic_cast <cPtr_typeNullName *> (mSentStringName (HERE)) != NULL) {
      ioCppFile << "NULL" ;
    }else{
      ioCppFile << "& " ;
      mSentStringName (HERE)->generateCplusPlusName (ioCppFile) ;
    }
    ioCppFile << ",\n                                " ;
    mSourceExpression (HERE)->generateExpression (ioCppFile) ;
    GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
    while (argCourant != NULL) {
      macroValidPointer (argCourant) ;
      ioCppFile << ",\n                                " ;
      argCourant->mExpression (HERE)->generateExpression (ioCppFile) ;
      argCourant = argCourant->nextObject () ;
    }
    ioCppFile << "\n                                "
                 "COMMA_SOURCE_FILE_AT_LINE ("
              << mGrammarName.lineNumber ()
              << ")) ;\n" ; 
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
  GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant = argCourant->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_grammarInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = mSourceExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
  GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    argCourant = argCourant->nextObject () ;
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
    ioCppFile << "_inLexique.appendToSentString (" ;
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
      GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
      GGS_L_EXsignature::cElement * typeArgumentCourant = mFormalParameterList.firstObject () ;
      while (typeArgumentCourant != NULL) {
        macroValidPointer (typeArgumentCourant) ;
        if (typeArgumentCourant->mFormalArgumentPassingMode.enumValue () != GGS_formalArgumentPassingMode::enum_argumentOut) {
          if (nombreArgumentsTestes == 0) {
            ioCppFile << "if (" ;
          }else{
            ioCppFile << " &&\n    " ;
          }
          argCourant->mExpression (HERE)->generateExpression (ioCppFile) ;
          ioCppFile << "._isBuilt ()" ;
          nombreArgumentsTestes ++ ;
        }
        typeArgumentCourant = typeArgumentCourant->nextObject () ;
        argCourant = argCourant->nextObject () ;
      }
      if (nombreArgumentsTestes > 0) {
        ioCppFile << ") {\n  " ;
      }
    }
    ioCppFile << "::routine_" << mRoutineName << " (_inLexique" ;
    GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
    while (argCourant != NULL) {
      macroValidPointer (argCourant) ;
      ioCppFile << ",  " ;
      argCourant->mExpression (HERE)->generateExpression (ioCppFile) ;
      argCourant = argCourant->nextObject () ;
    }
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << mRoutineName.lineNumber ()
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
  GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant = argCourant->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeRoutineCallInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool isUsed = false ;
  GGS_typeExpressionList::cElement * argCourant = mExpressionsList.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    argCourant = argCourant->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
