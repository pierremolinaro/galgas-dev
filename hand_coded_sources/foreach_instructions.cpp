//---------------------------------------------------------------------------*
//                                                                           *
//  Generate 'foreach' instructions                                          *
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
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

void cPtr_typeForeachInstruction
::generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inLexiqueClassName */,
                       const C_String & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    GGS_foreachEnumerationList::element_type * enumeratedVariable = mForeachEnumerationList.firstObject () ;
    while (enumeratedVariable != NULL) {
      macroValidPointer (enumeratedVariable) ;
      ioCppFile << "GGS_" << enumeratedVariable->mCppTypeName.string ()
                << "::element_type * operand_" << enumeratedVariable->mLocationOffset.currentLocation () << " = " ;
      enumeratedVariable->mCppEnumeratedVariableName ()->generateCplusPlusName (ioCppFile) ;
      ioCppFile << ".firstObject () ;\n" ;
      enumeratedVariable = enumeratedVariable->nextObject () ;
    }
    enumeratedVariable = mForeachEnumerationList.firstObject () ;
    macroValidPointer (enumeratedVariable) ;
    ioCppFile <<  "while ((operand_" <<enumeratedVariable->mLocationOffset.currentLocation () << " != NULL)" ;
    enumeratedVariable = enumeratedVariable->nextObject () ;
    while (enumeratedVariable != NULL) {
      macroValidPointer (enumeratedVariable) ;
      ioCppFile <<  "\n    && (operand_" <<enumeratedVariable->mLocationOffset.currentLocation () << " != NULL)" ;
      enumeratedVariable = enumeratedVariable->nextObject () ;
    }
 //--- While expression
    if ((dynamic_cast <cPtr_typeTrueBool *> (mWhileExpression ())) == NULL) {
      ioCppFile <<  "\n    && (" ;
      mWhileExpression ()->generateExpression (ioCppFile) ;
      ioCppFile << ".isBuiltAndTrue ())" ;    
    }
    ioCppFile << ") {\n" ;
    enumeratedVariable = mForeachEnumerationList.firstObject () ;
    while (enumeratedVariable != NULL) {
      macroValidPointer (enumeratedVariable) ;
      ioCppFile << "  macroValidPointer (operand_" << enumeratedVariable->mLocationOffset.currentLocation () << ") ;\n" ;
      enumeratedVariable = enumeratedVariable->nextObject () ;
    }
    C_String inutilise ;
    generateInstructionListForList (mInstructionsList, ioCppFile, inutilise, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
    enumeratedVariable = mForeachEnumerationList.firstObject () ;
    while (enumeratedVariable != NULL) {
      macroValidPointer (enumeratedVariable) ;
      ioCppFile << "  operand_" << enumeratedVariable->mLocationOffset.currentLocation () << " = operand_"
                << enumeratedVariable->mLocationOffset.currentLocation () << "->nextObject () ;\n" ;
      enumeratedVariable = enumeratedVariable->nextObject () ;
    }
    ioCppFile << "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeForeachInstruction
::isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  return isLexiqueFormalArgumentUsedForList (mInstructionsList, inGenerateSemanticInstructions)
    || mWhileExpression ()->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeForeachInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  bool used = formalArgumentIsUsedForList (mInstructionsList, inArgumentCppName, true)
    || mWhileExpression ()->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_foreachEnumerationList::element_type * enumeratedVariable = mForeachEnumerationList.firstObject () ;
  while ((enumeratedVariable != NULL) && ! used) {
    macroValidPointer (enumeratedVariable) ;
    used = enumeratedVariable->mCppEnumeratedVariableName.isEqualTo (inArgumentCppName) ;
    enumeratedVariable = enumeratedVariable->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
