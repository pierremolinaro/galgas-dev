//---------------------------------------------------------------------------*
//                                                                           *
//  Generate assignment instructions                                         *
//                                                                           *
//  Copyright (C) 1999, ..., 2008 Pierre Molinaro.                           *
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
                     PMSInt32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    mTargetVarCppName (HERE)->generateCplusPlusName (ioCppFile) ;
    GGS_lstringlist::cEnumerator structAttribute (mStructAttributeList, true) ;
    while (structAttribute.hasCurrentObject ()) {
      ioCppFile << "." << structAttribute._mValue (HERE) ;
      structAttribute.next () ;
    }
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
  return mTargetVarCppName.isSameObjectAs (inArgumentCppName)
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
                    PMSInt32 & /* ioPrototypeIndex */,
                    const bool /* inGenerateDebug */,
                    const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
  //--- Generate declaration
    mVariableType (HERE)->generateCppClassName (ioCppFile) ;
    ioCppFile << " " ;
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
  return mTargetVarCppName.isSameObjectAs (inArgumentCppName)
      || (mSourceExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Declaration without assignment
#endif

//---------------------------------------------------------------------------*

void cPtr_typeInstructionDeclarationVarLocale::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     PMSInt32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    aTypeVariable (HERE)->generateCppClassName (ioCppFile) ;
    ioCppFile << " " ;
    aNomCppVariable (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << " ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionDeclarationVarLocale::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionDeclarationVarLocale::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  return aNomCppVariable.isSameObjectAs (inArgumentCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionDeclarationVarLocale::
formalCurrentObjectArgumentIsUsed (void) const {
  return false ;
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
                         const cPtr_typeExpression  * inExpressionPtr,
                         const PMSInt32 inTargetVariableLineNumberInSourceFile,
                         bool & ioPreviousWasLiteralString) {
  const cPtr_typeConcatOperation * p = dynamic_cast <const cPtr_typeConcatOperation *> (inExpressionPtr) ;
  if (p != NULL) {
    generateInstructionPart (ioCppFile, inTargetVariableCppName, p->mLeftExpression (HERE), inTargetVariableLineNumberInSourceFile, ioPreviousWasLiteralString) ;
    generateInstructionPart (ioCppFile, inTargetVariableCppName, p->mRightExpression (HERE), inTargetVariableLineNumberInSourceFile, ioPreviousWasLiteralString) ;
  }else{
    const cPtr_typeLiteralStringExpression * p2 = dynamic_cast <const cPtr_typeLiteralStringExpression *> (inExpressionPtr) ;
    if (p2 != NULL) {
      bool first = true ;
      if (ioPreviousWasLiteralString) {
        first = false ;
      }else{
        ioCppFile << inTargetVariableCppName << ".appendCString (" ;
      }
      GGS_stringlist::cEnumerator currentString (p2->mLiteralStringList, true) ;
      while (currentString.hasCurrentObject ()) {
        if (first) {
          first = false ;
        }else{
          ioCppFile << "\n" ;
        }
        ioCppFile.appendCLiteralStringConstant (currentString._mValue (HERE).string ()) ;
        currentString.next () ;
      }
      ioPreviousWasLiteralString = true ;
    }else{
      if (ioPreviousWasLiteralString) {
        ioCppFile << ") ;\n" ;
        ioPreviousWasLiteralString = false ; 
      }
      ioCppFile << inTargetVariableCppName << ".dotAssign_operation (" ;
      inExpressionPtr->generateExpression (ioCppFile) ;
      ioCppFile << ") ;\n" ;
    }
  }
}

//---------------------------------------------------------------------------*

static bool
usesLexiqueArgument (const cPtr_typeExpression * inExpressionPtr) {
  bool result = false ;
  const cPtr_typeConcatOperation * p = dynamic_cast <const cPtr_typeConcatOperation *> (inExpressionPtr) ;
  if (p != NULL) {
    result = usesLexiqueArgument (p->mLeftExpression (HERE)) ;
    if (! result) {
      result = usesLexiqueArgument (p->mRightExpression (HERE)) ;
    }
  }else{
    const cPtr_typeLiteralStringExpression * p2 = dynamic_cast <const cPtr_typeLiteralStringExpression *> (inExpressionPtr) ;
    if (p2 == NULL) {
      result = inExpressionPtr->isLexiqueFormalArgumentUsedForTest () ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

void cPtr_C_dotEqualInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inTargetFileName */,
                     PMSInt32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    C_String targetVariableCppName ;
    mTargetVarCppName (HERE)->generateCplusPlusName (targetVariableCppName) ;
    GGS_lstringlist::cEnumerator structAttribute (mStructAttributeList, true) ;
    while (structAttribute.hasCurrentObject ()) {
      ioCppFile << "." << structAttribute._mValue (HERE) ;
      structAttribute.next () ;
    }
    const PMSInt32 targetVariableLineNumberInSourceFile = mTargetVarCppName (HERE)->mVariableLocation.lineNumber () ;
    if (mSourceExpressionConverter.string ().length () > 0) {
      ioCppFile << targetVariableCppName
                << ".dotAssign_operation (" ;
      mSourceExpression (HERE)->generateExpression (ioCppFile) ;
      ioCppFile << "." << mSourceExpressionConverter
                << " ()) ;\n" ;
    }else{
      bool previousWasLiteralString = false ;
      generateInstructionPart (ioCppFile,
                               targetVariableCppName,
                               mSourceExpression (HERE),
                               targetVariableLineNumberInSourceFile,
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
  return usesLexiqueArgument (mSourceExpression (HERE)) ;
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
  return mTargetVarCppName.isSameObjectAs (inArgumentCppName)
      || (mSourceExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)) ;
}

//---------------------------------------------------------------------------*
