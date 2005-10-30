//---------------------------------------------------------------------------*
//                                                                           *
//  Generate call instructions                                               *
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
#include "semantics_semantics.h"

//---------------------------------------------------------------------------*

void cPtr_typeReaderCallInstruction
::generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inLexiqueClassName */,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {

  if (inGenerateSemanticInstructions) {
    bool ifGenerated = false ;
    const enumVariableKind variableKind = aNomCppVariable ()->getVariableKind () ;
    if (variableKind == k_super_constant) {
      ioCppFile << "inherited::" ;
    }else if (variableKind == k_other_variable) {
      ifGenerated = true ;
      ioCppFile << "if (" ;
      aNomCppVariable ()->generateCplusPlusName (ioCppFile) ;
      ioCppFile << ".isBuilt ()) {\n  " ;
      aNomCppVariable ()->generateCplusPlusName (ioCppFile) ;
      ioCppFile << " ()->" ;
    }  
    ioCppFile << "methode_" << aNomMethodeSimple << " (lexique_var_"  ;
    GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
    while (argCourant != NULL) {
      macroValidPointer (argCourant) ;
      ioCppFile << ", " ;
      argCourant->mExpression ()->generateExpression (ioCppFile) ;
      argCourant = argCourant->nextObject () ;
    }
    ioCppFile << ") ;\n" ;
    if (ifGenerated) {
      ioCppFile << "}\n" ;
    }
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeReaderCallInstruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeReaderCallInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool import = aNomCppVariable.isEqualTo (inArgumentCppName) ;
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
  while ((! import) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    import = argCourant->mExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant = argCourant->nextObject () ;
  }
  return import ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeModifierCallInstruction
::generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inLexiqueClassName */,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {

  if (inGenerateSemanticInstructions) {
      aNomCppVariable ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".methode_" << aNomMethodeSimple << " (lexique_var_"  ;
    GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
    while (argCourant != NULL) {
      macroValidPointer (argCourant) ;
      ioCppFile << ", " ;
      argCourant->mExpression ()->generateExpression (ioCppFile) ;
      argCourant = argCourant->nextObject () ;
    }
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeModifierCallInstruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeModifierCallInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool import = aNomCppVariable.isEqualTo (inArgumentCppName) ;
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
  while ((! import) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    import = argCourant->mExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant = argCourant->nextObject () ;
  }
  return import ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeInstructionAppelMethodeListe
::generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inLexiqueClassName */,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    aNomCppAttribut ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".methode_" << aMethodeDeListe << " (lexique_var_" ;
    GGS_typeCplusPlusNameList::element_type * current = aListeNomsCppArguments.firstObject () ;
    while (current != NULL) {
      macroValidPointer (current) ;
      ioCppFile << ",  " ;
      current->mCppName ()->generateCplusPlusName (ioCppFile) ;
      current = current->nextObject () ;
    }
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionAppelMethodeListe
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionAppelMethodeListe
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
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

void cPtr_C_grammarInstruction
::generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & inLexiqueClassName,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "{ " << inLexiqueClassName << " scanner_ (lexique_var_.galgas_IO_Ptr ()) ;\n"
                 "  " << mGrammarName << " grammar_ ;\n"
                 "  C_String sourceFileName ;\n"
                 "  if ((" ;
    mSourceFileCppName ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".length () > 0) && (" ;
    mSourceFileCppName ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << " (0 COMMA_HERE) != '/')) {\n"
                 "    sourceFileName << lexique_var_.sourceFileName ().stringByDeletingLastPathComponent () << '/' ;\n"
                 "  }\n"
                 "  sourceFileName << " ;
    mSourceFileCppName ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << " ;\n"
                 "  try{\n"
                 "    scanner_.resetAndLoadSourceFromFile (sourceFileName) ;\n"
                 "    grammar_.startParsing_" << mAltSymbol
              << " (scanner_" ;
    GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
    while (argCourant != NULL) {
      macroValidPointer (argCourant) ;
      ioCppFile << ",\n                                " ;
      argCourant->mExpression ()->generateExpression (ioCppFile) ;
      argCourant = argCourant->nextObject () ;
    }
    ioCppFile << ") ;\n"
                 "  }catch (const C_TextReadException & inFileReadError) {\n"
                 "    " ;
    mSourceFileCppName ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".signalSemanticError (lexique_var_, inFileReadError.what ()) ;\n"
                 "  }\n"
                 "}\n" ; 
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_grammarInstruction
::isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  return inGenerateSemanticInstructions ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_grammarInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
   bool isUsed = mSourceFileCppName.isEqualTo (inArgumentCppName) ;
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
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

void cPtr_typeInstructionAppelActionExterne
::generateInstruction (AC_OutputStream & ioCppFile,
                       const  C_String & /* inLexiqueClassName */,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    GGS_L_signature::element_type * typeArgumentCourant = aListeTypesParametresFormels.firstObject () ;
    GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
    sint16 nombreArgumentsTestes = 0 ;
    while (typeArgumentCourant != NULL) {
      macroValidPointer (typeArgumentCourant) ;
      if (typeArgumentCourant->mFormalArgumentPassingMode.enumValue () != GGS_formalArgumentPassingMode::enum_argumentOut) {
        if (nombreArgumentsTestes == 0) {
          ioCppFile << "if (" ;
        }else{
          ioCppFile << " &&\n    " ;
        }
        argCourant->mExpression ()->generateExpression (ioCppFile) ;
        ioCppFile << ".isBuilt ()" ;
        nombreArgumentsTestes ++ ;
      }
      typeArgumentCourant = typeArgumentCourant->nextObject () ;
      argCourant = argCourant->nextObject () ;
    }
    if (nombreArgumentsTestes > 0) {
      ioCppFile << ") {\n  " ;
    }
    ioCppFile << "::" << aNomAction << " (lexique_var_" ;
    argCourant = mExpressionsList.firstObject () ;
    while (argCourant != NULL) {
      macroValidPointer (argCourant) ;
      ioCppFile << ",  " ;
      argCourant->mExpression ()->generateExpression (ioCppFile) ;
      argCourant = argCourant->nextObject () ;
    }
    ioCppFile << ") ;\n" ; 
    if (nombreArgumentsTestes > 0) {
      ioCppFile << "}\n" ;
    }
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionAppelActionExterne
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionAppelActionExterne
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = false ;
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
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

void cPtr_typeRoutineCallInstruction
::generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inLexiqueClassName */,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "::routine_" << aNomRoutine << " (lexique_var_" ;
    GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
    while (argCourant != NULL) {
      macroValidPointer (argCourant) ;
      ioCppFile << ",  " ;
      argCourant->mExpression ()->generateExpression (ioCppFile) ;
      argCourant = argCourant->nextObject () ;
    }
    ioCppFile << ") ;\n" ; 
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeRoutineCallInstruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeRoutineCallInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = false ;
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant = argCourant->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
