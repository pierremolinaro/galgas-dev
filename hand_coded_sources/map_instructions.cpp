//---------------------------------------------------------------------------*
//                                                                           *
//  Generate map instructions                                                *
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

#include "semantics_semantics.h"

//---------------------------------------------------------------------------*

void cPtr_typeMapSearchInstruction
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & /* inLexiqueClassName */,
                       const C_string & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << aNomMethodeRecherche << '_' << aNomTypeTable
              << " (lexique_var_,\n                                " ;
    aNomVariableTable ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ",\n                                " ;
    aNomVariableClef ()->generateCplusPlusName (ioCppFile) ;
    GGS_typeCplusPlusNameList::element_type * currentVariable = mAllVariablesList.getFirstItem () ;
    while (currentVariable != NULL) {
      macroValidPointer (currentVariable) ;
      ioCppFile << ",\n                                " ;
      currentVariable->mCppName ()->generateVariableAddress (ioCppFile) ;
      currentVariable = currentVariable->getNextItem () ;
    }
    ioCppFile << ",\n                                " ;
    mOptionalIndexVariable ()->generateVariableAddress (ioCppFile) ;
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapSearchInstruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true  ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapSearchInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = aNomVariableTable.isEqualTo (inArgumentCppName)
        || aNomVariableClef.isEqualTo (inArgumentCppName)
        || mOptionalIndexVariable.isEqualTo (inArgumentCppName) ;
  GGS_typeCplusPlusNameList::element_type * affectationCourante = mAllVariablesList.getFirstItem () ;
  while ((! isUsed) && (affectationCourante != NULL)) {
    macroValidPointer (affectationCourante) ;
    isUsed = affectationCourante->mCppName.isEqualTo (inArgumentCppName) ;
    affectationCourante = affectationCourante->getNextItem () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeMapInsertInstruction
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & /* inLexiqueClassName */,
                       const C_string & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << aNomMethodeInsertion << "_"
             << aNomTypeTable << " (lexique_var_,\n                                " ;
    aNomVariableTable ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ",\n                                " ;
    aNomVariableClef ()->generateCplusPlusName (ioCppFile) ;
    GGS_typeCplusPlusNameList::element_type * parametreCourant = aListeParametresEffectifs.getFirstItem () ;
    while (parametreCourant != NULL) {
      macroValidPointer (parametreCourant) ;
      ioCppFile << ",\n                                " ;
      parametreCourant->mCppName ()->generateCplusPlusName (ioCppFile) ;
      parametreCourant = parametreCourant->getNextItem () ;
    }
    ioCppFile << ",\n                                " ;
    mOptionalIndexVariable ()->generateVariableAddress (ioCppFile) ;
    ioCppFile << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapInsertInstruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true  ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeMapInsertInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = (aNomVariableTable.isEqualTo (inArgumentCppName))
         || (aNomVariableClef.isEqualTo (inArgumentCppName)) ;
  GGS_typeCplusPlusNameList::element_type * argCourant = aListeParametresEffectifs.getFirstItem () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mCppName.isEqualTo (inArgumentCppName) ;
    argCourant = argCourant->getNextItem () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
