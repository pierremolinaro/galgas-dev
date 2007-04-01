//---------------------------------------------------------------------------*
//                                                                           *
//  Generate 'foreach' instructions                                          *
//                                                                           *
//  Copyright (C) 1999, ..., 2006 Pierre Molinaro.                           *
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
  #pragma mark loop ... while instruction
#endif

//---------------------------------------------------------------------------*

void cPtr_C_while_instruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & inTargetFileName,
                     sint32 & ioPrototypeIndex,
                     const bool inGenerateDebug,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
  //--- 'condition' variable
    C_String variableCondition ;
    variableCondition << "_condition_" << mLocation.location () ;
  //--- 'variant' variable
    C_String variantVariable ;
    variantVariable << "_variant_" << mLocation.location () ;
  //--- Loop header
    ioCppFile << "GGS_uint " << variantVariable << " = " ;
    mVariantExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " ;\n"
                 "GGS_bool " << variableCondition << " (" << variantVariable
              << "._isBuilt (), true) ;\n"
                 "while (" << variableCondition << ".isBuiltAndTrue ()) {\n" ;
  //--- First instruction list
    generateInstructionListForList (mInstructionList1, ioCppFile, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
  //--- Condition
    ioCppFile << "  " << variableCondition << " = " ;
    mWhileExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " ;\n" ;
  //--- Evaluate condition
    ioCppFile << "  if (" << variableCondition << ".isBuiltAndTrue ()) {\n"
                 "    if (" << variantVariable << ".uintValue () == 0) {\n"
                 "      _inLexique.onTheFlyRunTimeError (\"loop variant error\" COMMA_SOURCE_FILE_AT_LINE ("
              << mLocation.lineNumber ()
              << ")) ;\n"
                 "      " << variableCondition << " = GGS_bool (true, false) ;\n"
                 "    }else{\n" 
                 "      " << variantVariable << "._decrement_operation (_inLexique COMMA_HERE) ;\n" ;
  //--- Second instruction list
    ioCppFile.incIndentation (+4) ;
    generateInstructionListForList (mInstructionList2, ioCppFile, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
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

bool cPtr_C_while_instruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return formalCurrentObjectArgumentIsUsedForList (mInstructionList1)
    || mVariantExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
    || mWhileExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
    || formalCurrentObjectArgumentIsUsedForList (mInstructionList2) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark foreach instruction
#endif

//---------------------------------------------------------------------------*

void cPtr_typeForeachInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & inTargetFileName,
                     sint32 & ioPrototypeIndex,
                     const bool inGenerateDebug,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    GGS_foreachEnumerationList::element_type * enumeratedVariable = mForeachEnumerationList.firstObject () ;
    while (enumeratedVariable != NULL) {
      macroValidPointer (enumeratedVariable) ;
      ioCppFile << "GGS_" << enumeratedVariable->mCppTypeName
                << "::element_type * operand_" << enumeratedVariable->mLocationOffset.location () << " = " ;
      enumeratedVariable->mCppEnumeratedVariableName (HERE)->generateCplusPlusName (ioCppFile) ;
      ioCppFile << ".firstObject () ;\n" ;
      enumeratedVariable = enumeratedVariable->nextObject () ;
    }
    enumeratedVariable = mForeachEnumerationList.firstObject () ;
    macroValidPointer (enumeratedVariable) ;
    ioCppFile <<  "while ((operand_" <<enumeratedVariable->mLocationOffset.location () << " != NULL)" ;
    enumeratedVariable = enumeratedVariable->nextObject () ;
    while (enumeratedVariable != NULL) {
      macroValidPointer (enumeratedVariable) ;
      ioCppFile <<  "\n    && (operand_" <<enumeratedVariable->mLocationOffset.location () << " != NULL)" ;
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
      ioCppFile << "  macroValidPointer (operand_" << enumeratedVariable->mLocationOffset.location () << ") ;\n" ;
      enumeratedVariable = enumeratedVariable->nextObject () ;
    }
    generateInstructionListForList (mInstructionList, ioCppFile, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
    enumeratedVariable = mForeachEnumerationList.firstObject () ;
    while (enumeratedVariable != NULL) {
      macroValidPointer (enumeratedVariable) ;
      ioCppFile << "  operand_" << enumeratedVariable->mLocationOffset.location () << " = operand_"
                << enumeratedVariable->mLocationOffset.location () << "->nextObject () ;\n" ;
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
    used = enumeratedVariable->mCppEnumeratedVariableName.isSameObjectAs (inArgumentCppName) ;
    enumeratedVariable = enumeratedVariable->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeForeachInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = formalCurrentObjectArgumentIsUsedForList (mInstructionList)
    || mWhileExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
  GGS_foreachEnumerationList::element_type * enumeratedVariable = mForeachEnumerationList.firstObject () ;
  while ((enumeratedVariable != NULL) && ! used) {
    macroValidPointer (enumeratedVariable) ;
    used = enumeratedVariable->mCppEnumeratedVariableName (HERE)->isCurrentObject () ;
    enumeratedVariable = enumeratedVariable->nextObject () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
