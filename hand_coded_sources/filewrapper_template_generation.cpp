/*
 *  filewrapper_template_generation.cpp
 *  galgas
 *
 *  Created by Pierre Molinaro on 08/03/08.
 *  Copyright 2008 __MyCompanyName__. All rights reserved.
 *
 */

//---------------------------------------------------------------------------*

#include "semantics_semantics.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

void cPtr_C_filewrapperTemplateToImplement::
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_filewrapperTemplateToImplement::
generateHdeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_filewrapperTemplateToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         C_Compiler & /* inLexique */) const {
  inHfile.writeCppTitleComment (C_String ("'") + mTemplateName + "' template of '" + mFilewrapperName + "' filewrapper") ;
  inHfile << "GGS_string\n"
             "_template_filewrapper_" << mFilewrapperName << "_" << mTemplateName << " (" ;
  GGS_typeListeTypesEtNomsArgMethode::cElement * current = mTemplateArgumentList.firstObject () ;
  if (current == NULL) {
    inHfile << "void" ;
  }else{
    sint32 numeroVariable = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      if (numeroVariable != 0) {
        inHfile << ",\n                                " ;
      }
      inHfile << "const " ;
      current->mType(HERE)->generateFormalParameter (inHfile, true) ;
      current->mCppName(HERE)->generateCplusPlusName (inHfile) ;
      current = current->nextObject () ;
      numeroVariable ++ ;
    }
  }
  inHfile << ") ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_filewrapperTemplateToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_filewrapperTemplateToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                             const C_String & /* inTargetFileName */,
                             sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_filewrapperTemplateToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & /* inTargetFileName */,
                                sint32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) const {
  inCppFile.writeCppTitleComment (C_String ("'") + mTemplateName + "' template of '" + mFilewrapperName + "' filewrapper") ;
  inCppFile << "GGS_string\n"
               "_template_filewrapper_" << mFilewrapperName << "_" << mTemplateName << " (" ;
  GGS_typeListeTypesEtNomsArgMethode::cElement * current = mTemplateArgumentList.firstObject () ;
  if (current == NULL) {
    inCppFile << "void" ;
  }else{
    sint32 numeroVariable = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      if (numeroVariable != 0) {
        inCppFile << ",\n                                " ;
      }
      inCppFile << "const " ;
      current->mType(HERE)->generateFormalParameter (inCppFile, true) ;
      current->mCppName(HERE)->generateCplusPlusName (inCppFile) ;
      current = current->nextObject () ;
      numeroVariable ++ ;
    }
  }
  inCppFile << ") {\n"
               "  C_String _result ;\n" ;
  current = mTemplateArgumentList.firstObject () ;
  if (current != NULL) {
    inCppFile << "  const bool _isBuilt = " ;
    sint32 numeroVariable = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      if (numeroVariable != 0) {
        inCppFile << "\n    && " ;
      }
      current->mCppName(HERE)->generateCplusPlusName (inCppFile) ;
      inCppFile << "._isBuilt ()" ;
      current = current->nextObject () ;
      numeroVariable ++ ;
    }
    inCppFile << " ;\n"
                 "  if (_isBuilt) {\n" ;
    inCppFile.incIndentation (+2) ;
  }
  GGS_templateInstructionList::cElement * currentInstruction = mTemplateInstructionList.firstObject () ;
  while (currentInstruction != NULL) {
    currentInstruction->mInstruction (HERE)->generateTemplateInstruction (inCppFile) ;
    currentInstruction = currentInstruction->nextObject () ;
  }
  current = mTemplateArgumentList.firstObject () ;
  if (current != NULL) {
    inCppFile << "}\n"
                 "return GGS_string (_isBuilt, _result) ;\n" ;
    inCppFile.incIndentation (-2) ;
  }else{
    inCppFile << "  return GGS_string (true, _result) ;\n" ;
  }
  inCppFile << "}\n\n" ;
}  

//---------------------------------------------------------------------------*

void cPtr_templateInstructionString::
generateTemplateInstruction (AC_OutputStream & inCppFile) const {
  inCppFile << "  _result << " ;
  inCppFile.writeCstringConstant (mTemplateString, 240) ;
  inCppFile << " ;\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionString:: // unused ?
isConstantUsed (const GGS_typeCplusPlusName & /* inCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_templateInstructionConstant::
generateTemplateInstruction (AC_OutputStream & inCppFile) const {
  inCppFile << "  _result << " ;
  mCppName(HERE)->generateCplusPlusName (inCppFile) ;
  inCppFile << " ;\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionConstant:: // unsed ?
isConstantUsed (const GGS_typeCplusPlusName & inCppName) const {
  return mCppName.isSameObjectAs (inCppName) ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Filewrapper template call
#endif

//---------------------------------------------------------------------------*

void cPtr_typeFileWrapperTemplateCall::generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "_template_filewrapper_" << mFileWrapperName << "_" << mTemplateName << " (" ;
  GGS_typeExpressionList::cElement * current = mOutExpressionList.firstObject () ;
  bool first = true ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (first) {
      first = false ;
    }else{
      ioCppFile << ", " ;
    }
    current->mExpression (HERE)->generateExpression (ioCppFile) ;
    current = current->nextObject () ;
  }
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFileWrapperTemplateCall::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  bool isUsed = false ;
  GGS_typeExpressionList::cElement * current = mOutExpressionList.firstObject () ;
  while ((current != NULL) && ! isUsed) {
    macroValidPointer (current) ;
    isUsed = current->mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    current = current->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFileWrapperTemplateCall::
isLexiqueFormalArgumentUsedForTest (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFileWrapperTemplateCall::
formalCurrentObjectArgumentIsUsedForTest (void) const {
  bool isUsed = false ;
  GGS_typeExpressionList::cElement * current = mOutExpressionList.firstObject () ;
  while ((current != NULL) && ! isUsed) {
    macroValidPointer (current) ;
    isUsed = current->mExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    current = current->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
