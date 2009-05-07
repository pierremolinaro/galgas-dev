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
  inHfile.appendCppTitleComment (C_String ("'") + mTemplateName + "' template of '" + mFilewrapperName + "' filewrapper") ;
  inHfile << "GGS_string\n"
             "_template_filewrapper_" << mFilewrapperName << "_" << mTemplateName << " (" ;
  GGS_typeListeTypesEtNomsArgMethode::cEnumerator current (mTemplateArgumentList, true) ;
  if (mTemplateArgumentList.count () == 0) {
    inHfile << "void" ;
  }else{
    sint32 numeroVariable = 0 ;
    while (current.hc ()) {
      if (numeroVariable != 0) {
        inHfile << ",\n                                " ;
      }
      inHfile << "const " ;
      current._mType (HERE)(HERE)->generateFormalParameter (inHfile, true) ;
      current._mCppName (HERE)(HERE)->generateCplusPlusName (inHfile) ;
      current.next () ;
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
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
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
  inCppFile.appendCppTitleComment (C_String ("'") + mTemplateName + "' template of '" + mFilewrapperName + "' filewrapper") ;
  inCppFile << "GGS_string\n"
               "_template_filewrapper_" << mFilewrapperName << "_" << mTemplateName << " (" ;
  GGS_typeListeTypesEtNomsArgMethode::cEnumerator current (mTemplateArgumentList, true) ;
  if (! current.hc ()) {
    inCppFile << "void" ;
  }else{
    sint32 numeroVariable = 0 ;
    while (current.hc ()) {
      if (numeroVariable != 0) {
        inCppFile << ",\n                                " ;
      }
      inCppFile << "const " ;
      current._mType (HERE)(HERE)->generateFormalParameter (inCppFile, true) ;
      current._mCppName (HERE)(HERE)->generateCplusPlusName (inCppFile) ;
      current.nextObject () ;
      numeroVariable ++ ;
    }
  }
  inCppFile << ") {\n"
               "  C_String _result ;\n" ;
  current.rewind () ;
  if (current.hc ()) {
    inCppFile << "  const bool isBuilt = " ;
    sint32 numeroVariable = 0 ;
    while (current.hc ()) {
      if (numeroVariable != 0) {
        inCppFile << "\n    && " ;
      }
      current._mCppName (HERE)(HERE)->generateCplusPlusName (inCppFile) ;
      inCppFile << ".isBuilt ()" ;
      current.next () ;
      numeroVariable ++ ;
    }
    inCppFile << " ;\n"
                 "  if (isBuilt) {\n" ;
    inCppFile.incIndentation (+2) ;
  }
  GGS_templateInstructionList::cEnumerator currentInstruction (mTemplateInstructionList, true) ;
  while (currentInstruction.hc ()) {
    currentInstruction._mInstruction (HERE) (HERE)->generateTemplateInstruction (inCppFile) ;
    currentInstruction.next () ;
  }
  current.rewind () ;
  if (current.hc ()) {
    inCppFile << "}\n"
                 "return GGS_string (isBuilt, _result) ;\n" ;
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
  inCppFile.appendCLiteralStringConstant (mTemplateString.string (), 240) ;
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
  GGS_typeExpressionList::cEnumerator current (mOutExpressionList, true) ;
  bool first = true ;
  while (current.hc ()) {
    if (first) {
      first = false ;
    }else{
      ioCppFile << ", " ;
    }
    current._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
    current.next () ;
  }
  ioCppFile << ")" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFileWrapperTemplateCall::
formalArgumentIsUsedForTest (const GGS_typeCplusPlusName & inArgumentCppName) const {
  bool isUsed = false ;
  GGS_typeExpressionList::cEnumerator current (mOutExpressionList, true) ;
  while ((current.hc ()) && ! isUsed) {
    isUsed = current._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    current.next () ;
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
  GGS_typeExpressionList::cEnumerator current (mOutExpressionList, true) ;
  while ((current.hc ()) && ! isUsed) {
    isUsed = current._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    current.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
