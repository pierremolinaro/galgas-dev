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
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_C_while_instruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inLexiqueClassName */,
                     const C_String & inTargetFileName,
                     sint32 & ioPrototypeIndex,
                     const bool inGenerateDebug,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
  //--- 'condition' variable
    C_String variableCondition ;
    variableCondition << "_condition_" << mLocation.currentLocation () ;
  //--- 'variant' variable
    C_String variantVariable ;
    variantVariable << "_variant_" << mLocation.currentLocation () ;
  //--- Loop header
    ioCppFile << "GGS_uint " << variantVariable << " = " ;
    mVariantExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " ;\n"
                 "GGS_bool " << variableCondition << " (" << variantVariable << ".isBuilt (), true) ;\n"
                 "while (" << variableCondition << ".isBuiltAndTrue ()) {\n"
                 "  if (" << variantVariable << ".uintValue () == 0) {\n"
                 "    _inLexique.onTheFlyRunTimeError (\"loop variant error\" SOURCE_FILE_AT_LINE ("
              << mLocation.currentLineNumber ()
              << ")) ;\n"
                 "    " << variableCondition << " = GGS_bool (true, false) ;\n"
                 "  }else{\n" 
                 "    " << variantVariable << ".decrement_operation (_inLexique COMMA_HERE) ;\n" ;
    ioCppFile.incIndentation (+2) ;
  //--- First instruction list
    C_String inutilise ;
    generateInstructionListForList (mInstructionList1, ioCppFile, inutilise, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
  //--- Condition
    ioCppFile << "  " << variableCondition << " = " ;
    mWhileExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << "  ;\n" ;
  //--- Second instruction list
    ioCppFile << "  if (" << variableCondition << ".isBuiltAndTrue ()) {\n" ;
    ioCppFile.incIndentation (+2) ;
    generateInstructionListForList (mInstructionList1, ioCppFile, inutilise, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
    ioCppFile.incIndentation (-4) ;
    ioCppFile << "    }\n"
                 "  }\n"
                 "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_while_instruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_while_instruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool inGenerateSemanticInstructions) const {
  return formalArgumentIsUsedForList (mInstructionList1, inArgumentCppName, inGenerateSemanticInstructions)
    || mVariantExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
    || mWhileExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
    || formalArgumentIsUsedForList (mInstructionList2, inArgumentCppName, inGenerateSemanticInstructions) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeForeachInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inLexiqueClassName */,
                     const C_String & inTargetFileName,
                     sint32 & ioPrototypeIndex,
                     const bool inGenerateDebug,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    GGS_foreachEnumerationList::element_type * enumeratedVariable = mForeachEnumerationList.firstObject () ;
    while (enumeratedVariable != NULL) {
      macroValidPointer (enumeratedVariable) ;
      ioCppFile << "GGS_" << enumeratedVariable->mCppTypeName
                << "::element_type * operand_" << enumeratedVariable->mLocationOffset.currentLocation () << " = " ;
      enumeratedVariable->mCppEnumeratedVariableName (HERE)->generateCplusPlusName (ioCppFile) ;
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
    if ((dynamic_cast <cPtr_typeTrueBool *> (mWhileExpression (HERE))) == NULL) {
      ioCppFile <<  "\n    && (" ;
      mWhileExpression (HERE)->generateExpression (ioCppFile) ;
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
    generateInstructionListForList (mInstructionList, ioCppFile, inutilise, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
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

bool cPtr_typeForeachInstruction::
isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  return isLexiqueFormalArgumentUsedForList (mInstructionList, inGenerateSemanticInstructions)
    || mWhileExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeForeachInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool inGenerateSemanticInstructions) const {
  bool used = formalArgumentIsUsedForList (mInstructionList, inArgumentCppName, inGenerateSemanticInstructions)
    || mWhileExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_foreachEnumerationList::element_type * enumeratedVariable = mForeachEnumerationList.firstObject () ;
  while ((enumeratedVariable != NULL) && ! used) {
    macroValidPointer (enumeratedVariable) ;
    used = enumeratedVariable->mCppEnumeratedVariableName.isEqualTo (inArgumentCppName) ;
    enumeratedVariable = enumeratedVariable->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
