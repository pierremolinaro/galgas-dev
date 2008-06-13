//---------------------------------------------------------------------------*
//                                                                           *
//  Generate category methods                                                *
//                                                                           *
//  Copyright (C) 2008, ..., 2008 Pierre Molinaro.                           *
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
  #pragma mark Category Method
#endif

//---------------------------------------------------------------------------*

void cPtr_categoryMethodToImplement::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_categoryMethodToImplement::
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_categoryMethodToImplement::
generateHdeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

bool cPtr_categoryMethodToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_categoryMethodToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile*/,
                             const C_String & /* inTargetFileName*/,
                             sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_categoryMethodToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & inTargetFileName,
                                sint32 & ioPrototypeIndex,
                                const bool inGenerateDebug) const {
  inCppFile.writeCppTitleComment (C_String ("Category method '@") + mClassName + "." + mMethodName + "'") ;
  inCppFile << "/* static */ void\n"
               "category_method__" << mClassName << "__" << mMethodName
            << " (C_Compiler &" ;
  if (isLexiqueFormalArgumentUsedForList (mInstructionList, true)) {
    inCppFile << " _inLexique" ;
  }
  inCppFile << ",\n                                "
               "const cPtr_" << mClassName << " * operand_" << mMagicNumber.location () ;
  GGS_typeListeTypesEtNomsArgMethode::cElement * currentArgument = aListeTypeEtNomsArguments.firstObject () ;
  while (currentArgument != NULL) {
    inCppFile << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inCppFile) ;
    const bool variableUtilisee = formalArgumentIsUsedForList (mInstructionList, currentArgument->mCppName, true) ;
    inCppFile << ' ' ;
    if (! variableUtilisee) {
      inCppFile << "/* " ;
    }
    currentArgument->mCppName (HERE)->generateCplusPlusName (inCppFile) ;
    if (! variableUtilisee) {
      inCppFile << " */" ;
    }
    currentArgument = currentArgument->nextObject () ;
  }
  inCppFile << ") {\n"
               "  if (operand_" << mMagicNumber.location () << " != NULL) {\n" ;
  inCppFile.incIndentation (+2) ;
  generateInstructionListForList (mInstructionList, inCppFile,
                                  inTargetFileName, ioPrototypeIndex,
                                  inGenerateDebug, true) ;
  inCppFile.incIndentation (-2) ;
  inCppFile << "  }\n"
               "}\n\n" ;
}

//---------------------------------------------------------------------------*
