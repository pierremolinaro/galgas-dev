#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-13.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_lexiqueComponentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueComponentName.objectCompare (p->mProperty_mLexiqueComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsTemplate.objectCompare (p->mProperty_mIsTemplate) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTemplateDelimitorList.objectCompare (p->mProperty_mTemplateDelimitorList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTemplateReplacementList.objectCompare (p->mProperty_mTemplateReplacementList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalAttributeList.objectCompare (p->mProperty_mLexicalAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalStyleList.objectCompare (p->mProperty_mLexicalStyleList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTerminalDeclarationList.objectCompare (p->mProperty_mTerminalDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalMessageDeclarationList.objectCompare (p->mProperty_mLexicalMessageDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalListDeclarationList.objectCompare (p->mProperty_mLexicalListDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalRuleList.objectCompare (p->mProperty_mLexicalRuleList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternRoutineList.objectCompare (p->mProperty_mExternRoutineList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternFunctionList.objectCompare (p->mProperty_mExternFunctionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexingListAST.objectCompare (p->mProperty_mIndexingListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexingDirectory.objectCompare (p->mProperty_mIndexingDirectory) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalFunctionListAST.objectCompare (p->mProperty_mLexicalFunctionListAST) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_lexiqueComponentAST::objectCompare (const GALGAS_lexiqueComponentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueComponentAST::GALGAS_lexiqueComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueComponentAST GALGAS_lexiqueComponentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexiqueComponentAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (HERE),
                                                      GALGAS_templateReplacementListAST::constructor_emptyList (HERE),
                                                      GALGAS_lexicalAttributeListAST::constructor_emptyList (HERE),
                                                      GALGAS_lexicalStyleListAST::constructor_emptyList (HERE),
                                                      GALGAS_terminalDeclarationListAST::constructor_emptyList (HERE),
                                                      GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (HERE),
                                                      GALGAS_lexicalListDeclarationListAST::constructor_emptyList (HERE),
                                                      GALGAS_lexicalRuleListAST::constructor_emptyList (HERE),
                                                      GALGAS_externRoutineListAST::constructor_emptyList (HERE),
                                                      GALGAS_externFunctionListAST::constructor_emptyList (HERE),
                                                      GALGAS_indexingListAST::constructor_emptyList (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lexicalFunctionListAST::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueComponentAST::GALGAS_lexiqueComponentAST (const cPtr_lexiqueComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueComponentAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueComponentAST GALGAS_lexiqueComponentAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                        const GALGAS_lstring & inAttribute_mLexiqueComponentName,
                                                                        const GALGAS_bool & inAttribute_mIsTemplate,
                                                                        const GALGAS_metamodelTemplateDelimitorListAST & inAttribute_mTemplateDelimitorList,
                                                                        const GALGAS_templateReplacementListAST & inAttribute_mTemplateReplacementList,
                                                                        const GALGAS_lexicalAttributeListAST & inAttribute_mLexicalAttributeList,
                                                                        const GALGAS_lexicalStyleListAST & inAttribute_mLexicalStyleList,
                                                                        const GALGAS_terminalDeclarationListAST & inAttribute_mTerminalDeclarationList,
                                                                        const GALGAS_lexicalMessageDeclarationListAST & inAttribute_mLexicalMessageDeclarationList,
                                                                        const GALGAS_lexicalListDeclarationListAST & inAttribute_mLexicalListDeclarationList,
                                                                        const GALGAS_lexicalRuleListAST & inAttribute_mLexicalRuleList,
                                                                        const GALGAS_externRoutineListAST & inAttribute_mExternRoutineList,
                                                                        const GALGAS_externFunctionListAST & inAttribute_mExternFunctionList,
                                                                        const GALGAS_indexingListAST & inAttribute_mIndexingListAST,
                                                                        const GALGAS_lstring & inAttribute_mIndexingDirectory,
                                                                        const GALGAS_lexicalFunctionListAST & inAttribute_mLexicalFunctionListAST
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mLexiqueComponentName.isValid () && inAttribute_mIsTemplate.isValid () && inAttribute_mTemplateDelimitorList.isValid () && inAttribute_mTemplateReplacementList.isValid () && inAttribute_mLexicalAttributeList.isValid () && inAttribute_mLexicalStyleList.isValid () && inAttribute_mTerminalDeclarationList.isValid () && inAttribute_mLexicalMessageDeclarationList.isValid () && inAttribute_mLexicalListDeclarationList.isValid () && inAttribute_mLexicalRuleList.isValid () && inAttribute_mExternRoutineList.isValid () && inAttribute_mExternFunctionList.isValid () && inAttribute_mIndexingListAST.isValid () && inAttribute_mIndexingDirectory.isValid () && inAttribute_mLexicalFunctionListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexiqueComponentAST (inAttribute_mIsPredefined, inAttribute_mLexiqueComponentName, inAttribute_mIsTemplate, inAttribute_mTemplateDelimitorList, inAttribute_mTemplateReplacementList, inAttribute_mLexicalAttributeList, inAttribute_mLexicalStyleList, inAttribute_mTerminalDeclarationList, inAttribute_mLexicalMessageDeclarationList, inAttribute_mLexicalListDeclarationList, inAttribute_mLexicalRuleList, inAttribute_mExternRoutineList, inAttribute_mExternFunctionList, inAttribute_mIndexingListAST, inAttribute_mIndexingDirectory, inAttribute_mLexicalFunctionListAST COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_lexiqueComponentAST::getter_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mLexiqueComponentName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_lexiqueComponentAST::getter_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueComponentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_lexiqueComponentAST::getter_mIsTemplate (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mIsTemplate ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_lexiqueComponentAST::getter_mIsTemplate (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsTemplate ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_lexiqueComponentAST::getter_mTemplateDelimitorList (UNUSED_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mTemplateDelimitorList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_metamodelTemplateDelimitorListAST cPtr_lexiqueComponentAST::getter_mTemplateDelimitorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTemplateDelimitorList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_templateReplacementListAST GALGAS_lexiqueComponentAST::getter_mTemplateReplacementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mTemplateReplacementList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_templateReplacementListAST cPtr_lexiqueComponentAST::getter_mTemplateReplacementList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTemplateReplacementList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalAttributeListAST GALGAS_lexiqueComponentAST::getter_mLexicalAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mLexicalAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalAttributeListAST cPtr_lexiqueComponentAST::getter_mLexicalAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalStyleListAST GALGAS_lexiqueComponentAST::getter_mLexicalStyleList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mLexicalStyleList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalStyleListAST cPtr_lexiqueComponentAST::getter_mLexicalStyleList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalStyleList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_terminalDeclarationListAST GALGAS_lexiqueComponentAST::getter_mTerminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mTerminalDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_terminalDeclarationListAST cPtr_lexiqueComponentAST::getter_mTerminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTerminalDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexiqueComponentAST::getter_mLexicalMessageDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mLexicalMessageDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalMessageDeclarationListAST cPtr_lexiqueComponentAST::getter_mLexicalMessageDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalMessageDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalListDeclarationListAST GALGAS_lexiqueComponentAST::getter_mLexicalListDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mLexicalListDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalListDeclarationListAST cPtr_lexiqueComponentAST::getter_mLexicalListDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalListDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalRuleListAST GALGAS_lexiqueComponentAST::getter_mLexicalRuleList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mLexicalRuleList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalRuleListAST cPtr_lexiqueComponentAST::getter_mLexicalRuleList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalRuleList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externRoutineListAST GALGAS_lexiqueComponentAST::getter_mExternRoutineList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mExternRoutineList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externRoutineListAST cPtr_lexiqueComponentAST::getter_mExternRoutineList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternRoutineList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionListAST GALGAS_lexiqueComponentAST::getter_mExternFunctionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mExternFunctionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionListAST cPtr_lexiqueComponentAST::getter_mExternFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_indexingListAST GALGAS_lexiqueComponentAST::getter_mIndexingListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_indexingListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mIndexingListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_indexingListAST cPtr_lexiqueComponentAST::getter_mIndexingListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndexingListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_lexiqueComponentAST::getter_mIndexingDirectory (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mIndexingDirectory ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_lexiqueComponentAST::getter_mIndexingDirectory (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndexingDirectory ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionListAST GALGAS_lexiqueComponentAST::getter_mLexicalFunctionListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mProperty_mLexicalFunctionListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionListAST cPtr_lexiqueComponentAST::getter_mLexicalFunctionListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalFunctionListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueComponentAST::setter_setMLexiqueComponentName (GALGAS_lstring inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mLexiqueComponentName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueComponentAST::setter_setMLexiqueComponentName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexiqueComponentName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueComponentAST::setter_setMIsTemplate (GALGAS_bool inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mIsTemplate = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueComponentAST::setter_setMIsTemplate (GALGAS_bool inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsTemplate = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueComponentAST::setter_setMTemplateDelimitorList (GALGAS_metamodelTemplateDelimitorListAST inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mTemplateDelimitorList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueComponentAST::setter_setMTemplateDelimitorList (GALGAS_metamodelTemplateDelimitorListAST inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTemplateDelimitorList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueComponentAST::setter_setMTemplateReplacementList (GALGAS_templateReplacementListAST inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mTemplateReplacementList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueComponentAST::setter_setMTemplateReplacementList (GALGAS_templateReplacementListAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTemplateReplacementList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueComponentAST::setter_setMLexicalAttributeList (GALGAS_lexicalAttributeListAST inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mLexicalAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueComponentAST::setter_setMLexicalAttributeList (GALGAS_lexicalAttributeListAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexicalAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueComponentAST::setter_setMLexicalStyleList (GALGAS_lexicalStyleListAST inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mLexicalStyleList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueComponentAST::setter_setMLexicalStyleList (GALGAS_lexicalStyleListAST inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexicalStyleList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueComponentAST::setter_setMTerminalDeclarationList (GALGAS_terminalDeclarationListAST inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mTerminalDeclarationList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueComponentAST::setter_setMTerminalDeclarationList (GALGAS_terminalDeclarationListAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTerminalDeclarationList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueComponentAST::setter_setMLexicalMessageDeclarationList (GALGAS_lexicalMessageDeclarationListAST inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mLexicalMessageDeclarationList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueComponentAST::setter_setMLexicalMessageDeclarationList (GALGAS_lexicalMessageDeclarationListAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexicalMessageDeclarationList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueComponentAST::setter_setMLexicalListDeclarationList (GALGAS_lexicalListDeclarationListAST inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mLexicalListDeclarationList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueComponentAST::setter_setMLexicalListDeclarationList (GALGAS_lexicalListDeclarationListAST inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexicalListDeclarationList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueComponentAST::setter_setMLexicalRuleList (GALGAS_lexicalRuleListAST inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mLexicalRuleList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueComponentAST::setter_setMLexicalRuleList (GALGAS_lexicalRuleListAST inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexicalRuleList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueComponentAST::setter_setMExternRoutineList (GALGAS_externRoutineListAST inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mExternRoutineList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueComponentAST::setter_setMExternRoutineList (GALGAS_externRoutineListAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExternRoutineList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueComponentAST::setter_setMExternFunctionList (GALGAS_externFunctionListAST inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mExternFunctionList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueComponentAST::setter_setMExternFunctionList (GALGAS_externFunctionListAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExternFunctionList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueComponentAST::setter_setMIndexingListAST (GALGAS_indexingListAST inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mIndexingListAST = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueComponentAST::setter_setMIndexingListAST (GALGAS_indexingListAST inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIndexingListAST = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueComponentAST::setter_setMIndexingDirectory (GALGAS_lstring inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mIndexingDirectory = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueComponentAST::setter_setMIndexingDirectory (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIndexingDirectory = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueComponentAST::setter_setMLexicalFunctionListAST (GALGAS_lexicalFunctionListAST inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    p->mProperty_mLexicalFunctionListAST = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueComponentAST::setter_setMLexicalFunctionListAST (GALGAS_lexicalFunctionListAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexicalFunctionListAST = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @lexiqueComponentAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_lexiqueComponentAST::cPtr_lexiqueComponentAST (const GALGAS_bool & in_mIsPredefined,
                                                    const GALGAS_lstring & in_mLexiqueComponentName,
                                                    const GALGAS_bool & in_mIsTemplate,
                                                    const GALGAS_metamodelTemplateDelimitorListAST & in_mTemplateDelimitorList,
                                                    const GALGAS_templateReplacementListAST & in_mTemplateReplacementList,
                                                    const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeList,
                                                    const GALGAS_lexicalStyleListAST & in_mLexicalStyleList,
                                                    const GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationList,
                                                    const GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationList,
                                                    const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationList,
                                                    const GALGAS_lexicalRuleListAST & in_mLexicalRuleList,
                                                    const GALGAS_externRoutineListAST & in_mExternRoutineList,
                                                    const GALGAS_externFunctionListAST & in_mExternFunctionList,
                                                    const GALGAS_indexingListAST & in_mIndexingListAST,
                                                    const GALGAS_lstring & in_mIndexingDirectory,
                                                    const GALGAS_lexicalFunctionListAST & in_mLexicalFunctionListAST
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mLexiqueComponentName (in_mLexiqueComponentName),
mProperty_mIsTemplate (in_mIsTemplate),
mProperty_mTemplateDelimitorList (in_mTemplateDelimitorList),
mProperty_mTemplateReplacementList (in_mTemplateReplacementList),
mProperty_mLexicalAttributeList (in_mLexicalAttributeList),
mProperty_mLexicalStyleList (in_mLexicalStyleList),
mProperty_mTerminalDeclarationList (in_mTerminalDeclarationList),
mProperty_mLexicalMessageDeclarationList (in_mLexicalMessageDeclarationList),
mProperty_mLexicalListDeclarationList (in_mLexicalListDeclarationList),
mProperty_mLexicalRuleList (in_mLexicalRuleList),
mProperty_mExternRoutineList (in_mExternRoutineList),
mProperty_mExternFunctionList (in_mExternFunctionList),
mProperty_mIndexingListAST (in_mIndexingListAST),
mProperty_mIndexingDirectory (in_mIndexingDirectory),
mProperty_mLexicalFunctionListAST (in_mLexicalFunctionListAST) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_lexiqueComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST ;
}

void cPtr_lexiqueComponentAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@lexiqueComponentAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsTemplate.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTemplateReplacementList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalStyleList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTerminalDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalMessageDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalListDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalRuleList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternRoutineList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternFunctionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexingListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexingDirectory.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalFunctionListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_lexiqueComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexiqueComponentAST (mProperty_mIsPredefined, mProperty_mLexiqueComponentName, mProperty_mIsTemplate, mProperty_mTemplateDelimitorList, mProperty_mTemplateReplacementList, mProperty_mLexicalAttributeList, mProperty_mLexicalStyleList, mProperty_mTerminalDeclarationList, mProperty_mLexicalMessageDeclarationList, mProperty_mLexicalListDeclarationList, mProperty_mLexicalRuleList, mProperty_mExternRoutineList, mProperty_mExternFunctionList, mProperty_mIndexingListAST, mProperty_mIndexingDirectory, mProperty_mLexicalFunctionListAST COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @lexiqueComponentAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentAST ("lexiqueComponentAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_lexiqueComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_lexiqueComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueComponentAST GALGAS_lexiqueComponentAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentAST result ;
  const GALGAS_lexiqueComponentAST * p = (const GALGAS_lexiqueComponentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueAnalysisContext::GALGAS_lexiqueAnalysisContext (void) :
mProperty_mLexiqueName (),
mProperty_mLexicalRoutineMessageMap (),
mProperty_mLexicalFunctionMap (),
mProperty_mLexicalMessageMap (),
mProperty_mTerminalMap (),
mProperty_mTerminalList (),
mProperty_mLexicalAttributeMap (),
mProperty_mLexicalTokenListMap (),
mProperty_mUnicodeStringToGenerate (),
mProperty_mTemplateDelimitorList (),
mProperty_mStyleMap (),
mProperty_mExternUnicodeTestFunctions () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueAnalysisContext::~ GALGAS_lexiqueAnalysisContext (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueAnalysisContext::GALGAS_lexiqueAnalysisContext (const GALGAS_string & inOperand0,
                                                              const GALGAS_lexicalRoutineMap & inOperand1,
                                                              const GALGAS_lexicalFunctionMap & inOperand2,
                                                              const GALGAS_lexicalMessageMap & inOperand3,
                                                              const GALGAS_terminalMap & inOperand4,
                                                              const GALGAS_terminalList & inOperand5,
                                                              const GALGAS_lexicalAttributeMap & inOperand6,
                                                              const GALGAS_lexicalExplicitTokenListMapMap & inOperand7,
                                                              const GALGAS_stringset & inOperand8,
                                                              const GALGAS_templateDelimitorList & inOperand9,
                                                              const GALGAS_styleMap & inOperand10,
                                                              const GALGAS_stringset & inOperand11) :
mProperty_mLexiqueName (inOperand0),
mProperty_mLexicalRoutineMessageMap (inOperand1),
mProperty_mLexicalFunctionMap (inOperand2),
mProperty_mLexicalMessageMap (inOperand3),
mProperty_mTerminalMap (inOperand4),
mProperty_mTerminalList (inOperand5),
mProperty_mLexicalAttributeMap (inOperand6),
mProperty_mLexicalTokenListMap (inOperand7),
mProperty_mUnicodeStringToGenerate (inOperand8),
mProperty_mTemplateDelimitorList (inOperand9),
mProperty_mStyleMap (inOperand10),
mProperty_mExternUnicodeTestFunctions (inOperand11) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexiqueAnalysisContext (GALGAS_string::constructor_default (HERE),
                                        GALGAS_lexicalRoutineMap::constructor_emptyMap (HERE),
                                        GALGAS_lexicalFunctionMap::constructor_emptyMap (HERE),
                                        GALGAS_lexicalMessageMap::constructor_emptyMap (HERE),
                                        GALGAS_terminalMap::constructor_emptyMap (HERE),
                                        GALGAS_terminalList::constructor_emptyList (HERE),
                                        GALGAS_lexicalAttributeMap::constructor_emptyMap (HERE),
                                        GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE),
                                        GALGAS_templateDelimitorList::constructor_emptyList (HERE),
                                        GALGAS_styleMap::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::constructor_new (const GALGAS_string & inOperand0,
                                                                              const GALGAS_lexicalRoutineMap & inOperand1,
                                                                              const GALGAS_lexicalFunctionMap & inOperand2,
                                                                              const GALGAS_lexicalMessageMap & inOperand3,
                                                                              const GALGAS_terminalMap & inOperand4,
                                                                              const GALGAS_terminalList & inOperand5,
                                                                              const GALGAS_lexicalAttributeMap & inOperand6,
                                                                              const GALGAS_lexicalExplicitTokenListMapMap & inOperand7,
                                                                              const GALGAS_stringset & inOperand8,
                                                                              const GALGAS_templateDelimitorList & inOperand9,
                                                                              const GALGAS_styleMap & inOperand10,
                                                                              const GALGAS_stringset & inOperand11 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexiqueAnalysisContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid ()) {
    result = GALGAS_lexiqueAnalysisContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_lexiqueAnalysisContext::objectCompare (const GALGAS_lexiqueAnalysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLexiqueName.objectCompare (inOperand.mProperty_mLexiqueName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalRoutineMessageMap.objectCompare (inOperand.mProperty_mLexicalRoutineMessageMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalFunctionMap.objectCompare (inOperand.mProperty_mLexicalFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalMessageMap.objectCompare (inOperand.mProperty_mLexicalMessageMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminalMap.objectCompare (inOperand.mProperty_mTerminalMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminalList.objectCompare (inOperand.mProperty_mTerminalList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalAttributeMap.objectCompare (inOperand.mProperty_mLexicalAttributeMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalTokenListMap.objectCompare (inOperand.mProperty_mLexicalTokenListMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnicodeStringToGenerate.objectCompare (inOperand.mProperty_mUnicodeStringToGenerate) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTemplateDelimitorList.objectCompare (inOperand.mProperty_mTemplateDelimitorList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStyleMap.objectCompare (inOperand.mProperty_mStyleMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternUnicodeTestFunctions.objectCompare (inOperand.mProperty_mExternUnicodeTestFunctions) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_lexiqueAnalysisContext::isValid (void) const {
  return mProperty_mLexiqueName.isValid () && mProperty_mLexicalRoutineMessageMap.isValid () && mProperty_mLexicalFunctionMap.isValid () && mProperty_mLexicalMessageMap.isValid () && mProperty_mTerminalMap.isValid () && mProperty_mTerminalList.isValid () && mProperty_mLexicalAttributeMap.isValid () && mProperty_mLexicalTokenListMap.isValid () && mProperty_mUnicodeStringToGenerate.isValid () && mProperty_mTemplateDelimitorList.isValid () && mProperty_mStyleMap.isValid () && mProperty_mExternUnicodeTestFunctions.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueAnalysisContext::drop (void) {
  mProperty_mLexiqueName.drop () ;
  mProperty_mLexicalRoutineMessageMap.drop () ;
  mProperty_mLexicalFunctionMap.drop () ;
  mProperty_mLexicalMessageMap.drop () ;
  mProperty_mTerminalMap.drop () ;
  mProperty_mTerminalList.drop () ;
  mProperty_mLexicalAttributeMap.drop () ;
  mProperty_mLexicalTokenListMap.drop () ;
  mProperty_mUnicodeStringToGenerate.drop () ;
  mProperty_mTemplateDelimitorList.drop () ;
  mProperty_mStyleMap.drop () ;
  mProperty_mExternUnicodeTestFunctions.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueAnalysisContext::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @lexiqueAnalysisContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalRoutineMessageMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalMessageMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminalMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminalList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalAttributeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalTokenListMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUnicodeStringToGenerate.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStyleMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternUnicodeTestFunctions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_lexiqueAnalysisContext::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalRoutineMap GALGAS_lexiqueAnalysisContext::getter_mLexicalRoutineMessageMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalRoutineMessageMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionMap GALGAS_lexiqueAnalysisContext::getter_mLexicalFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalFunctionMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalMessageMap GALGAS_lexiqueAnalysisContext::getter_mLexicalMessageMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalMessageMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_terminalMap GALGAS_lexiqueAnalysisContext::getter_mTerminalMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTerminalMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_terminalList GALGAS_lexiqueAnalysisContext::getter_mTerminalList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTerminalList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalAttributeMap GALGAS_lexiqueAnalysisContext::getter_mLexicalAttributeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalAttributeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexiqueAnalysisContext::getter_mLexicalTokenListMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalTokenListMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_lexiqueAnalysisContext::getter_mUnicodeStringToGenerate (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnicodeStringToGenerate ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_templateDelimitorList GALGAS_lexiqueAnalysisContext::getter_mTemplateDelimitorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTemplateDelimitorList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_styleMap GALGAS_lexiqueAnalysisContext::getter_mStyleMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStyleMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_lexiqueAnalysisContext::getter_mExternUnicodeTestFunctions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternUnicodeTestFunctions ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @lexiqueAnalysisContext type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueAnalysisContext ("lexiqueAnalysisContext",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_lexiqueAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueAnalysisContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_lexiqueAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueAnalysisContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueAnalysisContext result ;
  const GALGAS_lexiqueAnalysisContext * p = (const GALGAS_lexiqueAnalysisContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_lexicalFunctionCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFunctionCallAST * p = (const cPtr_lexicalFunctionCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFunctionCallAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCalledFunctionName.objectCompare (p->mProperty_mCalledFunctionName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_lexicalFunctionCallAST::objectCompare (const GALGAS_lexicalFunctionCallAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionCallAST::GALGAS_lexicalFunctionCallAST (void) :
GALGAS_lexicalFunctionExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionCallAST GALGAS_lexicalFunctionCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionCallAST::GALGAS_lexicalFunctionCallAST (const cPtr_lexicalFunctionCallAST * inSourcePtr) :
GALGAS_lexicalFunctionExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionCallAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionCallAST GALGAS_lexicalFunctionCallAST::constructor_new (const GALGAS_lstring & inAttribute_mCalledFunctionName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallAST result ;
  if (inAttribute_mCalledFunctionName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionCallAST (inAttribute_mCalledFunctionName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_lexicalFunctionCallAST::getter_mCalledFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalFunctionCallAST * p = (const cPtr_lexicalFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCallAST) ;
    result = p->mProperty_mCalledFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_lexicalFunctionCallAST::getter_mCalledFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCalledFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexicalFunctionCallAST::setter_setMCalledFunctionName (GALGAS_lstring inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalFunctionCallAST * p = (cPtr_lexicalFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCallAST) ;
    p->mProperty_mCalledFunctionName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexicalFunctionCallAST::setter_setMCalledFunctionName (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCalledFunctionName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @lexicalFunctionCallAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_lexicalFunctionCallAST::cPtr_lexicalFunctionCallAST (const GALGAS_lstring & in_mCalledFunctionName
                                                          COMMA_LOCATION_ARGS) :
cPtr_lexicalFunctionExpressionAST (THERE),
mProperty_mCalledFunctionName (in_mCalledFunctionName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_lexicalFunctionCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallAST ;
}

void cPtr_lexicalFunctionCallAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalFunctionCallAST:" ;
  mProperty_mCalledFunctionName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_lexicalFunctionCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFunctionCallAST (mProperty_mCalledFunctionName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @lexicalFunctionCallAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCallAST ("lexicalFunctionCallAST",
                                               & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_lexicalFunctionCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCallAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionCallAST GALGAS_lexicalFunctionCallAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallAST result ;
  const GALGAS_lexicalFunctionCallAST * p = (const GALGAS_lexicalFunctionCallAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_lexicalFunctionCharacterMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFunctionCharacterMatchAST * p = (const cPtr_lexicalFunctionCharacterMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFunctionCharacterMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCharacter.objectCompare (p->mProperty_mCharacter) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_lexicalFunctionCharacterMatchAST::objectCompare (const GALGAS_lexicalFunctionCharacterMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionCharacterMatchAST::GALGAS_lexicalFunctionCharacterMatchAST (void) :
GALGAS_lexicalFunctionExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionCharacterMatchAST GALGAS_lexicalFunctionCharacterMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCharacterMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionCharacterMatchAST::GALGAS_lexicalFunctionCharacterMatchAST (const cPtr_lexicalFunctionCharacterMatchAST * inSourcePtr) :
GALGAS_lexicalFunctionExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionCharacterMatchAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionCharacterMatchAST GALGAS_lexicalFunctionCharacterMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mCharacter
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterMatchAST result ;
  if (inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionCharacterMatchAST (inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lchar GALGAS_lexicalFunctionCharacterMatchAST::getter_mCharacter (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalFunctionCharacterMatchAST * p = (const cPtr_lexicalFunctionCharacterMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterMatchAST) ;
    result = p->mProperty_mCharacter ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lchar cPtr_lexicalFunctionCharacterMatchAST::getter_mCharacter (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCharacter ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexicalFunctionCharacterMatchAST::setter_setMCharacter (GALGAS_lchar inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalFunctionCharacterMatchAST * p = (cPtr_lexicalFunctionCharacterMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterMatchAST) ;
    p->mProperty_mCharacter = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexicalFunctionCharacterMatchAST::setter_setMCharacter (GALGAS_lchar inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCharacter = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @lexicalFunctionCharacterMatchAST class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_lexicalFunctionCharacterMatchAST::cPtr_lexicalFunctionCharacterMatchAST (const GALGAS_lchar & in_mCharacter
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalFunctionExpressionAST (THERE),
mProperty_mCharacter (in_mCharacter) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_lexicalFunctionCharacterMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST ;
}

void cPtr_lexicalFunctionCharacterMatchAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@lexicalFunctionCharacterMatchAST:" ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_lexicalFunctionCharacterMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFunctionCharacterMatchAST (mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @lexicalFunctionCharacterMatchAST type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST ("lexicalFunctionCharacterMatchAST",
                                                         & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCharacterMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_lexicalFunctionCharacterMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCharacterMatchAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionCharacterMatchAST GALGAS_lexicalFunctionCharacterMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterMatchAST result ;
  const GALGAS_lexicalFunctionCharacterMatchAST * p = (const GALGAS_lexicalFunctionCharacterMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCharacterMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCharacterMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_lexicalFunctionCharacterIntervalMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFunctionCharacterIntervalMatchAST * p = (const cPtr_lexicalFunctionCharacterIntervalMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLowerBound.objectCompare (p->mProperty_mLowerBound) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBound.objectCompare (p->mProperty_mUpperBound) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_lexicalFunctionCharacterIntervalMatchAST::objectCompare (const GALGAS_lexicalFunctionCharacterIntervalMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionCharacterIntervalMatchAST::GALGAS_lexicalFunctionCharacterIntervalMatchAST (void) :
GALGAS_lexicalFunctionExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionCharacterIntervalMatchAST GALGAS_lexicalFunctionCharacterIntervalMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCharacterIntervalMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE),
                                                                           GALGAS_lchar::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionCharacterIntervalMatchAST::GALGAS_lexicalFunctionCharacterIntervalMatchAST (const cPtr_lexicalFunctionCharacterIntervalMatchAST * inSourcePtr) :
GALGAS_lexicalFunctionExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionCharacterIntervalMatchAST GALGAS_lexicalFunctionCharacterIntervalMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mLowerBound,
                                                                                                                  const GALGAS_lchar & inAttribute_mUpperBound
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterIntervalMatchAST result ;
  if (inAttribute_mLowerBound.isValid () && inAttribute_mUpperBound.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionCharacterIntervalMatchAST (inAttribute_mLowerBound, inAttribute_mUpperBound COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lchar GALGAS_lexicalFunctionCharacterIntervalMatchAST::getter_mLowerBound (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalFunctionCharacterIntervalMatchAST * p = (const cPtr_lexicalFunctionCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
    result = p->mProperty_mLowerBound ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lchar cPtr_lexicalFunctionCharacterIntervalMatchAST::getter_mLowerBound (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLowerBound ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lchar GALGAS_lexicalFunctionCharacterIntervalMatchAST::getter_mUpperBound (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalFunctionCharacterIntervalMatchAST * p = (const cPtr_lexicalFunctionCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
    result = p->mProperty_mUpperBound ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lchar cPtr_lexicalFunctionCharacterIntervalMatchAST::getter_mUpperBound (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUpperBound ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexicalFunctionCharacterIntervalMatchAST::setter_setMLowerBound (GALGAS_lchar inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalFunctionCharacterIntervalMatchAST * p = (cPtr_lexicalFunctionCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
    p->mProperty_mLowerBound = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexicalFunctionCharacterIntervalMatchAST::setter_setMLowerBound (GALGAS_lchar inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLowerBound = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexicalFunctionCharacterIntervalMatchAST::setter_setMUpperBound (GALGAS_lchar inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalFunctionCharacterIntervalMatchAST * p = (cPtr_lexicalFunctionCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
    p->mProperty_mUpperBound = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexicalFunctionCharacterIntervalMatchAST::setter_setMUpperBound (GALGAS_lchar inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mUpperBound = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                          Pointer class for @lexicalFunctionCharacterIntervalMatchAST class                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_lexicalFunctionCharacterIntervalMatchAST::cPtr_lexicalFunctionCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                                                              const GALGAS_lchar & in_mUpperBound
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalFunctionExpressionAST (THERE),
mProperty_mLowerBound (in_mLowerBound),
mProperty_mUpperBound (in_mUpperBound) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_lexicalFunctionCharacterIntervalMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST ;
}

void cPtr_lexicalFunctionCharacterIntervalMatchAST::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalFunctionCharacterIntervalMatchAST:" ;
  mProperty_mLowerBound.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperBound.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_lexicalFunctionCharacterIntervalMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFunctionCharacterIntervalMatchAST (mProperty_mLowerBound, mProperty_mUpperBound COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @lexicalFunctionCharacterIntervalMatchAST type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST ("lexicalFunctionCharacterIntervalMatchAST",
                                                                 & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCharacterIntervalMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_lexicalFunctionCharacterIntervalMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCharacterIntervalMatchAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexicalFunctionCharacterIntervalMatchAST GALGAS_lexicalFunctionCharacterIntervalMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterIntervalMatchAST result ;
  const GALGAS_lexicalFunctionCharacterIntervalMatchAST * p = (const GALGAS_lexicalFunctionCharacterIntervalMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCharacterIntervalMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCharacterIntervalMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_optionComponentDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_optionComponentDeclarationAST * p = (const cPtr_optionComponentDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentName.objectCompare (p->mProperty_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptions.objectCompare (p->mProperty_mOptions) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_optionComponentDeclarationAST::objectCompare (const GALGAS_optionComponentDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionComponentDeclarationAST::GALGAS_optionComponentDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionComponentDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_commandLineOptionListAST::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionComponentDeclarationAST::GALGAS_optionComponentDeclarationAST (const cPtr_optionComponentDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionComponentDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                            const GALGAS_lstring & inAttribute_mOptionComponentName,
                                                                                            const GALGAS_commandLineOptionListAST & inAttribute_mOptions
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mOptionComponentName.isValid () && inAttribute_mOptions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_optionComponentDeclarationAST (inAttribute_mIsPredefined, inAttribute_mOptionComponentName, inAttribute_mOptions COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_optionComponentDeclarationAST::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentDeclarationAST * p = (const cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    result = p->mProperty_mOptionComponentName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_optionComponentDeclarationAST::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionComponentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_commandLineOptionListAST GALGAS_optionComponentDeclarationAST::getter_mOptions (UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentDeclarationAST * p = (const cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    result = p->mProperty_mOptions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_commandLineOptionListAST cPtr_optionComponentDeclarationAST::getter_mOptions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_optionComponentDeclarationAST::setter_setMOptionComponentName (GALGAS_lstring inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    p->mProperty_mOptionComponentName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_optionComponentDeclarationAST::setter_setMOptionComponentName (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionComponentName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_optionComponentDeclarationAST::setter_setMOptions (GALGAS_commandLineOptionListAST inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    p->mProperty_mOptions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_optionComponentDeclarationAST::setter_setMOptions (GALGAS_commandLineOptionListAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @optionComponentDeclarationAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_optionComponentDeclarationAST::cPtr_optionComponentDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_lstring & in_mOptionComponentName,
                                                                        const GALGAS_commandLineOptionListAST & in_mOptions
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mOptionComponentName (in_mOptionComponentName),
mProperty_mOptions (in_mOptions) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_optionComponentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;
}

void cPtr_optionComponentDeclarationAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@optionComponentDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_optionComponentDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionComponentDeclarationAST (mProperty_mIsPredefined, mProperty_mOptionComponentName, mProperty_mOptions COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @optionComponentDeclarationAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentDeclarationAST ("optionComponentDeclarationAST",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_optionComponentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_optionComponentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentDeclarationAST result ;
  const GALGAS_optionComponentDeclarationAST * p = (const GALGAS_optionComponentDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_semanticDeclarationWithHeaderForGeneration::objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticDeclarationWithHeaderForGeneration::GALGAS_semanticDeclarationWithHeaderForGeneration (void) :
GALGAS_semanticDeclarationForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticDeclarationWithHeaderForGeneration::GALGAS_semanticDeclarationWithHeaderForGeneration (const cPtr_semanticDeclarationWithHeaderForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticDeclarationWithHeaderForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_semanticDeclarationWithHeaderForGeneration::getter_mHasHeader (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticDeclarationWithHeaderForGeneration * p = (const cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    result = p->mProperty_mHasHeader ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_semanticDeclarationWithHeaderForGeneration::getter_mHasHeader (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasHeader ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_semanticDeclarationWithHeaderForGeneration::getter_mImplementationCppFileName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticDeclarationWithHeaderForGeneration * p = (const cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    result = p->mProperty_mImplementationCppFileName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_semanticDeclarationWithHeaderForGeneration::getter_mImplementationCppFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mImplementationCppFileName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticDeclarationWithHeaderForGeneration::setter_setMHasHeader (GALGAS_bool inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_semanticDeclarationWithHeaderForGeneration * p = (cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    p->mProperty_mHasHeader = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_semanticDeclarationWithHeaderForGeneration::setter_setMHasHeader (GALGAS_bool inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasHeader = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticDeclarationWithHeaderForGeneration::setter_setMImplementationCppFileName (GALGAS_string inValue
                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_semanticDeclarationWithHeaderForGeneration * p = (cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    p->mProperty_mImplementationCppFileName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_semanticDeclarationWithHeaderForGeneration::setter_setMImplementationCppFileName (GALGAS_string inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mImplementationCppFileName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         Pointer class for @semanticDeclarationWithHeaderForGeneration class                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_semanticDeclarationWithHeaderForGeneration::cPtr_semanticDeclarationWithHeaderForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                                  const GALGAS_string & in_mImplementationCppFileName
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (THERE),
mProperty_mHasHeader (in_mHasHeader),
mProperty_mImplementationCppFileName (in_mImplementationCppFileName) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @semanticDeclarationWithHeaderForGeneration type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ("semanticDeclarationWithHeaderForGeneration",
                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_semanticDeclarationWithHeaderForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_semanticDeclarationWithHeaderForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationWithHeaderForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticDeclarationWithHeaderForGeneration GALGAS_semanticDeclarationWithHeaderForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationWithHeaderForGeneration result ;
  const GALGAS_semanticDeclarationWithHeaderForGeneration * p = (const GALGAS_semanticDeclarationWithHeaderForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationWithHeaderForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationWithHeaderForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_arrayDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arrayDeclarationAST * p = (const cPtr_arrayDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayTypeName.objectCompare (p->mProperty_mArrayTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeName.objectCompare (p->mProperty_mElementTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDimension.objectCompare (p->mProperty_mDimension) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_arrayDeclarationAST::objectCompare (const GALGAS_arrayDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayDeclarationAST::GALGAS_arrayDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayDeclarationAST GALGAS_arrayDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_arrayDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_luint::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayDeclarationAST::GALGAS_arrayDeclarationAST (const cPtr_arrayDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayDeclarationAST GALGAS_arrayDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                        const GALGAS_lstring & inAttribute_mArrayTypeName,
                                                                        const GALGAS_lstring & inAttribute_mElementTypeName,
                                                                        const GALGAS_luint & inAttribute_mDimension
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mArrayTypeName.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mDimension.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayDeclarationAST (inAttribute_mIsPredefined, inAttribute_mArrayTypeName, inAttribute_mElementTypeName, inAttribute_mDimension COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayDeclarationAST::getter_mArrayTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayDeclarationAST * p = (const cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    result = p->mProperty_mArrayTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_arrayDeclarationAST::getter_mArrayTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayDeclarationAST::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayDeclarationAST * p = (const cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    result = p->mProperty_mElementTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_arrayDeclarationAST::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint GALGAS_arrayDeclarationAST::getter_mDimension (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayDeclarationAST * p = (const cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    result = p->mProperty_mDimension ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint cPtr_arrayDeclarationAST::getter_mDimension (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDimension ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayDeclarationAST::setter_setMArrayTypeName (GALGAS_lstring inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_arrayDeclarationAST * p = (cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    p->mProperty_mArrayTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_arrayDeclarationAST::setter_setMArrayTypeName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mArrayTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayDeclarationAST::setter_setMElementTypeName (GALGAS_lstring inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_arrayDeclarationAST * p = (cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_arrayDeclarationAST::setter_setMElementTypeName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElementTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayDeclarationAST::setter_setMDimension (GALGAS_luint inValue
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_arrayDeclarationAST * p = (cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    p->mProperty_mDimension = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_arrayDeclarationAST::setter_setMDimension (GALGAS_luint inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDimension = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @arrayDeclarationAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_arrayDeclarationAST::cPtr_arrayDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                    const GALGAS_lstring & in_mArrayTypeName,
                                                    const GALGAS_lstring & in_mElementTypeName,
                                                    const GALGAS_luint & in_mDimension
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mArrayTypeName (in_mArrayTypeName),
mProperty_mElementTypeName (in_mElementTypeName),
mProperty_mDimension (in_mDimension) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_arrayDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayDeclarationAST ;
}

void cPtr_arrayDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@arrayDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDimension.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_arrayDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayDeclarationAST (mProperty_mIsPredefined, mProperty_mArrayTypeName, mProperty_mElementTypeName, mProperty_mDimension COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @arrayDeclarationAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayDeclarationAST ("arrayDeclarationAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayDeclarationAST GALGAS_arrayDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arrayDeclarationAST result ;
  const GALGAS_arrayDeclarationAST * p = (const GALGAS_arrayDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_semanticTypeForGeneration::objectCompare (const GALGAS_semanticTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTypeForGeneration::GALGAS_semanticTypeForGeneration (void) :
GALGAS_semanticDeclarationForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTypeForGeneration::GALGAS_semanticTypeForGeneration (const cPtr_semanticTypeForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticTypeForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticTypeForGeneration::getter_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticTypeForGeneration * p = (const cPtr_semanticTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticTypeForGeneration) ;
    result = p->mProperty_mTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_semanticTypeForGeneration::getter_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticTypeForGeneration::setter_setMTypeProxy (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_semanticTypeForGeneration * p = (cPtr_semanticTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticTypeForGeneration) ;
    p->mProperty_mTypeProxy = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_semanticTypeForGeneration::setter_setMTypeProxy (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeProxy = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @semanticTypeForGeneration class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_semanticTypeForGeneration::cPtr_semanticTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (THERE),
mProperty_mTypeProxy (in_mTypeProxy) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @semanticTypeForGeneration type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTypeForGeneration ("semanticTypeForGeneration",
                                                  & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_semanticTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypeForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_semanticTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypeForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTypeForGeneration GALGAS_semanticTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticTypeForGeneration result ;
  const GALGAS_semanticTypeForGeneration * p = (const GALGAS_semanticTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_boolsetDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolsetDeclarationAST * p = (const cPtr_boolsetDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBoolsetTypeName.objectCompare (p->mProperty_mBoolsetTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFlagList.objectCompare (p->mProperty_mFlagList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_boolsetDeclarationAST::objectCompare (const GALGAS_boolsetDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolsetDeclarationAST::GALGAS_boolsetDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolsetDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstringlist::constructor_emptyList (HERE)
                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolsetDeclarationAST::GALGAS_boolsetDeclarationAST (const cPtr_boolsetDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolsetDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_lstring & inAttribute_mBoolsetTypeName,
                                                                            const GALGAS_lstringlist & inAttribute_mFlagList
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_boolsetDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mBoolsetTypeName.isValid () && inAttribute_mFlagList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolsetDeclarationAST (inAttribute_mIsPredefined, inAttribute_mBoolsetTypeName, inAttribute_mFlagList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_boolsetDeclarationAST::getter_mBoolsetTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_boolsetDeclarationAST * p = (const cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    result = p->mProperty_mBoolsetTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_boolsetDeclarationAST::getter_mBoolsetTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoolsetTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_boolsetDeclarationAST::getter_mFlagList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_boolsetDeclarationAST * p = (const cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    result = p->mProperty_mFlagList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_boolsetDeclarationAST::getter_mFlagList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFlagList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_boolsetDeclarationAST::setter_setMBoolsetTypeName (GALGAS_lstring inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    p->mProperty_mBoolsetTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_boolsetDeclarationAST::setter_setMBoolsetTypeName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBoolsetTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_boolsetDeclarationAST::setter_setMFlagList (GALGAS_lstringlist inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    p->mProperty_mFlagList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_boolsetDeclarationAST::setter_setMFlagList (GALGAS_lstringlist inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFlagList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @boolsetDeclarationAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_boolsetDeclarationAST::cPtr_boolsetDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_lstring & in_mBoolsetTypeName,
                                                        const GALGAS_lstringlist & in_mFlagList
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mBoolsetTypeName (in_mBoolsetTypeName),
mProperty_mFlagList (in_mFlagList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_boolsetDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST ;
}

void cPtr_boolsetDeclarationAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@boolsetDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBoolsetTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFlagList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_boolsetDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolsetDeclarationAST (mProperty_mIsPredefined, mProperty_mBoolsetTypeName, mProperty_mFlagList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @boolsetDeclarationAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetDeclarationAST ("boolsetDeclarationAST",
                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_boolsetDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_boolsetDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolsetDeclarationAST result ;
  const GALGAS_boolsetDeclarationAST * p = (const GALGAS_boolsetDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolsetDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_boolsetTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolsetTypeForGeneration * p = (const cPtr_boolsetTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolsetTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (p->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFlagList.objectCompare (p->mProperty_mFlagList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_boolsetTypeForGeneration::objectCompare (const GALGAS_boolsetTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolsetTypeForGeneration::GALGAS_boolsetTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolsetTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                           GALGAS_lstringlist::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolsetTypeForGeneration::GALGAS_boolsetTypeForGeneration (const cPtr_boolsetTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolsetTypeForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                                  const GALGAS_lstringlist & inAttribute_mFlagList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mFlagList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolsetTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mFlagList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_boolsetTypeForGeneration::getter_mFlagList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_boolsetTypeForGeneration * p = (const cPtr_boolsetTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetTypeForGeneration) ;
    result = p->mProperty_mFlagList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_boolsetTypeForGeneration::getter_mFlagList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFlagList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_boolsetTypeForGeneration::setter_setMFlagList (GALGAS_lstringlist inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_boolsetTypeForGeneration * p = (cPtr_boolsetTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetTypeForGeneration) ;
    p->mProperty_mFlagList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_boolsetTypeForGeneration::setter_setMFlagList (GALGAS_lstringlist inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFlagList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @boolsetTypeForGeneration class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_boolsetTypeForGeneration::cPtr_boolsetTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                              const GALGAS_lstringlist & in_mFlagList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mProperty_mFlagList (in_mFlagList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_boolsetTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;
}

void cPtr_boolsetTypeForGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@boolsetTypeForGeneration:" ;
  mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFlagList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_boolsetTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolsetTypeForGeneration (mProperty_mTypeProxy, mProperty_mFlagList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @boolsetTypeForGeneration type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetTypeForGeneration ("boolsetTypeForGeneration",
                                                 & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_boolsetTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_boolsetTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetTypeForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration result ;
  const GALGAS_boolsetTypeForGeneration * p = (const GALGAS_boolsetTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolsetTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_classDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_classDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsShared.objectCompare (p->mProperty_mIsShared) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassTypeName.objectCompare (p->mProperty_mClassTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClassName.objectCompare (p->mProperty_mSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassFeatureList.objectCompare (p->mProperty_mClassFeatureList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_classDeclarationAST::objectCompare (const GALGAS_classDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclarationAST::GALGAS_classDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_classDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstringlist::constructor_emptyList (HERE),
                                                      GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclarationAST::GALGAS_classDeclarationAST (const cPtr_classDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                        const GALGAS_bool & inAttribute_mIsAbstract,
                                                                        const GALGAS_bool & inAttribute_mIsShared,
                                                                        const GALGAS_lstring & inAttribute_mClassTypeName,
                                                                        const GALGAS_lstring & inAttribute_mSuperClassName,
                                                                        const GALGAS_lstringlist & inAttribute_mClassFeatureList,
                                                                        const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mIsShared.isValid () && inAttribute_mClassTypeName.isValid () && inAttribute_mSuperClassName.isValid () && inAttribute_mClassFeatureList.isValid () && inAttribute_mPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_classDeclarationAST (inAttribute_mIsPredefined, inAttribute_mIsAbstract, inAttribute_mIsShared, inAttribute_mClassTypeName, inAttribute_mSuperClassName, inAttribute_mClassFeatureList, inAttribute_mPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_classDeclarationAST::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mIsAbstract ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_classDeclarationAST::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsAbstract ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_classDeclarationAST::getter_mIsShared (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mIsShared ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_classDeclarationAST::getter_mIsShared (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsShared ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_classDeclarationAST::getter_mClassTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mClassTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_classDeclarationAST::getter_mClassTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_classDeclarationAST::getter_mSuperClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mSuperClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_classDeclarationAST::getter_mSuperClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_classDeclarationAST::getter_mClassFeatureList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mClassFeatureList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_classDeclarationAST::getter_mClassFeatureList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassFeatureList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyInCollectionListAST GALGAS_classDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyInCollectionListAST cPtr_classDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classDeclarationAST::setter_setMIsAbstract (GALGAS_bool inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    p->mProperty_mIsAbstract = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_classDeclarationAST::setter_setMIsAbstract (GALGAS_bool inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsAbstract = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classDeclarationAST::setter_setMIsShared (GALGAS_bool inValue
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    p->mProperty_mIsShared = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_classDeclarationAST::setter_setMIsShared (GALGAS_bool inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsShared = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classDeclarationAST::setter_setMClassTypeName (GALGAS_lstring inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    p->mProperty_mClassTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_classDeclarationAST::setter_setMClassTypeName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mClassTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classDeclarationAST::setter_setMSuperClassName (GALGAS_lstring inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    p->mProperty_mSuperClassName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_classDeclarationAST::setter_setMSuperClassName (GALGAS_lstring inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSuperClassName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classDeclarationAST::setter_setMClassFeatureList (GALGAS_lstringlist inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    p->mProperty_mClassFeatureList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_classDeclarationAST::setter_setMClassFeatureList (GALGAS_lstringlist inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mClassFeatureList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_classDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPropertyList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @classDeclarationAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_classDeclarationAST::cPtr_classDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                    const GALGAS_bool & in_mIsAbstract,
                                                    const GALGAS_bool & in_mIsShared,
                                                    const GALGAS_lstring & in_mClassTypeName,
                                                    const GALGAS_lstring & in_mSuperClassName,
                                                    const GALGAS_lstringlist & in_mClassFeatureList,
                                                    const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mIsShared (in_mIsShared),
mProperty_mClassTypeName (in_mClassTypeName),
mProperty_mSuperClassName (in_mSuperClassName),
mProperty_mClassFeatureList (in_mClassFeatureList),
mProperty_mPropertyList (in_mPropertyList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_classDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

void cPtr_classDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@classDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsShared.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassFeatureList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_classDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_classDeclarationAST (mProperty_mIsPredefined, mProperty_mIsAbstract, mProperty_mIsShared, mProperty_mClassTypeName, mProperty_mSuperClassName, mProperty_mClassFeatureList, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @classDeclarationAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classDeclarationAST ("classDeclarationAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_classDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_classDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST result ;
  const GALGAS_classDeclarationAST * p = (const GALGAS_classDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_classTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (p->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsShared.objectCompare (p->mProperty_mIsShared) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClass.objectCompare (p->mProperty_mSuperClass) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllTypedAttributeList.objectCompare (p->mProperty_mAllTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerateHeaderInSeparateFile.objectCompare (p->mProperty_mGenerateHeaderInSeparateFile) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_classTypeForGeneration::objectCompare (const GALGAS_classTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classTypeForGeneration::GALGAS_classTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_classTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                         GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                         GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                         GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                         GALGAS_bool::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classTypeForGeneration::GALGAS_classTypeForGeneration (const cPtr_classTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classTypeForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                              const GALGAS_bool & inAttribute_mIsAbstract,
                                                                              const GALGAS_bool & inAttribute_mIsShared,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mSuperClass,
                                                                              const GALGAS_typedPropertyList & inAttribute_mAllTypedAttributeList,
                                                                              const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                              const GALGAS_bool & inAttribute_mGenerateHeaderInSeparateFile
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_classTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mIsShared.isValid () && inAttribute_mSuperClass.isValid () && inAttribute_mAllTypedAttributeList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mGenerateHeaderInSeparateFile.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_classTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mIsAbstract, inAttribute_mIsShared, inAttribute_mSuperClass, inAttribute_mAllTypedAttributeList, inAttribute_mTypedAttributeList, inAttribute_mGenerateHeaderInSeparateFile COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_classTypeForGeneration::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    result = p->mProperty_mIsAbstract ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_classTypeForGeneration::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsAbstract ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_classTypeForGeneration::getter_mIsShared (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    result = p->mProperty_mIsShared ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_classTypeForGeneration::getter_mIsShared (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsShared ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_classTypeForGeneration::getter_mSuperClass (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    result = p->mProperty_mSuperClass ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_classTypeForGeneration::getter_mSuperClass (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperClass ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList GALGAS_classTypeForGeneration::getter_mAllTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    result = p->mProperty_mAllTypedAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList cPtr_classTypeForGeneration::getter_mAllTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAllTypedAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList GALGAS_classTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList cPtr_classTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_classTypeForGeneration::getter_mGenerateHeaderInSeparateFile (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    result = p->mProperty_mGenerateHeaderInSeparateFile ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_classTypeForGeneration::getter_mGenerateHeaderInSeparateFile (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerateHeaderInSeparateFile ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classTypeForGeneration::setter_setMIsAbstract (GALGAS_bool inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    p->mProperty_mIsAbstract = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_classTypeForGeneration::setter_setMIsAbstract (GALGAS_bool inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsAbstract = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classTypeForGeneration::setter_setMIsShared (GALGAS_bool inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    p->mProperty_mIsShared = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_classTypeForGeneration::setter_setMIsShared (GALGAS_bool inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsShared = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classTypeForGeneration::setter_setMSuperClass (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    p->mProperty_mSuperClass = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_classTypeForGeneration::setter_setMSuperClass (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSuperClass = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classTypeForGeneration::setter_setMAllTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    p->mProperty_mAllTypedAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_classTypeForGeneration::setter_setMAllTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAllTypedAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_classTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classTypeForGeneration::setter_setMGenerateHeaderInSeparateFile (GALGAS_bool inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    p->mProperty_mGenerateHeaderInSeparateFile = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_classTypeForGeneration::setter_setMGenerateHeaderInSeparateFile (GALGAS_bool inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGenerateHeaderInSeparateFile = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @classTypeForGeneration class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_classTypeForGeneration::cPtr_classTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                          const GALGAS_bool & in_mIsAbstract,
                                                          const GALGAS_bool & in_mIsShared,
                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mSuperClass,
                                                          const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                                          const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                          const GALGAS_bool & in_mGenerateHeaderInSeparateFile
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mIsShared (in_mIsShared),
mProperty_mSuperClass (in_mSuperClass),
mProperty_mAllTypedAttributeList (in_mAllTypedAttributeList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mGenerateHeaderInSeparateFile (in_mGenerateHeaderInSeparateFile) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_classTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classTypeForGeneration ;
}

void cPtr_classTypeForGeneration::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@classTypeForGeneration:" ;
  mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsShared.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperClass.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAllTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGenerateHeaderInSeparateFile.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_classTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_classTypeForGeneration (mProperty_mTypeProxy, mProperty_mIsAbstract, mProperty_mIsShared, mProperty_mSuperClass, mProperty_mAllTypedAttributeList, mProperty_mTypedAttributeList, mProperty_mGenerateHeaderInSeparateFile COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @classTypeForGeneration type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classTypeForGeneration ("classTypeForGeneration",
                                               & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_classTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classTypeForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_classTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classTypeForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_classTypeForGeneration result ;
  const GALGAS_classTypeForGeneration * p = (const GALGAS_classTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_enumDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumDeclarationAST * p = (const cPtr_enumDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumTypeName.objectCompare (p->mProperty_mEnumTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantList.objectCompare (p->mProperty_mConstantList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefaultConstantName.objectCompare (p->mProperty_mDefaultConstantName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_enumDeclarationAST::objectCompare (const GALGAS_enumDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumDeclarationAST::GALGAS_enumDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_enumConstantList::constructor_emptyList (HERE),
                                                     GALGAS_lstring::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumDeclarationAST::GALGAS_enumDeclarationAST (const cPtr_enumDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mEnumTypeName,
                                                                      const GALGAS_enumConstantList & inAttribute_mConstantList,
                                                                      const GALGAS_lstring & inAttribute_mDefaultConstantName
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mEnumTypeName.isValid () && inAttribute_mConstantList.isValid () && inAttribute_mDefaultConstantName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumDeclarationAST (inAttribute_mIsPredefined, inAttribute_mEnumTypeName, inAttribute_mConstantList, inAttribute_mDefaultConstantName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumDeclarationAST::getter_mEnumTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumDeclarationAST * p = (const cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    result = p->mProperty_mEnumTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_enumDeclarationAST::getter_mEnumTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantList GALGAS_enumDeclarationAST::getter_mConstantList (UNUSED_LOCATION_ARGS) const {
  GALGAS_enumConstantList result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumDeclarationAST * p = (const cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    result = p->mProperty_mConstantList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantList cPtr_enumDeclarationAST::getter_mConstantList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumDeclarationAST::getter_mDefaultConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumDeclarationAST * p = (const cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    result = p->mProperty_mDefaultConstantName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_enumDeclarationAST::getter_mDefaultConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultConstantName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumDeclarationAST::setter_setMEnumTypeName (GALGAS_lstring inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    p->mProperty_mEnumTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_enumDeclarationAST::setter_setMEnumTypeName (GALGAS_lstring inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEnumTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumDeclarationAST::setter_setMConstantList (GALGAS_enumConstantList inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    p->mProperty_mConstantList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_enumDeclarationAST::setter_setMConstantList (GALGAS_enumConstantList inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mConstantList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumDeclarationAST::setter_setMDefaultConstantName (GALGAS_lstring inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    p->mProperty_mDefaultConstantName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_enumDeclarationAST::setter_setMDefaultConstantName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDefaultConstantName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @enumDeclarationAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumDeclarationAST::cPtr_enumDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mEnumTypeName,
                                                  const GALGAS_enumConstantList & in_mConstantList,
                                                  const GALGAS_lstring & in_mDefaultConstantName
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mEnumTypeName (in_mEnumTypeName),
mProperty_mConstantList (in_mConstantList),
mProperty_mDefaultConstantName (in_mDefaultConstantName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_enumDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

void cPtr_enumDeclarationAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@enumDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDefaultConstantName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumDeclarationAST (mProperty_mIsPredefined, mProperty_mEnumTypeName, mProperty_mConstantList, mProperty_mDefaultConstantName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @enumDeclarationAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumDeclarationAST ("enumDeclarationAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclarationAST result ;
  const GALGAS_enumDeclarationAST * p = (const GALGAS_enumDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_enumTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumTypeForGeneration * p = (const cPtr_enumTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (p->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantList.objectCompare (p->mProperty_mConstantList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_enumTypeForGeneration::objectCompare (const GALGAS_enumTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeForGeneration::GALGAS_enumTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                        GALGAS_enumConstantListForGeneration::constructor_emptyList (HERE)
                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeForGeneration::GALGAS_enumTypeForGeneration (const cPtr_enumTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumTypeForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                            const GALGAS_enumConstantListForGeneration & inAttribute_mConstantList
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enumTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mConstantList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mConstantList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantListForGeneration GALGAS_enumTypeForGeneration::getter_mConstantList (UNUSED_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumTypeForGeneration * p = (const cPtr_enumTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumTypeForGeneration) ;
    result = p->mProperty_mConstantList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantListForGeneration cPtr_enumTypeForGeneration::getter_mConstantList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumTypeForGeneration::setter_setMConstantList (GALGAS_enumConstantListForGeneration inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_enumTypeForGeneration * p = (cPtr_enumTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumTypeForGeneration) ;
    p->mProperty_mConstantList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_enumTypeForGeneration::setter_setMConstantList (GALGAS_enumConstantListForGeneration inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mConstantList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @enumTypeForGeneration class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumTypeForGeneration::cPtr_enumTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                        const GALGAS_enumConstantListForGeneration & in_mConstantList
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mProperty_mConstantList (in_mConstantList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_enumTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration ;
}

void cPtr_enumTypeForGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@enumTypeForGeneration:" ;
  mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumTypeForGeneration (mProperty_mTypeProxy, mProperty_mConstantList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @enumTypeForGeneration type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumTypeForGeneration ("enumTypeForGeneration",
                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumTypeForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumTypeForGeneration result ;
  const GALGAS_enumTypeForGeneration * p = (const GALGAS_enumTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_externTypeDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternTypeName.objectCompare (p->mProperty_mExternTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppPreDeclarationCode.objectCompare (p->mProperty_mCppPreDeclarationCode) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppClassCode.objectCompare (p->mProperty_mCppClassCode) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternTypeConstructorList.objectCompare (p->mProperty_mExternTypeConstructorList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternTypeGetterList.objectCompare (p->mProperty_mExternTypeGetterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternTypeSetterList.objectCompare (p->mProperty_mExternTypeSetterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternTypeMethodList.objectCompare (p->mProperty_mExternTypeMethodList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_externTypeDeclarationAST::objectCompare (const GALGAS_externTypeDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeDeclarationAST::GALGAS_externTypeDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeDeclarationAST GALGAS_externTypeDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_externTypeDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_externTypeConstructorList::constructor_emptyList (HERE),
                                                           GALGAS_externTypeGetterList::constructor_emptyList (HERE),
                                                           GALGAS_externTypeSetterList::constructor_emptyList (HERE),
                                                           GALGAS_externTypeMethodList::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeDeclarationAST::GALGAS_externTypeDeclarationAST (const cPtr_externTypeDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externTypeDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeDeclarationAST GALGAS_externTypeDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                  const GALGAS_lstring & inAttribute_mExternTypeName,
                                                                                  const GALGAS_string & inAttribute_mCppPreDeclarationCode,
                                                                                  const GALGAS_string & inAttribute_mCppClassCode,
                                                                                  const GALGAS_externTypeConstructorList & inAttribute_mExternTypeConstructorList,
                                                                                  const GALGAS_externTypeGetterList & inAttribute_mExternTypeGetterList,
                                                                                  const GALGAS_externTypeSetterList & inAttribute_mExternTypeSetterList,
                                                                                  const GALGAS_externTypeMethodList & inAttribute_mExternTypeMethodList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mExternTypeName.isValid () && inAttribute_mCppPreDeclarationCode.isValid () && inAttribute_mCppClassCode.isValid () && inAttribute_mExternTypeConstructorList.isValid () && inAttribute_mExternTypeGetterList.isValid () && inAttribute_mExternTypeSetterList.isValid () && inAttribute_mExternTypeMethodList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_externTypeDeclarationAST (inAttribute_mIsPredefined, inAttribute_mExternTypeName, inAttribute_mCppPreDeclarationCode, inAttribute_mCppClassCode, inAttribute_mExternTypeConstructorList, inAttribute_mExternTypeGetterList, inAttribute_mExternTypeSetterList, inAttribute_mExternTypeMethodList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externTypeDeclarationAST::getter_mExternTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    result = p->mProperty_mExternTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_externTypeDeclarationAST::getter_mExternTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_externTypeDeclarationAST::getter_mCppPreDeclarationCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    result = p->mProperty_mCppPreDeclarationCode ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_externTypeDeclarationAST::getter_mCppPreDeclarationCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCppPreDeclarationCode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_externTypeDeclarationAST::getter_mCppClassCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    result = p->mProperty_mCppClassCode ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_externTypeDeclarationAST::getter_mCppClassCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCppClassCode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeConstructorList GALGAS_externTypeDeclarationAST::getter_mExternTypeConstructorList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    result = p->mProperty_mExternTypeConstructorList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeConstructorList cPtr_externTypeDeclarationAST::getter_mExternTypeConstructorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternTypeConstructorList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeGetterList GALGAS_externTypeDeclarationAST::getter_mExternTypeGetterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    result = p->mProperty_mExternTypeGetterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeGetterList cPtr_externTypeDeclarationAST::getter_mExternTypeGetterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternTypeGetterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeSetterList GALGAS_externTypeDeclarationAST::getter_mExternTypeSetterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    result = p->mProperty_mExternTypeSetterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeSetterList cPtr_externTypeDeclarationAST::getter_mExternTypeSetterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternTypeSetterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeMethodList GALGAS_externTypeDeclarationAST::getter_mExternTypeMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    result = p->mProperty_mExternTypeMethodList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeMethodList cPtr_externTypeDeclarationAST::getter_mExternTypeMethodList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternTypeMethodList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externTypeDeclarationAST::setter_setMExternTypeName (GALGAS_lstring inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    p->mProperty_mExternTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_externTypeDeclarationAST::setter_setMExternTypeName (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExternTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externTypeDeclarationAST::setter_setMCppPreDeclarationCode (GALGAS_string inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    p->mProperty_mCppPreDeclarationCode = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_externTypeDeclarationAST::setter_setMCppPreDeclarationCode (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCppPreDeclarationCode = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externTypeDeclarationAST::setter_setMCppClassCode (GALGAS_string inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    p->mProperty_mCppClassCode = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_externTypeDeclarationAST::setter_setMCppClassCode (GALGAS_string inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCppClassCode = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externTypeDeclarationAST::setter_setMExternTypeConstructorList (GALGAS_externTypeConstructorList inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    p->mProperty_mExternTypeConstructorList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_externTypeDeclarationAST::setter_setMExternTypeConstructorList (GALGAS_externTypeConstructorList inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExternTypeConstructorList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externTypeDeclarationAST::setter_setMExternTypeGetterList (GALGAS_externTypeGetterList inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    p->mProperty_mExternTypeGetterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_externTypeDeclarationAST::setter_setMExternTypeGetterList (GALGAS_externTypeGetterList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExternTypeGetterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externTypeDeclarationAST::setter_setMExternTypeSetterList (GALGAS_externTypeSetterList inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    p->mProperty_mExternTypeSetterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_externTypeDeclarationAST::setter_setMExternTypeSetterList (GALGAS_externTypeSetterList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExternTypeSetterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externTypeDeclarationAST::setter_setMExternTypeMethodList (GALGAS_externTypeMethodList inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    p->mProperty_mExternTypeMethodList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_externTypeDeclarationAST::setter_setMExternTypeMethodList (GALGAS_externTypeMethodList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExternTypeMethodList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @externTypeDeclarationAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_externTypeDeclarationAST::cPtr_externTypeDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                              const GALGAS_lstring & in_mExternTypeName,
                                                              const GALGAS_string & in_mCppPreDeclarationCode,
                                                              const GALGAS_string & in_mCppClassCode,
                                                              const GALGAS_externTypeConstructorList & in_mExternTypeConstructorList,
                                                              const GALGAS_externTypeGetterList & in_mExternTypeGetterList,
                                                              const GALGAS_externTypeSetterList & in_mExternTypeSetterList,
                                                              const GALGAS_externTypeMethodList & in_mExternTypeMethodList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mExternTypeName (in_mExternTypeName),
mProperty_mCppPreDeclarationCode (in_mCppPreDeclarationCode),
mProperty_mCppClassCode (in_mCppClassCode),
mProperty_mExternTypeConstructorList (in_mExternTypeConstructorList),
mProperty_mExternTypeGetterList (in_mExternTypeGetterList),
mProperty_mExternTypeSetterList (in_mExternTypeSetterList),
mProperty_mExternTypeMethodList (in_mExternTypeMethodList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_externTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

void cPtr_externTypeDeclarationAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@externTypeDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppPreDeclarationCode.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppClassCode.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternTypeConstructorList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternTypeGetterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternTypeSetterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternTypeMethodList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_externTypeDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_externTypeDeclarationAST (mProperty_mIsPredefined, mProperty_mExternTypeName, mProperty_mCppPreDeclarationCode, mProperty_mCppClassCode, mProperty_mExternTypeConstructorList, mProperty_mExternTypeGetterList, mProperty_mExternTypeSetterList, mProperty_mExternTypeMethodList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @externTypeDeclarationAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeDeclarationAST ("externTypeDeclarationAST",
                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeDeclarationAST GALGAS_externTypeDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationAST result ;
  const GALGAS_externTypeDeclarationAST * p = (const GALGAS_externTypeDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_externTypeDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_externTypeDeclarationForGeneration * p = (const cPtr_externTypeDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (p->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternTypeName.objectCompare (p->mProperty_mExternTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppPreDeclarationCode.objectCompare (p->mProperty_mCppPreDeclarationCode) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppClassCode.objectCompare (p->mProperty_mCppClassCode) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_externTypeDeclarationForGeneration::objectCompare (const GALGAS_externTypeDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeDeclarationForGeneration::GALGAS_externTypeDeclarationForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeDeclarationForGeneration GALGAS_externTypeDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_externTypeDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                     GALGAS_string::constructor_default (HERE),
                                                                     GALGAS_string::constructor_default (HERE),
                                                                     GALGAS_string::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeDeclarationForGeneration::GALGAS_externTypeDeclarationForGeneration (const cPtr_externTypeDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externTypeDeclarationForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeDeclarationForGeneration GALGAS_externTypeDeclarationForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                                                      const GALGAS_string & inAttribute_mExternTypeName,
                                                                                                      const GALGAS_string & inAttribute_mCppPreDeclarationCode,
                                                                                                      const GALGAS_string & inAttribute_mCppClassCode
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mExternTypeName.isValid () && inAttribute_mCppPreDeclarationCode.isValid () && inAttribute_mCppClassCode.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_externTypeDeclarationForGeneration (inAttribute_mTypeProxy, inAttribute_mExternTypeName, inAttribute_mCppPreDeclarationCode, inAttribute_mCppClassCode COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_externTypeDeclarationForGeneration::getter_mExternTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationForGeneration * p = (const cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    result = p->mProperty_mExternTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_externTypeDeclarationForGeneration::getter_mExternTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_externTypeDeclarationForGeneration::getter_mCppPreDeclarationCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationForGeneration * p = (const cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    result = p->mProperty_mCppPreDeclarationCode ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_externTypeDeclarationForGeneration::getter_mCppPreDeclarationCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCppPreDeclarationCode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_externTypeDeclarationForGeneration::getter_mCppClassCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationForGeneration * p = (const cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    result = p->mProperty_mCppClassCode ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_externTypeDeclarationForGeneration::getter_mCppClassCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCppClassCode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externTypeDeclarationForGeneration::setter_setMExternTypeName (GALGAS_string inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    p->mProperty_mExternTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_externTypeDeclarationForGeneration::setter_setMExternTypeName (GALGAS_string inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExternTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externTypeDeclarationForGeneration::setter_setMCppPreDeclarationCode (GALGAS_string inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    p->mProperty_mCppPreDeclarationCode = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_externTypeDeclarationForGeneration::setter_setMCppPreDeclarationCode (GALGAS_string inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCppPreDeclarationCode = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externTypeDeclarationForGeneration::setter_setMCppClassCode (GALGAS_string inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    p->mProperty_mCppClassCode = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_externTypeDeclarationForGeneration::setter_setMCppClassCode (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCppClassCode = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @externTypeDeclarationForGeneration class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_externTypeDeclarationForGeneration::cPtr_externTypeDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                                                  const GALGAS_string & in_mExternTypeName,
                                                                                  const GALGAS_string & in_mCppPreDeclarationCode,
                                                                                  const GALGAS_string & in_mCppClassCode
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mProperty_mExternTypeName (in_mExternTypeName),
mProperty_mCppPreDeclarationCode (in_mCppPreDeclarationCode),
mProperty_mCppClassCode (in_mCppClassCode) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_externTypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;
}

void cPtr_externTypeDeclarationForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@externTypeDeclarationForGeneration:" ;
  mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppPreDeclarationCode.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppClassCode.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_externTypeDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_externTypeDeclarationForGeneration (mProperty_mTypeProxy, mProperty_mExternTypeName, mProperty_mCppPreDeclarationCode, mProperty_mCppClassCode COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @externTypeDeclarationForGeneration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ("externTypeDeclarationForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externTypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externTypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externTypeDeclarationForGeneration GALGAS_externTypeDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationForGeneration result ;
  const GALGAS_externTypeDeclarationForGeneration * p = (const GALGAS_externTypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_graphDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_graphDeclarationAST * p = (const cPtr_graphDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGraphTypeName.objectCompare (p->mProperty_mGraphTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListTypeName.objectCompare (p->mProperty_mAssociatedListTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertModifierList.objectCompare (p->mProperty_mInsertModifierList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_graphDeclarationAST::objectCompare (const GALGAS_graphDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphDeclarationAST::GALGAS_graphDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphDeclarationAST GALGAS_graphDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_graphInsertModifierList::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphDeclarationAST::GALGAS_graphDeclarationAST (const cPtr_graphDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphDeclarationAST GALGAS_graphDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                        const GALGAS_lstring & inAttribute_mGraphTypeName,
                                                                        const GALGAS_lstring & inAttribute_mAssociatedListTypeName,
                                                                        const GALGAS_graphInsertModifierList & inAttribute_mInsertModifierList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mGraphTypeName.isValid () && inAttribute_mAssociatedListTypeName.isValid () && inAttribute_mInsertModifierList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_graphDeclarationAST (inAttribute_mIsPredefined, inAttribute_mGraphTypeName, inAttribute_mAssociatedListTypeName, inAttribute_mInsertModifierList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_graphDeclarationAST::getter_mGraphTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_graphDeclarationAST * p = (const cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    result = p->mProperty_mGraphTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_graphDeclarationAST::getter_mGraphTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGraphTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_graphDeclarationAST::getter_mAssociatedListTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_graphDeclarationAST * p = (const cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    result = p->mProperty_mAssociatedListTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_graphDeclarationAST::getter_mAssociatedListTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssociatedListTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphInsertModifierList GALGAS_graphDeclarationAST::getter_mInsertModifierList (UNUSED_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result ;
  if (NULL != mObjectPtr) {
    const cPtr_graphDeclarationAST * p = (const cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    result = p->mProperty_mInsertModifierList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphInsertModifierList cPtr_graphDeclarationAST::getter_mInsertModifierList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInsertModifierList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_graphDeclarationAST::setter_setMGraphTypeName (GALGAS_lstring inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    p->mProperty_mGraphTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_graphDeclarationAST::setter_setMGraphTypeName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGraphTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_graphDeclarationAST::setter_setMAssociatedListTypeName (GALGAS_lstring inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    p->mProperty_mAssociatedListTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_graphDeclarationAST::setter_setMAssociatedListTypeName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAssociatedListTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_graphDeclarationAST::setter_setMInsertModifierList (GALGAS_graphInsertModifierList inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    p->mProperty_mInsertModifierList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_graphDeclarationAST::setter_setMInsertModifierList (GALGAS_graphInsertModifierList inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInsertModifierList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @graphDeclarationAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_graphDeclarationAST::cPtr_graphDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                    const GALGAS_lstring & in_mGraphTypeName,
                                                    const GALGAS_lstring & in_mAssociatedListTypeName,
                                                    const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mGraphTypeName (in_mGraphTypeName),
mProperty_mAssociatedListTypeName (in_mAssociatedListTypeName),
mProperty_mInsertModifierList (in_mInsertModifierList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_graphDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

void cPtr_graphDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@graphDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGraphTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertModifierList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_graphDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_graphDeclarationAST (mProperty_mIsPredefined, mProperty_mGraphTypeName, mProperty_mAssociatedListTypeName, mProperty_mInsertModifierList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @graphDeclarationAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphDeclarationAST ("graphDeclarationAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_graphDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_graphDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphDeclarationAST GALGAS_graphDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationAST result ;
  const GALGAS_graphDeclarationAST * p = (const GALGAS_graphDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_graphDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_graphDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_graphDeclarationForGeneration * p = (const cPtr_graphDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (p->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListTypeProxy.objectCompare (p->mProperty_mAssociatedListTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListElementTypeProxy.objectCompare (p->mProperty_mAssociatedListElementTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertModifierList.objectCompare (p->mProperty_mInsertModifierList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_graphDeclarationForGeneration::objectCompare (const GALGAS_graphDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphDeclarationForGeneration::GALGAS_graphDeclarationForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphDeclarationForGeneration GALGAS_graphDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_graphDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                GALGAS_graphInsertModifierList::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphDeclarationForGeneration::GALGAS_graphDeclarationForGeneration (const cPtr_graphDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphDeclarationForGeneration GALGAS_graphDeclarationForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mAssociatedListTypeProxy,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mAssociatedListElementTypeProxy,
                                                                                            const GALGAS_graphInsertModifierList & inAttribute_mInsertModifierList
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mAssociatedListTypeProxy.isValid () && inAttribute_mAssociatedListElementTypeProxy.isValid () && inAttribute_mInsertModifierList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_graphDeclarationForGeneration (inAttribute_mTypeProxy, inAttribute_mAssociatedListTypeProxy, inAttribute_mAssociatedListElementTypeProxy, inAttribute_mInsertModifierList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_graphDeclarationForGeneration::getter_mAssociatedListTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_graphDeclarationForGeneration * p = (const cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    result = p->mProperty_mAssociatedListTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_graphDeclarationForGeneration::getter_mAssociatedListTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssociatedListTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_graphDeclarationForGeneration::getter_mAssociatedListElementTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_graphDeclarationForGeneration * p = (const cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    result = p->mProperty_mAssociatedListElementTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_graphDeclarationForGeneration::getter_mAssociatedListElementTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssociatedListElementTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphInsertModifierList GALGAS_graphDeclarationForGeneration::getter_mInsertModifierList (UNUSED_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result ;
  if (NULL != mObjectPtr) {
    const cPtr_graphDeclarationForGeneration * p = (const cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    result = p->mProperty_mInsertModifierList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphInsertModifierList cPtr_graphDeclarationForGeneration::getter_mInsertModifierList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInsertModifierList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_graphDeclarationForGeneration::setter_setMAssociatedListTypeProxy (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    p->mProperty_mAssociatedListTypeProxy = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_graphDeclarationForGeneration::setter_setMAssociatedListTypeProxy (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAssociatedListTypeProxy = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_graphDeclarationForGeneration::setter_setMAssociatedListElementTypeProxy (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    p->mProperty_mAssociatedListElementTypeProxy = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_graphDeclarationForGeneration::setter_setMAssociatedListElementTypeProxy (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAssociatedListElementTypeProxy = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_graphDeclarationForGeneration::setter_setMInsertModifierList (GALGAS_graphInsertModifierList inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    p->mProperty_mInsertModifierList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_graphDeclarationForGeneration::setter_setMInsertModifierList (GALGAS_graphInsertModifierList inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInsertModifierList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @graphDeclarationForGeneration class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_graphDeclarationForGeneration::cPtr_graphDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mAssociatedListTypeProxy,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mAssociatedListElementTypeProxy,
                                                                        const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mProperty_mAssociatedListTypeProxy (in_mAssociatedListTypeProxy),
mProperty_mAssociatedListElementTypeProxy (in_mAssociatedListElementTypeProxy),
mProperty_mInsertModifierList (in_mInsertModifierList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_graphDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationForGeneration ;
}

void cPtr_graphDeclarationForGeneration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@graphDeclarationForGeneration:" ;
  mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListElementTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertModifierList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_graphDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_graphDeclarationForGeneration (mProperty_mTypeProxy, mProperty_mAssociatedListTypeProxy, mProperty_mAssociatedListElementTypeProxy, mProperty_mInsertModifierList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @graphDeclarationForGeneration type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphDeclarationForGeneration ("graphDeclarationForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_graphDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_graphDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphDeclarationForGeneration GALGAS_graphDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationForGeneration result ;
  const GALGAS_graphDeclarationForGeneration * p = (const GALGAS_graphDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_graphDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_listDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listDeclarationAST * p = (const cPtr_listDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mListTypeName.objectCompare (p->mProperty_mListTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_listDeclarationAST::objectCompare (const GALGAS_listDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listDeclarationAST::GALGAS_listDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listDeclarationAST GALGAS_listDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_listDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listDeclarationAST::GALGAS_listDeclarationAST (const cPtr_listDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listDeclarationAST GALGAS_listDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mListTypeName,
                                                                      const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_listDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mListTypeName.isValid () && inAttribute_mPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listDeclarationAST (inAttribute_mIsPredefined, inAttribute_mListTypeName, inAttribute_mPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_listDeclarationAST::getter_mListTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_listDeclarationAST * p = (const cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    result = p->mProperty_mListTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_listDeclarationAST::getter_mListTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mListTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyInCollectionListAST GALGAS_listDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_listDeclarationAST * p = (const cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    result = p->mProperty_mPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyInCollectionListAST cPtr_listDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_listDeclarationAST::setter_setMListTypeName (GALGAS_lstring inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    p->mProperty_mListTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_listDeclarationAST::setter_setMListTypeName (GALGAS_lstring inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mListTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_listDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_listDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPropertyList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @listDeclarationAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_listDeclarationAST::cPtr_listDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mListTypeName,
                                                  const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mListTypeName (in_mListTypeName),
mProperty_mPropertyList (in_mPropertyList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_listDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

void cPtr_listDeclarationAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@listDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mListTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_listDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listDeclarationAST (mProperty_mIsPredefined, mProperty_mListTypeName, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @listDeclarationAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listDeclarationAST ("listDeclarationAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_listDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_listDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listDeclarationAST GALGAS_listDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_listDeclarationAST result ;
  const GALGAS_listDeclarationAST * p = (const GALGAS_listDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_listTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listTypeForGeneration * p = (const cPtr_listTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (p->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mListElementTypeIndex.objectCompare (p->mProperty_mListElementTypeIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_listTypeForGeneration::objectCompare (const GALGAS_listTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listTypeForGeneration::GALGAS_listTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_listTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                        GALGAS_typedPropertyList::constructor_emptyList (HERE)
                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listTypeForGeneration::GALGAS_listTypeForGeneration (const cPtr_listTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listTypeForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mListElementTypeIndex,
                                                                            const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_listTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mListElementTypeIndex.isValid () && inAttribute_mTypedAttributeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mListElementTypeIndex, inAttribute_mTypedAttributeList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_listTypeForGeneration::getter_mListElementTypeIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_listTypeForGeneration * p = (const cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    result = p->mProperty_mListElementTypeIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_listTypeForGeneration::getter_mListElementTypeIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mListElementTypeIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList GALGAS_listTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_listTypeForGeneration * p = (const cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList cPtr_listTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_listTypeForGeneration::setter_setMListElementTypeIndex (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_listTypeForGeneration * p = (cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    p->mProperty_mListElementTypeIndex = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_listTypeForGeneration::setter_setMListElementTypeIndex (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mListElementTypeIndex = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_listTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_listTypeForGeneration * p = (cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_listTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @listTypeForGeneration class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_listTypeForGeneration::cPtr_listTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mListElementTypeIndex,
                                                        const GALGAS_typedPropertyList & in_mTypedAttributeList
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mProperty_mListElementTypeIndex (in_mListElementTypeIndex),
mProperty_mTypedAttributeList (in_mTypedAttributeList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_listTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration ;
}

void cPtr_listTypeForGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@listTypeForGeneration:" ;
  mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mListElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_listTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listTypeForGeneration (mProperty_mTypeProxy, mProperty_mListElementTypeIndex, mProperty_mTypedAttributeList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @listTypeForGeneration type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listTypeForGeneration ("listTypeForGeneration",
                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_listTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_listTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listTypeForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listTypeForGeneration result ;
  const GALGAS_listTypeForGeneration * p = (const GALGAS_listTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_listmapDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listmapDeclarationAST * p = (const cPtr_listmapDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mListmapTypeName.objectCompare (p->mProperty_mListmapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListTypeName.objectCompare (p->mProperty_mAssociatedListTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_listmapDeclarationAST::objectCompare (const GALGAS_listmapDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listmapDeclarationAST::GALGAS_listmapDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listmapDeclarationAST GALGAS_listmapDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listmapDeclarationAST::GALGAS_listmapDeclarationAST (const cPtr_listmapDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listmapDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listmapDeclarationAST GALGAS_listmapDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_lstring & inAttribute_mListmapTypeName,
                                                                            const GALGAS_lstring & inAttribute_mAssociatedListTypeName
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_listmapDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mListmapTypeName.isValid () && inAttribute_mAssociatedListTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listmapDeclarationAST (inAttribute_mIsPredefined, inAttribute_mListmapTypeName, inAttribute_mAssociatedListTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_listmapDeclarationAST::getter_mListmapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_listmapDeclarationAST * p = (const cPtr_listmapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
    result = p->mProperty_mListmapTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_listmapDeclarationAST::getter_mListmapTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mListmapTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_listmapDeclarationAST::getter_mAssociatedListTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_listmapDeclarationAST * p = (const cPtr_listmapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
    result = p->mProperty_mAssociatedListTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_listmapDeclarationAST::getter_mAssociatedListTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssociatedListTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_listmapDeclarationAST::setter_setMListmapTypeName (GALGAS_lstring inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_listmapDeclarationAST * p = (cPtr_listmapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
    p->mProperty_mListmapTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_listmapDeclarationAST::setter_setMListmapTypeName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mListmapTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_listmapDeclarationAST::setter_setMAssociatedListTypeName (GALGAS_lstring inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_listmapDeclarationAST * p = (cPtr_listmapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
    p->mProperty_mAssociatedListTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_listmapDeclarationAST::setter_setMAssociatedListTypeName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAssociatedListTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @listmapDeclarationAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_listmapDeclarationAST::cPtr_listmapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_lstring & in_mListmapTypeName,
                                                        const GALGAS_lstring & in_mAssociatedListTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mListmapTypeName (in_mListmapTypeName),
mProperty_mAssociatedListTypeName (in_mAssociatedListTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_listmapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapDeclarationAST ;
}

void cPtr_listmapDeclarationAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@listmapDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mListmapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_listmapDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listmapDeclarationAST (mProperty_mIsPredefined, mProperty_mListmapTypeName, mProperty_mAssociatedListTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @listmapDeclarationAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listmapDeclarationAST ("listmapDeclarationAST",
                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_listmapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_listmapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listmapDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listmapDeclarationAST GALGAS_listmapDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listmapDeclarationAST result ;
  const GALGAS_listmapDeclarationAST * p = (const GALGAS_listmapDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listmapDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listmapDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_listmapTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listmapTypeForGeneration * p = (const cPtr_listmapTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (p->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListTypeIndex.objectCompare (p->mProperty_mAssociatedListTypeIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListTypedAttributeList.objectCompare (p->mProperty_mAssociatedListTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListMapElementTypeIndex.objectCompare (p->mProperty_mAssociatedListMapElementTypeIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_listmapTypeForGeneration::objectCompare (const GALGAS_listmapTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listmapTypeForGeneration::GALGAS_listmapTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listmapTypeForGeneration GALGAS_listmapTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                           GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                           GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                           GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)
                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listmapTypeForGeneration::GALGAS_listmapTypeForGeneration (const cPtr_listmapTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listmapTypeForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listmapTypeForGeneration GALGAS_listmapTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mAssociatedListTypeIndex,
                                                                                  const GALGAS_typedPropertyList & inAttribute_mAssociatedListTypedAttributeList,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mAssociatedListMapElementTypeIndex
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_listmapTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mAssociatedListTypeIndex.isValid () && inAttribute_mAssociatedListTypedAttributeList.isValid () && inAttribute_mAssociatedListMapElementTypeIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listmapTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mAssociatedListTypeIndex, inAttribute_mAssociatedListTypedAttributeList, inAttribute_mAssociatedListMapElementTypeIndex COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_listmapTypeForGeneration::getter_mAssociatedListTypeIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_listmapTypeForGeneration * p = (const cPtr_listmapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
    result = p->mProperty_mAssociatedListTypeIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_listmapTypeForGeneration::getter_mAssociatedListTypeIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssociatedListTypeIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList GALGAS_listmapTypeForGeneration::getter_mAssociatedListTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_listmapTypeForGeneration * p = (const cPtr_listmapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
    result = p->mProperty_mAssociatedListTypedAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList cPtr_listmapTypeForGeneration::getter_mAssociatedListTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssociatedListTypedAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_listmapTypeForGeneration::getter_mAssociatedListMapElementTypeIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_listmapTypeForGeneration * p = (const cPtr_listmapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
    result = p->mProperty_mAssociatedListMapElementTypeIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_listmapTypeForGeneration::getter_mAssociatedListMapElementTypeIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssociatedListMapElementTypeIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_listmapTypeForGeneration::setter_setMAssociatedListTypeIndex (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_listmapTypeForGeneration * p = (cPtr_listmapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
    p->mProperty_mAssociatedListTypeIndex = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_listmapTypeForGeneration::setter_setMAssociatedListTypeIndex (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAssociatedListTypeIndex = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_listmapTypeForGeneration::setter_setMAssociatedListTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_listmapTypeForGeneration * p = (cPtr_listmapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
    p->mProperty_mAssociatedListTypedAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_listmapTypeForGeneration::setter_setMAssociatedListTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAssociatedListTypedAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_listmapTypeForGeneration::setter_setMAssociatedListMapElementTypeIndex (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_listmapTypeForGeneration * p = (cPtr_listmapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
    p->mProperty_mAssociatedListMapElementTypeIndex = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_listmapTypeForGeneration::setter_setMAssociatedListMapElementTypeIndex (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAssociatedListMapElementTypeIndex = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @listmapTypeForGeneration class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_listmapTypeForGeneration::cPtr_listmapTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mAssociatedListTypeIndex,
                                                              const GALGAS_typedPropertyList & in_mAssociatedListTypedAttributeList,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mAssociatedListMapElementTypeIndex
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mProperty_mAssociatedListTypeIndex (in_mAssociatedListTypeIndex),
mProperty_mAssociatedListTypedAttributeList (in_mAssociatedListTypedAttributeList),
mProperty_mAssociatedListMapElementTypeIndex (in_mAssociatedListMapElementTypeIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_listmapTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapTypeForGeneration ;
}

void cPtr_listmapTypeForGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@listmapTypeForGeneration:" ;
  mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListTypeIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListMapElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_listmapTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listmapTypeForGeneration (mProperty_mTypeProxy, mProperty_mAssociatedListTypeIndex, mProperty_mAssociatedListTypedAttributeList, mProperty_mAssociatedListMapElementTypeIndex COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @listmapTypeForGeneration type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listmapTypeForGeneration ("listmapTypeForGeneration",
                                                 & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_listmapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapTypeForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_listmapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listmapTypeForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_listmapTypeForGeneration GALGAS_listmapTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_listmapTypeForGeneration result ;
  const GALGAS_listmapTypeForGeneration * p = (const GALGAS_listmapTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listmapTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listmapTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_dictDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dictDeclarationAST * p = (const cPtr_dictDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDictTypeName.objectCompare (p->mProperty_mDictTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKeyTypeName.objectCompare (p->mProperty_mKeyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeList.objectCompare (p->mProperty_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_dictDeclarationAST::objectCompare (const GALGAS_dictDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dictDeclarationAST::GALGAS_dictDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dictDeclarationAST GALGAS_dictDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_dictDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstringlist::constructor_emptyList (HERE),
                                                     GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dictDeclarationAST::GALGAS_dictDeclarationAST (const cPtr_dictDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dictDeclarationAST GALGAS_dictDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mDictTypeName,
                                                                      const GALGAS_lstring & inAttribute_mKeyTypeName,
                                                                      const GALGAS_lstringlist & inAttribute_mAttributeList,
                                                                      const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dictDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mDictTypeName.isValid () && inAttribute_mKeyTypeName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dictDeclarationAST (inAttribute_mIsPredefined, inAttribute_mDictTypeName, inAttribute_mKeyTypeName, inAttribute_mAttributeList, inAttribute_mPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_dictDeclarationAST::getter_mDictTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_dictDeclarationAST * p = (const cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    result = p->mProperty_mDictTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_dictDeclarationAST::getter_mDictTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDictTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_dictDeclarationAST::getter_mKeyTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_dictDeclarationAST * p = (const cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    result = p->mProperty_mKeyTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_dictDeclarationAST::getter_mKeyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKeyTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_dictDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_dictDeclarationAST * p = (const cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    result = p->mProperty_mAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_dictDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyInCollectionListAST GALGAS_dictDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_dictDeclarationAST * p = (const cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    result = p->mProperty_mPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyInCollectionListAST cPtr_dictDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_dictDeclarationAST::setter_setMDictTypeName (GALGAS_lstring inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    p->mProperty_mDictTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_dictDeclarationAST::setter_setMDictTypeName (GALGAS_lstring inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDictTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_dictDeclarationAST::setter_setMKeyTypeName (GALGAS_lstring inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    p->mProperty_mKeyTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_dictDeclarationAST::setter_setMKeyTypeName (GALGAS_lstring inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKeyTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_dictDeclarationAST::setter_setMAttributeList (GALGAS_lstringlist inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_dictDeclarationAST::setter_setMAttributeList (GALGAS_lstringlist inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_dictDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_dictDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPropertyList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @dictDeclarationAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_dictDeclarationAST::cPtr_dictDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mDictTypeName,
                                                  const GALGAS_lstring & in_mKeyTypeName,
                                                  const GALGAS_lstringlist & in_mAttributeList,
                                                  const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mDictTypeName (in_mDictTypeName),
mProperty_mKeyTypeName (in_mKeyTypeName),
mProperty_mAttributeList (in_mAttributeList),
mProperty_mPropertyList (in_mPropertyList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_dictDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST ;
}

void cPtr_dictDeclarationAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@dictDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDictTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKeyTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_dictDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dictDeclarationAST (mProperty_mIsPredefined, mProperty_mDictTypeName, mProperty_mKeyTypeName, mProperty_mAttributeList, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @dictDeclarationAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dictDeclarationAST ("dictDeclarationAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_dictDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_dictDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dictDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dictDeclarationAST GALGAS_dictDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_dictDeclarationAST result ;
  const GALGAS_dictDeclarationAST * p = (const GALGAS_dictDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dictDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_dictTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dictTypeForGeneration * p = (const cPtr_dictTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (p->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeProxy.objectCompare (p->mProperty_mElementTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDictTypeName.objectCompare (p->mProperty_mDictTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKeyTypeName.objectCompare (p->mProperty_mKeyTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_dictTypeForGeneration::objectCompare (const GALGAS_dictTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dictTypeForGeneration::GALGAS_dictTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dictTypeForGeneration GALGAS_dictTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_dictTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dictTypeForGeneration::GALGAS_dictTypeForGeneration (const cPtr_dictTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictTypeForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dictTypeForGeneration GALGAS_dictTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mElementTypeProxy,
                                                                            const GALGAS_lstring & inAttribute_mDictTypeName,
                                                                            const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                            const GALGAS_lstring & inAttribute_mKeyTypeName
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_dictTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mElementTypeProxy.isValid () && inAttribute_mDictTypeName.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mKeyTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dictTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mElementTypeProxy, inAttribute_mDictTypeName, inAttribute_mTypedAttributeList, inAttribute_mKeyTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_dictTypeForGeneration::getter_mElementTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_dictTypeForGeneration * p = (const cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    result = p->mProperty_mElementTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_dictTypeForGeneration::getter_mElementTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_dictTypeForGeneration::getter_mDictTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_dictTypeForGeneration * p = (const cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    result = p->mProperty_mDictTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_dictTypeForGeneration::getter_mDictTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDictTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList GALGAS_dictTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_dictTypeForGeneration * p = (const cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList cPtr_dictTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_dictTypeForGeneration::getter_mKeyTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_dictTypeForGeneration * p = (const cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    result = p->mProperty_mKeyTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_dictTypeForGeneration::getter_mKeyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKeyTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_dictTypeForGeneration::setter_setMElementTypeProxy (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    p->mProperty_mElementTypeProxy = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_dictTypeForGeneration::setter_setMElementTypeProxy (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElementTypeProxy = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_dictTypeForGeneration::setter_setMDictTypeName (GALGAS_lstring inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    p->mProperty_mDictTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_dictTypeForGeneration::setter_setMDictTypeName (GALGAS_lstring inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDictTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_dictTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_dictTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_dictTypeForGeneration::setter_setMKeyTypeName (GALGAS_lstring inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    p->mProperty_mKeyTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_dictTypeForGeneration::setter_setMKeyTypeName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKeyTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @dictTypeForGeneration class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_dictTypeForGeneration::cPtr_dictTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mElementTypeProxy,
                                                        const GALGAS_lstring & in_mDictTypeName,
                                                        const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                        const GALGAS_lstring & in_mKeyTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mProperty_mElementTypeProxy (in_mElementTypeProxy),
mProperty_mDictTypeName (in_mDictTypeName),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mKeyTypeName (in_mKeyTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_dictTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration ;
}

void cPtr_dictTypeForGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@dictTypeForGeneration:" ;
  mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDictTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKeyTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_dictTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dictTypeForGeneration (mProperty_mTypeProxy, mProperty_mElementTypeProxy, mProperty_mDictTypeName, mProperty_mTypedAttributeList, mProperty_mKeyTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @dictTypeForGeneration type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dictTypeForGeneration ("dictTypeForGeneration",
                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_dictTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_dictTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dictTypeForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dictTypeForGeneration GALGAS_dictTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_dictTypeForGeneration result ;
  const GALGAS_dictTypeForGeneration * p = (const GALGAS_dictTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dictTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_mapDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapTypeName.objectCompare (p->mProperty_mMapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeList.objectCompare (p->mProperty_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertMethodList.objectCompare (p->mProperty_mInsertMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodList.objectCompare (p->mProperty_mSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRemoveMethodList.objectCompare (p->mProperty_mRemoveMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertOrReplaceDeclarationListAST.objectCompare (p->mProperty_mInsertOrReplaceDeclarationListAST) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_mapDeclarationAST::objectCompare (const GALGAS_mapDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapDeclarationAST::GALGAS_mapDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapDeclarationAST GALGAS_mapDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_mapDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstringlist::constructor_emptyList (HERE),
                                                    GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                    GALGAS_insertMethodListAST::constructor_emptyList (HERE),
                                                    GALGAS_mapSearchMethodListAST::constructor_emptyList (HERE),
                                                    GALGAS_mapRemoveMethodListAST::constructor_emptyList (HERE),
                                                    GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapDeclarationAST::GALGAS_mapDeclarationAST (const cPtr_mapDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapDeclarationAST GALGAS_mapDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                    const GALGAS_lstring & inAttribute_mMapTypeName,
                                                                    const GALGAS_lstringlist & inAttribute_mAttributeList,
                                                                    const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList,
                                                                    const GALGAS_insertMethodListAST & inAttribute_mInsertMethodList,
                                                                    const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList,
                                                                    const GALGAS_mapRemoveMethodListAST & inAttribute_mRemoveMethodList,
                                                                    const GALGAS_insertOrReplaceDeclarationListAST & inAttribute_mInsertOrReplaceDeclarationListAST
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_mapDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mMapTypeName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mPropertyList.isValid () && inAttribute_mInsertMethodList.isValid () && inAttribute_mSearchMethodList.isValid () && inAttribute_mRemoveMethodList.isValid () && inAttribute_mInsertOrReplaceDeclarationListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mapDeclarationAST (inAttribute_mIsPredefined, inAttribute_mMapTypeName, inAttribute_mAttributeList, inAttribute_mPropertyList, inAttribute_mInsertMethodList, inAttribute_mSearchMethodList, inAttribute_mRemoveMethodList, inAttribute_mInsertOrReplaceDeclarationListAST COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_mapDeclarationAST::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mProperty_mMapTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_mapDeclarationAST::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMapTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_mapDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mProperty_mAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_mapDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyInCollectionListAST GALGAS_mapDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mProperty_mPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyInCollectionListAST cPtr_mapDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_insertMethodListAST GALGAS_mapDeclarationAST::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mProperty_mInsertMethodList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_insertMethodListAST cPtr_mapDeclarationAST::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInsertMethodList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapSearchMethodListAST GALGAS_mapDeclarationAST::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mProperty_mSearchMethodList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapSearchMethodListAST cPtr_mapDeclarationAST::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSearchMethodList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapRemoveMethodListAST GALGAS_mapDeclarationAST::getter_mRemoveMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mProperty_mRemoveMethodList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapRemoveMethodListAST cPtr_mapDeclarationAST::getter_mRemoveMethodList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRemoveMethodList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_insertOrReplaceDeclarationListAST GALGAS_mapDeclarationAST::getter_mInsertOrReplaceDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mProperty_mInsertOrReplaceDeclarationListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_insertOrReplaceDeclarationListAST cPtr_mapDeclarationAST::getter_mInsertOrReplaceDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInsertOrReplaceDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapDeclarationAST::setter_setMMapTypeName (GALGAS_lstring inValue
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    p->mProperty_mMapTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapDeclarationAST::setter_setMMapTypeName (GALGAS_lstring inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMapTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapDeclarationAST::setter_setMAttributeList (GALGAS_lstringlist inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapDeclarationAST::setter_setMAttributeList (GALGAS_lstringlist inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPropertyList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapDeclarationAST::setter_setMInsertMethodList (GALGAS_insertMethodListAST inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    p->mProperty_mInsertMethodList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapDeclarationAST::setter_setMInsertMethodList (GALGAS_insertMethodListAST inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInsertMethodList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapDeclarationAST::setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    p->mProperty_mSearchMethodList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapDeclarationAST::setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSearchMethodList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapDeclarationAST::setter_setMRemoveMethodList (GALGAS_mapRemoveMethodListAST inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    p->mProperty_mRemoveMethodList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapDeclarationAST::setter_setMRemoveMethodList (GALGAS_mapRemoveMethodListAST inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRemoveMethodList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapDeclarationAST::setter_setMInsertOrReplaceDeclarationListAST (GALGAS_insertOrReplaceDeclarationListAST inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    p->mProperty_mInsertOrReplaceDeclarationListAST = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapDeclarationAST::setter_setMInsertOrReplaceDeclarationListAST (GALGAS_insertOrReplaceDeclarationListAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInsertOrReplaceDeclarationListAST = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @mapDeclarationAST class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_mapDeclarationAST::cPtr_mapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                const GALGAS_lstring & in_mMapTypeName,
                                                const GALGAS_lstringlist & in_mAttributeList,
                                                const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                                const GALGAS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mMapTypeName (in_mMapTypeName),
mProperty_mAttributeList (in_mAttributeList),
mProperty_mPropertyList (in_mPropertyList),
mProperty_mInsertMethodList (in_mInsertMethodList),
mProperty_mSearchMethodList (in_mSearchMethodList),
mProperty_mRemoveMethodList (in_mRemoveMethodList),
mProperty_mInsertOrReplaceDeclarationListAST (in_mInsertOrReplaceDeclarationListAST) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_mapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

void cPtr_mapDeclarationAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@mapDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRemoveMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertOrReplaceDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_mapDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapDeclarationAST (mProperty_mIsPredefined, mProperty_mMapTypeName, mProperty_mAttributeList, mProperty_mPropertyList, mProperty_mInsertMethodList, mProperty_mSearchMethodList, mProperty_mRemoveMethodList, mProperty_mInsertOrReplaceDeclarationListAST COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @mapDeclarationAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapDeclarationAST ("mapDeclarationAST",
                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_mapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_mapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapDeclarationAST GALGAS_mapDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapDeclarationAST result ;
  const GALGAS_mapDeclarationAST * p = (const GALGAS_mapDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_mapTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (p->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeProxy.objectCompare (p->mProperty_mElementTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapTypeName.objectCompare (p->mProperty_mMapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertMethodList.objectCompare (p->mProperty_mInsertMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodList.objectCompare (p->mProperty_mSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRemoveMethodList.objectCompare (p->mProperty_mRemoveMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasInsertOrReplaceModifier.objectCompare (p->mProperty_mHasInsertOrReplaceModifier) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_mapTypeForGeneration::objectCompare (const GALGAS_mapTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapTypeForGeneration::GALGAS_mapTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                       GALGAS_insertMethodListAST::constructor_emptyList (HERE),
                                                       GALGAS_mapSearchMethodListAST::constructor_emptyList (HERE),
                                                       GALGAS_mapRemoveMethodListAST::constructor_emptyList (HERE),
                                                       GALGAS_bool::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapTypeForGeneration::GALGAS_mapTypeForGeneration (const cPtr_mapTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapTypeForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mElementTypeProxy,
                                                                          const GALGAS_lstring & inAttribute_mMapTypeName,
                                                                          const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                          const GALGAS_insertMethodListAST & inAttribute_mInsertMethodList,
                                                                          const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList,
                                                                          const GALGAS_mapRemoveMethodListAST & inAttribute_mRemoveMethodList,
                                                                          const GALGAS_bool & inAttribute_mHasInsertOrReplaceModifier
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mElementTypeProxy.isValid () && inAttribute_mMapTypeName.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mInsertMethodList.isValid () && inAttribute_mSearchMethodList.isValid () && inAttribute_mRemoveMethodList.isValid () && inAttribute_mHasInsertOrReplaceModifier.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mapTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mElementTypeProxy, inAttribute_mMapTypeName, inAttribute_mTypedAttributeList, inAttribute_mInsertMethodList, inAttribute_mSearchMethodList, inAttribute_mRemoveMethodList, inAttribute_mHasInsertOrReplaceModifier COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_mapTypeForGeneration::getter_mElementTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    result = p->mProperty_mElementTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_mapTypeForGeneration::getter_mElementTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_mapTypeForGeneration::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    result = p->mProperty_mMapTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_mapTypeForGeneration::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMapTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList GALGAS_mapTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList cPtr_mapTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_insertMethodListAST GALGAS_mapTypeForGeneration::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    result = p->mProperty_mInsertMethodList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_insertMethodListAST cPtr_mapTypeForGeneration::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInsertMethodList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapSearchMethodListAST GALGAS_mapTypeForGeneration::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    result = p->mProperty_mSearchMethodList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapSearchMethodListAST cPtr_mapTypeForGeneration::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSearchMethodList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapRemoveMethodListAST GALGAS_mapTypeForGeneration::getter_mRemoveMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    result = p->mProperty_mRemoveMethodList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapRemoveMethodListAST cPtr_mapTypeForGeneration::getter_mRemoveMethodList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRemoveMethodList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_mapTypeForGeneration::getter_mHasInsertOrReplaceModifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    result = p->mProperty_mHasInsertOrReplaceModifier ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_mapTypeForGeneration::getter_mHasInsertOrReplaceModifier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasInsertOrReplaceModifier ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapTypeForGeneration::setter_setMElementTypeProxy (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    p->mProperty_mElementTypeProxy = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapTypeForGeneration::setter_setMElementTypeProxy (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElementTypeProxy = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapTypeForGeneration::setter_setMMapTypeName (GALGAS_lstring inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    p->mProperty_mMapTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapTypeForGeneration::setter_setMMapTypeName (GALGAS_lstring inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMapTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapTypeForGeneration::setter_setMInsertMethodList (GALGAS_insertMethodListAST inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    p->mProperty_mInsertMethodList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapTypeForGeneration::setter_setMInsertMethodList (GALGAS_insertMethodListAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInsertMethodList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapTypeForGeneration::setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    p->mProperty_mSearchMethodList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapTypeForGeneration::setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSearchMethodList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapTypeForGeneration::setter_setMRemoveMethodList (GALGAS_mapRemoveMethodListAST inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    p->mProperty_mRemoveMethodList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapTypeForGeneration::setter_setMRemoveMethodList (GALGAS_mapRemoveMethodListAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRemoveMethodList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapTypeForGeneration::setter_setMHasInsertOrReplaceModifier (GALGAS_bool inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    p->mProperty_mHasInsertOrReplaceModifier = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapTypeForGeneration::setter_setMHasInsertOrReplaceModifier (GALGAS_bool inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasInsertOrReplaceModifier = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @mapTypeForGeneration class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_mapTypeForGeneration::cPtr_mapTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mElementTypeProxy,
                                                      const GALGAS_lstring & in_mMapTypeName,
                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                      const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                      const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                      const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                                      const GALGAS_bool & in_mHasInsertOrReplaceModifier
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mProperty_mElementTypeProxy (in_mElementTypeProxy),
mProperty_mMapTypeName (in_mMapTypeName),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mInsertMethodList (in_mInsertMethodList),
mProperty_mSearchMethodList (in_mSearchMethodList),
mProperty_mRemoveMethodList (in_mRemoveMethodList),
mProperty_mHasInsertOrReplaceModifier (in_mHasInsertOrReplaceModifier) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_mapTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

void cPtr_mapTypeForGeneration::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@mapTypeForGeneration:" ;
  mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRemoveMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasInsertOrReplaceModifier.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_mapTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapTypeForGeneration (mProperty_mTypeProxy, mProperty_mElementTypeProxy, mProperty_mMapTypeName, mProperty_mTypedAttributeList, mProperty_mInsertMethodList, mProperty_mSearchMethodList, mProperty_mRemoveMethodList, mProperty_mHasInsertOrReplaceModifier COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @mapTypeForGeneration type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapTypeForGeneration ("mapTypeForGeneration",
                                             & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_mapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_mapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapTypeForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapTypeForGeneration result ;
  const GALGAS_mapTypeForGeneration * p = (const GALGAS_mapTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_mapProxyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mapProxyDeclarationAST * p = (const cPtr_mapProxyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mapProxyDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapProxyTypeName.objectCompare (p->mProperty_mMapProxyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedMapTypeName.objectCompare (p->mProperty_mAssociatedMapTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_mapProxyDeclarationAST::objectCompare (const GALGAS_mapProxyDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapProxyDeclarationAST::GALGAS_mapProxyDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapProxyDeclarationAST GALGAS_mapProxyDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_mapProxyDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapProxyDeclarationAST::GALGAS_mapProxyDeclarationAST (const cPtr_mapProxyDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapProxyDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapProxyDeclarationAST GALGAS_mapProxyDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                              const GALGAS_lstring & inAttribute_mMapProxyTypeName,
                                                                              const GALGAS_lstring & inAttribute_mAssociatedMapTypeName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mapProxyDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mMapProxyTypeName.isValid () && inAttribute_mAssociatedMapTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mapProxyDeclarationAST (inAttribute_mIsPredefined, inAttribute_mMapProxyTypeName, inAttribute_mAssociatedMapTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_mapProxyDeclarationAST::getter_mMapProxyTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapProxyDeclarationAST * p = (const cPtr_mapProxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyDeclarationAST) ;
    result = p->mProperty_mMapProxyTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_mapProxyDeclarationAST::getter_mMapProxyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMapProxyTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_mapProxyDeclarationAST::getter_mAssociatedMapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapProxyDeclarationAST * p = (const cPtr_mapProxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyDeclarationAST) ;
    result = p->mProperty_mAssociatedMapTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_mapProxyDeclarationAST::getter_mAssociatedMapTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssociatedMapTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapProxyDeclarationAST::setter_setMMapProxyTypeName (GALGAS_lstring inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapProxyDeclarationAST * p = (cPtr_mapProxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyDeclarationAST) ;
    p->mProperty_mMapProxyTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapProxyDeclarationAST::setter_setMMapProxyTypeName (GALGAS_lstring inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMapProxyTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapProxyDeclarationAST::setter_setMAssociatedMapTypeName (GALGAS_lstring inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapProxyDeclarationAST * p = (cPtr_mapProxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyDeclarationAST) ;
    p->mProperty_mAssociatedMapTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapProxyDeclarationAST::setter_setMAssociatedMapTypeName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAssociatedMapTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @mapProxyDeclarationAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_mapProxyDeclarationAST::cPtr_mapProxyDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                          const GALGAS_lstring & in_mMapProxyTypeName,
                                                          const GALGAS_lstring & in_mAssociatedMapTypeName
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mMapProxyTypeName (in_mMapProxyTypeName),
mProperty_mAssociatedMapTypeName (in_mAssociatedMapTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_mapProxyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapProxyDeclarationAST ;
}

void cPtr_mapProxyDeclarationAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@mapProxyDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapProxyTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedMapTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_mapProxyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapProxyDeclarationAST (mProperty_mIsPredefined, mProperty_mMapProxyTypeName, mProperty_mAssociatedMapTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @mapProxyDeclarationAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapProxyDeclarationAST ("mapProxyDeclarationAST",
                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_mapProxyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapProxyDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_mapProxyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapProxyDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapProxyDeclarationAST GALGAS_mapProxyDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mapProxyDeclarationAST result ;
  const GALGAS_mapProxyDeclarationAST * p = (const GALGAS_mapProxyDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapProxyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapProxyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_mapProxyTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mapProxyTypeForGeneration * p = (const cPtr_mapProxyTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mapProxyTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (p->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedMapTypeProxy.objectCompare (p->mProperty_mAssociatedMapTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedMapTypedAttributeList.objectCompare (p->mProperty_mAssociatedMapTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodList.objectCompare (p->mProperty_mSearchMethodList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_mapProxyTypeForGeneration::objectCompare (const GALGAS_mapProxyTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapProxyTypeForGeneration::GALGAS_mapProxyTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapProxyTypeForGeneration GALGAS_mapProxyTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_mapProxyTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                            GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                            GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                            GALGAS_mapSearchMethodListAST::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapProxyTypeForGeneration::GALGAS_mapProxyTypeForGeneration (const cPtr_mapProxyTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapProxyTypeForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapProxyTypeForGeneration GALGAS_mapProxyTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mAssociatedMapTypeProxy,
                                                                                    const GALGAS_typedPropertyList & inAttribute_mAssociatedMapTypedAttributeList,
                                                                                    const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_mapProxyTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mAssociatedMapTypeProxy.isValid () && inAttribute_mAssociatedMapTypedAttributeList.isValid () && inAttribute_mSearchMethodList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mapProxyTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mAssociatedMapTypeProxy, inAttribute_mAssociatedMapTypedAttributeList, inAttribute_mSearchMethodList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_mapProxyTypeForGeneration::getter_mAssociatedMapTypeProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapProxyTypeForGeneration * p = (const cPtr_mapProxyTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyTypeForGeneration) ;
    result = p->mProperty_mAssociatedMapTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_mapProxyTypeForGeneration::getter_mAssociatedMapTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssociatedMapTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList GALGAS_mapProxyTypeForGeneration::getter_mAssociatedMapTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapProxyTypeForGeneration * p = (const cPtr_mapProxyTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyTypeForGeneration) ;
    result = p->mProperty_mAssociatedMapTypedAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList cPtr_mapProxyTypeForGeneration::getter_mAssociatedMapTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssociatedMapTypedAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapSearchMethodListAST GALGAS_mapProxyTypeForGeneration::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapProxyTypeForGeneration * p = (const cPtr_mapProxyTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyTypeForGeneration) ;
    result = p->mProperty_mSearchMethodList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapSearchMethodListAST cPtr_mapProxyTypeForGeneration::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSearchMethodList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapProxyTypeForGeneration::setter_setMAssociatedMapTypeProxy (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapProxyTypeForGeneration * p = (cPtr_mapProxyTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyTypeForGeneration) ;
    p->mProperty_mAssociatedMapTypeProxy = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapProxyTypeForGeneration::setter_setMAssociatedMapTypeProxy (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAssociatedMapTypeProxy = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapProxyTypeForGeneration::setter_setMAssociatedMapTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapProxyTypeForGeneration * p = (cPtr_mapProxyTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyTypeForGeneration) ;
    p->mProperty_mAssociatedMapTypedAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapProxyTypeForGeneration::setter_setMAssociatedMapTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAssociatedMapTypedAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mapProxyTypeForGeneration::setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_mapProxyTypeForGeneration * p = (cPtr_mapProxyTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyTypeForGeneration) ;
    p->mProperty_mSearchMethodList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_mapProxyTypeForGeneration::setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSearchMethodList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @mapProxyTypeForGeneration class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_mapProxyTypeForGeneration::cPtr_mapProxyTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mAssociatedMapTypeProxy,
                                                                const GALGAS_typedPropertyList & in_mAssociatedMapTypedAttributeList,
                                                                const GALGAS_mapSearchMethodListAST & in_mSearchMethodList
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mProperty_mAssociatedMapTypeProxy (in_mAssociatedMapTypeProxy),
mProperty_mAssociatedMapTypedAttributeList (in_mAssociatedMapTypedAttributeList),
mProperty_mSearchMethodList (in_mSearchMethodList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_mapProxyTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapProxyTypeForGeneration ;
}

void cPtr_mapProxyTypeForGeneration::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@mapProxyTypeForGeneration:" ;
  mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedMapTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedMapTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_mapProxyTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapProxyTypeForGeneration (mProperty_mTypeProxy, mProperty_mAssociatedMapTypeProxy, mProperty_mAssociatedMapTypedAttributeList, mProperty_mSearchMethodList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @mapProxyTypeForGeneration type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapProxyTypeForGeneration ("mapProxyTypeForGeneration",
                                                  & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_mapProxyTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapProxyTypeForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_mapProxyTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapProxyTypeForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapProxyTypeForGeneration GALGAS_mapProxyTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapProxyTypeForGeneration result ;
  const GALGAS_mapProxyTypeForGeneration * p = (const GALGAS_mapProxyTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapProxyTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapProxyTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_sharedMapDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapTypeName.objectCompare (p->mProperty_mMapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeList.objectCompare (p->mProperty_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertMethodList.objectCompare (p->mProperty_mInsertMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodList.objectCompare (p->mProperty_mSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapStateList.objectCompare (p->mProperty_mMapStateList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapOverrideBlockListAST.objectCompare (p->mProperty_mMapOverrideBlockListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSharedMapAttributeListAST.objectCompare (p->mProperty_mSharedMapAttributeListAST) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_sharedMapDeclarationAST::objectCompare (const GALGAS_sharedMapDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sharedMapDeclarationAST::GALGAS_sharedMapDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sharedMapDeclarationAST GALGAS_sharedMapDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_sharedMapDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstringlist::constructor_emptyList (HERE),
                                                          GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                          GALGAS_insertMethodListAST::constructor_emptyList (HERE),
                                                          GALGAS_mapSearchMethodListAST::constructor_emptyList (HERE),
                                                          GALGAS_mapStateList::constructor_emptyList (HERE),
                                                          GALGAS_mapOverrideBlockListAST::constructor_emptyList (HERE),
                                                          GALGAS_sharedMapAttributeListAST::constructor_emptyList (HERE)
                                                          COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sharedMapDeclarationAST::GALGAS_sharedMapDeclarationAST (const cPtr_sharedMapDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sharedMapDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sharedMapDeclarationAST GALGAS_sharedMapDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_lstring & inAttribute_mMapTypeName,
                                                                                const GALGAS_lstringlist & inAttribute_mAttributeList,
                                                                                const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList,
                                                                                const GALGAS_insertMethodListAST & inAttribute_mInsertMethodList,
                                                                                const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList,
                                                                                const GALGAS_mapStateList & inAttribute_mMapStateList,
                                                                                const GALGAS_mapOverrideBlockListAST & inAttribute_mMapOverrideBlockListAST,
                                                                                const GALGAS_sharedMapAttributeListAST & inAttribute_mSharedMapAttributeListAST
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mMapTypeName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mPropertyList.isValid () && inAttribute_mInsertMethodList.isValid () && inAttribute_mSearchMethodList.isValid () && inAttribute_mMapStateList.isValid () && inAttribute_mMapOverrideBlockListAST.isValid () && inAttribute_mSharedMapAttributeListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sharedMapDeclarationAST (inAttribute_mIsPredefined, inAttribute_mMapTypeName, inAttribute_mAttributeList, inAttribute_mPropertyList, inAttribute_mInsertMethodList, inAttribute_mSearchMethodList, inAttribute_mMapStateList, inAttribute_mMapOverrideBlockListAST, inAttribute_mSharedMapAttributeListAST COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_sharedMapDeclarationAST::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mProperty_mMapTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_sharedMapDeclarationAST::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMapTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_sharedMapDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mProperty_mAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_sharedMapDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyInCollectionListAST GALGAS_sharedMapDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mProperty_mPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyInCollectionListAST cPtr_sharedMapDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_insertMethodListAST GALGAS_sharedMapDeclarationAST::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mProperty_mInsertMethodList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_insertMethodListAST cPtr_sharedMapDeclarationAST::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInsertMethodList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapSearchMethodListAST GALGAS_sharedMapDeclarationAST::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mProperty_mSearchMethodList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapSearchMethodListAST cPtr_sharedMapDeclarationAST::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSearchMethodList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapStateList GALGAS_sharedMapDeclarationAST::getter_mMapStateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapStateList result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mProperty_mMapStateList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapStateList cPtr_sharedMapDeclarationAST::getter_mMapStateList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMapStateList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapOverrideBlockListAST GALGAS_sharedMapDeclarationAST::getter_mMapOverrideBlockListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mProperty_mMapOverrideBlockListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapOverrideBlockListAST cPtr_sharedMapDeclarationAST::getter_mMapOverrideBlockListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMapOverrideBlockListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapDeclarationAST::getter_mSharedMapAttributeListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_sharedMapAttributeListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mProperty_mSharedMapAttributeListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sharedMapAttributeListAST cPtr_sharedMapDeclarationAST::getter_mSharedMapAttributeListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSharedMapAttributeListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapDeclarationAST::setter_setMMapTypeName (GALGAS_lstring inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mMapTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapDeclarationAST::setter_setMMapTypeName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMapTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapDeclarationAST::setter_setMAttributeList (GALGAS_lstringlist inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapDeclarationAST::setter_setMAttributeList (GALGAS_lstringlist inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPropertyList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapDeclarationAST::setter_setMInsertMethodList (GALGAS_insertMethodListAST inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mInsertMethodList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapDeclarationAST::setter_setMInsertMethodList (GALGAS_insertMethodListAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInsertMethodList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapDeclarationAST::setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mSearchMethodList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapDeclarationAST::setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSearchMethodList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapDeclarationAST::setter_setMMapStateList (GALGAS_mapStateList inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mMapStateList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapDeclarationAST::setter_setMMapStateList (GALGAS_mapStateList inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMapStateList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapDeclarationAST::setter_setMMapOverrideBlockListAST (GALGAS_mapOverrideBlockListAST inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mMapOverrideBlockListAST = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapDeclarationAST::setter_setMMapOverrideBlockListAST (GALGAS_mapOverrideBlockListAST inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMapOverrideBlockListAST = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapDeclarationAST::setter_setMSharedMapAttributeListAST (GALGAS_sharedMapAttributeListAST inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mSharedMapAttributeListAST = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapDeclarationAST::setter_setMSharedMapAttributeListAST (GALGAS_sharedMapAttributeListAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSharedMapAttributeListAST = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @sharedMapDeclarationAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_sharedMapDeclarationAST::cPtr_sharedMapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_lstring & in_mMapTypeName,
                                                            const GALGAS_lstringlist & in_mAttributeList,
                                                            const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                            const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                            const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                            const GALGAS_mapStateList & in_mMapStateList,
                                                            const GALGAS_mapOverrideBlockListAST & in_mMapOverrideBlockListAST,
                                                            const GALGAS_sharedMapAttributeListAST & in_mSharedMapAttributeListAST
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mMapTypeName (in_mMapTypeName),
mProperty_mAttributeList (in_mAttributeList),
mProperty_mPropertyList (in_mPropertyList),
mProperty_mInsertMethodList (in_mInsertMethodList),
mProperty_mSearchMethodList (in_mSearchMethodList),
mProperty_mMapStateList (in_mMapStateList),
mProperty_mMapOverrideBlockListAST (in_mMapOverrideBlockListAST),
mProperty_mSharedMapAttributeListAST (in_mSharedMapAttributeListAST) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_sharedMapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapDeclarationAST ;
}

void cPtr_sharedMapDeclarationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@sharedMapDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapStateList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapOverrideBlockListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSharedMapAttributeListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_sharedMapDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sharedMapDeclarationAST (mProperty_mIsPredefined, mProperty_mMapTypeName, mProperty_mAttributeList, mProperty_mPropertyList, mProperty_mInsertMethodList, mProperty_mSearchMethodList, mProperty_mMapStateList, mProperty_mMapOverrideBlockListAST, mProperty_mSharedMapAttributeListAST COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @sharedMapDeclarationAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sharedMapDeclarationAST ("sharedMapDeclarationAST",
                                                & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sharedMapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sharedMapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sharedMapDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sharedMapDeclarationAST GALGAS_sharedMapDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapDeclarationAST result ;
  const GALGAS_sharedMapDeclarationAST * p = (const GALGAS_sharedMapDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sharedMapDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sharedMapDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_sharedMapTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (p->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapTypeName.objectCompare (p->mProperty_mMapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertMethodList.objectCompare (p->mProperty_mInsertMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodList.objectCompare (p->mProperty_mSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapAutomatonStateMap.objectCompare (p->mProperty_mMapAutomatonStateMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapAutomatonActionMap.objectCompare (p->mProperty_mMapAutomatonActionMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapStateSortedList.objectCompare (p->mProperty_mMapStateSortedList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapOverrideList.objectCompare (p->mProperty_mMapOverrideList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mShadowBehaviour.objectCompare (p->mProperty_mShadowBehaviour) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mShadowMessage.objectCompare (p->mProperty_mShadowMessage) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_sharedMapTypeForGeneration::objectCompare (const GALGAS_sharedMapTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sharedMapTypeForGeneration::GALGAS_sharedMapTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sharedMapTypeForGeneration::GALGAS_sharedMapTypeForGeneration (const cPtr_sharedMapTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sharedMapTypeForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sharedMapTypeForGeneration GALGAS_sharedMapTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                                      const GALGAS_lstring & inAttribute_mMapTypeName,
                                                                                      const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                      const GALGAS_insertMethodListAST & inAttribute_mInsertMethodList,
                                                                                      const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList,
                                                                                      const GALGAS_mapAutomatonStateMap & inAttribute_mMapAutomatonStateMap,
                                                                                      const GALGAS_mapAutomatonActionMap & inAttribute_mMapAutomatonActionMap,
                                                                                      const GALGAS_mapStateSortedList & inAttribute_mMapStateSortedList,
                                                                                      const GALGAS_mapOverrideList & inAttribute_mMapOverrideList,
                                                                                      const GALGAS_mapAutomatonMessageKind & inAttribute_mShadowBehaviour,
                                                                                      const GALGAS_string & inAttribute_mShadowMessage
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mMapTypeName.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mInsertMethodList.isValid () && inAttribute_mSearchMethodList.isValid () && inAttribute_mMapAutomatonStateMap.isValid () && inAttribute_mMapAutomatonActionMap.isValid () && inAttribute_mMapStateSortedList.isValid () && inAttribute_mMapOverrideList.isValid () && inAttribute_mShadowBehaviour.isValid () && inAttribute_mShadowMessage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sharedMapTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mMapTypeName, inAttribute_mTypedAttributeList, inAttribute_mInsertMethodList, inAttribute_mSearchMethodList, inAttribute_mMapAutomatonStateMap, inAttribute_mMapAutomatonActionMap, inAttribute_mMapStateSortedList, inAttribute_mMapOverrideList, inAttribute_mShadowBehaviour, inAttribute_mShadowMessage COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_sharedMapTypeForGeneration::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mProperty_mMapTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_sharedMapTypeForGeneration::getter_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMapTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList GALGAS_sharedMapTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList cPtr_sharedMapTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_insertMethodListAST GALGAS_sharedMapTypeForGeneration::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mProperty_mInsertMethodList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_insertMethodListAST cPtr_sharedMapTypeForGeneration::getter_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInsertMethodList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapSearchMethodListAST GALGAS_sharedMapTypeForGeneration::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mProperty_mSearchMethodList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapSearchMethodListAST cPtr_sharedMapTypeForGeneration::getter_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSearchMethodList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapAutomatonStateMap GALGAS_sharedMapTypeForGeneration::getter_mMapAutomatonStateMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapAutomatonStateMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mProperty_mMapAutomatonStateMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapAutomatonStateMap cPtr_sharedMapTypeForGeneration::getter_mMapAutomatonStateMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMapAutomatonStateMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapAutomatonActionMap GALGAS_sharedMapTypeForGeneration::getter_mMapAutomatonActionMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapAutomatonActionMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mProperty_mMapAutomatonActionMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapAutomatonActionMap cPtr_sharedMapTypeForGeneration::getter_mMapAutomatonActionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMapAutomatonActionMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapStateSortedList GALGAS_sharedMapTypeForGeneration::getter_mMapStateSortedList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapStateSortedList result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mProperty_mMapStateSortedList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapStateSortedList cPtr_sharedMapTypeForGeneration::getter_mMapStateSortedList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMapStateSortedList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapOverrideList GALGAS_sharedMapTypeForGeneration::getter_mMapOverrideList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapOverrideList result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mProperty_mMapOverrideList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapOverrideList cPtr_sharedMapTypeForGeneration::getter_mMapOverrideList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMapOverrideList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapAutomatonMessageKind GALGAS_sharedMapTypeForGeneration::getter_mShadowBehaviour (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapAutomatonMessageKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mProperty_mShadowBehaviour ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mapAutomatonMessageKind cPtr_sharedMapTypeForGeneration::getter_mShadowBehaviour (UNUSED_LOCATION_ARGS) const {
  return mProperty_mShadowBehaviour ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_sharedMapTypeForGeneration::getter_mShadowMessage (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    result = p->mProperty_mShadowMessage ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_sharedMapTypeForGeneration::getter_mShadowMessage (UNUSED_LOCATION_ARGS) const {
  return mProperty_mShadowMessage ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapTypeForGeneration::setter_setMMapTypeName (GALGAS_lstring inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mMapTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapTypeForGeneration::setter_setMMapTypeName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMapTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapTypeForGeneration::setter_setMInsertMethodList (GALGAS_insertMethodListAST inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mInsertMethodList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapTypeForGeneration::setter_setMInsertMethodList (GALGAS_insertMethodListAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInsertMethodList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapTypeForGeneration::setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mSearchMethodList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapTypeForGeneration::setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSearchMethodList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapTypeForGeneration::setter_setMMapAutomatonStateMap (GALGAS_mapAutomatonStateMap inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mMapAutomatonStateMap = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapTypeForGeneration::setter_setMMapAutomatonStateMap (GALGAS_mapAutomatonStateMap inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMapAutomatonStateMap = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapTypeForGeneration::setter_setMMapAutomatonActionMap (GALGAS_mapAutomatonActionMap inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mMapAutomatonActionMap = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapTypeForGeneration::setter_setMMapAutomatonActionMap (GALGAS_mapAutomatonActionMap inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMapAutomatonActionMap = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapTypeForGeneration::setter_setMMapStateSortedList (GALGAS_mapStateSortedList inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mMapStateSortedList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapTypeForGeneration::setter_setMMapStateSortedList (GALGAS_mapStateSortedList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMapStateSortedList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapTypeForGeneration::setter_setMMapOverrideList (GALGAS_mapOverrideList inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mMapOverrideList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapTypeForGeneration::setter_setMMapOverrideList (GALGAS_mapOverrideList inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMapOverrideList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapTypeForGeneration::setter_setMShadowBehaviour (GALGAS_mapAutomatonMessageKind inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mShadowBehaviour = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapTypeForGeneration::setter_setMShadowBehaviour (GALGAS_mapAutomatonMessageKind inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mShadowBehaviour = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sharedMapTypeForGeneration::setter_setMShadowMessage (GALGAS_string inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mShadowMessage = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sharedMapTypeForGeneration::setter_setMShadowMessage (GALGAS_string inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mShadowMessage = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @sharedMapTypeForGeneration class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_sharedMapTypeForGeneration::cPtr_sharedMapTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                                  const GALGAS_lstring & in_mMapTypeName,
                                                                  const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                  const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                                  const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                                  const GALGAS_mapAutomatonStateMap & in_mMapAutomatonStateMap,
                                                                  const GALGAS_mapAutomatonActionMap & in_mMapAutomatonActionMap,
                                                                  const GALGAS_mapStateSortedList & in_mMapStateSortedList,
                                                                  const GALGAS_mapOverrideList & in_mMapOverrideList,
                                                                  const GALGAS_mapAutomatonMessageKind & in_mShadowBehaviour,
                                                                  const GALGAS_string & in_mShadowMessage
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mProperty_mMapTypeName (in_mMapTypeName),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mInsertMethodList (in_mInsertMethodList),
mProperty_mSearchMethodList (in_mSearchMethodList),
mProperty_mMapAutomatonStateMap (in_mMapAutomatonStateMap),
mProperty_mMapAutomatonActionMap (in_mMapAutomatonActionMap),
mProperty_mMapStateSortedList (in_mMapStateSortedList),
mProperty_mMapOverrideList (in_mMapOverrideList),
mProperty_mShadowBehaviour (in_mShadowBehaviour),
mProperty_mShadowMessage (in_mShadowMessage) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_sharedMapTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapTypeForGeneration ;
}

void cPtr_sharedMapTypeForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@sharedMapTypeForGeneration:" ;
  mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapAutomatonStateMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapAutomatonActionMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapStateSortedList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapOverrideList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mShadowBehaviour.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mShadowMessage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_sharedMapTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sharedMapTypeForGeneration (mProperty_mTypeProxy, mProperty_mMapTypeName, mProperty_mTypedAttributeList, mProperty_mInsertMethodList, mProperty_mSearchMethodList, mProperty_mMapAutomatonStateMap, mProperty_mMapAutomatonActionMap, mProperty_mMapStateSortedList, mProperty_mMapOverrideList, mProperty_mShadowBehaviour, mProperty_mShadowMessage COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @sharedMapTypeForGeneration type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sharedMapTypeForGeneration ("sharedMapTypeForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sharedMapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapTypeForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sharedMapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sharedMapTypeForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sharedMapTypeForGeneration GALGAS_sharedMapTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapTypeForGeneration result ;
  const GALGAS_sharedMapTypeForGeneration * p = (const GALGAS_sharedMapTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sharedMapTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sharedMapTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_sortedListDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sortedListDeclarationAST * p = (const cPtr_sortedListDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSortedListTypeName.objectCompare (p->mProperty_mSortedListTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSortDescriptorList.objectCompare (p->mProperty_mSortDescriptorList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_sortedListDeclarationAST::objectCompare (const GALGAS_sortedListDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedListDeclarationAST::GALGAS_sortedListDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                           GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedListDeclarationAST::GALGAS_sortedListDeclarationAST (const cPtr_sortedListDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                  const GALGAS_lstring & inAttribute_mSortedListTypeName,
                                                                                  const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList,
                                                                                  const GALGAS_sortedListSortDescriptorListAST & inAttribute_mSortDescriptorList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sortedListDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mSortedListTypeName.isValid () && inAttribute_mPropertyList.isValid () && inAttribute_mSortDescriptorList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sortedListDeclarationAST (inAttribute_mIsPredefined, inAttribute_mSortedListTypeName, inAttribute_mPropertyList, inAttribute_mSortDescriptorList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_sortedListDeclarationAST::getter_mSortedListTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_sortedListDeclarationAST * p = (const cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    result = p->mProperty_mSortedListTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_sortedListDeclarationAST::getter_mSortedListTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSortedListTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyInCollectionListAST GALGAS_sortedListDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sortedListDeclarationAST * p = (const cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    result = p->mProperty_mPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyInCollectionListAST cPtr_sortedListDeclarationAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListDeclarationAST::getter_mSortDescriptorList (UNUSED_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sortedListDeclarationAST * p = (const cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    result = p->mProperty_mSortDescriptorList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedListSortDescriptorListAST cPtr_sortedListDeclarationAST::getter_mSortDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSortDescriptorList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sortedListDeclarationAST::setter_setMSortedListTypeName (GALGAS_lstring inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    p->mProperty_mSortedListTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sortedListDeclarationAST::setter_setMSortedListTypeName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSortedListTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sortedListDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sortedListDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPropertyList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sortedListDeclarationAST::setter_setMSortDescriptorList (GALGAS_sortedListSortDescriptorListAST inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    p->mProperty_mSortDescriptorList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sortedListDeclarationAST::setter_setMSortDescriptorList (GALGAS_sortedListSortDescriptorListAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSortDescriptorList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @sortedListDeclarationAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_sortedListDeclarationAST::cPtr_sortedListDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                              const GALGAS_lstring & in_mSortedListTypeName,
                                                              const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                              const GALGAS_sortedListSortDescriptorListAST & in_mSortDescriptorList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mSortedListTypeName (in_mSortedListTypeName),
mProperty_mPropertyList (in_mPropertyList),
mProperty_mSortDescriptorList (in_mSortDescriptorList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_sortedListDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

void cPtr_sortedListDeclarationAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@sortedListDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSortedListTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSortDescriptorList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_sortedListDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sortedListDeclarationAST (mProperty_mIsPredefined, mProperty_mSortedListTypeName, mProperty_mPropertyList, mProperty_mSortDescriptorList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @sortedListDeclarationAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListDeclarationAST ("sortedListDeclarationAST",
                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sortedListDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sortedListDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sortedListDeclarationAST result ;
  const GALGAS_sortedListDeclarationAST * p = (const GALGAS_sortedListDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedListDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_sortedListTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sortedListTypeForGeneration * p = (const cPtr_sortedListTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (p->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mListElementTypeIndex.objectCompare (p->mProperty_mListElementTypeIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSortDescriptorList.objectCompare (p->mProperty_mSortDescriptorList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_sortedListTypeForGeneration::objectCompare (const GALGAS_sortedListTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedListTypeForGeneration::GALGAS_sortedListTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_sortedListTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                              GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                              GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                              GALGAS_sortDescriptorListForGeneration::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedListTypeForGeneration::GALGAS_sortedListTypeForGeneration (const cPtr_sortedListTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListTypeForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mListElementTypeIndex,
                                                                                        const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                        const GALGAS_sortDescriptorListForGeneration & inAttribute_mSortDescriptorList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sortedListTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mListElementTypeIndex.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSortDescriptorList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sortedListTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mListElementTypeIndex, inAttribute_mTypedAttributeList, inAttribute_mSortDescriptorList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_sortedListTypeForGeneration::getter_mListElementTypeIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_sortedListTypeForGeneration * p = (const cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    result = p->mProperty_mListElementTypeIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_sortedListTypeForGeneration::getter_mListElementTypeIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mListElementTypeIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList GALGAS_sortedListTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_sortedListTypeForGeneration * p = (const cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList cPtr_sortedListTypeForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortDescriptorListForGeneration GALGAS_sortedListTypeForGeneration::getter_mSortDescriptorList (UNUSED_LOCATION_ARGS) const {
  GALGAS_sortDescriptorListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_sortedListTypeForGeneration * p = (const cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    result = p->mProperty_mSortDescriptorList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortDescriptorListForGeneration cPtr_sortedListTypeForGeneration::getter_mSortDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSortDescriptorList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sortedListTypeForGeneration::setter_setMListElementTypeIndex (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    p->mProperty_mListElementTypeIndex = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sortedListTypeForGeneration::setter_setMListElementTypeIndex (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mListElementTypeIndex = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sortedListTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sortedListTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sortedListTypeForGeneration::setter_setMSortDescriptorList (GALGAS_sortDescriptorListForGeneration inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    p->mProperty_mSortDescriptorList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_sortedListTypeForGeneration::setter_setMSortDescriptorList (GALGAS_sortDescriptorListForGeneration inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSortDescriptorList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @sortedListTypeForGeneration class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_sortedListTypeForGeneration::cPtr_sortedListTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mListElementTypeIndex,
                                                                    const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                    const GALGAS_sortDescriptorListForGeneration & in_mSortDescriptorList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mProperty_mListElementTypeIndex (in_mListElementTypeIndex),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mSortDescriptorList (in_mSortDescriptorList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_sortedListTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;
}

void cPtr_sortedListTypeForGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@sortedListTypeForGeneration:" ;
  mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mListElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSortDescriptorList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_sortedListTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sortedListTypeForGeneration (mProperty_mTypeProxy, mProperty_mListElementTypeIndex, mProperty_mTypedAttributeList, mProperty_mSortDescriptorList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @sortedListTypeForGeneration type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListTypeForGeneration ("sortedListTypeForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sortedListTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sortedListTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListTypeForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sortedListTypeForGeneration result ;
  const GALGAS_sortedListTypeForGeneration * p = (const GALGAS_sortedListTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedListTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_structDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structDeclarationAST * p = (const cPtr_structDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructTypeName.objectCompare (p->mProperty_mStructTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructurePropertyList.objectCompare (p->mProperty_mStructurePropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedElementTypeName.objectCompare (p->mProperty_mEnumeratedElementTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_structDeclarationAST::objectCompare (const GALGAS_structDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structDeclarationAST::GALGAS_structDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structDeclarationAST GALGAS_structDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_structDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                       GALGAS_string::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structDeclarationAST::GALGAS_structDeclarationAST (const cPtr_structDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structDeclarationAST GALGAS_structDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                          const GALGAS_lstring & inAttribute_mStructTypeName,
                                                                          const GALGAS_propertyInCollectionListAST & inAttribute_mStructurePropertyList,
                                                                          const GALGAS_string & inAttribute_mEnumeratedElementTypeName
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_structDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mStructTypeName.isValid () && inAttribute_mStructurePropertyList.isValid () && inAttribute_mEnumeratedElementTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structDeclarationAST (inAttribute_mIsPredefined, inAttribute_mStructTypeName, inAttribute_mStructurePropertyList, inAttribute_mEnumeratedElementTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_structDeclarationAST::getter_mStructTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structDeclarationAST * p = (const cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    result = p->mProperty_mStructTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_structDeclarationAST::getter_mStructTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyInCollectionListAST GALGAS_structDeclarationAST::getter_mStructurePropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structDeclarationAST * p = (const cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    result = p->mProperty_mStructurePropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyInCollectionListAST cPtr_structDeclarationAST::getter_mStructurePropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructurePropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_structDeclarationAST::getter_mEnumeratedElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_structDeclarationAST * p = (const cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    result = p->mProperty_mEnumeratedElementTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_structDeclarationAST::getter_mEnumeratedElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumeratedElementTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structDeclarationAST::setter_setMStructTypeName (GALGAS_lstring inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    p->mProperty_mStructTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_structDeclarationAST::setter_setMStructTypeName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structDeclarationAST::setter_setMStructurePropertyList (GALGAS_propertyInCollectionListAST inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    p->mProperty_mStructurePropertyList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_structDeclarationAST::setter_setMStructurePropertyList (GALGAS_propertyInCollectionListAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructurePropertyList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structDeclarationAST::setter_setMEnumeratedElementTypeName (GALGAS_string inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    p->mProperty_mEnumeratedElementTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_structDeclarationAST::setter_setMEnumeratedElementTypeName (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEnumeratedElementTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @structDeclarationAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_structDeclarationAST::cPtr_structDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                      const GALGAS_lstring & in_mStructTypeName,
                                                      const GALGAS_propertyInCollectionListAST & in_mStructurePropertyList,
                                                      const GALGAS_string & in_mEnumeratedElementTypeName
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mStructTypeName (in_mStructTypeName),
mProperty_mStructurePropertyList (in_mStructurePropertyList),
mProperty_mEnumeratedElementTypeName (in_mEnumeratedElementTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_structDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

void cPtr_structDeclarationAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@structDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructurePropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratedElementTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_structDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structDeclarationAST (mProperty_mIsPredefined, mProperty_mStructTypeName, mProperty_mStructurePropertyList, mProperty_mEnumeratedElementTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @structDeclarationAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structDeclarationAST ("structDeclarationAST",
                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_structDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_structDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structDeclarationAST GALGAS_structDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_structDeclarationAST result ;
  const GALGAS_structDeclarationAST * p = (const GALGAS_structDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_structTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structTypeForGeneration * p = (const cPtr_structTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (p->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedPropertyList.objectCompare (p->mProperty_mTypedPropertyList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_structTypeForGeneration::objectCompare (const GALGAS_structTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structTypeForGeneration::GALGAS_structTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_structTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                          GALGAS_typedPropertyList::constructor_emptyList (HERE)
                                                          COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structTypeForGeneration::GALGAS_structTypeForGeneration (const cPtr_structTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structTypeForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTypeProxy,
                                                                                const GALGAS_typedPropertyList & inAttribute_mTypedPropertyList
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structTypeForGeneration result ;
  if (inAttribute_mTypeProxy.isValid () && inAttribute_mTypedPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structTypeForGeneration (inAttribute_mTypeProxy, inAttribute_mTypedPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList GALGAS_structTypeForGeneration::getter_mTypedPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_structTypeForGeneration * p = (const cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    result = p->mProperty_mTypedPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList cPtr_structTypeForGeneration::getter_mTypedPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structTypeForGeneration::setter_setMTypedPropertyList (GALGAS_typedPropertyList inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structTypeForGeneration * p = (cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    p->mProperty_mTypedPropertyList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_structTypeForGeneration::setter_setMTypedPropertyList (GALGAS_typedPropertyList inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedPropertyList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @structTypeForGeneration class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_structTypeForGeneration::cPtr_structTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                            const GALGAS_typedPropertyList & in_mTypedPropertyList
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mTypeProxy COMMA_THERE),
mProperty_mTypedPropertyList (in_mTypedPropertyList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_structTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration ;
}

void cPtr_structTypeForGeneration::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@structTypeForGeneration:" ;
  mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_structTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structTypeForGeneration (mProperty_mTypeProxy, mProperty_mTypedPropertyList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @structTypeForGeneration type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structTypeForGeneration ("structTypeForGeneration",
                                                & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_structTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_structTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structTypeForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structTypeForGeneration result ;
  const GALGAS_structTypeForGeneration * p = (const GALGAS_structTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_abstractExtensionGetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionGetterAST * p = (const cPtr_abstractExtensionGetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionGetterName.objectCompare (p->mProperty_mAbstractExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionGetterFormalInputParameterList.objectCompare (p->mProperty_mAbstractExtensionGetterFormalInputParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionGetterReturnedTypeName.objectCompare (p->mProperty_mAbstractExtensionGetterReturnedTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_abstractExtensionGetterAST::objectCompare (const GALGAS_abstractExtensionGetterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionGetterAST::GALGAS_abstractExtensionGetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionGetterAST GALGAS_abstractExtensionGetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                             GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionGetterAST::GALGAS_abstractExtensionGetterAST (const cPtr_abstractExtensionGetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionGetterAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionGetterAST GALGAS_abstractExtensionGetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                                      const GALGAS_lstring & inAttribute_mAbstractExtensionGetterName,
                                                                                      const GALGAS_formalInputParameterListAST & inAttribute_mAbstractExtensionGetterFormalInputParameterList,
                                                                                      const GALGAS_lstring & inAttribute_mAbstractExtensionGetterReturnedTypeName
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mAbstractExtensionGetterName.isValid () && inAttribute_mAbstractExtensionGetterFormalInputParameterList.isValid () && inAttribute_mAbstractExtensionGetterReturnedTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionGetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mAbstractExtensionGetterName, inAttribute_mAbstractExtensionGetterFormalInputParameterList, inAttribute_mAbstractExtensionGetterReturnedTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_abstractExtensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterAST * p = (const cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_abstractExtensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_abstractExtensionGetterAST::getter_mAbstractExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterAST * p = (const cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    result = p->mProperty_mAbstractExtensionGetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_abstractExtensionGetterAST::getter_mAbstractExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionGetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalInputParameterListAST GALGAS_abstractExtensionGetterAST::getter_mAbstractExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterAST * p = (const cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    result = p->mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalInputParameterListAST cPtr_abstractExtensionGetterAST::getter_mAbstractExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionGetterFormalInputParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_abstractExtensionGetterAST::getter_mAbstractExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterAST * p = (const cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    result = p->mProperty_mAbstractExtensionGetterReturnedTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_abstractExtensionGetterAST::getter_mAbstractExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionGetterReturnedTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionGetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionGetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionGetterAST::setter_setMAbstractExtensionGetterName (GALGAS_lstring inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    p->mProperty_mAbstractExtensionGetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionGetterAST::setter_setMAbstractExtensionGetterName (GALGAS_lstring inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionGetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionGetterAST::setter_setMAbstractExtensionGetterFormalInputParameterList (GALGAS_formalInputParameterListAST inValue
                                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    p->mProperty_mAbstractExtensionGetterFormalInputParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionGetterAST::setter_setMAbstractExtensionGetterFormalInputParameterList (GALGAS_formalInputParameterListAST inValue
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionGetterFormalInputParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionGetterAST::setter_setMAbstractExtensionGetterReturnedTypeName (GALGAS_lstring inValue
                                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    p->mProperty_mAbstractExtensionGetterReturnedTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionGetterAST::setter_setMAbstractExtensionGetterReturnedTypeName (GALGAS_lstring inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionGetterReturnedTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @abstractExtensionGetterAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractExtensionGetterAST::cPtr_abstractExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_lstring & in_mTypeName,
                                                                  const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                                                  const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                                  const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mAbstractExtensionGetterName (in_mAbstractExtensionGetterName),
mProperty_mAbstractExtensionGetterFormalInputParameterList (in_mAbstractExtensionGetterFormalInputParameterList),
mProperty_mAbstractExtensionGetterReturnedTypeName (in_mAbstractExtensionGetterReturnedTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_abstractExtensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;
}

void cPtr_abstractExtensionGetterAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@abstractExtensionGetterAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_abstractExtensionGetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionGetterAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionGetterName, mProperty_mAbstractExtensionGetterFormalInputParameterList, mProperty_mAbstractExtensionGetterReturnedTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @abstractExtensionGetterAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionGetterAST ("abstractExtensionGetterAST",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractExtensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractExtensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionGetterAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionGetterAST GALGAS_abstractExtensionGetterAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterAST result ;
  const GALGAS_abstractExtensionGetterAST * p = (const GALGAS_abstractExtensionGetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_abstractExtensionGetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionGetterForGeneration * p = (const cPtr_abstractExtensionGetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionGetterName.objectCompare (p->mProperty_mAbstractExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionGetterFormalParameterList.objectCompare (p->mProperty_mAbstractExtensionGetterFormalParameterList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_abstractExtensionGetterForGeneration::objectCompare (const GALGAS_abstractExtensionGetterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionGetterForGeneration::GALGAS_abstractExtensionGetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionGetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionGetterForGeneration::GALGAS_abstractExtensionGetterForGeneration (const cPtr_abstractExtensionGetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionGetterForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                          const GALGAS_string & inAttribute_mAbstractExtensionGetterName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                          const GALGAS_formalInputParameterListForGeneration & inAttribute_mAbstractExtensionGetterFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mAbstractExtensionGetterName.isValid () && inAttribute_mResultType.isValid () && inAttribute_mAbstractExtensionGetterFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionGetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mAbstractExtensionGetterName, inAttribute_mResultType, inAttribute_mAbstractExtensionGetterFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_abstractExtensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterForGeneration * p = (const cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_abstractExtensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_abstractExtensionGetterForGeneration::getter_mAbstractExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterForGeneration * p = (const cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    result = p->mProperty_mAbstractExtensionGetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_abstractExtensionGetterForGeneration::getter_mAbstractExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionGetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_abstractExtensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterForGeneration * p = (const cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_abstractExtensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalInputParameterListForGeneration GALGAS_abstractExtensionGetterForGeneration::getter_mAbstractExtensionGetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionGetterForGeneration * p = (const cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    result = p->mProperty_mAbstractExtensionGetterFormalParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalInputParameterListForGeneration cPtr_abstractExtensionGetterForGeneration::getter_mAbstractExtensionGetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionGetterFormalParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionGetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionGetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionGetterForGeneration::setter_setMAbstractExtensionGetterName (GALGAS_string inValue
                                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    p->mProperty_mAbstractExtensionGetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionGetterForGeneration::setter_setMAbstractExtensionGetterName (GALGAS_string inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionGetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionGetterForGeneration::setter_setMResultType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    p->mProperty_mResultType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionGetterForGeneration::setter_setMResultType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mResultType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionGetterForGeneration::setter_setMAbstractExtensionGetterFormalParameterList (GALGAS_formalInputParameterListForGeneration inValue
                                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    p->mProperty_mAbstractExtensionGetterFormalParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionGetterForGeneration::setter_setMAbstractExtensionGetterFormalParameterList (GALGAS_formalInputParameterListForGeneration inValue
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionGetterFormalParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @abstractExtensionGetterForGeneration class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractExtensionGetterForGeneration::cPtr_abstractExtensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                      const GALGAS_string & in_mAbstractExtensionGetterName,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                      const GALGAS_formalInputParameterListForGeneration & in_mAbstractExtensionGetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mAbstractExtensionGetterName (in_mAbstractExtensionGetterName),
mProperty_mResultType (in_mResultType),
mProperty_mAbstractExtensionGetterFormalParameterList (in_mAbstractExtensionGetterFormalParameterList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_abstractExtensionGetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ;
}

void cPtr_abstractExtensionGetterForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@abstractExtensionGetterForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionGetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_abstractExtensionGetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionGetterForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mAbstractExtensionGetterName, mProperty_mResultType, mProperty_mAbstractExtensionGetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @abstractExtensionGetterForGeneration type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ("abstractExtensionGetterForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractExtensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractExtensionGetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionGetterForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterForGeneration result ;
  const GALGAS_abstractExtensionGetterForGeneration * p = (const GALGAS_abstractExtensionGetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionGetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_abstractExtensionMethodAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionMethodAST * p = (const cPtr_abstractExtensionMethodAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionMethodName.objectCompare (p->mProperty_mAbstractExtensionMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionMethodFormalParameterList.objectCompare (p->mProperty_mAbstractExtensionMethodFormalParameterList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_abstractExtensionMethodAST::objectCompare (const GALGAS_abstractExtensionMethodAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionMethodAST::GALGAS_abstractExtensionMethodAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionMethodAST GALGAS_abstractExtensionMethodAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionMethodAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                             COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionMethodAST::GALGAS_abstractExtensionMethodAST (const cPtr_abstractExtensionMethodAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionMethodAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionMethodAST GALGAS_abstractExtensionMethodAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                                      const GALGAS_lstring & inAttribute_mAbstractExtensionMethodName,
                                                                                      const GALGAS_formalParameterListAST & inAttribute_mAbstractExtensionMethodFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mAbstractExtensionMethodName.isValid () && inAttribute_mAbstractExtensionMethodFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionMethodAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mAbstractExtensionMethodName, inAttribute_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_abstractExtensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionMethodAST * p = (const cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_abstractExtensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_abstractExtensionMethodAST::getter_mAbstractExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionMethodAST * p = (const cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    result = p->mProperty_mAbstractExtensionMethodName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_abstractExtensionMethodAST::getter_mAbstractExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListAST GALGAS_abstractExtensionMethodAST::getter_mAbstractExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionMethodAST * p = (const cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    result = p->mProperty_mAbstractExtensionMethodFormalParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListAST cPtr_abstractExtensionMethodAST::getter_mAbstractExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionMethodFormalParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionMethodAST::setter_setMTypeName (GALGAS_lstring inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionMethodAST::setter_setMTypeName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionMethodAST::setter_setMAbstractExtensionMethodName (GALGAS_lstring inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    p->mProperty_mAbstractExtensionMethodName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionMethodAST::setter_setMAbstractExtensionMethodName (GALGAS_lstring inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionMethodName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionMethodAST::setter_setMAbstractExtensionMethodFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    p->mProperty_mAbstractExtensionMethodFormalParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionMethodAST::setter_setMAbstractExtensionMethodFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionMethodFormalParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @abstractExtensionMethodAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractExtensionMethodAST::cPtr_abstractExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_lstring & in_mTypeName,
                                                                  const GALGAS_lstring & in_mAbstractExtensionMethodName,
                                                                  const GALGAS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mAbstractExtensionMethodName (in_mAbstractExtensionMethodName),
mProperty_mAbstractExtensionMethodFormalParameterList (in_mAbstractExtensionMethodFormalParameterList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_abstractExtensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;
}

void cPtr_abstractExtensionMethodAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@abstractExtensionMethodAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_abstractExtensionMethodAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionMethodAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionMethodName, mProperty_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @abstractExtensionMethodAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionMethodAST ("abstractExtensionMethodAST",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractExtensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractExtensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionMethodAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionMethodAST GALGAS_abstractExtensionMethodAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodAST result ;
  const GALGAS_abstractExtensionMethodAST * p = (const GALGAS_abstractExtensionMethodAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_abstractExtensionMethodForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionMethodForGeneration * p = (const cPtr_abstractExtensionMethodForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionMethodName.objectCompare (p->mProperty_mAbstractExtensionMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionMethodFormalParameterList.objectCompare (p->mProperty_mAbstractExtensionMethodFormalParameterList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_abstractExtensionMethodForGeneration::objectCompare (const GALGAS_abstractExtensionMethodForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionMethodForGeneration::GALGAS_abstractExtensionMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionMethodForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionMethodForGeneration::GALGAS_abstractExtensionMethodForGeneration (const cPtr_abstractExtensionMethodForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionMethodForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                          const GALGAS_string & inAttribute_mAbstractExtensionMethodName,
                                                                                                          const GALGAS_formalParameterListForGeneration & inAttribute_mAbstractExtensionMethodFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mAbstractExtensionMethodName.isValid () && inAttribute_mAbstractExtensionMethodFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionMethodForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mAbstractExtensionMethodName, inAttribute_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_abstractExtensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionMethodForGeneration * p = (const cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_abstractExtensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_abstractExtensionMethodForGeneration::getter_mAbstractExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionMethodForGeneration * p = (const cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    result = p->mProperty_mAbstractExtensionMethodName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_abstractExtensionMethodForGeneration::getter_mAbstractExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListForGeneration GALGAS_abstractExtensionMethodForGeneration::getter_mAbstractExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionMethodForGeneration * p = (const cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    result = p->mProperty_mAbstractExtensionMethodFormalParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListForGeneration cPtr_abstractExtensionMethodForGeneration::getter_mAbstractExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionMethodFormalParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionMethodForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionMethodForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionMethodForGeneration::setter_setMAbstractExtensionMethodName (GALGAS_string inValue
                                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    p->mProperty_mAbstractExtensionMethodName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionMethodForGeneration::setter_setMAbstractExtensionMethodName (GALGAS_string inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionMethodName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionMethodForGeneration::setter_setMAbstractExtensionMethodFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    p->mProperty_mAbstractExtensionMethodFormalParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionMethodForGeneration::setter_setMAbstractExtensionMethodFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionMethodFormalParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @abstractExtensionMethodForGeneration class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractExtensionMethodForGeneration::cPtr_abstractExtensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                      const GALGAS_string & in_mAbstractExtensionMethodName,
                                                                                      const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionMethodFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mAbstractExtensionMethodName (in_mAbstractExtensionMethodName),
mProperty_mAbstractExtensionMethodFormalParameterList (in_mAbstractExtensionMethodFormalParameterList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_abstractExtensionMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ;
}

void cPtr_abstractExtensionMethodForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@abstractExtensionMethodForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_abstractExtensionMethodForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionMethodForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mAbstractExtensionMethodName, mProperty_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @abstractExtensionMethodForGeneration type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ("abstractExtensionMethodForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractExtensionMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractExtensionMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionMethodForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration result ;
  const GALGAS_abstractExtensionMethodForGeneration * p = (const GALGAS_abstractExtensionMethodForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_abstractExtensionSetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionSetterAST * p = (const cPtr_abstractExtensionSetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionSetterName.objectCompare (p->mProperty_mAbstractExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionSetterFormalParameterList.objectCompare (p->mProperty_mAbstractExtensionSetterFormalParameterList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_abstractExtensionSetterAST::objectCompare (const GALGAS_abstractExtensionSetterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionSetterAST::GALGAS_abstractExtensionSetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionSetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                             COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionSetterAST::GALGAS_abstractExtensionSetterAST (const cPtr_abstractExtensionSetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionSetterAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                                      const GALGAS_lstring & inAttribute_mAbstractExtensionSetterName,
                                                                                      const GALGAS_formalParameterListAST & inAttribute_mAbstractExtensionSetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mAbstractExtensionSetterName.isValid () && inAttribute_mAbstractExtensionSetterFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionSetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mAbstractExtensionSetterName, inAttribute_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_abstractExtensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterAST * p = (const cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_abstractExtensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_abstractExtensionSetterAST::getter_mAbstractExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterAST * p = (const cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    result = p->mProperty_mAbstractExtensionSetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_abstractExtensionSetterAST::getter_mAbstractExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionSetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListAST GALGAS_abstractExtensionSetterAST::getter_mAbstractExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterAST * p = (const cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    result = p->mProperty_mAbstractExtensionSetterFormalParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListAST cPtr_abstractExtensionSetterAST::getter_mAbstractExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionSetterFormalParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionSetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionSetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionSetterAST::setter_setMAbstractExtensionSetterName (GALGAS_lstring inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    p->mProperty_mAbstractExtensionSetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionSetterAST::setter_setMAbstractExtensionSetterName (GALGAS_lstring inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionSetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionSetterAST::setter_setMAbstractExtensionSetterFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    p->mProperty_mAbstractExtensionSetterFormalParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionSetterAST::setter_setMAbstractExtensionSetterFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionSetterFormalParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @abstractExtensionSetterAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractExtensionSetterAST::cPtr_abstractExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_lstring & in_mTypeName,
                                                                  const GALGAS_lstring & in_mAbstractExtensionSetterName,
                                                                  const GALGAS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mAbstractExtensionSetterName (in_mAbstractExtensionSetterName),
mProperty_mAbstractExtensionSetterFormalParameterList (in_mAbstractExtensionSetterFormalParameterList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_abstractExtensionSetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;
}

void cPtr_abstractExtensionSetterAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@abstractExtensionSetterAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_abstractExtensionSetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionSetterAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionSetterName, mProperty_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @abstractExtensionSetterAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionSetterAST ("abstractExtensionSetterAST",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractExtensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterAST result ;
  const GALGAS_abstractExtensionSetterAST * p = (const GALGAS_abstractExtensionSetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_abstractExtensionSetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionSetterForGeneration * p = (const cPtr_abstractExtensionSetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionSetterName.objectCompare (p->mProperty_mAbstractExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionSetterFormalParameterList.objectCompare (p->mProperty_mAbstractExtensionSetterFormalParameterList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_abstractExtensionSetterForGeneration::objectCompare (const GALGAS_abstractExtensionSetterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionSetterForGeneration::GALGAS_abstractExtensionSetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionSetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionSetterForGeneration::GALGAS_abstractExtensionSetterForGeneration (const cPtr_abstractExtensionSetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionSetterForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                          const GALGAS_string & inAttribute_mAbstractExtensionSetterName,
                                                                                                          const GALGAS_formalParameterListForGeneration & inAttribute_mAbstractExtensionSetterFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mAbstractExtensionSetterName.isValid () && inAttribute_mAbstractExtensionSetterFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionSetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mAbstractExtensionSetterName, inAttribute_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_abstractExtensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterForGeneration * p = (const cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_abstractExtensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_abstractExtensionSetterForGeneration::getter_mAbstractExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterForGeneration * p = (const cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    result = p->mProperty_mAbstractExtensionSetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_abstractExtensionSetterForGeneration::getter_mAbstractExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionSetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListForGeneration GALGAS_abstractExtensionSetterForGeneration::getter_mAbstractExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractExtensionSetterForGeneration * p = (const cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    result = p->mProperty_mAbstractExtensionSetterFormalParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListForGeneration cPtr_abstractExtensionSetterForGeneration::getter_mAbstractExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAbstractExtensionSetterFormalParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionSetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionSetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionSetterForGeneration::setter_setMAbstractExtensionSetterName (GALGAS_string inValue
                                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    p->mProperty_mAbstractExtensionSetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionSetterForGeneration::setter_setMAbstractExtensionSetterName (GALGAS_string inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionSetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_abstractExtensionSetterForGeneration::setter_setMAbstractExtensionSetterFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    p->mProperty_mAbstractExtensionSetterFormalParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_abstractExtensionSetterForGeneration::setter_setMAbstractExtensionSetterFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAbstractExtensionSetterFormalParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @abstractExtensionSetterForGeneration class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractExtensionSetterForGeneration::cPtr_abstractExtensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                      const GALGAS_string & in_mAbstractExtensionSetterName,
                                                                                      const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionSetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mAbstractExtensionSetterName (in_mAbstractExtensionSetterName),
mProperty_mAbstractExtensionSetterFormalParameterList (in_mAbstractExtensionSetterFormalParameterList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_abstractExtensionSetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ;
}

void cPtr_abstractExtensionSetterForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@abstractExtensionSetterForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_abstractExtensionSetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionSetterForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mAbstractExtensionSetterName, mProperty_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @abstractExtensionSetterForGeneration type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ("abstractExtensionSetterForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractExtensionSetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration result ;
  const GALGAS_abstractExtensionSetterForGeneration * p = (const GALGAS_abstractExtensionSetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionSetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_extensionGetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionGetterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionGetterName.objectCompare (p->mProperty_mExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionGetterFormalInputParameterList.objectCompare (p->mProperty_mExtensionGetterFormalInputParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionGetterReturnedTypeName.objectCompare (p->mProperty_mExtensionGetterReturnedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionGetterReturnedVariableName.objectCompare (p->mProperty_mExtensionGetterReturnedVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionGetterInstructionList.objectCompare (p->mProperty_mExtensionGetterInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfReaderLocation.objectCompare (p->mProperty_mEndOfReaderLocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_extensionGetterAST::objectCompare (const GALGAS_extensionGetterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionGetterAST::GALGAS_extensionGetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionGetterAST GALGAS_extensionGetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionGetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionGetterAST::GALGAS_extensionGetterAST (const cPtr_extensionGetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionGetterAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionGetterAST GALGAS_extensionGetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionGetterName,
                                                                      const GALGAS_formalInputParameterListAST & inAttribute_mExtensionGetterFormalInputParameterList,
                                                                      const GALGAS_lstring & inAttribute_mExtensionGetterReturnedTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionGetterReturnedVariableName,
                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mExtensionGetterInstructionList,
                                                                      const GALGAS_location & inAttribute_mEndOfReaderLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mExtensionGetterName.isValid () && inAttribute_mExtensionGetterFormalInputParameterList.isValid () && inAttribute_mExtensionGetterReturnedTypeName.isValid () && inAttribute_mExtensionGetterReturnedVariableName.isValid () && inAttribute_mExtensionGetterInstructionList.isValid () && inAttribute_mEndOfReaderLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionGetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mExtensionGetterName, inAttribute_mExtensionGetterFormalInputParameterList, inAttribute_mExtensionGetterReturnedTypeName, inAttribute_mExtensionGetterReturnedVariableName, inAttribute_mExtensionGetterInstructionList, inAttribute_mEndOfReaderLocation COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_extensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_extensionGetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_extensionGetterAST::getter_mExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mProperty_mExtensionGetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_extensionGetterAST::getter_mExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionGetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalInputParameterListAST GALGAS_extensionGetterAST::getter_mExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mProperty_mExtensionGetterFormalInputParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalInputParameterListAST cPtr_extensionGetterAST::getter_mExtensionGetterFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionGetterFormalInputParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_extensionGetterAST::getter_mExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mProperty_mExtensionGetterReturnedTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_extensionGetterAST::getter_mExtensionGetterReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionGetterReturnedTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_extensionGetterAST::getter_mExtensionGetterReturnedVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mProperty_mExtensionGetterReturnedVariableName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_extensionGetterAST::getter_mExtensionGetterReturnedVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionGetterReturnedVariableName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_extensionGetterAST::getter_mExtensionGetterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mProperty_mExtensionGetterInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_extensionGetterAST::getter_mExtensionGetterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionGetterInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_extensionGetterAST::getter_mEndOfReaderLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    result = p->mProperty_mEndOfReaderLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_extensionGetterAST::getter_mEndOfReaderLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfReaderLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionGetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionGetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionGetterAST::setter_setMExtensionGetterName (GALGAS_lstring inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    p->mProperty_mExtensionGetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionGetterAST::setter_setMExtensionGetterName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionGetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionGetterAST::setter_setMExtensionGetterFormalInputParameterList (GALGAS_formalInputParameterListAST inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    p->mProperty_mExtensionGetterFormalInputParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionGetterAST::setter_setMExtensionGetterFormalInputParameterList (GALGAS_formalInputParameterListAST inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionGetterFormalInputParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionGetterAST::setter_setMExtensionGetterReturnedTypeName (GALGAS_lstring inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    p->mProperty_mExtensionGetterReturnedTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionGetterAST::setter_setMExtensionGetterReturnedTypeName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionGetterReturnedTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionGetterAST::setter_setMExtensionGetterReturnedVariableName (GALGAS_lstring inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    p->mProperty_mExtensionGetterReturnedVariableName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionGetterAST::setter_setMExtensionGetterReturnedVariableName (GALGAS_lstring inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionGetterReturnedVariableName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionGetterAST::setter_setMExtensionGetterInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    p->mProperty_mExtensionGetterInstructionList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionGetterAST::setter_setMExtensionGetterInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionGetterInstructionList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionGetterAST::setter_setMEndOfReaderLocation (GALGAS_location inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    p->mProperty_mEndOfReaderLocation = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionGetterAST::setter_setMEndOfReaderLocation (GALGAS_location inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfReaderLocation = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @extensionGetterAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_extensionGetterAST::cPtr_extensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_lstring & in_mExtensionGetterName,
                                                  const GALGAS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                                  const GALGAS_lstring & in_mExtensionGetterReturnedTypeName,
                                                  const GALGAS_lstring & in_mExtensionGetterReturnedVariableName,
                                                  const GALGAS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                                  const GALGAS_location & in_mEndOfReaderLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mExtensionGetterName (in_mExtensionGetterName),
mProperty_mExtensionGetterFormalInputParameterList (in_mExtensionGetterFormalInputParameterList),
mProperty_mExtensionGetterReturnedTypeName (in_mExtensionGetterReturnedTypeName),
mProperty_mExtensionGetterReturnedVariableName (in_mExtensionGetterReturnedVariableName),
mProperty_mExtensionGetterInstructionList (in_mExtensionGetterInstructionList),
mProperty_mEndOfReaderLocation (in_mEndOfReaderLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_extensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST ;
}

void cPtr_extensionGetterAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@extensionGetterAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionGetterReturnedVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionGetterInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfReaderLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_extensionGetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionGetterAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mExtensionGetterName, mProperty_mExtensionGetterFormalInputParameterList, mProperty_mExtensionGetterReturnedTypeName, mProperty_mExtensionGetterReturnedVariableName, mProperty_mExtensionGetterInstructionList, mProperty_mEndOfReaderLocation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @extensionGetterAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterAST ("extensionGetterAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_extensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_extensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionGetterAST GALGAS_extensionGetterAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterAST result ;
  const GALGAS_extensionGetterAST * p = (const GALGAS_extensionGetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_extensionGetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionGetterName.objectCompare (p->mProperty_mExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementedAsFunction.objectCompare (p->mProperty_mImplementedAsFunction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultVarCppName.objectCompare (p->mProperty_mResultVarCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionGetterFormalParameterList.objectCompare (p->mProperty_mExtensionGetterFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSemanticInstructionListForGeneration.objectCompare (p->mProperty_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_extensionGetterForGeneration::objectCompare (const GALGAS_extensionGetterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionGetterForGeneration::GALGAS_extensionGetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionGetterForGeneration GALGAS_extensionGetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                               GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                               GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionGetterForGeneration::GALGAS_extensionGetterForGeneration (const cPtr_extensionGetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionGetterForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionGetterForGeneration GALGAS_extensionGetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                          const GALGAS_string & inAttribute_mExtensionGetterName,
                                                                                          const GALGAS_bool & inAttribute_mImplementedAsFunction,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                          const GALGAS_string & inAttribute_mResultVarCppName,
                                                                                          const GALGAS_formalInputParameterListForGeneration & inAttribute_mExtensionGetterFormalParameterList,
                                                                                          const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mExtensionGetterName.isValid () && inAttribute_mImplementedAsFunction.isValid () && inAttribute_mResultType.isValid () && inAttribute_mResultVarCppName.isValid () && inAttribute_mExtensionGetterFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionGetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mExtensionGetterName, inAttribute_mImplementedAsFunction, inAttribute_mResultType, inAttribute_mResultVarCppName, inAttribute_mExtensionGetterFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_extensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_extensionGetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_extensionGetterForGeneration::getter_mExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mExtensionGetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_extensionGetterForGeneration::getter_mExtensionGetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionGetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_extensionGetterForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mImplementedAsFunction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_extensionGetterForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mImplementedAsFunction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_extensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_extensionGetterForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_extensionGetterForGeneration::getter_mResultVarCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mResultVarCppName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_extensionGetterForGeneration::getter_mResultVarCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultVarCppName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalInputParameterListForGeneration GALGAS_extensionGetterForGeneration::getter_mExtensionGetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mExtensionGetterFormalParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalInputParameterListForGeneration cPtr_extensionGetterForGeneration::getter_mExtensionGetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionGetterFormalParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList GALGAS_extensionGetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList cPtr_extensionGetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration GALGAS_extensionGetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    result = p->mProperty_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration cPtr_extensionGetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSemanticInstructionListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionGetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionGetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionGetterForGeneration::setter_setMExtensionGetterName (GALGAS_string inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mExtensionGetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionGetterForGeneration::setter_setMExtensionGetterName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionGetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionGetterForGeneration::setter_setMImplementedAsFunction (GALGAS_bool inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mImplementedAsFunction = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionGetterForGeneration::setter_setMImplementedAsFunction (GALGAS_bool inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mImplementedAsFunction = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionGetterForGeneration::setter_setMResultType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mResultType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionGetterForGeneration::setter_setMResultType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mResultType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionGetterForGeneration::setter_setMResultVarCppName (GALGAS_string inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mResultVarCppName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionGetterForGeneration::setter_setMResultVarCppName (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mResultVarCppName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionGetterForGeneration::setter_setMExtensionGetterFormalParameterList (GALGAS_formalInputParameterListForGeneration inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mExtensionGetterFormalParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionGetterForGeneration::setter_setMExtensionGetterFormalParameterList (GALGAS_formalInputParameterListForGeneration inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionGetterFormalParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionGetterForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionGetterForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionGetterForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    p->mProperty_mSemanticInstructionListForGeneration = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionGetterForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSemanticInstructionListForGeneration = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @extensionGetterForGeneration class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_extensionGetterForGeneration::cPtr_extensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                      const GALGAS_string & in_mExtensionGetterName,
                                                                      const GALGAS_bool & in_mImplementedAsFunction,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                      const GALGAS_string & in_mResultVarCppName,
                                                                      const GALGAS_formalInputParameterListForGeneration & in_mExtensionGetterFormalParameterList,
                                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                      const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mExtensionGetterName (in_mExtensionGetterName),
mProperty_mImplementedAsFunction (in_mImplementedAsFunction),
mProperty_mResultType (in_mResultType),
mProperty_mResultVarCppName (in_mResultVarCppName),
mProperty_mExtensionGetterFormalParameterList (in_mExtensionGetterFormalParameterList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_extensionGetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterForGeneration ;
}

void cPtr_extensionGetterForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@extensionGetterForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultVarCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionGetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_extensionGetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionGetterForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mExtensionGetterName, mProperty_mImplementedAsFunction, mProperty_mResultType, mProperty_mResultVarCppName, mProperty_mExtensionGetterFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @extensionGetterForGeneration type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterForGeneration ("extensionGetterForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_extensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_extensionGetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionGetterForGeneration GALGAS_extensionGetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterForGeneration result ;
  const GALGAS_extensionGetterForGeneration * p = (const GALGAS_extensionGetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_extensionMethodAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionMethodAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionMethodName.objectCompare (p->mProperty_mExtensionMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionMethodFormalParameterList.objectCompare (p->mProperty_mExtensionMethodFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionMethodInstructionList.objectCompare (p->mProperty_mExtensionMethodInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfMethodLocation.objectCompare (p->mProperty_mEndOfMethodLocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_extensionMethodAST::objectCompare (const GALGAS_extensionMethodAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionMethodAST::GALGAS_extensionMethodAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionMethodAST GALGAS_extensionMethodAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionMethodAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                     GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionMethodAST::GALGAS_extensionMethodAST (const cPtr_extensionMethodAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionMethodAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionMethodAST GALGAS_extensionMethodAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionMethodName,
                                                                      const GALGAS_formalParameterListAST & inAttribute_mExtensionMethodFormalParameterList,
                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mExtensionMethodInstructionList,
                                                                      const GALGAS_location & inAttribute_mEndOfMethodLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mExtensionMethodName.isValid () && inAttribute_mExtensionMethodFormalParameterList.isValid () && inAttribute_mExtensionMethodInstructionList.isValid () && inAttribute_mEndOfMethodLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionMethodAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mExtensionMethodName, inAttribute_mExtensionMethodFormalParameterList, inAttribute_mExtensionMethodInstructionList, inAttribute_mEndOfMethodLocation COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_extensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_extensionMethodAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_extensionMethodAST::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    result = p->mProperty_mExtensionMethodName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_extensionMethodAST::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListAST GALGAS_extensionMethodAST::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    result = p->mProperty_mExtensionMethodFormalParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListAST cPtr_extensionMethodAST::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionMethodFormalParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_extensionMethodAST::getter_mExtensionMethodInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    result = p->mProperty_mExtensionMethodInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_extensionMethodAST::getter_mExtensionMethodInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionMethodInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_extensionMethodAST::getter_mEndOfMethodLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    result = p->mProperty_mEndOfMethodLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_extensionMethodAST::getter_mEndOfMethodLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfMethodLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionMethodAST::setter_setMTypeName (GALGAS_lstring inValue
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionMethodAST::setter_setMTypeName (GALGAS_lstring inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionMethodAST::setter_setMExtensionMethodName (GALGAS_lstring inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    p->mProperty_mExtensionMethodName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionMethodAST::setter_setMExtensionMethodName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionMethodName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionMethodAST::setter_setMExtensionMethodFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    p->mProperty_mExtensionMethodFormalParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionMethodAST::setter_setMExtensionMethodFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionMethodFormalParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionMethodAST::setter_setMExtensionMethodInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    p->mProperty_mExtensionMethodInstructionList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionMethodAST::setter_setMExtensionMethodInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionMethodInstructionList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionMethodAST::setter_setMEndOfMethodLocation (GALGAS_location inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    p->mProperty_mEndOfMethodLocation = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionMethodAST::setter_setMEndOfMethodLocation (GALGAS_location inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfMethodLocation = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @extensionMethodAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_extensionMethodAST::cPtr_extensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_lstring & in_mExtensionMethodName,
                                                  const GALGAS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                                  const GALGAS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                                  const GALGAS_location & in_mEndOfMethodLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mExtensionMethodName (in_mExtensionMethodName),
mProperty_mExtensionMethodFormalParameterList (in_mExtensionMethodFormalParameterList),
mProperty_mExtensionMethodInstructionList (in_mExtensionMethodInstructionList),
mProperty_mEndOfMethodLocation (in_mEndOfMethodLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_extensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodAST ;
}

void cPtr_extensionMethodAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@extensionMethodAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionMethodInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfMethodLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_extensionMethodAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionMethodAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mExtensionMethodName, mProperty_mExtensionMethodFormalParameterList, mProperty_mExtensionMethodInstructionList, mProperty_mEndOfMethodLocation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @extensionMethodAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodAST ("extensionMethodAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_extensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_extensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionMethodAST GALGAS_extensionMethodAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodAST result ;
  const GALGAS_extensionMethodAST * p = (const GALGAS_extensionMethodAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_extensionMethodForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionMethodName.objectCompare (p->mProperty_mExtensionMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementedAsFunction.objectCompare (p->mProperty_mImplementedAsFunction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionMethodFormalParameterList.objectCompare (p->mProperty_mExtensionMethodFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSemanticInstructionListForGeneration.objectCompare (p->mProperty_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_extensionMethodForGeneration::objectCompare (const GALGAS_extensionMethodForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionMethodForGeneration::GALGAS_extensionMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionMethodForGeneration GALGAS_extensionMethodForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                               GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                               GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionMethodForGeneration::GALGAS_extensionMethodForGeneration (const cPtr_extensionMethodForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionMethodForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionMethodForGeneration GALGAS_extensionMethodForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                          const GALGAS_string & inAttribute_mExtensionMethodName,
                                                                                          const GALGAS_bool & inAttribute_mImplementedAsFunction,
                                                                                          const GALGAS_formalParameterListForGeneration & inAttribute_mExtensionMethodFormalParameterList,
                                                                                          const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mExtensionMethodName.isValid () && inAttribute_mImplementedAsFunction.isValid () && inAttribute_mExtensionMethodFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionMethodForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mExtensionMethodName, inAttribute_mImplementedAsFunction, inAttribute_mExtensionMethodFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_extensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_extensionMethodForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_extensionMethodForGeneration::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mProperty_mExtensionMethodName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_extensionMethodForGeneration::getter_mExtensionMethodName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionMethodName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_extensionMethodForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mProperty_mImplementedAsFunction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_extensionMethodForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mImplementedAsFunction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListForGeneration GALGAS_extensionMethodForGeneration::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mProperty_mExtensionMethodFormalParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListForGeneration cPtr_extensionMethodForGeneration::getter_mExtensionMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionMethodFormalParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList GALGAS_extensionMethodForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList cPtr_extensionMethodForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration GALGAS_extensionMethodForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionMethodForGeneration * p = (const cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    result = p->mProperty_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration cPtr_extensionMethodForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSemanticInstructionListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionMethodForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionMethodForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionMethodForGeneration::setter_setMExtensionMethodName (GALGAS_string inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    p->mProperty_mExtensionMethodName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionMethodForGeneration::setter_setMExtensionMethodName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionMethodName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionMethodForGeneration::setter_setMImplementedAsFunction (GALGAS_bool inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    p->mProperty_mImplementedAsFunction = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionMethodForGeneration::setter_setMImplementedAsFunction (GALGAS_bool inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mImplementedAsFunction = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionMethodForGeneration::setter_setMExtensionMethodFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    p->mProperty_mExtensionMethodFormalParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionMethodForGeneration::setter_setMExtensionMethodFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionMethodFormalParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionMethodForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionMethodForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionMethodForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    p->mProperty_mSemanticInstructionListForGeneration = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionMethodForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSemanticInstructionListForGeneration = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @extensionMethodForGeneration class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_extensionMethodForGeneration::cPtr_extensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                      const GALGAS_string & in_mExtensionMethodName,
                                                                      const GALGAS_bool & in_mImplementedAsFunction,
                                                                      const GALGAS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                      const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mExtensionMethodName (in_mExtensionMethodName),
mProperty_mImplementedAsFunction (in_mImplementedAsFunction),
mProperty_mExtensionMethodFormalParameterList (in_mExtensionMethodFormalParameterList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_extensionMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodForGeneration ;
}

void cPtr_extensionMethodForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@extensionMethodForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_extensionMethodForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionMethodForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mExtensionMethodName, mProperty_mImplementedAsFunction, mProperty_mExtensionMethodFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @extensionMethodForGeneration type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodForGeneration ("extensionMethodForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_extensionMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_extensionMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionMethodForGeneration GALGAS_extensionMethodForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodForGeneration result ;
  const GALGAS_extensionMethodForGeneration * p = (const GALGAS_extensionMethodForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_extensionSetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionSetterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionSetterName.objectCompare (p->mProperty_mExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionSetterFormalParameterList.objectCompare (p->mProperty_mExtensionSetterFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionSetterInstructionList.objectCompare (p->mProperty_mExtensionSetterInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSetterDeclarationLocation.objectCompare (p->mProperty_mEndOfSetterDeclarationLocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_extensionSetterAST::objectCompare (const GALGAS_extensionSetterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionSetterAST::GALGAS_extensionSetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionSetterAST GALGAS_extensionSetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionSetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                     GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionSetterAST::GALGAS_extensionSetterAST (const cPtr_extensionSetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionSetterAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionSetterAST GALGAS_extensionSetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionSetterName,
                                                                      const GALGAS_formalParameterListAST & inAttribute_mExtensionSetterFormalParameterList,
                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mExtensionSetterInstructionList,
                                                                      const GALGAS_location & inAttribute_mEndOfSetterDeclarationLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mExtensionSetterName.isValid () && inAttribute_mExtensionSetterFormalParameterList.isValid () && inAttribute_mExtensionSetterInstructionList.isValid () && inAttribute_mEndOfSetterDeclarationLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionSetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mExtensionSetterName, inAttribute_mExtensionSetterFormalParameterList, inAttribute_mExtensionSetterInstructionList, inAttribute_mEndOfSetterDeclarationLocation COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_extensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_extensionSetterAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_extensionSetterAST::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    result = p->mProperty_mExtensionSetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_extensionSetterAST::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionSetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListAST GALGAS_extensionSetterAST::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    result = p->mProperty_mExtensionSetterFormalParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListAST cPtr_extensionSetterAST::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionSetterFormalParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_extensionSetterAST::getter_mExtensionSetterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    result = p->mProperty_mExtensionSetterInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_extensionSetterAST::getter_mExtensionSetterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionSetterInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_extensionSetterAST::getter_mEndOfSetterDeclarationLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterAST * p = (const cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    result = p->mProperty_mEndOfSetterDeclarationLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_extensionSetterAST::getter_mEndOfSetterDeclarationLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfSetterDeclarationLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionSetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionSetterAST::setter_setMTypeName (GALGAS_lstring inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionSetterAST::setter_setMExtensionSetterName (GALGAS_lstring inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    p->mProperty_mExtensionSetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionSetterAST::setter_setMExtensionSetterName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionSetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionSetterAST::setter_setMExtensionSetterFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    p->mProperty_mExtensionSetterFormalParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionSetterAST::setter_setMExtensionSetterFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionSetterFormalParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionSetterAST::setter_setMExtensionSetterInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    p->mProperty_mExtensionSetterInstructionList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionSetterAST::setter_setMExtensionSetterInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionSetterInstructionList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionSetterAST::setter_setMEndOfSetterDeclarationLocation (GALGAS_location inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    p->mProperty_mEndOfSetterDeclarationLocation = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionSetterAST::setter_setMEndOfSetterDeclarationLocation (GALGAS_location inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfSetterDeclarationLocation = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @extensionSetterAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_extensionSetterAST::cPtr_extensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_lstring & in_mExtensionSetterName,
                                                  const GALGAS_formalParameterListAST & in_mExtensionSetterFormalParameterList,
                                                  const GALGAS_semanticInstructionListAST & in_mExtensionSetterInstructionList,
                                                  const GALGAS_location & in_mEndOfSetterDeclarationLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mExtensionSetterName (in_mExtensionSetterName),
mProperty_mExtensionSetterFormalParameterList (in_mExtensionSetterFormalParameterList),
mProperty_mExtensionSetterInstructionList (in_mExtensionSetterInstructionList),
mProperty_mEndOfSetterDeclarationLocation (in_mEndOfSetterDeclarationLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_extensionSetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterAST ;
}

void cPtr_extensionSetterAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@extensionSetterAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionSetterInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfSetterDeclarationLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_extensionSetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionSetterAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mExtensionSetterName, mProperty_mExtensionSetterFormalParameterList, mProperty_mExtensionSetterInstructionList, mProperty_mEndOfSetterDeclarationLocation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @extensionSetterAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterAST ("extensionSetterAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_extensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_extensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionSetterAST GALGAS_extensionSetterAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterAST result ;
  const GALGAS_extensionSetterAST * p = (const GALGAS_extensionSetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_extensionSetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionSetterName.objectCompare (p->mProperty_mExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementedAsFunction.objectCompare (p->mProperty_mImplementedAsFunction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionSetterFormalParameterList.objectCompare (p->mProperty_mExtensionSetterFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSemanticInstructionListForGeneration.objectCompare (p->mProperty_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_extensionSetterForGeneration::objectCompare (const GALGAS_extensionSetterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionSetterForGeneration::GALGAS_extensionSetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionSetterForGeneration GALGAS_extensionSetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionSetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                               GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                               GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionSetterForGeneration::GALGAS_extensionSetterForGeneration (const cPtr_extensionSetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionSetterForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionSetterForGeneration GALGAS_extensionSetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                          const GALGAS_string & inAttribute_mExtensionSetterName,
                                                                                          const GALGAS_bool & inAttribute_mImplementedAsFunction,
                                                                                          const GALGAS_formalParameterListForGeneration & inAttribute_mExtensionSetterFormalParameterList,
                                                                                          const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mExtensionSetterName.isValid () && inAttribute_mImplementedAsFunction.isValid () && inAttribute_mExtensionSetterFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionSetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mExtensionSetterName, inAttribute_mImplementedAsFunction, inAttribute_mExtensionSetterFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_extensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_extensionSetterForGeneration::getter_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_extensionSetterForGeneration::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mProperty_mExtensionSetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_extensionSetterForGeneration::getter_mExtensionSetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionSetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_extensionSetterForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mProperty_mImplementedAsFunction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_extensionSetterForGeneration::getter_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mImplementedAsFunction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListForGeneration GALGAS_extensionSetterForGeneration::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mProperty_mExtensionSetterFormalParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_formalParameterListForGeneration cPtr_extensionSetterForGeneration::getter_mExtensionSetterFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionSetterFormalParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList GALGAS_extensionSetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mProperty_mTypedAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedPropertyList cPtr_extensionSetterForGeneration::getter_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypedAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration GALGAS_extensionSetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extensionSetterForGeneration * p = (const cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    result = p->mProperty_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration cPtr_extensionSetterForGeneration::getter_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSemanticInstructionListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionSetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionSetterForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionSetterForGeneration::setter_setMExtensionSetterName (GALGAS_string inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    p->mProperty_mExtensionSetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionSetterForGeneration::setter_setMExtensionSetterName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionSetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionSetterForGeneration::setter_setMImplementedAsFunction (GALGAS_bool inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    p->mProperty_mImplementedAsFunction = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionSetterForGeneration::setter_setMImplementedAsFunction (GALGAS_bool inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mImplementedAsFunction = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionSetterForGeneration::setter_setMExtensionSetterFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    p->mProperty_mExtensionSetterFormalParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionSetterForGeneration::setter_setMExtensionSetterFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExtensionSetterFormalParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionSetterForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionSetterForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypedAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extensionSetterForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    p->mProperty_mSemanticInstructionListForGeneration = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extensionSetterForGeneration::setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSemanticInstructionListForGeneration = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @extensionSetterForGeneration class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_extensionSetterForGeneration::cPtr_extensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                      const GALGAS_string & in_mExtensionSetterName,
                                                                      const GALGAS_bool & in_mImplementedAsFunction,
                                                                      const GALGAS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                      const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mExtensionSetterName (in_mExtensionSetterName),
mProperty_mImplementedAsFunction (in_mImplementedAsFunction),
mProperty_mExtensionSetterFormalParameterList (in_mExtensionSetterFormalParameterList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_extensionSetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterForGeneration ;
}

void cPtr_extensionSetterForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@extensionSetterForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_extensionSetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionSetterForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mExtensionSetterName, mProperty_mImplementedAsFunction, mProperty_mExtensionSetterFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @extensionSetterForGeneration type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterForGeneration ("extensionSetterForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_extensionSetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_extensionSetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extensionSetterForGeneration GALGAS_extensionSetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterForGeneration result ;
  const GALGAS_extensionSetterForGeneration * p = (const GALGAS_extensionSetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

