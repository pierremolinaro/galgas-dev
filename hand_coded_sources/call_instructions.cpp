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
    GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
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
  bool isUsed = mModelVariableCppName.isEqualTo (inArgumentCppName) ;
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
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
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
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
    GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
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
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
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
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
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
    bool ifGenerated = false ;
    const enumVariableKind variableKind = aNomCppVariable (HERE)->getVariableKind () ;
    if (variableKind == k_super_constant) {
      ioCppFile << "inherited::" ;
    }else if (variableKind == k_other_variable) {
      ifGenerated = true ;
      ioCppFile << "if (" ;
      aNomCppVariable (HERE)->generateCplusPlusName (ioCppFile) ;
      ioCppFile << "._isBuilt (HERE)) {\n  " ;
      aNomCppVariable (HERE)->generateCplusPlusName (ioCppFile) ;
      ioCppFile << " (HERE)->" ;
    }  
    ioCppFile << "method_" << aNomMethodeSimple << " (_inLexique"  ;
    GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
    while (argCourant != NULL) {
      macroValidPointer (argCourant) ;
      ioCppFile << ", " ;
      argCourant->mExpression (HERE)->generateExpression (ioCppFile) ;
      argCourant = argCourant->nextObject () ;
    }
    ioCppFile << " COMMA_SOURCE_FILE_AT_LINE ("
              << aNomMethodeSimple.lineNumber ()
              << ")) ;\n" ;
    if (ifGenerated) {
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
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
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
  bool used = aNomCppVariable.isEqualTo (inArgumentCppName) ;
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
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
    ioCppFile << ".modifier_" << aNomMethodeSimple << " (_inLexique"  ;
    GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
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
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
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
  bool used = aNomCppVariable.isEqualTo (inArgumentCppName) ;
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
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
    GGS_typeCplusPlusNameList::element_type * current = aListeNomsCppArguments.firstObject () ;
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
  GGS_typeCplusPlusNameList::element_type * argCourant = aListeNomsCppArguments.firstObject () ;
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
  bool isUsed = aNomCppAttribut.isEqualTo (inArgumentCppName) ;
  GGS_typeCplusPlusNameList::element_type * argCourant = aListeNomsCppArguments.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mCppName.isEqualTo (inArgumentCppName) ;
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
    ioCppFile << "{ " << mLexiqueClassName << " * scanner_ = NULL ;\n"
                 "  const C_String sourceFileName = _inLexique.sourceFileName ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (" ;
    mSourceFileCppName (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ") ;\n"
                 "  macroMyNew (scanner_, " << mLexiqueClassName << " (_inLexique.ioParametersPtr (), sourceFileName COMMA_HERE)) ;\n"
                 "  scanner_->mPerformGeneration = _inLexique.mPerformGeneration ;\n"
                 "  " << mGrammarName << " grammar_ ;\n"
                 "  try{\n"
                 "    " ;
    if (mMetamodelClassVariableName.length () > 0) {
      ioCppFile << "var_cas_" << mMetamodelClassVariableName << " = " ;
    }
    ioCppFile << "grammar_.startParsing_" << mAltSymbol
              << " (*scanner_" ;
    GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
    while (argCourant != NULL) {
      macroValidPointer (argCourant) ;
      ioCppFile << ",\n                                " ;
      argCourant->mExpression (HERE)->generateExpression (ioCppFile) ;
      argCourant = argCourant->nextObject () ;
    }
    ioCppFile << ") ;\n"
                 "  }catch (const C_TextReadException & inFileReadError) {\n"
                 "    " ;
    mSourceFileCppName (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".signalSemanticError (_inLexique, inFileReadError.what () COMMA_SOURCE_FILE_AT_LINE ("
              << mGrammarName.lineNumber ()
              << ")) ;\n"
                 "  }\n"
                 "  macroDetachPointer (scanner_, " << mLexiqueClassName << ") ;\n"
                 "}\n" ; 
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
   bool isUsed = mSourceFileCppName.isEqualTo (inArgumentCppName) ;
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
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
  bool isUsed = false ;
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
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

void cPtr_typeRoutineCallInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    sint16 nombreArgumentsTestes = 0 ;
    if (mIsExternActionCall.boolValue ()) {
      GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
      GGS_L_EXsignature::element_type * typeArgumentCourant = mFormalParameterList.firstObject () ;
      while (typeArgumentCourant != NULL) {
        macroValidPointer (typeArgumentCourant) ;
        if (typeArgumentCourant->mFormalArgumentPassingMode.enumValue () != GGS_formalArgumentPassingMode::enum_argumentOut) {
          if (nombreArgumentsTestes == 0) {
            ioCppFile << "if (" ;
          }else{
            ioCppFile << " &&\n    " ;
          }
          argCourant->mExpression (HERE)->generateExpression (ioCppFile) ;
          ioCppFile << "._isBuilt (HERE)" ;
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
    GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
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
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
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
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    argCourant = argCourant->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
