//---------------------------------------------------------------------------*
//                                                                           *
//  Generate assignment instructions                                         *
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

#include "files/C_text_file_write.h"

#include "semantics_semantics.h"

//---------------------------------------------------------------------------*

void cPtr_C_assignmentInstruction
::generateInstruction (AC_output_stream & ioCppFile,
                       const  C_string & /* inLexiqueClassName */,
                       const C_string & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    mTargetVarCppName ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << " = " ;
    mSourceExpression ()->generateExpression (ioCppFile) ;
    ioCppFile << " ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_assignmentInstruction
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return mSourceExpression ()->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_assignmentInstruction
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  return mTargetVarCppName.isEqualTo (inArgumentCppName)
      || (mSourceExpression ()->formalArgumentIsUsedForTest (inArgumentCppName)) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_C_declarationInstructionWithAssignment
::generateInstruction (AC_output_stream & ioCppFile,
                       const  C_string & /* inLexiqueClassName */,
                       const C_string & /* inTargetFileName */,
                       sint32 & /* ioPrototypeIndex */,
                       const bool /* inGenerateDebug */,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
  //--- Generate declaration
    mVariableType ()->generateCppClassName (ioCppFile) ;
    ioCppFile << ' ' ;
    mTargetVarCppName ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << " ;\n" ;
  //--- Generate assignment
    mTargetVarCppName ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << " = " ;
    mSourceExpression ()->generateExpression (ioCppFile) ;
    ioCppFile << " ;\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_declarationInstructionWithAssignment
::isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return mSourceExpression ()->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_declarationInstructionWithAssignment
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  return mTargetVarCppName.isEqualTo (inArgumentCppName)
      || (mSourceExpression ()->formalArgumentIsUsedForTest (inArgumentCppName)) ;
}

//---------------------------------------------------------------------------*
