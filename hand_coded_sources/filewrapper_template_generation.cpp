/*
 *  filewrapper_template_generation.cpp
 *  galgas
 *
 *  Created by Pierre Molinaro on 08/03/08.
 *  Copyright 2008 __MyCompanyName__. All rights reserved.
 *
 */

//---------------------------------------------------------------------------*

#include "filewrapper_template_generation.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

bool templateInstructionListUsesLexique (const GGS_templateInstructionList & inTemplateInstructionList) {
  bool lexiqueIsUsed = false ;
  GGS_templateInstructionList::cEnumerator currentInstruction (inTemplateInstructionList, true) ;
  while (currentInstruction.hasCurrentObject () && ! lexiqueIsUsed) {
    lexiqueIsUsed = currentInstruction._mInstruction (HERE) (HERE)->isUsingLexiqueArgument () ;
    currentInstruction.next () ;
  }
  return lexiqueIsUsed ;
}

//---------------------------------------------------------------------------*

bool
templateInstructionListUsesFormalArgument (const GGS_templateInstructionList & inTemplateInstructionList,
                                           const GGS_typeCplusPlusName & inCppName) {
  bool templateFormalArgumentIsUsed = false ;
  GGS_templateInstructionList::cEnumerator currentInstruction (inTemplateInstructionList, true) ;
  while (currentInstruction.hasCurrentObject () && ! templateFormalArgumentIsUsed) {
    templateFormalArgumentIsUsed = currentInstruction._mInstruction (HERE) (HERE)->isConstantUsed (inCppName) ;
    currentInstruction.next () ;
  }
  return templateFormalArgumentIsUsed ;
}

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
  while (current.hasCurrentObject ()) {
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
                             PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_filewrapperTemplateToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & ioCppFile,
                                const C_String & /* inTargetFileName */,
                                PMSInt32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) const {
  ioCppFile.appendCppTitleComment (C_String ("'") + mTemplateName + "' template of '" + mFilewrapperName + "' filewrapper") ;
  ioCppFile << "GGS_string\n"
               "template_filewrapper_" << mFilewrapperName << "_" << mTemplateName << " (C_Compiler & " ;
  if (templateInstructionListUsesLexique (mTemplateInstructionList)) {
    ioCppFile << "inLexique" ;
  }else{
    ioCppFile << "/* inLexique */" ;
  }
  GGS_typeListeTypesEtNomsArgMethode::cEnumerator current (mTemplateArgumentList, true) ;
  while (current.hasCurrentObject ()) {
    ioCppFile << ",\n                                "
                 "const " ;
    current._mType (HERE)(HERE)->generateFormalParameter (ioCppFile, true) ;
    current._mCppName (HERE)(HERE)->generateCplusPlusName (ioCppFile) ;
    current.nextObject () ;
  }
  ioCppFile << ") {\n"
               "  C_String result ;\n" ;
  current.rewind () ;
  if (current.hasCurrentObject ()) {
    ioCppFile << "  const bool isBuilt = " ;
    PMSInt32 numeroVariable = 0 ;
    while (current.hasCurrentObject ()) {
      if (numeroVariable != 0) {
        ioCppFile << "\n    && " ;
      }
      current._mCppName (HERE)(HERE)->generateCplusPlusName (ioCppFile) ;
      ioCppFile << ".isBuilt ()" ;
      current.next () ;
      numeroVariable ++ ;
    }
    ioCppFile << " ;\n"
                 "  if (isBuilt) {\n" ;
    ioCppFile.incIndentation (+2) ;
  }
  GGS_templateInstructionList::cEnumerator currentInstruction (mTemplateInstructionList, true) ;
  ioCppFile.incIndentation (+2) ;
  while (currentInstruction.hasCurrentObject ()) {
    currentInstruction._mInstruction (HERE) (HERE)->generateTemplateInstruction (ioCppFile) ;
    currentInstruction.next () ;
  }
  ioCppFile.incIndentation (-2) ;
  current.rewind () ;
  if (current.hasCurrentObject ()) {
    ioCppFile << "}\n"
                 "return GGS_string (isBuilt, result) ;\n" ;
    ioCppFile.incIndentation (-2) ;
  }else{
    ioCppFile << "  return GGS_string (true, result) ;\n" ;
  }
  ioCppFile << "}\n\n" ;
}  

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cPtr_templateBlockInstruction
#endif

//---------------------------------------------------------------------------*

void cPtr_templateBlockInstruction::
generateTemplateInstruction (AC_OutputStream & ioCppFile) const {
  ioCppFile << "const GGS_uint indentation_"
            << cStringWithSigned (mMagicNumber.location ())
            << " = " ;
  mExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << " ;\n"
            << "if (indentation_"
            << cStringWithSigned (mMagicNumber.location ())
            << ".isBuilt ()) {\n"
               "  result.incIndentation ((PMSInt32) indentation_"
            << cStringWithSigned (mMagicNumber.location ())
            << ".uintValue ()) ;\n"
               "}\n" ;
  GGS_templateInstructionList::cEnumerator currentInstruction2 (mBlockInstructionList, true) ;
  while (currentInstruction2.hasCurrentObject ()) {
    currentInstruction2._mInstruction (HERE) (HERE)->generateTemplateInstruction (ioCppFile) ;
    currentInstruction2.next () ;
  }
  ioCppFile << " ;\n"
            << "if (indentation_"
            << cStringWithSigned (mMagicNumber.location ())
            << ".isBuilt ()) {\n"
               "  result.incIndentation (- ((PMSInt32) indentation_"
            << cStringWithSigned (mMagicNumber.location ())
            << ".uintValue ())) ;\n"
               "}\n" ;
  }

//---------------------------------------------------------------------------*

bool cPtr_templateBlockInstruction::
isConstantUsed (const GGS_typeCplusPlusName & inCppName) const {
  bool used = mExpression (HERE)->formalArgumentIsUsedForTest (inCppName) ;
  GGS_templateInstructionList::cEnumerator instruction (mBlockInstructionList, true) ;
  while (instruction.hasCurrentObject () && ! used) {
    used = instruction._mInstruction (HERE) (HERE)->isConstantUsed (inCppName) ;
    instruction.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateBlockInstruction::
isUsingLexiqueArgument (void) const {
  bool used = mExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
  GGS_templateInstructionList::cEnumerator instruction (mBlockInstructionList, true) ;
  while (instruction.hasCurrentObject () && ! used) {
    used = instruction._mInstruction (HERE) (HERE)->isUsingLexiqueArgument () ;
    instruction.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cPtr_templateInstructionString
#endif

//---------------------------------------------------------------------------*

void cPtr_templateInstructionString::
generateTemplateInstruction (AC_OutputStream & ioCppFile) const {
  ioCppFile << "result << " ;
  ioCppFile.appendCLiteralStringConstant (mTemplateString.string (), 240) ;
  ioCppFile << " ;\n" ;
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
generateTemplateInstruction (AC_OutputStream & ioCppFile) const {
  ioCppFile << "result << " ;
  mCppName(HERE)->generateCplusPlusName (ioCppFile) ;
  ioCppFile << " ;\n" ;
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
  #pragma mark cPtr_templateInstructionConstant
#endif

//---------------------------------------------------------------------------*

void cPtr_templateInstructionColumnString::
generateTemplateInstruction (AC_OutputStream & ioCppFile) const {
  ioCppFile << "const GGS_string " ;
  mCppName(HERE)->generateCplusPlusName (ioCppFile) ;
  ioCppFile << " = GGS_string::stringWithColumnCount (result) ;\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionColumnString::
isConstantUsed (const GGS_typeCplusPlusName & inCppName) const {
  return mCppName.isSameObjectAs (inCppName) ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionColumnString::
isUsingLexiqueArgument (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cPtr_templateInstructionExpression
#endif

//---------------------------------------------------------------------------*

void cPtr_templateInstructionExpression::
generateTemplateInstruction (AC_OutputStream & ioCppFile) const {
  ioCppFile << "result << " ;
  mExpression (HERE)->generateExpression (ioCppFile) ;
  ioCppFile << " ;\n" ;
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
  #pragma mark cPtr_templateInstructionForeach
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
  const bool hasBeforeOrAfter = (mBeforeInstructionList.count () + mAfterInstructionList.count ()) > 0 ;
  if (hasBeforeOrAfter) {
    ioCppFile <<  "if (enumerator_" ;
    ioCppFile.appendSigned (mInstructionLocation.location ()) ;
    ioCppFile << ".hasCurrentObject ()) {\n" ;
    ioCppFile.incIndentation (+2) ;
    GGS_templateInstructionList::cEnumerator currentInstruction (mBeforeInstructionList, true) ;
    while (currentInstruction.hasCurrentObject ()) {
      currentInstruction._mInstruction (HERE) (HERE)->generateTemplateInstruction (ioCppFile) ;
      currentInstruction.next () ;
    }
  }
  if (mIndexIdentifier.string ().length () > 0) {
    ioCppFile << "{ GGS_uint var_cas_" << mIndexIdentifier << " (true, 0) ;\n" ;
    ioCppFile.incIndentation (-2) ;
  }
  if (mNewEnumerationStyle.boolValue ()) {
    ioCppFile <<  "while (enumerator_" ;
    ioCppFile.appendSigned (mInstructionLocation.location ()) ;
    ioCppFile << ".hasCurrentObject ()" ;
  }else{
    ioCppFile << "while (((operand_" ;
    ioCppFile.appendSigned (mInstructionLocation.location ()) ;
    ioCppFile << " = enumerator_" ;
    ioCppFile.appendSigned (mInstructionLocation.location ()) ;
    ioCppFile << ".nextObject ()))" ;
  }
  ioCppFile << ") {\n" ;
  ioCppFile.incIndentation (+2) ;
  if (! mNewEnumerationStyle.boolValue ()) {
    ioCppFile << "macroValidPointer (operand_" ;
    ioCppFile.appendSigned (mInstructionLocation.location ()) ;
    ioCppFile << ") ;\n" ;
  }
  GGS_templateInstructionList::cEnumerator currentInstructionDo (mDoInstructionList, true) ;
  while (currentInstructionDo.hasCurrentObject ()) {
    currentInstructionDo._mInstruction (HERE) (HERE)->generateTemplateInstruction (ioCppFile) ;
    currentInstructionDo.next () ;
  }
  if (mBetweenInstructionList.count () > 0) {
    ioCppFile << "if (enumerator_" ;
    ioCppFile.appendSigned (mInstructionLocation.location ()) ;
    ioCppFile << ".hasNextObject ()) {\n" ;
    ioCppFile.incIndentation (+2) ;
    GGS_templateInstructionList::cEnumerator currentInstruction2 (mBetweenInstructionList, true) ;
    while (currentInstruction2.hasCurrentObject ()) {
      currentInstruction2._mInstruction (HERE) (HERE)->generateTemplateInstruction (ioCppFile) ;
      currentInstruction2.next () ;
    }
    ioCppFile.incIndentation (-2) ;
    ioCppFile << "}\n" ;
  }
  if (mNewEnumerationStyle.boolValue ()) {
    ioCppFile << "enumerator_" ;
    ioCppFile.appendSigned (mInstructionLocation.location ()) ;
    ioCppFile << ".next () ;\n" ;
  }
  if (mIndexIdentifier.string ().length () > 0) {
    ioCppFile << "var_cas_" << mIndexIdentifier << ".increment_operation (inLexique COMMA_HERE) ;\n" ;
  }
  ioCppFile.incIndentation (-2) ;
  ioCppFile << "}\n" ;
  if (hasBeforeOrAfter) {
    GGS_templateInstructionList::cEnumerator currentInstruction (mAfterInstructionList, true) ;
    while (currentInstruction.hasCurrentObject ()) {
      currentInstruction._mInstruction (HERE) (HERE)->generateTemplateInstruction (ioCppFile) ;
      currentInstruction.next () ;
    }
    ioCppFile.incIndentation (-2) ;
    ioCppFile << "}\n" ;
  }
  if (mIndexIdentifier.string ().length () > 0) {
    ioCppFile.incIndentation (-2) ;
    ioCppFile << "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionForeach::
isConstantUsed (const GGS_typeCplusPlusName & inCppName) const {
  bool used = mExpression (HERE)->formalArgumentIsUsedForTest (inCppName) ;
  GGS_templateInstructionList::cEnumerator instruction (mDoInstructionList, true) ;
  while (instruction.hasCurrentObject () && ! used) {
    used = instruction._mInstruction (HERE) (HERE)->isConstantUsed (inCppName) ;
    instruction.next () ;
  }
  GGS_templateInstructionList::cEnumerator instruction4 (mAfterInstructionList, true) ;
  while (instruction4.hasCurrentObject () && ! used) {
    used = instruction4._mInstruction (HERE) (HERE)->isConstantUsed (inCppName) ;
    instruction4.next () ;
  }
  GGS_templateInstructionList::cEnumerator instruction3 (mBeforeInstructionList, true) ;
  while (instruction3.hasCurrentObject () && ! used) {
    used = instruction3._mInstruction (HERE) (HERE)->isConstantUsed (inCppName) ;
    instruction3.next () ;
  }
  GGS_templateInstructionList::cEnumerator instruction2 (mBetweenInstructionList, true) ;
  while (instruction2.hasCurrentObject () && ! used) {
    used = instruction2._mInstruction (HERE) (HERE)->isConstantUsed (inCppName) ;
    instruction2.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionForeach::
isUsingLexiqueArgument (void) const {
  bool used = mExpression (HERE)->isLexiqueFormalArgumentUsedForTest () || (mIndexIdentifier.string ().length () > 0) ;
  GGS_templateInstructionList::cEnumerator instruction (mDoInstructionList, true) ;
  while (instruction.hasCurrentObject () && ! used) {
    used = instruction._mInstruction (HERE) (HERE)->isUsingLexiqueArgument () ;
    instruction.next () ;
  }
  GGS_templateInstructionList::cEnumerator instruction4 (mBeforeInstructionList, true) ;
  while (instruction4.hasCurrentObject () && ! used) {
    used = instruction4._mInstruction (HERE) (HERE)->isUsingLexiqueArgument () ;
    instruction4.next () ;
  }
  GGS_templateInstructionList::cEnumerator instruction3 (mAfterInstructionList, true) ;
  while (instruction3.hasCurrentObject () && ! used) {
    used = instruction3._mInstruction (HERE) (HERE)->isUsingLexiqueArgument () ;
    instruction3.next () ;
  }
  GGS_templateInstructionList::cEnumerator instruction2 (mBetweenInstructionList, true) ;
  while (instruction2.hasCurrentObject () && ! used) {
    used = instruction2._mInstruction (HERE) (HERE)->isUsingLexiqueArgument () ;
    instruction2.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cPtr_templateInstructionIf
#endif

//---------------------------------------------------------------------------*

void cPtr_templateInstructionIf::
generateTemplateInstruction (AC_OutputStream & ioCppFile) const {
  GGS_templateInstructionIfBranchList::cEnumerator branch (mTemplateInstructionIfBranchList, true) ;
  while (branch.hasCurrentObject ()) {
    ioCppFile << "if (" ;
    branch._mExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << ".boolValue ()) {\n" ;
    ioCppFile.incIndentation (+2) ;
    GGS_templateInstructionList::cEnumerator instruction (branch._mInstructionList (HERE), true) ;
    while (instruction.hasCurrentObject ()) {
      instruction._mInstruction (HERE) (HERE)->generateTemplateInstruction (ioCppFile) ;
      instruction.next () ;
    }
    ioCppFile.incIndentation (-2) ;
    ioCppFile << "}else " ;
    branch.next () ;
  }
  ioCppFile << "{\n" ;
  ioCppFile.incIndentation (+2) ;
  GGS_templateInstructionList::cEnumerator instruction (mElseInstructionList, true) ;
  while (instruction.hasCurrentObject ()) {
    instruction._mInstruction (HERE) (HERE)->generateTemplateInstruction (ioCppFile) ;
    instruction.next () ;
  }
  ioCppFile.incIndentation (-2) ;
  ioCppFile << "}\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionIf::
isConstantUsed (const GGS_typeCplusPlusName & inCppName) const {
  bool used = false ;
  GGS_templateInstructionIfBranchList::cEnumerator branch (mTemplateInstructionIfBranchList, true) ;
  while (branch.hasCurrentObject () && ! used) {
    used = branch._mExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inCppName) ;
    GGS_templateInstructionList::cEnumerator instruction (branch._mInstructionList (HERE), true) ;
    while (instruction.hasCurrentObject () && ! used) {
      used = instruction._mInstruction (HERE) (HERE)->isConstantUsed (inCppName) ;
      instruction.next () ;
    }
    branch.next () ;
  }
  GGS_templateInstructionList::cEnumerator instruction (mElseInstructionList, true) ;
  while (instruction.hasCurrentObject () && ! used) {
    used = instruction._mInstruction (HERE) (HERE)->isConstantUsed (inCppName) ;
    instruction.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_templateInstructionIf::
isUsingLexiqueArgument (void) const {
  bool used = false ;
  GGS_templateInstructionIfBranchList::cEnumerator branch (mTemplateInstructionIfBranchList, true) ;
  while (branch.hasCurrentObject () && ! used) {
    used = branch._mExpression (HERE) (HERE)->isLexiqueFormalArgumentUsedForTest () ;
    GGS_templateInstructionList::cEnumerator instruction (branch._mInstructionList (HERE), true) ;
    while (instruction.hasCurrentObject () && ! used) {
      used = instruction._mInstruction (HERE) (HERE)->isUsingLexiqueArgument () ;
      instruction.next () ;
    }
    branch.next () ;
  }
  GGS_templateInstructionList::cEnumerator instruction (mElseInstructionList, true) ;
  while (instruction.hasCurrentObject () && ! used) {
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
  while (current.hasCurrentObject ()) {
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
  while ((current.hasCurrentObject ()) && ! isUsed) {
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
  while ((current.hasCurrentObject ()) && ! isUsed) {
    isUsed = current._mExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    current.next () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*
