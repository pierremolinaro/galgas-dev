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
             "template_filewrapper_" << mFilewrapperName << "_" << mTemplateName << " (C_Compiler & inLexique" ;
  GGS_typeListeTypesEtNomsArgMethode::cEnumerator current (mTemplateArgumentList, true) ;
  while (current.hc ()) {
    inHfile << ",\n                                "
               "const " ;
    current._mType (HERE)(HERE)->generateFormalParameter (inHfile, true) ;
    current._mCppName (HERE)(HERE)->generateCplusPlusName (inHfile) ;
    current.next () ;
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
  bool lexiqueIsUsed = false ;
  GGS_templateInstructionList::cEnumerator currentInstruction (mTemplateInstructionList, true) ;
  while (currentInstruction.hc () && ! lexiqueIsUsed) {
    lexiqueIsUsed = currentInstruction._mInstruction (HERE) (HERE)->isUsingLexiqueArgument () ;
    currentInstruction.next () ;
  }
  inCppFile << "GGS_string\n"
               "template_filewrapper_" << mFilewrapperName << "_" << mTemplateName << " (C_Compiler & " ;
  if (lexiqueIsUsed) {
    inCppFile << "inLexique" ;
  }else{
    inCppFile << "/* inLexique */" ;
  }
  GGS_typeListeTypesEtNomsArgMethode::cEnumerator current (mTemplateArgumentList, true) ;
  while (current.hc ()) {
    inCppFile << ",\n                                "
                 "const " ;
    current._mType (HERE)(HERE)->generateFormalParameter (inCppFile, true) ;
    current._mCppName (HERE)(HERE)->generateCplusPlusName (inCppFile) ;
    current.nextObject () ;
  }
  inCppFile << ") {\n"
               "  C_String result ;\n" ;
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
  currentInstruction.rewind () ;
  while (currentInstruction.hc ()) {
    currentInstruction._mInstruction (HERE) (HERE)->generateTemplateInstruction (inCppFile) ;
    currentInstruction.next () ;
  }
  current.rewind () ;
  if (current.hc ()) {
    inCppFile << "}\n"
                 "return GGS_string (isBuilt, result) ;\n" ;
    inCppFile.incIndentation (-2) ;
  }else{
    inCppFile << "  return GGS_string (true, result) ;\n" ;
  }
  inCppFile << "}\n\n" ;
}  

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cPtr_templateInstructionString
#endif

//---------------------------------------------------------------------------*

void cPtr_templateInstructionString::
generateTemplateInstruction (AC_OutputStream & inCppFile) const {
  inCppFile << "  result << " ;
  inCppFile.appendCLiteralStringConstant (mTemplateString.string (), 240) ;
  inCppFile << " ;\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionString::
isConstantUsed (const GGS_typeCplusPlusName & /* inCppName */) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionString::
isUsingLexiqueArgument (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cPtr_templateInstructionConstant
#endif

//---------------------------------------------------------------------------*

void cPtr_templateInstructionConstant::
generateTemplateInstruction (AC_OutputStream & inCppFile) const {
  inCppFile << "  result << " ;
  mCppName(HERE)->generateCplusPlusName (inCppFile) ;
  inCppFile << " ;\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionConstant::
isConstantUsed (const GGS_typeCplusPlusName & inCppName) const {
  return mCppName.isSameObjectAs (inCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionConstant::
isUsingLexiqueArgument (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cPtr_templateInstructionExpression
#endif

//---------------------------------------------------------------------------*

void cPtr_templateInstructionExpression::
generateTemplateInstruction (AC_OutputStream & inCppFile) const {
  inCppFile << "  result << " ;
  mExpression (HERE)->generateExpression (inCppFile) ;
  inCppFile << " ;\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionExpression::
isConstantUsed (const GGS_typeCplusPlusName & inCppName) const {
  return mExpression (HERE)->formalArgumentIsUsedForTest (inCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionExpression::
isUsingLexiqueArgument (void) const {
  return mExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cPtr_templateInstructionExpression
#endif

//---------------------------------------------------------------------------*

void cPtr_templateInstructionForeach::
generateTemplateInstruction (AC_OutputStream & ioCppFile) const {
  ioCppFile << "GGS_" << mCppExpressionTypeName
            << "::cEnumerator enumerator_" ;
  ioCppFile.appendSigned (mInstructionLocation.location ()) ;
  ioCppFile << " (" ;
  mExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << ", " << (mIsAscending.boolValue () ? "true" : "false")
            << ") ;\n" ;
  if (! mNewEnumerationStyle.boolValue ()) {
    ioCppFile << "const GGS_" << mCppExpressionTypeName
              << "::cElement * operand_" ;
   ioCppFile.appendSigned (mInstructionLocation.location ()) ;
   ioCppFile << " = NULL ;\n" ;
  }
  if (mNewEnumerationStyle.boolValue ()) {
    ioCppFile <<  "while (enumerator_" ;
    ioCppFile.appendSigned (mInstructionLocation.location ()) ;
    ioCppFile << ".hc ()" ;
  }else{
    ioCppFile << "while (((operand_" ;
    ioCppFile.appendSigned (mInstructionLocation.location ()) ;
    ioCppFile << " = enumerator_" ;
    ioCppFile.appendSigned (mInstructionLocation.location ()) ;
    ioCppFile << ".nextObject ()))" ;
  }
  ioCppFile << ") {\n" ;
  if (! mNewEnumerationStyle.boolValue ()) {
    ioCppFile << "  macroValidPointer (operand_" ;
    ioCppFile.appendSigned (mInstructionLocation.location ()) ;
    ioCppFile << ") ;\n" ;
  }
  GGS_templateInstructionList::cEnumerator currentInstruction (mDoInstructionList, true) ;
  while (currentInstruction.hc ()) {
    currentInstruction._mInstruction (HERE) (HERE)->generateTemplateInstruction (ioCppFile) ;
    currentInstruction.next () ;
  }
  if (mNewEnumerationStyle.boolValue ()) {
    ioCppFile << "  enumerator_" ;
    ioCppFile.appendSigned (mInstructionLocation.location ()) ;
    ioCppFile << ".next () ;\n" ;
  }
  ioCppFile << "}\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionForeach::
isConstantUsed (const GGS_typeCplusPlusName & inCppName) const {
  bool used = mExpression (HERE)->formalArgumentIsUsedForTest (inCppName) ;
  GGS_templateInstructionList::cEnumerator instruction (mDoInstructionList, true) ;
  while (instruction.hc ()) {
    used = instruction._mInstruction (HERE) (HERE)->isConstantUsed (inCppName) ;
    instruction.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionForeach::
isUsingLexiqueArgument (void) const {
  bool used = mExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
  GGS_templateInstructionList::cEnumerator instruction (mDoInstructionList, true) ;
  while (instruction.hc ()) {
    used = instruction._mInstruction (HERE) (HERE)->isUsingLexiqueArgument () ;
    instruction.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Filewrapper template call
#endif

//---------------------------------------------------------------------------*

void cPtr_typeFileWrapperTemplateCall::generateExpression (AC_OutputStream & ioCppFile) const {
  ioCppFile << "template_filewrapper_" << mFileWrapperName << "_" << mTemplateName << " (inLexique" ;
  GGS_typeExpressionList::cEnumerator current (mOutExpressionList, true) ;
  while (current.hc ()) {
    ioCppFile << ", " ;
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
  return true ;
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
