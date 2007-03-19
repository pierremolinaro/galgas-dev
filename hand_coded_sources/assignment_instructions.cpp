//---------------------------------------------------------------------------*
//                                                                           *
//  Generate assignment instructions                                         *
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
#include "files/C_TextFileWrite.h"
#include "semantics_semantics.h"

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Assignment
#endif

//---------------------------------------------------------------------------*

void cPtr_C_assignmentInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    mTargetVarCppName (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << " = " ;
    mSourceExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_assignmentInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return mSourceExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_assignmentInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return mSourceExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_assignmentInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  return mTargetVarCppName.isEqualTo (inArgumentCppName)
      || (mSourceExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Declaration with assignment
#endif

//---------------------------------------------------------------------------*

void cPtr_C_declarationInstructionWithAssignment::
generateInstruction (AC_OutputStream & ioCppFile,
                    const C_String & /* inTargetFileName */,
                    sint32 & /* ioPrototypeIndex */,
                    const bool /* inGenerateDebug */,
                    const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
  //--- Generate declaration
    mVariableType (HERE)->generateCppClassName (ioCppFile) ;
    ioCppFile << ' ' ;
    mTargetVarCppName (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << " ;\n" ;
  //--- Generate assignment
    mTargetVarCppName (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << " = " ;
    mSourceExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_declarationInstructionWithAssignment::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return mSourceExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_declarationInstructionWithAssignment::
formalCurrentObjectArgumentIsUsed (void) const {
  return mSourceExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_declarationInstructionWithAssignment::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  return mTargetVarCppName.isEqualTo (inArgumentCppName)
      || (mSourceExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark '.=' Instruction
#endif

//---------------------------------------------------------------------------*

static void
generateInstructionPart (AC_OutputStream & ioCppFile,
                         const C_String & inTargetVariableCppName,
                         const cPtr_typeExpression * inExpressionPtr,
                         bool & ioPreviousWasLiteralString) {
  const cPtr_typeConcatOperation * p = dynamic_cast <const cPtr_typeConcatOperation *> (inExpressionPtr) ;
  if (p != NULL) {
    generateInstructionPart (ioCppFile, inTargetVariableCppName, p->mLeftExpression (HERE), ioPreviousWasLiteralString) ;
    generateInstructionPart (ioCppFile, inTargetVariableCppName, p->mRightExpression (HERE), ioPreviousWasLiteralString) ;
  }else{
    const cPtr_typeLiteralStringExpression * p2 = dynamic_cast <const cPtr_typeLiteralStringExpression *> (inExpressionPtr) ;
    if (p2 != NULL) {
      bool first = true ;
      if (ioPreviousWasLiteralString) {
        first = false ;
      }else{
        ioCppFile << inTargetVariableCppName << ".writeCstringConstant (" ;
      }
      GGS_stringlist::element_type * currentString = p2->mLiteralStringList.firstObject () ;
      while (currentString != NULL) {
        macroValidPointer (currentString) ;
        if (first) {
          first = false ;
        }else{
          ioCppFile << "\n  " ;
        }
        ioCppFile.writeCstringConstant (currentString->mValue) ;
        currentString = currentString->nextObject () ;
      }
      ioPreviousWasLiteralString = true ;
    }else{
      if (ioPreviousWasLiteralString) {
        ioCppFile << ") ;\n" ;
        ioPreviousWasLiteralString = false ; 
      }
      ioCppFile << inTargetVariableCppName << "._dotAssign_operation (" ;
      inExpressionPtr->generateExpression (ioCppFile) ;
      ioCppFile << ") ;\n" ;
    }
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_dotEqualInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    C_String targetVariableCppName ;
    mTargetVarCppName (HERE)->generateCplusPlusName (targetVariableCppName) ;
    if (mSourceExpressionConverter.length () > 0) {
      ioCppFile << targetVariableCppName << "._dotAssign_operation (" ;
      mSourceExpression (HERE)->generateExpression (ioCppFile) ;
      ioCppFile << "." << mSourceExpressionConverter << " ()) ;\n" ;
    }else{
      bool previousWasLiteralString = false ;
      generateInstructionPart (ioCppFile,
                               targetVariableCppName,
                               mSourceExpression (HERE),
                               previousWasLiteralString) ;
      if (previousWasLiteralString) {
        ioCppFile << ") ;\n" ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_dotEqualInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return mSourceExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_dotEqualInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return mSourceExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_dotEqualInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  return mTargetVarCppName.isEqualTo (inArgumentCppName)
      || (mSourceExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)) ;
}

//---------------------------------------------------------------------------*
