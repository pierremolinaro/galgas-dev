#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_mTypeMap (),
mProperty_mRoutineMap (),
mProperty_mFunctionMap (),
mProperty_mFilewrapperMap (),
mProperty_mGrammarMap (),
mProperty_mOptionComponentMapForSemanticAnalysis (),
mProperty_mLexiqueComponentMapForSemanticAnalysis (),
mProperty_mSyntaxComponentMapForSemanticAnalysis () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_unifiedTypeMap & inOperand0,
                                                const GALGAS_routineMap & inOperand1,
                                                const GALGAS_functionMap & inOperand2,
                                                const GALGAS_filewrapperMap & inOperand3,
                                                const GALGAS_grammarMap & inOperand4,
                                                const GALGAS_optionComponentMapForSemanticAnalysis & inOperand5,
                                                const GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand6,
                                                const GALGAS_syntaxComponentMap & inOperand7) :
mProperty_mTypeMap (inOperand0),
mProperty_mRoutineMap (inOperand1),
mProperty_mFunctionMap (inOperand2),
mProperty_mFilewrapperMap (inOperand3),
mProperty_mGrammarMap (inOperand4),
mProperty_mOptionComponentMapForSemanticAnalysis (inOperand5),
mProperty_mLexiqueComponentMapForSemanticAnalysis (inOperand6),
mProperty_mSyntaxComponentMapForSemanticAnalysis (inOperand7) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
                                 GALGAS_routineMap::constructor_emptyMap (HERE),
                                 GALGAS_functionMap::constructor_emptyMap (HERE),
                                 GALGAS_filewrapperMap::constructor_emptyMap (HERE),
                                 GALGAS_grammarMap::constructor_emptyMap (HERE),
                                 GALGAS_optionComponentMapForSemanticAnalysis::constructor_emptyMap (HERE),
                                 GALGAS_lexiqueComponentMapForSemanticAnalysis::constructor_emptyMap (HERE),
                                 GALGAS_syntaxComponentMap::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_unifiedTypeMap & inOperand0,
                                                                const GALGAS_routineMap & inOperand1,
                                                                const GALGAS_functionMap & inOperand2,
                                                                const GALGAS_filewrapperMap & inOperand3,
                                                                const GALGAS_grammarMap & inOperand4,
                                                                const GALGAS_optionComponentMapForSemanticAnalysis & inOperand5,
                                                                const GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand6,
                                                                const GALGAS_syntaxComponentMap & inOperand7 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeMap.objectCompare (inOperand.mProperty_mTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineMap.objectCompare (inOperand.mProperty_mRoutineMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionMap.objectCompare (inOperand.mProperty_mFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperMap.objectCompare (inOperand.mProperty_mFilewrapperMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGrammarMap.objectCompare (inOperand.mProperty_mGrammarMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionComponentMapForSemanticAnalysis.objectCompare (inOperand.mProperty_mOptionComponentMapForSemanticAnalysis) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexiqueComponentMapForSemanticAnalysis.objectCompare (inOperand.mProperty_mLexiqueComponentMapForSemanticAnalysis) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxComponentMapForSemanticAnalysis.objectCompare (inOperand.mProperty_mSyntaxComponentMapForSemanticAnalysis) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mTypeMap.isValid () && mProperty_mRoutineMap.isValid () && mProperty_mFunctionMap.isValid () && mProperty_mFilewrapperMap.isValid () && mProperty_mGrammarMap.isValid () && mProperty_mOptionComponentMapForSemanticAnalysis.isValid () && mProperty_mLexiqueComponentMapForSemanticAnalysis.isValid () && mProperty_mSyntaxComponentMapForSemanticAnalysis.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::drop (void) {
  mProperty_mTypeMap.drop () ;
  mProperty_mRoutineMap.drop () ;
  mProperty_mFunctionMap.drop () ;
  mProperty_mFilewrapperMap.drop () ;
  mProperty_mGrammarMap.drop () ;
  mProperty_mOptionComponentMapForSemanticAnalysis.drop () ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis.drop () ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGrammarMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexiqueComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSyntaxComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateGetterCallInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateGetterCallInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateGetterCallInExpressionAST * p = (const cPtr_templateGetterCallInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGetterName.objectCompare (p->mProperty_mGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionLocation.objectCompare (p->mProperty_mExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateGetterCallInExpressionAST::objectCompare (const GALGAS_templateGetterCallInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST::GALGAS_templateGetterCallInExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST::GALGAS_templateGetterCallInExpressionAST (const cPtr_templateGetterCallInExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateGetterCallInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST GALGAS_templateGetterCallInExpressionAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mReceiverExpression,
                                                                                                    const GALGAS_lstring & inAttribute_mGetterName,
                                                                                                    const GALGAS_templateExpressionListAST & inAttribute_mExpressionList,
                                                                                                    const GALGAS_location & inAttribute_mExpressionLocation
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateGetterCallInExpressionAST result ;
  if (inAttribute_mReceiverExpression.isValid () && inAttribute_mGetterName.isValid () && inAttribute_mExpressionList.isValid () && inAttribute_mExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateGetterCallInExpressionAST (inAttribute_mReceiverExpression, inAttribute_mGetterName, inAttribute_mExpressionList, inAttribute_mExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateGetterCallInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateGetterCallInExpressionAST::readProperty_mGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateGetterCallInExpressionAST::readProperty_mExpressionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionListAST () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateGetterCallInExpressionAST::readProperty_mExpressionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateGetterCallInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateGetterCallInExpressionAST::cPtr_templateGetterCallInExpressionAST (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                                                                const GALGAS_lstring & in_mGetterName,
                                                                                const GALGAS_templateExpressionListAST & in_mExpressionList,
                                                                                const GALGAS_location & in_mExpressionLocation
                                                                                COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mGetterName (in_mGetterName),
mProperty_mExpressionList (in_mExpressionList),
mProperty_mExpressionLocation (in_mExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateGetterCallInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;
}

void cPtr_templateGetterCallInExpressionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@templateGetterCallInExpressionAST:" ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateGetterCallInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateGetterCallInExpressionAST (mProperty_mReceiverExpression, mProperty_mGetterName, mProperty_mExpressionList, mProperty_mExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateGetterCallInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ("templateGetterCallInExpressionAST",
                                                          & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateGetterCallInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateGetterCallInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateGetterCallInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST GALGAS_templateGetterCallInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateGetterCallInExpressionAST result ;
  const GALGAS_templateGetterCallInExpressionAST * p = (const GALGAS_templateGetterCallInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateGetterCallInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateGetterCallInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateInstructionForeachAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionForeachAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsAscending.objectCompare (p->mProperty_mIsAscending) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedObjectProperties.objectCompare (p->mProperty_mEnumeratedObjectProperties) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBeforeInstructionList.objectCompare (p->mProperty_mBeforeInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexIdentifier.objectCompare (p->mProperty_mIndexIdentifier) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBetweenInstructionList.objectCompare (p->mProperty_mBetweenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAfterInstructionList.objectCompare (p->mProperty_mAfterInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionForeachAST::objectCompare (const GALGAS_templateInstructionForeachAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST::GALGAS_templateInstructionForeachAST (void) :
GALGAS_templateInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST::GALGAS_templateInstructionForeachAST (const cPtr_templateInstructionForeachAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST GALGAS_templateInstructionForeachAST::constructor_new (const GALGAS_bool & inAttribute_mIsAscending,
                                                                                            const GALGAS_templateExpressionAST & inAttribute_mExpression,
                                                                                            const GALGAS_templateInstructionForEnumerationAST & inAttribute_mEnumeratedObjectProperties,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mBeforeInstructionList,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mDoInstructionList,
                                                                                            const GALGAS_lstring & inAttribute_mIndexIdentifier,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mBetweenInstructionList,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mAfterInstructionList
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachAST result ;
  if (inAttribute_mIsAscending.isValid () && inAttribute_mExpression.isValid () && inAttribute_mEnumeratedObjectProperties.isValid () && inAttribute_mBeforeInstructionList.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mIndexIdentifier.isValid () && inAttribute_mBetweenInstructionList.isValid () && inAttribute_mAfterInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionForeachAST (inAttribute_mIsAscending, inAttribute_mExpression, inAttribute_mEnumeratedObjectProperties, inAttribute_mBeforeInstructionList, inAttribute_mDoInstructionList, inAttribute_mIndexIdentifier, inAttribute_mBetweenInstructionList, inAttribute_mAfterInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_templateInstructionForeachAST::readProperty_mIsAscending (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mIsAscending ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateInstructionForeachAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForEnumerationAST GALGAS_templateInstructionForeachAST::readProperty_mEnumeratedObjectProperties (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionForEnumerationAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mEnumeratedObjectProperties ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::readProperty_mBeforeInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::readProperty_mDoInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateInstructionForeachAST::readProperty_mIndexIdentifier (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mIndexIdentifier ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::readProperty_mBetweenInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::readProperty_mAfterInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForeachAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachAST::cPtr_templateInstructionForeachAST (const GALGAS_bool & in_mIsAscending,
                                                                        const GALGAS_templateExpressionAST & in_mExpression,
                                                                        const GALGAS_templateInstructionForEnumerationAST & in_mEnumeratedObjectProperties,
                                                                        const GALGAS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                        const GALGAS_templateInstructionListAST & in_mDoInstructionList,
                                                                        const GALGAS_lstring & in_mIndexIdentifier,
                                                                        const GALGAS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                        const GALGAS_templateInstructionListAST & in_mAfterInstructionList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mProperty_mIsAscending (in_mIsAscending),
mProperty_mExpression (in_mExpression),
mProperty_mEnumeratedObjectProperties (in_mEnumeratedObjectProperties),
mProperty_mBeforeInstructionList (in_mBeforeInstructionList),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mIndexIdentifier (in_mIndexIdentifier),
mProperty_mBetweenInstructionList (in_mBetweenInstructionList),
mProperty_mAfterInstructionList (in_mAfterInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionForeachAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

void cPtr_templateInstructionForeachAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@templateInstructionForeachAST:" ;
  mProperty_mIsAscending.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratedObjectProperties.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexIdentifier.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionForeachAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionForeachAST (mProperty_mIsAscending, mProperty_mExpression, mProperty_mEnumeratedObjectProperties, mProperty_mBeforeInstructionList, mProperty_mDoInstructionList, mProperty_mIndexIdentifier, mProperty_mBetweenInstructionList, mProperty_mAfterInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionForeachAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionForeachAST ("templateInstructionForeachAST",
                                                      & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionForeachAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionForeachAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForeachAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST GALGAS_templateInstructionForeachAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachAST result ;
  const GALGAS_templateInstructionForeachAST * p = (const GALGAS_templateInstructionForeachAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionForeachAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateInstructionForeachForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionForeachForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsAscending.objectCompare (p->mProperty_mIsAscending) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratorCppName.objectCompare (p->mProperty_mEnumeratorCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBeforeInstructionList.objectCompare (p->mProperty_mBeforeInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexCppName.objectCompare (p->mProperty_mIndexCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBetweenInstructionList.objectCompare (p->mProperty_mBetweenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAfterInstructionList.objectCompare (p->mProperty_mAfterInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionForeachForGeneration::objectCompare (const GALGAS_templateInstructionForeachForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration::GALGAS_templateInstructionForeachForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration::GALGAS_templateInstructionForeachForGeneration (const cPtr_templateInstructionForeachForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration GALGAS_templateInstructionForeachForGeneration::constructor_new (const GALGAS_bool & inAttribute_mIsAscending,
                                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression,
                                                                                                                const GALGAS_string & inAttribute_mEnumeratorCppName,
                                                                                                                const GALGAS_templateInstructionListForGeneration & inAttribute_mBeforeInstructionList,
                                                                                                                const GALGAS_templateInstructionListForGeneration & inAttribute_mDoInstructionList,
                                                                                                                const GALGAS_string & inAttribute_mIndexCppName,
                                                                                                                const GALGAS_templateInstructionListForGeneration & inAttribute_mBetweenInstructionList,
                                                                                                                const GALGAS_templateInstructionListForGeneration & inAttribute_mAfterInstructionList
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachForGeneration result ;
  if (inAttribute_mIsAscending.isValid () && inAttribute_mExpression.isValid () && inAttribute_mEnumeratorCppName.isValid () && inAttribute_mBeforeInstructionList.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mIndexCppName.isValid () && inAttribute_mBetweenInstructionList.isValid () && inAttribute_mAfterInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionForeachForGeneration (inAttribute_mIsAscending, inAttribute_mExpression, inAttribute_mEnumeratorCppName, inAttribute_mBeforeInstructionList, inAttribute_mDoInstructionList, inAttribute_mIndexCppName, inAttribute_mBetweenInstructionList, inAttribute_mAfterInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_templateInstructionForeachForGeneration::readProperty_mIsAscending (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mIsAscending ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionForeachForGeneration::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateInstructionForeachForGeneration::readProperty_mEnumeratorCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mEnumeratorCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::readProperty_mBeforeInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::readProperty_mDoInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateInstructionForeachForGeneration::readProperty_mIndexCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mIndexCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::readProperty_mBetweenInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::readProperty_mAfterInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForeachForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachForGeneration::cPtr_templateInstructionForeachForGeneration (const GALGAS_bool & in_mIsAscending,
                                                                                            const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                            const GALGAS_string & in_mEnumeratorCppName,
                                                                                            const GALGAS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                                                            const GALGAS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                                                            const GALGAS_string & in_mIndexCppName,
                                                                                            const GALGAS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                                                            const GALGAS_templateInstructionListForGeneration & in_mAfterInstructionList
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mIsAscending (in_mIsAscending),
mProperty_mExpression (in_mExpression),
mProperty_mEnumeratorCppName (in_mEnumeratorCppName),
mProperty_mBeforeInstructionList (in_mBeforeInstructionList),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mIndexCppName (in_mIndexCppName),
mProperty_mBetweenInstructionList (in_mBetweenInstructionList),
mProperty_mAfterInstructionList (in_mAfterInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionForeachForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;
}

void cPtr_templateInstructionForeachForGeneration::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@templateInstructionForeachForGeneration:" ;
  mProperty_mIsAscending.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratorCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionForeachForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionForeachForGeneration (mProperty_mIsAscending, mProperty_mExpression, mProperty_mEnumeratorCppName, mProperty_mBeforeInstructionList, mProperty_mDoInstructionList, mProperty_mIndexCppName, mProperty_mBetweenInstructionList, mProperty_mAfterInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionForeachForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ("templateInstructionForeachForGeneration",
                                                                & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionForeachForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionForeachForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForeachForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration GALGAS_templateInstructionForeachForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachForGeneration result ;
  const GALGAS_templateInstructionForeachForGeneration * p = (const GALGAS_templateInstructionForeachForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionForeachForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateInstructionSwitchForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionSwitchForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionSwitchForGeneration * p = (const cPtr_templateInstructionSwitchForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumType.objectCompare (p->mProperty_mEnumType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwitchExpression.objectCompare (p->mProperty_mSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTemplateInstructionSwitchBranchList.objectCompare (p->mProperty_mTemplateInstructionSwitchBranchList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionSwitchForGeneration::objectCompare (const GALGAS_templateInstructionSwitchForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration::GALGAS_templateInstructionSwitchForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration::GALGAS_templateInstructionSwitchForGeneration (const cPtr_templateInstructionSwitchForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionSwitchForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration GALGAS_templateInstructionSwitchForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mEnumType,
                                                                                                              const GALGAS_semanticExpressionForGeneration & inAttribute_mSwitchExpression,
                                                                                                              const GALGAS_templateInstructionSwitchBranchListForGeneration & inAttribute_mTemplateInstructionSwitchBranchList
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchForGeneration result ;
  if (inAttribute_mEnumType.isValid () && inAttribute_mSwitchExpression.isValid () && inAttribute_mTemplateInstructionSwitchBranchList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionSwitchForGeneration (inAttribute_mEnumType, inAttribute_mSwitchExpression, inAttribute_mTemplateInstructionSwitchBranchList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_templateInstructionSwitchForGeneration::readProperty_mEnumType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_mEnumType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionSwitchForGeneration::readProperty_mSwitchExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchForGeneration::readProperty_mTemplateInstructionSwitchBranchList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionSwitchBranchListForGeneration () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_mTemplateInstructionSwitchBranchList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionSwitchForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchForGeneration::cPtr_templateInstructionSwitchForGeneration (const GALGAS_unifiedTypeMapEntry & in_mEnumType,
                                                                                          const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                                                          const GALGAS_templateInstructionSwitchBranchListForGeneration & in_mTemplateInstructionSwitchBranchList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mEnumType (in_mEnumType),
mProperty_mSwitchExpression (in_mSwitchExpression),
mProperty_mTemplateInstructionSwitchBranchList (in_mTemplateInstructionSwitchBranchList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionSwitchForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}

void cPtr_templateInstructionSwitchForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@templateInstructionSwitchForGeneration:" ;
  mProperty_mEnumType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTemplateInstructionSwitchBranchList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionSwitchForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionSwitchForGeneration (mProperty_mEnumType, mProperty_mSwitchExpression, mProperty_mTemplateInstructionSwitchBranchList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionSwitchForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ("templateInstructionSwitchForGeneration",
                                                               & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionSwitchForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration GALGAS_templateInstructionSwitchForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchForGeneration result ;
  const GALGAS_templateInstructionSwitchForGeneration * p = (const GALGAS_templateInstructionSwitchForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalImplicitRuleAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalImplicitRuleAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalImplicitRuleAST * p = (const cPtr_lexicalImplicitRuleAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalImplicitRuleAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mListName.objectCompare (p->mProperty_mListName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalImplicitRuleAST::objectCompare (const GALGAS_lexicalImplicitRuleAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST::GALGAS_lexicalImplicitRuleAST (void) :
GALGAS_abstractLexicalRuleAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalImplicitRuleAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST::GALGAS_lexicalImplicitRuleAST (const cPtr_lexicalImplicitRuleAST * inSourcePtr) :
GALGAS_abstractLexicalRuleAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalImplicitRuleAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST::constructor_new (const GALGAS_lstring & inAttribute_mListName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST result ;
  if (inAttribute_mListName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalImplicitRuleAST (inAttribute_mListName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalImplicitRuleAST::readProperty_mListName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalImplicitRuleAST * p = (cPtr_lexicalImplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalImplicitRuleAST) ;
    return p->mProperty_mListName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalImplicitRuleAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalImplicitRuleAST::cPtr_lexicalImplicitRuleAST (const GALGAS_lstring & in_mListName
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (THERE),
mProperty_mListName (in_mListName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalImplicitRuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

void cPtr_lexicalImplicitRuleAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalImplicitRuleAST:" ;
  mProperty_mListName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalImplicitRuleAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalImplicitRuleAST (mProperty_mListName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalImplicitRuleAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ("lexicalImplicitRuleAST",
                                               & kTypeDescriptor_GALGAS_abstractLexicalRuleAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalImplicitRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalImplicitRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalImplicitRuleAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST result ;
  const GALGAS_lexicalImplicitRuleAST * p = (const GALGAS_lexicalImplicitRuleAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalImplicitRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalImplicitRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalCharacterSetMatchAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalCharacterSetMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCharacterSetMatchAST * p = (const cPtr_lexicalCharacterSetMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCharacterSetMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCharacterSetName.objectCompare (p->mProperty_mCharacterSetName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalCharacterSetMatchAST::objectCompare (const GALGAS_lexicalCharacterSetMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST::GALGAS_lexicalCharacterSetMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCharacterSetMatchAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST::GALGAS_lexicalCharacterSetMatchAST (const cPtr_lexicalCharacterSetMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterSetMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST::constructor_new (const GALGAS_lstring & inAttribute_mCharacterSetName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST result ;
  if (inAttribute_mCharacterSetName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterSetMatchAST (inAttribute_mCharacterSetName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalCharacterSetMatchAST::readProperty_mCharacterSetName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalCharacterSetMatchAST * p = (cPtr_lexicalCharacterSetMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterSetMatchAST) ;
    return p->mProperty_mCharacterSetName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterSetMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterSetMatchAST::cPtr_lexicalCharacterSetMatchAST (const GALGAS_lstring & in_mCharacterSetName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mCharacterSetName (in_mCharacterSetName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterSetMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

void cPtr_lexicalCharacterSetMatchAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@lexicalCharacterSetMatchAST:" ;
  mProperty_mCharacterSetName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterSetMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCharacterSetMatchAST (mProperty_mCharacterSetName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterSetMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ("lexicalCharacterSetMatchAST",
                                                    & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterSetMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterSetMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterSetMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST result ;
  const GALGAS_lexicalCharacterSetMatchAST * p = (const GALGAS_lexicalCharacterSetMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterSetMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterSetMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalCharacterMatchAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalCharacterMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCharacterMatchAST * p = (const cPtr_lexicalCharacterMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCharacterMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCharacter.objectCompare (p->mProperty_mCharacter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalCharacterMatchAST::objectCompare (const GALGAS_lexicalCharacterMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST::GALGAS_lexicalCharacterMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCharacterMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST::GALGAS_lexicalCharacterMatchAST (const cPtr_lexicalCharacterMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mCharacter
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST result ;
  if (inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterMatchAST (inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterMatchAST::readProperty_mCharacter (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_lexicalCharacterMatchAST * p = (cPtr_lexicalCharacterMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterMatchAST) ;
    return p->mProperty_mCharacter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterMatchAST::cPtr_lexicalCharacterMatchAST (const GALGAS_lchar & in_mCharacter
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mCharacter (in_mCharacter) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;
}

void cPtr_lexicalCharacterMatchAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalCharacterMatchAST:" ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCharacterMatchAST (mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ("lexicalCharacterMatchAST",
                                                 & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST result ;
  const GALGAS_lexicalCharacterMatchAST * p = (const GALGAS_lexicalCharacterMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalCharacterIntervalMatchAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalCharacterIntervalMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCharacterIntervalMatchAST * p = (const cPtr_lexicalCharacterIntervalMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLowerBound.objectCompare (p->mProperty_mLowerBound) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBound.objectCompare (p->mProperty_mUpperBound) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalCharacterIntervalMatchAST::objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST::GALGAS_lexicalCharacterIntervalMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCharacterIntervalMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE),
                                                                   GALGAS_lchar::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST::GALGAS_lexicalCharacterIntervalMatchAST (const cPtr_lexicalCharacterIntervalMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterIntervalMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mLowerBound,
                                                                                                  const GALGAS_lchar & inAttribute_mUpperBound
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST result ;
  if (inAttribute_mLowerBound.isValid () && inAttribute_mUpperBound.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterIntervalMatchAST (inAttribute_mLowerBound, inAttribute_mUpperBound COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterIntervalMatchAST::readProperty_mLowerBound (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_lexicalCharacterIntervalMatchAST * p = (cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    return p->mProperty_mLowerBound ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterIntervalMatchAST::readProperty_mUpperBound (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_lexicalCharacterIntervalMatchAST * p = (cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    return p->mProperty_mUpperBound ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterIntervalMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterIntervalMatchAST::cPtr_lexicalCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                                              const GALGAS_lchar & in_mUpperBound
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mLowerBound (in_mLowerBound),
mProperty_mUpperBound (in_mUpperBound) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterIntervalMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;
}

void cPtr_lexicalCharacterIntervalMatchAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@lexicalCharacterIntervalMatchAST:" ;
  mProperty_mLowerBound.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperBound.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterIntervalMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCharacterIntervalMatchAST (mProperty_mLowerBound, mProperty_mUpperBound COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterIntervalMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ("lexicalCharacterIntervalMatchAST",
                                                         & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterIntervalMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterIntervalMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterIntervalMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST result ;
  const GALGAS_lexicalCharacterIntervalMatchAST * p = (const GALGAS_lexicalCharacterIntervalMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterIntervalMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterIntervalMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalStringMatchAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalStringMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalStringMatchAST * p = (const cPtr_lexicalStringMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalStringMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mString.objectCompare (p->mProperty_mString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalStringMatchAST::objectCompare (const GALGAS_lexicalStringMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST::GALGAS_lexicalStringMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalStringMatchAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST::GALGAS_lexicalStringMatchAST (const cPtr_lexicalStringMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST::constructor_new (const GALGAS_lstring & inAttribute_mString
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST result ;
  if (inAttribute_mString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalStringMatchAST (inAttribute_mString COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStringMatchAST::readProperty_mString (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalStringMatchAST * p = (cPtr_lexicalStringMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringMatchAST) ;
    return p->mProperty_mString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStringMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalStringMatchAST::cPtr_lexicalStringMatchAST (const GALGAS_lstring & in_mString
                                                        COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mString (in_mString) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalStringMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

void cPtr_lexicalStringMatchAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@lexicalStringMatchAST:" ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalStringMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalStringMatchAST (mProperty_mString COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalStringMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStringMatchAST ("lexicalStringMatchAST",
                                              & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStringMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStringMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST result ;
  const GALGAS_lexicalStringMatchAST * p = (const GALGAS_lexicalStringMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStringMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalStringNotMatchAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalStringNotMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalStringNotMatchAST * p = (const cPtr_lexicalStringNotMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mString.objectCompare (p->mProperty_mString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorMessage.objectCompare (p->mProperty_mErrorMessage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalStringNotMatchAST::objectCompare (const GALGAS_lexicalStringNotMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST::GALGAS_lexicalStringNotMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalStringNotMatchAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST::GALGAS_lexicalStringNotMatchAST (const cPtr_lexicalStringNotMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringNotMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST::constructor_new (const GALGAS_lstring & inAttribute_mString,
                                                                                  const GALGAS_lstring & inAttribute_mErrorMessage
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST result ;
  if (inAttribute_mString.isValid () && inAttribute_mErrorMessage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalStringNotMatchAST (inAttribute_mString, inAttribute_mErrorMessage COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStringNotMatchAST::readProperty_mString (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    return p->mProperty_mString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStringNotMatchAST::readProperty_mErrorMessage (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    return p->mProperty_mErrorMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStringNotMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalStringNotMatchAST::cPtr_lexicalStringNotMatchAST (const GALGAS_lstring & in_mString,
                                                              const GALGAS_lstring & in_mErrorMessage
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mString (in_mString),
mProperty_mErrorMessage (in_mErrorMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalStringNotMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

void cPtr_lexicalStringNotMatchAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalStringNotMatchAST:" ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalStringNotMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalStringNotMatchAST (mProperty_mString, mProperty_mErrorMessage COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalStringNotMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ("lexicalStringNotMatchAST",
                                                 & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStringNotMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStringNotMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringNotMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST result ;
  const GALGAS_lexicalStringNotMatchAST * p = (const GALGAS_lexicalStringNotMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStringNotMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringNotMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalSimpleSendInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalSimpleSendInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalSimpleSendInstructionAST * p = (const cPtr_lexicalSimpleSendInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalSimpleSendInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mSentTerminal.objectCompare (p->mProperty_mSentTerminal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalSimpleSendInstructionAST::objectCompare (const GALGAS_lexicalSimpleSendInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST::GALGAS_lexicalSimpleSendInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalSimpleSendInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST::GALGAS_lexicalSimpleSendInstructionAST (const cPtr_lexicalSimpleSendInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSimpleSendInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mSentTerminal
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST result ;
  if (inAttribute_mSentTerminal.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalSimpleSendInstructionAST (inAttribute_mSentTerminal COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSimpleSendInstructionAST::readProperty_mSentTerminal (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalSimpleSendInstructionAST * p = (cPtr_lexicalSimpleSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSimpleSendInstructionAST) ;
    return p->mProperty_mSentTerminal ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSimpleSendInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalSimpleSendInstructionAST::cPtr_lexicalSimpleSendInstructionAST (const GALGAS_lstring & in_mSentTerminal
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mSentTerminal (in_mSentTerminal) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalSimpleSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;
}

void cPtr_lexicalSimpleSendInstructionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@lexicalSimpleSendInstructionAST:" ;
  mProperty_mSentTerminal.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalSimpleSendInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalSimpleSendInstructionAST (mProperty_mSentTerminal COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSimpleSendInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ("lexicalSimpleSendInstructionAST",
                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSimpleSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSimpleSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSimpleSendInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST result ;
  const GALGAS_lexicalSimpleSendInstructionAST * p = (const GALGAS_lexicalSimpleSendInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSimpleSendInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSimpleSendInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalSendTerminalByDefaultAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalSendTerminalByDefaultAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalSendTerminalByDefaultAST * p = (const cPtr_lexicalSendTerminalByDefaultAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalSendTerminalByDefaultAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mDefaultSentTerminal.objectCompare (p->mProperty_mDefaultSentTerminal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalSendTerminalByDefaultAST::objectCompare (const GALGAS_lexicalSendTerminalByDefaultAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST::GALGAS_lexicalSendTerminalByDefaultAST (void) :
GALGAS_lexicalSendDefaultActionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST GALGAS_lexicalSendTerminalByDefaultAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalSendTerminalByDefaultAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST::GALGAS_lexicalSendTerminalByDefaultAST (const cPtr_lexicalSendTerminalByDefaultAST * inSourcePtr) :
GALGAS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSendTerminalByDefaultAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST GALGAS_lexicalSendTerminalByDefaultAST::constructor_new (const GALGAS_lstring & inAttribute_mDefaultSentTerminal
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendTerminalByDefaultAST result ;
  if (inAttribute_mDefaultSentTerminal.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalSendTerminalByDefaultAST (inAttribute_mDefaultSentTerminal COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSendTerminalByDefaultAST::readProperty_mDefaultSentTerminal (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalSendTerminalByDefaultAST * p = (cPtr_lexicalSendTerminalByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSendTerminalByDefaultAST) ;
    return p->mProperty_mDefaultSentTerminal ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSendTerminalByDefaultAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalSendTerminalByDefaultAST::cPtr_lexicalSendTerminalByDefaultAST (const GALGAS_lstring & in_mDefaultSentTerminal
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (THERE),
mProperty_mDefaultSentTerminal (in_mDefaultSentTerminal) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalSendTerminalByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

void cPtr_lexicalSendTerminalByDefaultAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@lexicalSendTerminalByDefaultAST:" ;
  mProperty_mDefaultSentTerminal.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalSendTerminalByDefaultAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalSendTerminalByDefaultAST (mProperty_mDefaultSentTerminal COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSendTerminalByDefaultAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ("lexicalSendTerminalByDefaultAST",
                                                        & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSendTerminalByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSendTerminalByDefaultAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendTerminalByDefaultAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST GALGAS_lexicalSendTerminalByDefaultAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendTerminalByDefaultAST result ;
  const GALGAS_lexicalSendTerminalByDefaultAST * p = (const GALGAS_lexicalSendTerminalByDefaultAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSendTerminalByDefaultAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendTerminalByDefaultAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalErrorByDefaultAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalErrorByDefaultAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalErrorByDefaultAST * p = (const cPtr_lexicalErrorByDefaultAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalErrorByDefaultAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mDefaultErrorMessageName.objectCompare (p->mProperty_mDefaultErrorMessageName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalErrorByDefaultAST::objectCompare (const GALGAS_lexicalErrorByDefaultAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST::GALGAS_lexicalErrorByDefaultAST (void) :
GALGAS_lexicalSendDefaultActionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST GALGAS_lexicalErrorByDefaultAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalErrorByDefaultAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST::GALGAS_lexicalErrorByDefaultAST (const cPtr_lexicalErrorByDefaultAST * inSourcePtr) :
GALGAS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalErrorByDefaultAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST GALGAS_lexicalErrorByDefaultAST::constructor_new (const GALGAS_lstring & inAttribute_mDefaultErrorMessageName
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorByDefaultAST result ;
  if (inAttribute_mDefaultErrorMessageName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalErrorByDefaultAST (inAttribute_mDefaultErrorMessageName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalErrorByDefaultAST::readProperty_mDefaultErrorMessageName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalErrorByDefaultAST * p = (cPtr_lexicalErrorByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorByDefaultAST) ;
    return p->mProperty_mDefaultErrorMessageName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalErrorByDefaultAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalErrorByDefaultAST::cPtr_lexicalErrorByDefaultAST (const GALGAS_lstring & in_mDefaultErrorMessageName
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (THERE),
mProperty_mDefaultErrorMessageName (in_mDefaultErrorMessageName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalErrorByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

void cPtr_lexicalErrorByDefaultAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalErrorByDefaultAST:" ;
  mProperty_mDefaultErrorMessageName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalErrorByDefaultAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalErrorByDefaultAST (mProperty_mDefaultErrorMessageName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalErrorByDefaultAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ("lexicalErrorByDefaultAST",
                                                 & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalErrorByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalErrorByDefaultAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalErrorByDefaultAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST GALGAS_lexicalErrorByDefaultAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorByDefaultAST result ;
  const GALGAS_lexicalErrorByDefaultAST * p = (const GALGAS_lexicalErrorByDefaultAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalErrorByDefaultAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorByDefaultAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalRoutineInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalRoutineInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalRoutineInstructionAST * p = (const cPtr_lexicalRoutineInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualArgumentList.objectCompare (p->mProperty_mActualArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorMessageList.objectCompare (p->mProperty_mErrorMessageList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalRoutineInstructionAST::objectCompare (const GALGAS_lexicalRoutineInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST::GALGAS_lexicalRoutineInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST GALGAS_lexicalRoutineInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalRoutineInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (HERE),
                                                               GALGAS_lstringlist::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST::GALGAS_lexicalRoutineInstructionAST (const cPtr_lexicalRoutineInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRoutineInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST GALGAS_lexicalRoutineInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                          const GALGAS_lexicalRoutineCallActualArgumentListAST & inAttribute_mActualArgumentList,
                                                                                          const GALGAS_lstringlist & inAttribute_mErrorMessageList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineInstructionAST result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mActualArgumentList.isValid () && inAttribute_mErrorMessageList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalRoutineInstructionAST (inAttribute_mRoutineName, inAttribute_mActualArgumentList, inAttribute_mErrorMessageList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalRoutineInstructionAST::readProperty_mRoutineName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalRoutineInstructionAST * p = (cPtr_lexicalRoutineInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
    return p->mProperty_mRoutineName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineInstructionAST::readProperty_mActualArgumentList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lexicalRoutineCallActualArgumentListAST () ;
  }else{
    cPtr_lexicalRoutineInstructionAST * p = (cPtr_lexicalRoutineInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
    return p->mProperty_mActualArgumentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_lexicalRoutineInstructionAST::readProperty_mErrorMessageList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_lexicalRoutineInstructionAST * p = (cPtr_lexicalRoutineInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
    return p->mProperty_mErrorMessageList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRoutineInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalRoutineInstructionAST::cPtr_lexicalRoutineInstructionAST (const GALGAS_lstring & in_mRoutineName,
                                                                      const GALGAS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                                                                      const GALGAS_lstringlist & in_mErrorMessageList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mActualArgumentList (in_mActualArgumentList),
mProperty_mErrorMessageList (in_mErrorMessageList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalRoutineInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST ;
}

void cPtr_lexicalRoutineInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@lexicalRoutineInstructionAST:" ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mErrorMessageList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalRoutineInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalRoutineInstructionAST (mProperty_mRoutineName, mProperty_mActualArgumentList, mProperty_mErrorMessageList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRoutineInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST ("lexicalRoutineInstructionAST",
                                                     & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineInstructionAST GALGAS_lexicalRoutineInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineInstructionAST result ;
  const GALGAS_lexicalRoutineInstructionAST * p = (const GALGAS_lexicalRoutineInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalAttributeInputOutputArgumentAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalAttributeInputOutputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalAttributeInputOutputArgumentAST * p = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualPassingModeLocation.objectCompare (p->mProperty_mActualPassingModeLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeName.objectCompare (p->mProperty_mAttributeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalAttributeInputOutputArgumentAST::objectCompare (const GALGAS_lexicalAttributeInputOutputArgumentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST::GALGAS_lexicalAttributeInputOutputArgumentAST (void) :
GALGAS_abstractLexicalRoutineActualArgumentAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                         GALGAS_lstring::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST::GALGAS_lexicalAttributeInputOutputArgumentAST (const cPtr_lexicalAttributeInputOutputArgumentAST * inSourcePtr) :
GALGAS_abstractLexicalRoutineActualArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_new (const GALGAS_location & inAttribute_mActualPassingModeLocation,
                                                                                                              const GALGAS_lstring & inAttribute_mAttributeName
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST result ;
  if (inAttribute_mActualPassingModeLocation.isValid () && inAttribute_mAttributeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalAttributeInputOutputArgumentAST (inAttribute_mActualPassingModeLocation, inAttribute_mAttributeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalAttributeInputOutputArgumentAST::readProperty_mAttributeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalAttributeInputOutputArgumentAST * p = (cPtr_lexicalAttributeInputOutputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputOutputArgumentAST) ;
    return p->mProperty_mAttributeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalAttributeInputOutputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputOutputArgumentAST::cPtr_lexicalAttributeInputOutputArgumentAST (const GALGAS_location & in_mActualPassingModeLocation,
                                                                                          const GALGAS_lstring & in_mAttributeName
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (in_mActualPassingModeLocation COMMA_THERE),
mProperty_mAttributeName (in_mAttributeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalAttributeInputOutputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

void cPtr_lexicalAttributeInputOutputArgumentAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@lexicalAttributeInputOutputArgumentAST:" ;
  mProperty_mActualPassingModeLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalAttributeInputOutputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputOutputArgumentAST (mProperty_mActualPassingModeLocation, mProperty_mAttributeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalAttributeInputOutputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ("lexicalAttributeInputOutputArgumentAST",
                                                               & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeInputOutputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeInputOutputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeInputOutputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST result ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST * p = (const GALGAS_lexicalAttributeInputOutputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeInputOutputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputOutputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalAttributeInputArgumentAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalAttributeInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalAttributeInputArgumentAST * p = (const cPtr_lexicalAttributeInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalAttributeInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mAttributeName.objectCompare (p->mProperty_mAttributeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalAttributeInputArgumentAST::objectCompare (const GALGAS_lexicalAttributeInputArgumentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST::GALGAS_lexicalAttributeInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST GALGAS_lexicalAttributeInputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalAttributeInputArgumentAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST::GALGAS_lexicalAttributeInputArgumentAST (const cPtr_lexicalAttributeInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputArgumentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST GALGAS_lexicalAttributeInputArgumentAST::constructor_new (const GALGAS_lstring & inAttribute_mAttributeName
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputArgumentAST result ;
  if (inAttribute_mAttributeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalAttributeInputArgumentAST (inAttribute_mAttributeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalAttributeInputArgumentAST::readProperty_mAttributeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalAttributeInputArgumentAST * p = (cPtr_lexicalAttributeInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputArgumentAST) ;
    return p->mProperty_mAttributeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalAttributeInputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputArgumentAST::cPtr_lexicalAttributeInputArgumentAST (const GALGAS_lstring & in_mAttributeName
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mAttributeName (in_mAttributeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalAttributeInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

void cPtr_lexicalAttributeInputArgumentAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@lexicalAttributeInputArgumentAST:" ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalAttributeInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputArgumentAST (mProperty_mAttributeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalAttributeInputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ("lexicalAttributeInputArgumentAST",
                                                         & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeInputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST GALGAS_lexicalAttributeInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputArgumentAST result ;
  const GALGAS_lexicalAttributeInputArgumentAST * p = (const GALGAS_lexicalAttributeInputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalCharacterInputArgumentAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalCharacterInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCharacterInputArgumentAST * p = (const cPtr_lexicalCharacterInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCharacterInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCharacter.objectCompare (p->mProperty_mCharacter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalCharacterInputArgumentAST::objectCompare (const GALGAS_lexicalCharacterInputArgumentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST::GALGAS_lexicalCharacterInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST GALGAS_lexicalCharacterInputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCharacterInputArgumentAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST::GALGAS_lexicalCharacterInputArgumentAST (const cPtr_lexicalCharacterInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterInputArgumentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST GALGAS_lexicalCharacterInputArgumentAST::constructor_new (const GALGAS_lchar & inAttribute_mCharacter
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterInputArgumentAST result ;
  if (inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterInputArgumentAST (inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterInputArgumentAST::readProperty_mCharacter (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_lexicalCharacterInputArgumentAST * p = (cPtr_lexicalCharacterInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterInputArgumentAST) ;
    return p->mProperty_mCharacter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterInputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterInputArgumentAST::cPtr_lexicalCharacterInputArgumentAST (const GALGAS_lchar & in_mCharacter
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mCharacter (in_mCharacter) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;
}

void cPtr_lexicalCharacterInputArgumentAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@lexicalCharacterInputArgumentAST:" ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCharacterInputArgumentAST (mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCharacterInputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ("lexicalCharacterInputArgumentAST",
                                                         & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterInputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST GALGAS_lexicalCharacterInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterInputArgumentAST result ;
  const GALGAS_lexicalCharacterInputArgumentAST * p = (const GALGAS_lexicalCharacterInputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalUnsignedInputArgumentAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalUnsignedInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalUnsignedInputArgumentAST * p = (const cPtr_lexicalUnsignedInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalUnsignedInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mUnsigned.objectCompare (p->mProperty_mUnsigned) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalUnsignedInputArgumentAST::objectCompare (const GALGAS_lexicalUnsignedInputArgumentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST::GALGAS_lexicalUnsignedInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST GALGAS_lexicalUnsignedInputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalUnsignedInputArgumentAST::constructor_new (GALGAS_lbigint::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST::GALGAS_lexicalUnsignedInputArgumentAST (const cPtr_lexicalUnsignedInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalUnsignedInputArgumentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST GALGAS_lexicalUnsignedInputArgumentAST::constructor_new (const GALGAS_lbigint & inAttribute_mUnsigned
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalUnsignedInputArgumentAST result ;
  if (inAttribute_mUnsigned.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalUnsignedInputArgumentAST (inAttribute_mUnsigned COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_lexicalUnsignedInputArgumentAST::readProperty_mUnsigned (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_lexicalUnsignedInputArgumentAST * p = (cPtr_lexicalUnsignedInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalUnsignedInputArgumentAST) ;
    return p->mProperty_mUnsigned ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalUnsignedInputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalUnsignedInputArgumentAST::cPtr_lexicalUnsignedInputArgumentAST (const GALGAS_lbigint & in_mUnsigned
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mUnsigned (in_mUnsigned) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalUnsignedInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;
}

void cPtr_lexicalUnsignedInputArgumentAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@lexicalUnsignedInputArgumentAST:" ;
  mProperty_mUnsigned.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalUnsignedInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalUnsignedInputArgumentAST (mProperty_mUnsigned COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalUnsignedInputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ("lexicalUnsignedInputArgumentAST",
                                                        & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalUnsignedInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalUnsignedInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalUnsignedInputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST GALGAS_lexicalUnsignedInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalUnsignedInputArgumentAST result ;
  const GALGAS_lexicalUnsignedInputArgumentAST * p = (const GALGAS_lexicalUnsignedInputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalUnsignedInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalUnsignedInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalFunctionInputArgumentAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalFunctionInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFunctionInputArgumentAST * p = (const cPtr_lexicalFunctionInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFunctionInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionActualArgumentList.objectCompare (p->mProperty_mFunctionActualArgumentList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalFunctionInputArgumentAST::objectCompare (const GALGAS_lexicalFunctionInputArgumentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST::GALGAS_lexicalFunctionInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST GALGAS_lexicalFunctionInputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalFunctionInputArgumentAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST::GALGAS_lexicalFunctionInputArgumentAST (const cPtr_lexicalFunctionInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionInputArgumentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST GALGAS_lexicalFunctionInputArgumentAST::constructor_new (const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                                const GALGAS_lexicalFunctionCallActualArgumentListAST & inAttribute_mFunctionActualArgumentList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionInputArgumentAST result ;
  if (inAttribute_mFunctionName.isValid () && inAttribute_mFunctionActualArgumentList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionInputArgumentAST (inAttribute_mFunctionName, inAttribute_mFunctionActualArgumentList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalFunctionInputArgumentAST::readProperty_mFunctionName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalFunctionInputArgumentAST * p = (cPtr_lexicalFunctionInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionInputArgumentAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionInputArgumentAST::readProperty_mFunctionActualArgumentList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lexicalFunctionCallActualArgumentListAST () ;
  }else{
    cPtr_lexicalFunctionInputArgumentAST * p = (cPtr_lexicalFunctionInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionInputArgumentAST) ;
    return p->mProperty_mFunctionActualArgumentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionInputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionInputArgumentAST::cPtr_lexicalFunctionInputArgumentAST (const GALGAS_lstring & in_mFunctionName,
                                                                            const GALGAS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mFunctionActualArgumentList (in_mFunctionActualArgumentList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalFunctionInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;
}

void cPtr_lexicalFunctionInputArgumentAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@lexicalFunctionInputArgumentAST:" ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionActualArgumentList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFunctionInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFunctionInputArgumentAST (mProperty_mFunctionName, mProperty_mFunctionActualArgumentList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionInputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ("lexicalFunctionInputArgumentAST",
                                                        & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionInputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST GALGAS_lexicalFunctionInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionInputArgumentAST result ;
  const GALGAS_lexicalFunctionInputArgumentAST * p = (const GALGAS_lexicalFunctionInputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalDropInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalDropInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalDropInstructionAST * p = (const cPtr_lexicalDropInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalDropInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTerminalName.objectCompare (p->mProperty_mTerminalName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalDropInstructionAST::objectCompare (const GALGAS_lexicalDropInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST::GALGAS_lexicalDropInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST GALGAS_lexicalDropInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalDropInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST::GALGAS_lexicalDropInstructionAST (const cPtr_lexicalDropInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalDropInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST GALGAS_lexicalDropInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mTerminalName
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalDropInstructionAST result ;
  if (inAttribute_mTerminalName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalDropInstructionAST (inAttribute_mTerminalName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalDropInstructionAST::readProperty_mTerminalName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalDropInstructionAST * p = (cPtr_lexicalDropInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalDropInstructionAST) ;
    return p->mProperty_mTerminalName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalDropInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalDropInstructionAST::cPtr_lexicalDropInstructionAST (const GALGAS_lstring & in_mTerminalName
                                                                COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mTerminalName (in_mTerminalName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalDropInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;
}

void cPtr_lexicalDropInstructionAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@lexicalDropInstructionAST:" ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalDropInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalDropInstructionAST (mProperty_mTerminalName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalDropInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalDropInstructionAST ("lexicalDropInstructionAST",
                                                  & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalDropInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalDropInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalDropInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST GALGAS_lexicalDropInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalDropInstructionAST result ;
  const GALGAS_lexicalDropInstructionAST * p = (const GALGAS_lexicalDropInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalDropInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalDropInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalErrorInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalErrorInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalErrorInstructionAST * p = (const cPtr_lexicalErrorInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalErrorInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mErrorMessageName.objectCompare (p->mProperty_mErrorMessageName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalErrorInstructionAST::objectCompare (const GALGAS_lexicalErrorInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST::GALGAS_lexicalErrorInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST GALGAS_lexicalErrorInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalErrorInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST::GALGAS_lexicalErrorInstructionAST (const cPtr_lexicalErrorInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalErrorInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST GALGAS_lexicalErrorInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mErrorMessageName
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorInstructionAST result ;
  if (inAttribute_mErrorMessageName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalErrorInstructionAST (inAttribute_mErrorMessageName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalErrorInstructionAST::readProperty_mErrorMessageName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalErrorInstructionAST * p = (cPtr_lexicalErrorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorInstructionAST) ;
    return p->mProperty_mErrorMessageName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalErrorInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalErrorInstructionAST::cPtr_lexicalErrorInstructionAST (const GALGAS_lstring & in_mErrorMessageName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mErrorMessageName (in_mErrorMessageName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalErrorInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;
}

void cPtr_lexicalErrorInstructionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@lexicalErrorInstructionAST:" ;
  mProperty_mErrorMessageName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalErrorInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalErrorInstructionAST (mProperty_mErrorMessageName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalErrorInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ("lexicalErrorInstructionAST",
                                                   & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalErrorInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalErrorInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalErrorInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST GALGAS_lexicalErrorInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorInstructionAST result ;
  const GALGAS_lexicalErrorInstructionAST * p = (const GALGAS_lexicalErrorInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalErrorInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalWarningInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalWarningInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalWarningInstructionAST * p = (const cPtr_lexicalWarningInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalWarningInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mWarningMessageName.objectCompare (p->mProperty_mWarningMessageName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalWarningInstructionAST::objectCompare (const GALGAS_lexicalWarningInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST::GALGAS_lexicalWarningInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST GALGAS_lexicalWarningInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalWarningInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST::GALGAS_lexicalWarningInstructionAST (const cPtr_lexicalWarningInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalWarningInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST GALGAS_lexicalWarningInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mWarningMessageName
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWarningInstructionAST result ;
  if (inAttribute_mWarningMessageName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalWarningInstructionAST (inAttribute_mWarningMessageName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalWarningInstructionAST::readProperty_mWarningMessageName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalWarningInstructionAST * p = (cPtr_lexicalWarningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalWarningInstructionAST) ;
    return p->mProperty_mWarningMessageName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalWarningInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalWarningInstructionAST::cPtr_lexicalWarningInstructionAST (const GALGAS_lstring & in_mWarningMessageName
                                                                      COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mWarningMessageName (in_mWarningMessageName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalWarningInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ;
}

void cPtr_lexicalWarningInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@lexicalWarningInstructionAST:" ;
  mProperty_mWarningMessageName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalWarningInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalWarningInstructionAST (mProperty_mWarningMessageName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalWarningInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ("lexicalWarningInstructionAST",
                                                     & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalWarningInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalWarningInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalWarningInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST GALGAS_lexicalWarningInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWarningInstructionAST result ;
  const GALGAS_lexicalWarningInstructionAST * p = (const GALGAS_lexicalWarningInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalWarningInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWarningInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalTagInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalTagInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalTagInstructionAST * p = (const cPtr_lexicalTagInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalTagInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalTagName.objectCompare (p->mProperty_mLexicalTagName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalTagInstructionAST::objectCompare (const GALGAS_lexicalTagInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST::GALGAS_lexicalTagInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST GALGAS_lexicalTagInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalTagInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST::GALGAS_lexicalTagInstructionAST (const cPtr_lexicalTagInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalTagInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST GALGAS_lexicalTagInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mLexicalTagName
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagInstructionAST result ;
  if (inAttribute_mLexicalTagName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalTagInstructionAST (inAttribute_mLexicalTagName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalTagInstructionAST::readProperty_mLexicalTagName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalTagInstructionAST * p = (cPtr_lexicalTagInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalTagInstructionAST) ;
    return p->mProperty_mLexicalTagName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalTagInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalTagInstructionAST::cPtr_lexicalTagInstructionAST (const GALGAS_lstring & in_mLexicalTagName
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mLexicalTagName (in_mLexicalTagName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalTagInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;
}

void cPtr_lexicalTagInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalTagInstructionAST:" ;
  mProperty_mLexicalTagName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalTagInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalTagInstructionAST (mProperty_mLexicalTagName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalTagInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTagInstructionAST ("lexicalTagInstructionAST",
                                                 & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalTagInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalTagInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTagInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST GALGAS_lexicalTagInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagInstructionAST result ;
  const GALGAS_lexicalTagInstructionAST * p = (const GALGAS_lexicalTagInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTagInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalRewindInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalRewindInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalRewindInstructionAST * p = (const cPtr_lexicalRewindInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalTagName.objectCompare (p->mProperty_mLexicalTagName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTerminalName.objectCompare (p->mProperty_mTerminalName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalRewindInstructionAST::objectCompare (const GALGAS_lexicalRewindInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST::GALGAS_lexicalRewindInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalRewindInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST::GALGAS_lexicalRewindInstructionAST (const cPtr_lexicalRewindInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRewindInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mLexicalTagName,
                                                                                        const GALGAS_lstring & inAttribute_mTerminalName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST result ;
  if (inAttribute_mLexicalTagName.isValid () && inAttribute_mTerminalName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalRewindInstructionAST (inAttribute_mLexicalTagName, inAttribute_mTerminalName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalRewindInstructionAST::readProperty_mLexicalTagName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalRewindInstructionAST * p = (cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    return p->mProperty_mLexicalTagName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalRewindInstructionAST::readProperty_mTerminalName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalRewindInstructionAST * p = (cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    return p->mProperty_mTerminalName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRewindInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalRewindInstructionAST::cPtr_lexicalRewindInstructionAST (const GALGAS_lstring & in_mLexicalTagName,
                                                                    const GALGAS_lstring & in_mTerminalName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mLexicalTagName (in_mLexicalTagName),
mProperty_mTerminalName (in_mTerminalName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalRewindInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;
}

void cPtr_lexicalRewindInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@lexicalRewindInstructionAST:" ;
  mProperty_mLexicalTagName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalRewindInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalRewindInstructionAST (mProperty_mLexicalTagName, mProperty_mTerminalName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRewindInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ("lexicalRewindInstructionAST",
                                                    & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRewindInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRewindInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRewindInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST result ;
  const GALGAS_lexicalRewindInstructionAST * p = (const GALGAS_lexicalRewindInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRewindInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRewindInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexiqueComponentAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexiqueComponentAST::objectCompare (const GALGAS_lexiqueComponentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST::GALGAS_lexiqueComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST::GALGAS_lexiqueComponentAST (const cPtr_lexiqueComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueComponentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueComponentAST::readProperty_mLexiqueComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexiqueComponentAST::readProperty_mIsTemplate (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mIsTemplate ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_lexiqueComponentAST::readProperty_mTemplateDelimitorList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_metamodelTemplateDelimitorListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mTemplateDelimitorList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_lexiqueComponentAST::readProperty_mTemplateReplacementList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateReplacementListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mTemplateReplacementList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lexicalAttributeListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalStyleList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lexicalStyleListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalStyleList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_lexiqueComponentAST::readProperty_mTerminalDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_terminalDeclarationListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mTerminalDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalMessageDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lexicalMessageDeclarationListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalMessageDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalListDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lexicalListDeclarationListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalListDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalRuleList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lexicalRuleListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalRuleList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST GALGAS_lexiqueComponentAST::readProperty_mExternRoutineList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_externRoutineListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mExternRoutineList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST GALGAS_lexiqueComponentAST::readProperty_mExternFunctionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_externFunctionListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mExternFunctionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_lexiqueComponentAST::readProperty_mIndexingListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_indexingListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mIndexingListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueComponentAST::readProperty_mIndexingDirectory (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mIndexingDirectory ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalFunctionListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lexicalFunctionListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalFunctionListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueComponentAST class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexiqueComponentAST (mProperty_mIsPredefined, mProperty_mLexiqueComponentName, mProperty_mIsTemplate, mProperty_mTemplateDelimitorList, mProperty_mTemplateReplacementList, mProperty_mLexicalAttributeList, mProperty_mLexicalStyleList, mProperty_mTerminalDeclarationList, mProperty_mLexicalMessageDeclarationList, mProperty_mLexicalListDeclarationList, mProperty_mLexicalRuleList, mProperty_mExternRoutineList, mProperty_mExternFunctionList, mProperty_mIndexingListAST, mProperty_mIndexingDirectory, mProperty_mLexicalFunctionListAST COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueComponentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentAST ("lexiqueComponentAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext::~ GALGAS_lexiqueAnalysisContext (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexiqueAnalysisContext::isValid (void) const {
  return mProperty_mLexiqueName.isValid () && mProperty_mLexicalRoutineMessageMap.isValid () && mProperty_mLexicalFunctionMap.isValid () && mProperty_mLexicalMessageMap.isValid () && mProperty_mTerminalMap.isValid () && mProperty_mTerminalList.isValid () && mProperty_mLexicalAttributeMap.isValid () && mProperty_mLexicalTokenListMap.isValid () && mProperty_mUnicodeStringToGenerate.isValid () && mProperty_mTemplateDelimitorList.isValid () && mProperty_mStyleMap.isValid () && mProperty_mExternUnicodeTestFunctions.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueAnalysisContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueAnalysisContext ("lexiqueAnalysisContext",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueAnalysisContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueAnalysisContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @lexicalFunctionCallAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalFunctionCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFunctionCallAST * p = (const cPtr_lexicalFunctionCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFunctionCallAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCalledFunctionName.objectCompare (p->mProperty_mCalledFunctionName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalFunctionCallAST::objectCompare (const GALGAS_lexicalFunctionCallAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST::GALGAS_lexicalFunctionCallAST (void) :
GALGAS_lexicalFunctionExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST GALGAS_lexicalFunctionCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST::GALGAS_lexicalFunctionCallAST (const cPtr_lexicalFunctionCallAST * inSourcePtr) :
GALGAS_lexicalFunctionExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionCallAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST GALGAS_lexicalFunctionCallAST::constructor_new (const GALGAS_lstring & inAttribute_mCalledFunctionName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallAST result ;
  if (inAttribute_mCalledFunctionName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionCallAST (inAttribute_mCalledFunctionName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalFunctionCallAST::readProperty_mCalledFunctionName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalFunctionCallAST * p = (cPtr_lexicalFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCallAST) ;
    return p->mProperty_mCalledFunctionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionCallAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionCallAST::cPtr_lexicalFunctionCallAST (const GALGAS_lstring & in_mCalledFunctionName
                                                          COMMA_LOCATION_ARGS) :
cPtr_lexicalFunctionExpressionAST (THERE),
mProperty_mCalledFunctionName (in_mCalledFunctionName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalFunctionCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallAST ;
}

void cPtr_lexicalFunctionCallAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalFunctionCallAST:" ;
  mProperty_mCalledFunctionName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFunctionCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFunctionCallAST (mProperty_mCalledFunctionName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCallAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCallAST ("lexicalFunctionCallAST",
                                               & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCallAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @lexicalFunctionCharacterMatchAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalFunctionCharacterMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFunctionCharacterMatchAST * p = (const cPtr_lexicalFunctionCharacterMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFunctionCharacterMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCharacter.objectCompare (p->mProperty_mCharacter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalFunctionCharacterMatchAST::objectCompare (const GALGAS_lexicalFunctionCharacterMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST::GALGAS_lexicalFunctionCharacterMatchAST (void) :
GALGAS_lexicalFunctionExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST GALGAS_lexicalFunctionCharacterMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCharacterMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST::GALGAS_lexicalFunctionCharacterMatchAST (const cPtr_lexicalFunctionCharacterMatchAST * inSourcePtr) :
GALGAS_lexicalFunctionExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionCharacterMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST GALGAS_lexicalFunctionCharacterMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mCharacter
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterMatchAST result ;
  if (inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionCharacterMatchAST (inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalFunctionCharacterMatchAST::readProperty_mCharacter (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_lexicalFunctionCharacterMatchAST * p = (cPtr_lexicalFunctionCharacterMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterMatchAST) ;
    return p->mProperty_mCharacter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionCharacterMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionCharacterMatchAST::cPtr_lexicalFunctionCharacterMatchAST (const GALGAS_lchar & in_mCharacter
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalFunctionExpressionAST (THERE),
mProperty_mCharacter (in_mCharacter) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalFunctionCharacterMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST ;
}

void cPtr_lexicalFunctionCharacterMatchAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@lexicalFunctionCharacterMatchAST:" ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFunctionCharacterMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFunctionCharacterMatchAST (mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCharacterMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST ("lexicalFunctionCharacterMatchAST",
                                                         & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCharacterMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCharacterMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCharacterMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @lexicalFunctionCharacterIntervalMatchAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalFunctionCharacterIntervalMatchAST::objectCompare (const GALGAS_lexicalFunctionCharacterIntervalMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST::GALGAS_lexicalFunctionCharacterIntervalMatchAST (void) :
GALGAS_lexicalFunctionExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST GALGAS_lexicalFunctionCharacterIntervalMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCharacterIntervalMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE),
                                                                           GALGAS_lchar::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST::GALGAS_lexicalFunctionCharacterIntervalMatchAST (const cPtr_lexicalFunctionCharacterIntervalMatchAST * inSourcePtr) :
GALGAS_lexicalFunctionExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST GALGAS_lexicalFunctionCharacterIntervalMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mLowerBound,
                                                                                                                  const GALGAS_lchar & inAttribute_mUpperBound
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterIntervalMatchAST result ;
  if (inAttribute_mLowerBound.isValid () && inAttribute_mUpperBound.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionCharacterIntervalMatchAST (inAttribute_mLowerBound, inAttribute_mUpperBound COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalFunctionCharacterIntervalMatchAST::readProperty_mLowerBound (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_lexicalFunctionCharacterIntervalMatchAST * p = (cPtr_lexicalFunctionCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
    return p->mProperty_mLowerBound ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalFunctionCharacterIntervalMatchAST::readProperty_mUpperBound (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_lexicalFunctionCharacterIntervalMatchAST * p = (cPtr_lexicalFunctionCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
    return p->mProperty_mUpperBound ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionCharacterIntervalMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionCharacterIntervalMatchAST::cPtr_lexicalFunctionCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                                                              const GALGAS_lchar & in_mUpperBound
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalFunctionExpressionAST (THERE),
mProperty_mLowerBound (in_mLowerBound),
mProperty_mUpperBound (in_mUpperBound) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFunctionCharacterIntervalMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFunctionCharacterIntervalMatchAST (mProperty_mLowerBound, mProperty_mUpperBound COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCharacterIntervalMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST ("lexicalFunctionCharacterIntervalMatchAST",
                                                                 & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCharacterIntervalMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCharacterIntervalMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCharacterIntervalMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @optionComponentDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_optionComponentDeclarationAST::objectCompare (const GALGAS_optionComponentDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST::GALGAS_optionComponentDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionComponentDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_commandLineOptionListAST::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST::GALGAS_optionComponentDeclarationAST (const cPtr_optionComponentDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionComponentDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentDeclarationAST::setter_setMOptionComponentName (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    p->mProperty_mOptionComponentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentDeclarationAST::setter_setMOptions (GALGAS_commandLineOptionListAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    p->mProperty_mOptions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionComponentDeclarationAST::readProperty_mOptionComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_optionComponentDeclarationAST::readProperty_mOptions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_commandLineOptionListAST () ;
  }else{
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    return p->mProperty_mOptions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @optionComponentDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_optionComponentDeclarationAST::cPtr_optionComponentDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_lstring & in_mOptionComponentName,
                                                                        const GALGAS_commandLineOptionListAST & in_mOptions
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mOptionComponentName (in_mOptionComponentName),
mProperty_mOptions (in_mOptions) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionComponentDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionComponentDeclarationAST (mProperty_mIsPredefined, mProperty_mOptionComponentName, mProperty_mOptions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@optionComponentDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentDeclarationAST ("optionComponentDeclarationAST",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @semanticDeclarationWithHeaderForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_semanticDeclarationWithHeaderForGeneration::objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration::GALGAS_semanticDeclarationWithHeaderForGeneration (void) :
GALGAS_semanticDeclarationForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration::GALGAS_semanticDeclarationWithHeaderForGeneration (const cPtr_semanticDeclarationWithHeaderForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticDeclarationWithHeaderForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationWithHeaderForGeneration::setter_setMHasHeader (GALGAS_bool inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_semanticDeclarationWithHeaderForGeneration * p = (cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    p->mProperty_mHasHeader = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationWithHeaderForGeneration::setter_setMImplementationCppFileName (GALGAS_string inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_semanticDeclarationWithHeaderForGeneration * p = (cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    p->mProperty_mImplementationCppFileName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_semanticDeclarationWithHeaderForGeneration::readProperty_mHasHeader (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_semanticDeclarationWithHeaderForGeneration * p = (cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    return p->mProperty_mHasHeader ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_semanticDeclarationWithHeaderForGeneration::readProperty_mImplementationCppFileName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_semanticDeclarationWithHeaderForGeneration * p = (cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    return p->mProperty_mImplementationCppFileName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @semanticDeclarationWithHeaderForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_semanticDeclarationWithHeaderForGeneration::cPtr_semanticDeclarationWithHeaderForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                                  const GALGAS_string & in_mImplementationCppFileName
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (THERE),
mProperty_mHasHeader (in_mHasHeader),
mProperty_mImplementationCppFileName (in_mImplementationCppFileName) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@semanticDeclarationWithHeaderForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ("semanticDeclarationWithHeaderForGeneration",
                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationWithHeaderForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationWithHeaderForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationWithHeaderForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak & GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::operator = (const GALGAS_semanticDeclarationWithHeaderForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (const GALGAS_semanticDeclarationWithHeaderForGeneration & inSource) :
GALGAS_semanticDeclarationForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::bang_semanticDeclarationWithHeaderForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationWithHeaderForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticDeclarationWithHeaderForGeneration) ;
      result = GALGAS_semanticDeclarationWithHeaderForGeneration ((cPtr_semanticDeclarationWithHeaderForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticDeclarationWithHeaderForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak ("semanticDeclarationWithHeaderForGeneration-weak",
                                                                           & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak result ;
  const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak * p = (const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationWithHeaderForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @arrayDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_arrayDeclarationAST::objectCompare (const GALGAS_arrayDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST::GALGAS_arrayDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST GALGAS_arrayDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_arrayDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lbigint::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST::GALGAS_arrayDeclarationAST (const cPtr_arrayDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST GALGAS_arrayDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                        const GALGAS_lstring & inAttribute_mArrayTypeName,
                                                                        const GALGAS_lstring & inAttribute_mElementTypeName,
                                                                        const GALGAS_lbigint & inAttribute_mDimension
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mArrayTypeName.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mDimension.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayDeclarationAST (inAttribute_mIsPredefined, inAttribute_mArrayTypeName, inAttribute_mElementTypeName, inAttribute_mDimension COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayDeclarationAST::readProperty_mArrayTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_arrayDeclarationAST * p = (cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    return p->mProperty_mArrayTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayDeclarationAST::readProperty_mElementTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_arrayDeclarationAST * p = (cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    return p->mProperty_mElementTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_arrayDeclarationAST::readProperty_mDimension (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_arrayDeclarationAST * p = (cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    return p->mProperty_mDimension ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @arrayDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_arrayDeclarationAST::cPtr_arrayDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                    const GALGAS_lstring & in_mArrayTypeName,
                                                    const GALGAS_lstring & in_mElementTypeName,
                                                    const GALGAS_lbigint & in_mDimension
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mArrayTypeName (in_mArrayTypeName),
mProperty_mElementTypeName (in_mElementTypeName),
mProperty_mDimension (in_mDimension) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayDeclarationAST (mProperty_mIsPredefined, mProperty_mArrayTypeName, mProperty_mElementTypeName, mProperty_mDimension COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@arrayDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayDeclarationAST ("arrayDeclarationAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @semanticTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_semanticTypeForGeneration::objectCompare (const GALGAS_semanticTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration::GALGAS_semanticTypeForGeneration (void) :
GALGAS_semanticDeclarationForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration::GALGAS_semanticTypeForGeneration (const cPtr_semanticTypeForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTypeForGeneration::setter_setMSelfTypeEntry (GALGAS_unifiedTypeMapEntry inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_semanticTypeForGeneration * p = (cPtr_semanticTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticTypeForGeneration) ;
    p->mProperty_mSelfTypeEntry = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_semanticTypeForGeneration::readProperty_mSelfTypeEntry (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_semanticTypeForGeneration * p = (cPtr_semanticTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticTypeForGeneration) ;
    return p->mProperty_mSelfTypeEntry ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @semanticTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_semanticTypeForGeneration::cPtr_semanticTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (THERE),
mProperty_mSelfTypeEntry (in_mSelfTypeEntry) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@semanticTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTypeForGeneration ("semanticTypeForGeneration",
                                                  & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticTypeForGeneration_2D_weak::objectCompare (const GALGAS_semanticTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak::GALGAS_semanticTypeForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak & GALGAS_semanticTypeForGeneration_2D_weak::operator = (const GALGAS_semanticTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak::GALGAS_semanticTypeForGeneration_2D_weak (const GALGAS_semanticTypeForGeneration & inSource) :
GALGAS_semanticDeclarationForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak GALGAS_semanticTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_semanticTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration GALGAS_semanticTypeForGeneration_2D_weak::bang_semanticTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticTypeForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticTypeForGeneration) ;
      result = GALGAS_semanticTypeForGeneration ((cPtr_semanticTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak ("semanticTypeForGeneration-weak",
                                                          & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak GALGAS_semanticTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticTypeForGeneration_2D_weak result ;
  const GALGAS_semanticTypeForGeneration_2D_weak * p = (const GALGAS_semanticTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @boolsetDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolsetDeclarationAST::objectCompare (const GALGAS_boolsetDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST::GALGAS_boolsetDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolsetDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstringlist::constructor_emptyList (HERE)
                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST::GALGAS_boolsetDeclarationAST (const cPtr_boolsetDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolsetDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_boolsetDeclarationAST::readProperty_mBoolsetTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    return p->mProperty_mBoolsetTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_boolsetDeclarationAST::readProperty_mFlagList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    return p->mProperty_mFlagList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolsetDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolsetDeclarationAST::cPtr_boolsetDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_lstring & in_mBoolsetTypeName,
                                                        const GALGAS_lstringlist & in_mFlagList
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mBoolsetTypeName (in_mBoolsetTypeName),
mProperty_mFlagList (in_mFlagList) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolsetDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolsetDeclarationAST (mProperty_mIsPredefined, mProperty_mBoolsetTypeName, mProperty_mFlagList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@boolsetDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetDeclarationAST ("boolsetDeclarationAST",
                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @boolsetTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolsetTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolsetTypeForGeneration * p = (const cPtr_boolsetTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolsetTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFlagList.objectCompare (p->mProperty_mFlagList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolsetTypeForGeneration::objectCompare (const GALGAS_boolsetTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration::GALGAS_boolsetTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration::GALGAS_boolsetTypeForGeneration (const cPtr_boolsetTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolsetTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
                                                                                  const GALGAS_lstringlist & inAttribute_mFlagList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mFlagList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolsetTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mFlagList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_boolsetTypeForGeneration::readProperty_mFlagList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_boolsetTypeForGeneration * p = (cPtr_boolsetTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetTypeForGeneration) ;
    return p->mProperty_mFlagList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolsetTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolsetTypeForGeneration::cPtr_boolsetTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                              const GALGAS_lstringlist & in_mFlagList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mFlagList (in_mFlagList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolsetTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;
}

void cPtr_boolsetTypeForGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@boolsetTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFlagList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolsetTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolsetTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mFlagList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@boolsetTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetTypeForGeneration ("boolsetTypeForGeneration",
                                                 & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolsetTypeForGeneration_2D_weak::objectCompare (const GALGAS_boolsetTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak::GALGAS_boolsetTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak & GALGAS_boolsetTypeForGeneration_2D_weak::operator = (const GALGAS_boolsetTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak::GALGAS_boolsetTypeForGeneration_2D_weak (const GALGAS_boolsetTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak GALGAS_boolsetTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration_2D_weak::bang_boolsetTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolsetTypeForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolsetTypeForGeneration) ;
      result = GALGAS_boolsetTypeForGeneration ((cPtr_boolsetTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@boolsetTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetTypeForGeneration_2D_weak ("boolsetTypeForGeneration-weak",
                                                         & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak GALGAS_boolsetTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration_2D_weak result ;
  const GALGAS_boolsetTypeForGeneration_2D_weak * p = (const GALGAS_boolsetTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolsetTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @classDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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
    result = mProperty_mIsReference.objectCompare (p->mProperty_mIsReference) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_classDeclarationAST::objectCompare (const GALGAS_classDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST::GALGAS_classDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST::GALGAS_classDeclarationAST (const cPtr_classDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                        const GALGAS_bool & inAttribute_mIsAbstract,
                                                                        const GALGAS_bool & inAttribute_mIsReference,
                                                                        const GALGAS_lstring & inAttribute_mClassTypeName,
                                                                        const GALGAS_lstring & inAttribute_mSuperClassName,
                                                                        const GALGAS_lstringlist & inAttribute_mClassFeatureList,
                                                                        const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mIsReference.isValid () && inAttribute_mClassTypeName.isValid () && inAttribute_mSuperClassName.isValid () && inAttribute_mClassFeatureList.isValid () && inAttribute_mPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_classDeclarationAST (inAttribute_mIsPredefined, inAttribute_mIsAbstract, inAttribute_mIsReference, inAttribute_mClassTypeName, inAttribute_mSuperClassName, inAttribute_mClassFeatureList, inAttribute_mPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classDeclarationAST::readProperty_mIsAbstract (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mIsAbstract ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classDeclarationAST::readProperty_mIsReference (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mIsReference ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_classDeclarationAST::readProperty_mClassTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mClassTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_classDeclarationAST::readProperty_mSuperClassName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_classDeclarationAST::readProperty_mClassFeatureList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mClassFeatureList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_classDeclarationAST::readProperty_mPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @classDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_classDeclarationAST::cPtr_classDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                    const GALGAS_bool & in_mIsAbstract,
                                                    const GALGAS_bool & in_mIsReference,
                                                    const GALGAS_lstring & in_mClassTypeName,
                                                    const GALGAS_lstring & in_mSuperClassName,
                                                    const GALGAS_lstringlist & in_mClassFeatureList,
                                                    const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mIsReference (in_mIsReference),
mProperty_mClassTypeName (in_mClassTypeName),
mProperty_mSuperClassName (in_mSuperClassName),
mProperty_mClassFeatureList (in_mClassFeatureList),
mProperty_mPropertyList (in_mPropertyList) {
}

//----------------------------------------------------------------------------------------------------------------------

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
  mProperty_mIsReference.description (ioString, inIndentation+1) ;
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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_classDeclarationAST (mProperty_mIsPredefined, mProperty_mIsAbstract, mProperty_mIsReference, mProperty_mClassTypeName, mProperty_mSuperClassName, mProperty_mClassFeatureList, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@classDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classDeclarationAST ("classDeclarationAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @classTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_classTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsReference.objectCompare (p->mProperty_mIsReference) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClass.objectCompare (p->mProperty_mSuperClass) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllTypedAttributeList.objectCompare (p->mProperty_mAllTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCurrentTypedAttributeList.objectCompare (p->mProperty_mCurrentTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerateHeaderInSeparateFile.objectCompare (p->mProperty_mGenerateHeaderInSeparateFile) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_classTypeForGeneration::objectCompare (const GALGAS_classTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration::GALGAS_classTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration::GALGAS_classTypeForGeneration (const cPtr_classTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
                                                                              const GALGAS_bool & inAttribute_mIsAbstract,
                                                                              const GALGAS_bool & inAttribute_mIsReference,
                                                                              const GALGAS_unifiedTypeMapEntry & inAttribute_mSuperClass,
                                                                              const GALGAS_typedPropertyList & inAttribute_mAllTypedAttributeList,
                                                                              const GALGAS_typedPropertyList & inAttribute_mCurrentTypedAttributeList,
                                                                              const GALGAS_bool & inAttribute_mGenerateHeaderInSeparateFile
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_classTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mIsReference.isValid () && inAttribute_mSuperClass.isValid () && inAttribute_mAllTypedAttributeList.isValid () && inAttribute_mCurrentTypedAttributeList.isValid () && inAttribute_mGenerateHeaderInSeparateFile.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_classTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mIsAbstract, inAttribute_mIsReference, inAttribute_mSuperClass, inAttribute_mAllTypedAttributeList, inAttribute_mCurrentTypedAttributeList, inAttribute_mGenerateHeaderInSeparateFile COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration::readProperty_mIsAbstract (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mIsAbstract ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration::readProperty_mIsReference (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mIsReference ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_classTypeForGeneration::readProperty_mSuperClass (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mSuperClass ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_classTypeForGeneration::readProperty_mAllTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mAllTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_classTypeForGeneration::readProperty_mCurrentTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mCurrentTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration::readProperty_mGenerateHeaderInSeparateFile (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mGenerateHeaderInSeparateFile ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @classTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_classTypeForGeneration::cPtr_classTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                          const GALGAS_bool & in_mIsAbstract,
                                                          const GALGAS_bool & in_mIsReference,
                                                          const GALGAS_unifiedTypeMapEntry & in_mSuperClass,
                                                          const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                                          const GALGAS_typedPropertyList & in_mCurrentTypedAttributeList,
                                                          const GALGAS_bool & in_mGenerateHeaderInSeparateFile
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mIsReference (in_mIsReference),
mProperty_mSuperClass (in_mSuperClass),
mProperty_mAllTypedAttributeList (in_mAllTypedAttributeList),
mProperty_mCurrentTypedAttributeList (in_mCurrentTypedAttributeList),
mProperty_mGenerateHeaderInSeparateFile (in_mGenerateHeaderInSeparateFile) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_classTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classTypeForGeneration ;
}

void cPtr_classTypeForGeneration::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@classTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsReference.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperClass.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAllTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCurrentTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGenerateHeaderInSeparateFile.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_classTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mIsAbstract, mProperty_mIsReference, mProperty_mSuperClass, mProperty_mAllTypedAttributeList, mProperty_mCurrentTypedAttributeList, mProperty_mGenerateHeaderInSeparateFile COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@classTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classTypeForGeneration ("classTypeForGeneration",
                                               & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_classTypeForGeneration_2D_weak::objectCompare (const GALGAS_classTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak::GALGAS_classTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak & GALGAS_classTypeForGeneration_2D_weak::operator = (const GALGAS_classTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak::GALGAS_classTypeForGeneration_2D_weak (const GALGAS_classTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak GALGAS_classTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_classTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration_2D_weak::bang_classTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_classTypeForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classTypeForGeneration) ;
      result = GALGAS_classTypeForGeneration ((cPtr_classTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@classTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classTypeForGeneration_2D_weak ("classTypeForGeneration-weak",
                                                       & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak GALGAS_classTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_classTypeForGeneration_2D_weak result ;
  const GALGAS_classTypeForGeneration_2D_weak * p = (const GALGAS_classTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @weakReferenceDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_weakReferenceDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_weakReferenceDeclarationAST * p = (const cPtr_weakReferenceDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassTypeName.objectCompare (p->mProperty_mClassTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWeakReferenceTypeName.objectCompare (p->mProperty_mWeakReferenceTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperWeakReferenceTypeName.objectCompare (p->mProperty_mSuperWeakReferenceTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassFeatureList.objectCompare (p->mProperty_mClassFeatureList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_weakReferenceDeclarationAST::objectCompare (const GALGAS_weakReferenceDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST::GALGAS_weakReferenceDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_weakReferenceDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstringlist::constructor_emptyList (HERE),
                                                              GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST::GALGAS_weakReferenceDeclarationAST (const cPtr_weakReferenceDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_weakReferenceDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                        const GALGAS_lstring & inAttribute_mClassTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mWeakReferenceTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mSuperWeakReferenceTypeName,
                                                                                        const GALGAS_lstringlist & inAttribute_mClassFeatureList,
                                                                                        const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mClassTypeName.isValid () && inAttribute_mWeakReferenceTypeName.isValid () && inAttribute_mSuperWeakReferenceTypeName.isValid () && inAttribute_mClassFeatureList.isValid () && inAttribute_mPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_weakReferenceDeclarationAST (inAttribute_mIsPredefined, inAttribute_mClassTypeName, inAttribute_mWeakReferenceTypeName, inAttribute_mSuperWeakReferenceTypeName, inAttribute_mClassFeatureList, inAttribute_mPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_weakReferenceDeclarationAST::readProperty_mClassTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mClassTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_weakReferenceDeclarationAST::readProperty_mWeakReferenceTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mWeakReferenceTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_weakReferenceDeclarationAST::readProperty_mSuperWeakReferenceTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mSuperWeakReferenceTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_weakReferenceDeclarationAST::readProperty_mClassFeatureList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mClassFeatureList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_weakReferenceDeclarationAST::readProperty_mPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @weakReferenceDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_weakReferenceDeclarationAST::cPtr_weakReferenceDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                    const GALGAS_lstring & in_mClassTypeName,
                                                                    const GALGAS_lstring & in_mWeakReferenceTypeName,
                                                                    const GALGAS_lstring & in_mSuperWeakReferenceTypeName,
                                                                    const GALGAS_lstringlist & in_mClassFeatureList,
                                                                    const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mClassTypeName (in_mClassTypeName),
mProperty_mWeakReferenceTypeName (in_mWeakReferenceTypeName),
mProperty_mSuperWeakReferenceTypeName (in_mSuperWeakReferenceTypeName),
mProperty_mClassFeatureList (in_mClassFeatureList),
mProperty_mPropertyList (in_mPropertyList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_weakReferenceDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;
}

void cPtr_weakReferenceDeclarationAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@weakReferenceDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWeakReferenceTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperWeakReferenceTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassFeatureList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_weakReferenceDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_weakReferenceDeclarationAST (mProperty_mIsPredefined, mProperty_mClassTypeName, mProperty_mWeakReferenceTypeName, mProperty_mSuperWeakReferenceTypeName, mProperty_mClassFeatureList, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@weakReferenceDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ("weakReferenceDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_weakReferenceDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_weakReferenceDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_weakReferenceDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceDeclarationAST result ;
  const GALGAS_weakReferenceDeclarationAST * p = (const GALGAS_weakReferenceDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_weakReferenceDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @weakReferenceTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_weakReferenceTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_weakReferenceTypeForGeneration * p = (const cPtr_weakReferenceTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReferenceClassType.objectCompare (p->mProperty_mReferenceClassType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClass.objectCompare (p->mProperty_mSuperClass) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllTypedPropertyList.objectCompare (p->mProperty_mAllTypedPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerateHeaderInSeparateFile.objectCompare (p->mProperty_mGenerateHeaderInSeparateFile) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_weakReferenceTypeForGeneration::objectCompare (const GALGAS_weakReferenceTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration::GALGAS_weakReferenceTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration::GALGAS_weakReferenceTypeForGeneration (const cPtr_weakReferenceTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_weakReferenceTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration GALGAS_weakReferenceTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
                                                                                              const GALGAS_unifiedTypeMapEntry & inAttribute_mReferenceClassType,
                                                                                              const GALGAS_unifiedTypeMapEntry & inAttribute_mSuperClass,
                                                                                              const GALGAS_typedPropertyList & inAttribute_mAllTypedPropertyList,
                                                                                              const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                              const GALGAS_bool & inAttribute_mGenerateHeaderInSeparateFile
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mReferenceClassType.isValid () && inAttribute_mSuperClass.isValid () && inAttribute_mAllTypedPropertyList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mGenerateHeaderInSeparateFile.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_weakReferenceTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mReferenceClassType, inAttribute_mSuperClass, inAttribute_mAllTypedPropertyList, inAttribute_mTypedAttributeList, inAttribute_mGenerateHeaderInSeparateFile COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_weakReferenceTypeForGeneration::readProperty_mReferenceClassType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    return p->mProperty_mReferenceClassType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_weakReferenceTypeForGeneration::readProperty_mSuperClass (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    return p->mProperty_mSuperClass ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_weakReferenceTypeForGeneration::readProperty_mAllTypedPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    return p->mProperty_mAllTypedPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_weakReferenceTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_weakReferenceTypeForGeneration::readProperty_mGenerateHeaderInSeparateFile (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    return p->mProperty_mGenerateHeaderInSeparateFile ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @weakReferenceTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_weakReferenceTypeForGeneration::cPtr_weakReferenceTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                          const GALGAS_unifiedTypeMapEntry & in_mReferenceClassType,
                                                                          const GALGAS_unifiedTypeMapEntry & in_mSuperClass,
                                                                          const GALGAS_typedPropertyList & in_mAllTypedPropertyList,
                                                                          const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                          const GALGAS_bool & in_mGenerateHeaderInSeparateFile
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mReferenceClassType (in_mReferenceClassType),
mProperty_mSuperClass (in_mSuperClass),
mProperty_mAllTypedPropertyList (in_mAllTypedPropertyList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mGenerateHeaderInSeparateFile (in_mGenerateHeaderInSeparateFile) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_weakReferenceTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration ;
}

void cPtr_weakReferenceTypeForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@weakReferenceTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReferenceClassType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperClass.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAllTypedPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGenerateHeaderInSeparateFile.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_weakReferenceTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_weakReferenceTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mReferenceClassType, mProperty_mSuperClass, mProperty_mAllTypedPropertyList, mProperty_mTypedAttributeList, mProperty_mGenerateHeaderInSeparateFile COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@weakReferenceTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration ("weakReferenceTypeForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_weakReferenceTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_weakReferenceTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_weakReferenceTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration GALGAS_weakReferenceTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration result ;
  const GALGAS_weakReferenceTypeForGeneration * p = (const GALGAS_weakReferenceTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_weakReferenceTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_weakReferenceTypeForGeneration_2D_weak::objectCompare (const GALGAS_weakReferenceTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak::GALGAS_weakReferenceTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak & GALGAS_weakReferenceTypeForGeneration_2D_weak::operator = (const GALGAS_weakReferenceTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak::GALGAS_weakReferenceTypeForGeneration_2D_weak (const GALGAS_weakReferenceTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak GALGAS_weakReferenceTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration GALGAS_weakReferenceTypeForGeneration_2D_weak::bang_weakReferenceTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_weakReferenceTypeForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_weakReferenceTypeForGeneration) ;
      result = GALGAS_weakReferenceTypeForGeneration ((cPtr_weakReferenceTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@weakReferenceTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration_2D_weak ("weakReferenceTypeForGeneration-weak",
                                                               & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_weakReferenceTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_weakReferenceTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_weakReferenceTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak GALGAS_weakReferenceTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration_2D_weak result ;
  const GALGAS_weakReferenceTypeForGeneration_2D_weak * p = (const GALGAS_weakReferenceTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_weakReferenceTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @enumDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumDeclarationAST::objectCompare (const GALGAS_enumDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST::GALGAS_enumDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_enumConstantList::constructor_emptyList (HERE),
                                                     GALGAS_lstring::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST::GALGAS_enumDeclarationAST (const cPtr_enumDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumDeclarationAST::readProperty_mEnumTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_mEnumTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumDeclarationAST::readProperty_mConstantList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_enumConstantList () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_mConstantList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumDeclarationAST::readProperty_mDefaultConstantName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_mDefaultConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumDeclarationAST (mProperty_mIsPredefined, mProperty_mEnumTypeName, mProperty_mConstantList, mProperty_mDefaultConstantName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumDeclarationAST ("enumDeclarationAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @enumTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enumTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumTypeForGeneration * p = (const cPtr_enumTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantList.objectCompare (p->mProperty_mConstantList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumTypeForGeneration::objectCompare (const GALGAS_enumTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration::GALGAS_enumTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration::GALGAS_enumTypeForGeneration (const cPtr_enumTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
                                                                            const GALGAS_enumConstantListForGeneration & inAttribute_mConstantList
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enumTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mConstantList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mConstantList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumTypeForGeneration::readProperty_mConstantList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_enumConstantListForGeneration () ;
  }else{
    cPtr_enumTypeForGeneration * p = (cPtr_enumTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumTypeForGeneration) ;
    return p->mProperty_mConstantList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enumTypeForGeneration::cPtr_enumTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                        const GALGAS_enumConstantListForGeneration & in_mConstantList
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mConstantList (in_mConstantList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration ;
}

void cPtr_enumTypeForGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@enumTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mConstantList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumTypeForGeneration ("enumTypeForGeneration",
                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumTypeForGeneration_2D_weak::objectCompare (const GALGAS_enumTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration_2D_weak::GALGAS_enumTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration_2D_weak & GALGAS_enumTypeForGeneration_2D_weak::operator = (const GALGAS_enumTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration_2D_weak::GALGAS_enumTypeForGeneration_2D_weak (const GALGAS_enumTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration_2D_weak GALGAS_enumTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration_2D_weak::bang_enumTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumTypeForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumTypeForGeneration) ;
      result = GALGAS_enumTypeForGeneration ((cPtr_enumTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumTypeForGeneration_2D_weak ("enumTypeForGeneration-weak",
                                                      & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration_2D_weak GALGAS_enumTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumTypeForGeneration_2D_weak result ;
  const GALGAS_enumTypeForGeneration_2D_weak * p = (const GALGAS_enumTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @externTypeDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_externTypeDeclarationAST::objectCompare (const GALGAS_externTypeDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST::GALGAS_externTypeDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST::GALGAS_externTypeDeclarationAST (const cPtr_externTypeDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externTypeDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externTypeDeclarationAST::readProperty_mExternTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_externTypeDeclarationAST::readProperty_mCppPreDeclarationCode (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mCppPreDeclarationCode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_externTypeDeclarationAST::readProperty_mCppClassCode (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mCppClassCode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeDeclarationAST::readProperty_mExternTypeConstructorList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_externTypeConstructorList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeConstructorList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeDeclarationAST::readProperty_mExternTypeGetterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_externTypeGetterList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeGetterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeDeclarationAST::readProperty_mExternTypeSetterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_externTypeSetterList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeSetterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeDeclarationAST::readProperty_mExternTypeMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_externTypeMethodList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @externTypeDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externTypeDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_externTypeDeclarationAST (mProperty_mIsPredefined, mProperty_mExternTypeName, mProperty_mCppPreDeclarationCode, mProperty_mCppClassCode, mProperty_mExternTypeConstructorList, mProperty_mExternTypeGetterList, mProperty_mExternTypeSetterList, mProperty_mExternTypeMethodList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@externTypeDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeDeclarationAST ("externTypeDeclarationAST",
                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @externTypeDeclarationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_externTypeDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_externTypeDeclarationForGeneration * p = (const cPtr_externTypeDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_externTypeDeclarationForGeneration::objectCompare (const GALGAS_externTypeDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration::GALGAS_externTypeDeclarationForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration::GALGAS_externTypeDeclarationForGeneration (const cPtr_externTypeDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externTypeDeclarationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration GALGAS_externTypeDeclarationForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
                                                                                                      const GALGAS_string & inAttribute_mExternTypeName,
                                                                                                      const GALGAS_string & inAttribute_mCppPreDeclarationCode,
                                                                                                      const GALGAS_string & inAttribute_mCppClassCode
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mExternTypeName.isValid () && inAttribute_mCppPreDeclarationCode.isValid () && inAttribute_mCppClassCode.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_externTypeDeclarationForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mExternTypeName, inAttribute_mCppPreDeclarationCode, inAttribute_mCppClassCode COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_externTypeDeclarationForGeneration::readProperty_mExternTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    return p->mProperty_mExternTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_externTypeDeclarationForGeneration::readProperty_mCppPreDeclarationCode (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    return p->mProperty_mCppPreDeclarationCode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_externTypeDeclarationForGeneration::readProperty_mCppClassCode (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    return p->mProperty_mCppClassCode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @externTypeDeclarationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationForGeneration::cPtr_externTypeDeclarationForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                  const GALGAS_string & in_mExternTypeName,
                                                                                  const GALGAS_string & in_mCppPreDeclarationCode,
                                                                                  const GALGAS_string & in_mCppClassCode
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mExternTypeName (in_mExternTypeName),
mProperty_mCppPreDeclarationCode (in_mCppPreDeclarationCode),
mProperty_mCppClassCode (in_mCppClassCode) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_externTypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;
}

void cPtr_externTypeDeclarationForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@externTypeDeclarationForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppPreDeclarationCode.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppClassCode.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externTypeDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_externTypeDeclarationForGeneration (mProperty_mSelfTypeEntry, mProperty_mExternTypeName, mProperty_mCppPreDeclarationCode, mProperty_mCppClassCode COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@externTypeDeclarationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ("externTypeDeclarationForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_externTypeDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_externTypeDeclarationForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration_2D_weak::GALGAS_externTypeDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration_2D_weak & GALGAS_externTypeDeclarationForGeneration_2D_weak::operator = (const GALGAS_externTypeDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration_2D_weak::GALGAS_externTypeDeclarationForGeneration_2D_weak (const GALGAS_externTypeDeclarationForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration_2D_weak GALGAS_externTypeDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_externTypeDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration GALGAS_externTypeDeclarationForGeneration_2D_weak::bang_externTypeDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeDeclarationForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externTypeDeclarationForGeneration) ;
      result = GALGAS_externTypeDeclarationForGeneration ((cPtr_externTypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@externTypeDeclarationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration_2D_weak ("externTypeDeclarationForGeneration-weak",
                                                                   & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration_2D_weak GALGAS_externTypeDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationForGeneration_2D_weak result ;
  const GALGAS_externTypeDeclarationForGeneration_2D_weak * p = (const GALGAS_externTypeDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @graphDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_graphDeclarationAST::objectCompare (const GALGAS_graphDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST::GALGAS_graphDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST GALGAS_graphDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_graphInsertModifierList::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST::GALGAS_graphDeclarationAST (const cPtr_graphDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphDeclarationAST::setter_setMGraphTypeName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    p->mProperty_mGraphTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphDeclarationAST::setter_setMAssociatedListTypeName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    p->mProperty_mAssociatedListTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphDeclarationAST::setter_setMInsertModifierList (GALGAS_graphInsertModifierList inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    p->mProperty_mInsertModifierList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_graphDeclarationAST::readProperty_mGraphTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mGraphTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_graphDeclarationAST::readProperty_mAssociatedListTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mAssociatedListTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphDeclarationAST::readProperty_mInsertModifierList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_graphInsertModifierList () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mInsertModifierList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @graphDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_graphDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_graphDeclarationAST (mProperty_mIsPredefined, mProperty_mGraphTypeName, mProperty_mAssociatedListTypeName, mProperty_mInsertModifierList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@graphDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphDeclarationAST ("graphDeclarationAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @graphDeclarationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_graphDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_graphDeclarationForGeneration * p = (const cPtr_graphDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListTypeEntry.objectCompare (p->mProperty_mAssociatedListTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListElementTypeEntry.objectCompare (p->mProperty_mAssociatedListElementTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertModifierList.objectCompare (p->mProperty_mInsertModifierList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_graphDeclarationForGeneration::objectCompare (const GALGAS_graphDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration::GALGAS_graphDeclarationForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration::GALGAS_graphDeclarationForGeneration (const cPtr_graphDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration GALGAS_graphDeclarationForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
                                                                                            const GALGAS_unifiedTypeMapEntry & inAttribute_mAssociatedListTypeEntry,
                                                                                            const GALGAS_unifiedTypeMapEntry & inAttribute_mAssociatedListElementTypeEntry,
                                                                                            const GALGAS_graphInsertModifierList & inAttribute_mInsertModifierList
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mAssociatedListTypeEntry.isValid () && inAttribute_mAssociatedListElementTypeEntry.isValid () && inAttribute_mInsertModifierList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_graphDeclarationForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mAssociatedListTypeEntry, inAttribute_mAssociatedListElementTypeEntry, inAttribute_mInsertModifierList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphDeclarationForGeneration::setter_setMAssociatedListTypeEntry (GALGAS_unifiedTypeMapEntry inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    p->mProperty_mAssociatedListTypeEntry = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphDeclarationForGeneration::setter_setMAssociatedListElementTypeEntry (GALGAS_unifiedTypeMapEntry inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    p->mProperty_mAssociatedListElementTypeEntry = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphDeclarationForGeneration::setter_setMInsertModifierList (GALGAS_graphInsertModifierList inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    p->mProperty_mInsertModifierList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_graphDeclarationForGeneration::readProperty_mAssociatedListTypeEntry (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mAssociatedListTypeEntry ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_graphDeclarationForGeneration::readProperty_mAssociatedListElementTypeEntry (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mAssociatedListElementTypeEntry ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphDeclarationForGeneration::readProperty_mInsertModifierList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_graphInsertModifierList () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mInsertModifierList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @graphDeclarationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_graphDeclarationForGeneration::cPtr_graphDeclarationForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                        const GALGAS_unifiedTypeMapEntry & in_mAssociatedListTypeEntry,
                                                                        const GALGAS_unifiedTypeMapEntry & in_mAssociatedListElementTypeEntry,
                                                                        const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mAssociatedListTypeEntry (in_mAssociatedListTypeEntry),
mProperty_mAssociatedListElementTypeEntry (in_mAssociatedListElementTypeEntry),
mProperty_mInsertModifierList (in_mInsertModifierList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_graphDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationForGeneration ;
}

void cPtr_graphDeclarationForGeneration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@graphDeclarationForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertModifierList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_graphDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_graphDeclarationForGeneration (mProperty_mSelfTypeEntry, mProperty_mAssociatedListTypeEntry, mProperty_mAssociatedListElementTypeEntry, mProperty_mInsertModifierList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@graphDeclarationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphDeclarationForGeneration ("graphDeclarationForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_graphDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_graphDeclarationForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration_2D_weak::GALGAS_graphDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration_2D_weak & GALGAS_graphDeclarationForGeneration_2D_weak::operator = (const GALGAS_graphDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration_2D_weak::GALGAS_graphDeclarationForGeneration_2D_weak (const GALGAS_graphDeclarationForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration_2D_weak GALGAS_graphDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_graphDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration GALGAS_graphDeclarationForGeneration_2D_weak::bang_graphDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_graphDeclarationForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_graphDeclarationForGeneration) ;
      result = GALGAS_graphDeclarationForGeneration ((cPtr_graphDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@graphDeclarationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphDeclarationForGeneration_2D_weak ("graphDeclarationForGeneration-weak",
                                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration_2D_weak GALGAS_graphDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationForGeneration_2D_weak result ;
  const GALGAS_graphDeclarationForGeneration_2D_weak * p = (const GALGAS_graphDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_graphDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @listDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_listDeclarationAST::objectCompare (const GALGAS_listDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST::GALGAS_listDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST GALGAS_listDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_listDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST::GALGAS_listDeclarationAST (const cPtr_listDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_listDeclarationAST::readProperty_mListTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_mListTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_listDeclarationAST::readProperty_mPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @listDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_listDeclarationAST::cPtr_listDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mListTypeName,
                                                  const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mListTypeName (in_mListTypeName),
mProperty_mPropertyList (in_mPropertyList) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_listDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listDeclarationAST (mProperty_mIsPredefined, mProperty_mListTypeName, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@listDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listDeclarationAST ("listDeclarationAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @listTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_listTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listTypeForGeneration * p = (const cPtr_listTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mListElementTypeIndex.objectCompare (p->mProperty_mListElementTypeIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_listTypeForGeneration::objectCompare (const GALGAS_listTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration::GALGAS_listTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration::GALGAS_listTypeForGeneration (const cPtr_listTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
                                                                            const GALGAS_unifiedTypeMapEntry & inAttribute_mListElementTypeIndex,
                                                                            const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_listTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mListElementTypeIndex.isValid () && inAttribute_mTypedAttributeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mListElementTypeIndex, inAttribute_mTypedAttributeList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_listTypeForGeneration::readProperty_mListElementTypeIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_listTypeForGeneration * p = (cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    return p->mProperty_mListElementTypeIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_listTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_listTypeForGeneration * p = (cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @listTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_listTypeForGeneration::cPtr_listTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                        const GALGAS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                                        const GALGAS_typedPropertyList & in_mTypedAttributeList
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mListElementTypeIndex (in_mListElementTypeIndex),
mProperty_mTypedAttributeList (in_mTypedAttributeList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_listTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration ;
}

void cPtr_listTypeForGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@listTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mListElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_listTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mListElementTypeIndex, mProperty_mTypedAttributeList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@listTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listTypeForGeneration ("listTypeForGeneration",
                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_listTypeForGeneration_2D_weak::objectCompare (const GALGAS_listTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration_2D_weak::GALGAS_listTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration_2D_weak & GALGAS_listTypeForGeneration_2D_weak::operator = (const GALGAS_listTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration_2D_weak::GALGAS_listTypeForGeneration_2D_weak (const GALGAS_listTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration_2D_weak GALGAS_listTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_listTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration_2D_weak::bang_listTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_listTypeForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_listTypeForGeneration) ;
      result = GALGAS_listTypeForGeneration ((cPtr_listTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@listTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listTypeForGeneration_2D_weak ("listTypeForGeneration-weak",
                                                      & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration_2D_weak GALGAS_listTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listTypeForGeneration_2D_weak result ;
  const GALGAS_listTypeForGeneration_2D_weak * p = (const GALGAS_listTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @listmapDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_listmapDeclarationAST::objectCompare (const GALGAS_listmapDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST::GALGAS_listmapDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST GALGAS_listmapDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST::GALGAS_listmapDeclarationAST (const cPtr_listmapDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listmapDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_listmapDeclarationAST::readProperty_mListmapTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_listmapDeclarationAST * p = (cPtr_listmapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
    return p->mProperty_mListmapTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_listmapDeclarationAST::readProperty_mAssociatedListTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_listmapDeclarationAST * p = (cPtr_listmapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
    return p->mProperty_mAssociatedListTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @listmapDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_listmapDeclarationAST::cPtr_listmapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_lstring & in_mListmapTypeName,
                                                        const GALGAS_lstring & in_mAssociatedListTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mListmapTypeName (in_mListmapTypeName),
mProperty_mAssociatedListTypeName (in_mAssociatedListTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_listmapDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listmapDeclarationAST (mProperty_mIsPredefined, mProperty_mListmapTypeName, mProperty_mAssociatedListTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@listmapDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listmapDeclarationAST ("listmapDeclarationAST",
                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listmapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listmapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listmapDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @listmapTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_listmapTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listmapTypeForGeneration * p = (const cPtr_listmapTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_listmapTypeForGeneration::objectCompare (const GALGAS_listmapTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration::GALGAS_listmapTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration::GALGAS_listmapTypeForGeneration (const cPtr_listmapTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listmapTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration GALGAS_listmapTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
                                                                                  const GALGAS_unifiedTypeMapEntry & inAttribute_mAssociatedListTypeIndex,
                                                                                  const GALGAS_typedPropertyList & inAttribute_mAssociatedListTypedAttributeList,
                                                                                  const GALGAS_unifiedTypeMapEntry & inAttribute_mAssociatedListMapElementTypeIndex
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_listmapTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mAssociatedListTypeIndex.isValid () && inAttribute_mAssociatedListTypedAttributeList.isValid () && inAttribute_mAssociatedListMapElementTypeIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listmapTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mAssociatedListTypeIndex, inAttribute_mAssociatedListTypedAttributeList, inAttribute_mAssociatedListMapElementTypeIndex COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_listmapTypeForGeneration::readProperty_mAssociatedListTypeIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_listmapTypeForGeneration * p = (cPtr_listmapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
    return p->mProperty_mAssociatedListTypeIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_listmapTypeForGeneration::readProperty_mAssociatedListTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_listmapTypeForGeneration * p = (cPtr_listmapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
    return p->mProperty_mAssociatedListTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_listmapTypeForGeneration::readProperty_mAssociatedListMapElementTypeIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_listmapTypeForGeneration * p = (cPtr_listmapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
    return p->mProperty_mAssociatedListMapElementTypeIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @listmapTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_listmapTypeForGeneration::cPtr_listmapTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                              const GALGAS_unifiedTypeMapEntry & in_mAssociatedListTypeIndex,
                                                              const GALGAS_typedPropertyList & in_mAssociatedListTypedAttributeList,
                                                              const GALGAS_unifiedTypeMapEntry & in_mAssociatedListMapElementTypeIndex
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mAssociatedListTypeIndex (in_mAssociatedListTypeIndex),
mProperty_mAssociatedListTypedAttributeList (in_mAssociatedListTypedAttributeList),
mProperty_mAssociatedListMapElementTypeIndex (in_mAssociatedListMapElementTypeIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_listmapTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapTypeForGeneration ;
}

void cPtr_listmapTypeForGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@listmapTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListTypeIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListMapElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_listmapTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listmapTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mAssociatedListTypeIndex, mProperty_mAssociatedListTypedAttributeList, mProperty_mAssociatedListMapElementTypeIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@listmapTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listmapTypeForGeneration ("listmapTypeForGeneration",
                                                 & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listmapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listmapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listmapTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_listmapTypeForGeneration_2D_weak::objectCompare (const GALGAS_listmapTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration_2D_weak::GALGAS_listmapTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration_2D_weak & GALGAS_listmapTypeForGeneration_2D_weak::operator = (const GALGAS_listmapTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration_2D_weak::GALGAS_listmapTypeForGeneration_2D_weak (const GALGAS_listmapTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration_2D_weak GALGAS_listmapTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_listmapTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration GALGAS_listmapTypeForGeneration_2D_weak::bang_listmapTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_listmapTypeForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_listmapTypeForGeneration) ;
      result = GALGAS_listmapTypeForGeneration ((cPtr_listmapTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@listmapTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listmapTypeForGeneration_2D_weak ("listmapTypeForGeneration-weak",
                                                         & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listmapTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listmapTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listmapTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration_2D_weak GALGAS_listmapTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_listmapTypeForGeneration_2D_weak result ;
  const GALGAS_listmapTypeForGeneration_2D_weak * p = (const GALGAS_listmapTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listmapTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listmapTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @dictDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_dictDeclarationAST::objectCompare (const GALGAS_dictDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST::GALGAS_dictDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST GALGAS_dictDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_dictDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstringlist::constructor_emptyList (HERE),
                                                     GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST::GALGAS_dictDeclarationAST (const cPtr_dictDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_dictDeclarationAST::readProperty_mDictTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mDictTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_dictDeclarationAST::readProperty_mKeyTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mKeyTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_dictDeclarationAST::readProperty_mAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_dictDeclarationAST::readProperty_mPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @dictDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dictDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dictDeclarationAST (mProperty_mIsPredefined, mProperty_mDictTypeName, mProperty_mKeyTypeName, mProperty_mAttributeList, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@dictDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dictDeclarationAST ("dictDeclarationAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dictDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dictDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dictDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @dictTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_dictTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dictTypeForGeneration * p = (const cPtr_dictTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeEntry.objectCompare (p->mProperty_mElementTypeEntry) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_dictTypeForGeneration::objectCompare (const GALGAS_dictTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration::GALGAS_dictTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration::GALGAS_dictTypeForGeneration (const cPtr_dictTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration GALGAS_dictTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
                                                                            const GALGAS_unifiedTypeMapEntry & inAttribute_mElementTypeEntry,
                                                                            const GALGAS_lstring & inAttribute_mDictTypeName,
                                                                            const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                            const GALGAS_lstring & inAttribute_mKeyTypeName
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_dictTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mElementTypeEntry.isValid () && inAttribute_mDictTypeName.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mKeyTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dictTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mElementTypeEntry, inAttribute_mDictTypeName, inAttribute_mTypedAttributeList, inAttribute_mKeyTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_dictTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_dictTypeForGeneration::readProperty_mDictTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mDictTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_dictTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_dictTypeForGeneration::readProperty_mKeyTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mKeyTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @dictTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_dictTypeForGeneration::cPtr_dictTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                        const GALGAS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                        const GALGAS_lstring & in_mDictTypeName,
                                                        const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                        const GALGAS_lstring & in_mKeyTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mElementTypeEntry (in_mElementTypeEntry),
mProperty_mDictTypeName (in_mDictTypeName),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mKeyTypeName (in_mKeyTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dictTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration ;
}

void cPtr_dictTypeForGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@dictTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDictTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKeyTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dictTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dictTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mDictTypeName, mProperty_mTypedAttributeList, mProperty_mKeyTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@dictTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dictTypeForGeneration ("dictTypeForGeneration",
                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dictTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dictTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dictTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dictTypeForGeneration_2D_weak::objectCompare (const GALGAS_dictTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration_2D_weak::GALGAS_dictTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration_2D_weak & GALGAS_dictTypeForGeneration_2D_weak::operator = (const GALGAS_dictTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration_2D_weak::GALGAS_dictTypeForGeneration_2D_weak (const GALGAS_dictTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration_2D_weak GALGAS_dictTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dictTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration GALGAS_dictTypeForGeneration_2D_weak::bang_dictTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dictTypeForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dictTypeForGeneration) ;
      result = GALGAS_dictTypeForGeneration ((cPtr_dictTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dictTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dictTypeForGeneration_2D_weak ("dictTypeForGeneration-weak",
                                                      & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dictTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dictTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dictTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration_2D_weak GALGAS_dictTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_dictTypeForGeneration_2D_weak result ;
  const GALGAS_dictTypeForGeneration_2D_weak * p = (const GALGAS_dictTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dictTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @mapDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_mapDeclarationAST::objectCompare (const GALGAS_mapDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST::GALGAS_mapDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST::GALGAS_mapDeclarationAST (const cPtr_mapDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapDeclarationAST::readProperty_mMapTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mMapTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_mapDeclarationAST::readProperty_mAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_mapDeclarationAST::readProperty_mPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_mapDeclarationAST::readProperty_mInsertMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_insertMethodListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mInsertMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapDeclarationAST::readProperty_mSearchMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapSearchMethodListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapDeclarationAST::readProperty_mRemoveMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapRemoveMethodListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mRemoveMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_mapDeclarationAST::readProperty_mInsertOrReplaceDeclarationListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_insertOrReplaceDeclarationListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mInsertOrReplaceDeclarationListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @mapDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_mapDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapDeclarationAST (mProperty_mIsPredefined, mProperty_mMapTypeName, mProperty_mAttributeList, mProperty_mPropertyList, mProperty_mInsertMethodList, mProperty_mSearchMethodList, mProperty_mRemoveMethodList, mProperty_mInsertOrReplaceDeclarationListAST COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@mapDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapDeclarationAST ("mapDeclarationAST",
                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @mapTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_mapTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeEntry.objectCompare (p->mProperty_mElementTypeEntry) ;
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
  if (kOperandEqual == result) {
    result = mProperty_mActivateSuggestions.objectCompare (p->mProperty_mActivateSuggestions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_mapTypeForGeneration::objectCompare (const GALGAS_mapTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration::GALGAS_mapTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration::GALGAS_mapTypeForGeneration (const cPtr_mapTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
                                                                          const GALGAS_unifiedTypeMapEntry & inAttribute_mElementTypeEntry,
                                                                          const GALGAS_lstring & inAttribute_mMapTypeName,
                                                                          const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                          const GALGAS_insertMethodListAST & inAttribute_mInsertMethodList,
                                                                          const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList,
                                                                          const GALGAS_mapRemoveMethodListAST & inAttribute_mRemoveMethodList,
                                                                          const GALGAS_bool & inAttribute_mHasInsertOrReplaceModifier,
                                                                          const GALGAS_bool & inAttribute_mActivateSuggestions
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mElementTypeEntry.isValid () && inAttribute_mMapTypeName.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mInsertMethodList.isValid () && inAttribute_mSearchMethodList.isValid () && inAttribute_mRemoveMethodList.isValid () && inAttribute_mHasInsertOrReplaceModifier.isValid () && inAttribute_mActivateSuggestions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mapTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mElementTypeEntry, inAttribute_mMapTypeName, inAttribute_mTypedAttributeList, inAttribute_mInsertMethodList, inAttribute_mSearchMethodList, inAttribute_mRemoveMethodList, inAttribute_mHasInsertOrReplaceModifier, inAttribute_mActivateSuggestions COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_mapTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapTypeForGeneration::readProperty_mMapTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mMapTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_mapTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_mapTypeForGeneration::readProperty_mInsertMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_insertMethodListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mInsertMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapTypeForGeneration::readProperty_mSearchMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapSearchMethodListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapTypeForGeneration::readProperty_mRemoveMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapRemoveMethodListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mRemoveMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mapTypeForGeneration::readProperty_mHasInsertOrReplaceModifier (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mHasInsertOrReplaceModifier ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mapTypeForGeneration::readProperty_mActivateSuggestions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mActivateSuggestions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @mapTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_mapTypeForGeneration::cPtr_mapTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                      const GALGAS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                      const GALGAS_lstring & in_mMapTypeName,
                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                      const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                      const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                      const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                                      const GALGAS_bool & in_mHasInsertOrReplaceModifier,
                                                      const GALGAS_bool & in_mActivateSuggestions
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mElementTypeEntry (in_mElementTypeEntry),
mProperty_mMapTypeName (in_mMapTypeName),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mInsertMethodList (in_mInsertMethodList),
mProperty_mSearchMethodList (in_mSearchMethodList),
mProperty_mRemoveMethodList (in_mRemoveMethodList),
mProperty_mHasInsertOrReplaceModifier (in_mHasInsertOrReplaceModifier),
mProperty_mActivateSuggestions (in_mActivateSuggestions) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_mapTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

void cPtr_mapTypeForGeneration::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@mapTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeEntry.description (ioString, inIndentation+1) ;
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
  ioString << ", " ;
  mProperty_mActivateSuggestions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_mapTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mMapTypeName, mProperty_mTypedAttributeList, mProperty_mInsertMethodList, mProperty_mSearchMethodList, mProperty_mRemoveMethodList, mProperty_mHasInsertOrReplaceModifier, mProperty_mActivateSuggestions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@mapTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapTypeForGeneration ("mapTypeForGeneration",
                                             & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mapTypeForGeneration_2D_weak::objectCompare (const GALGAS_mapTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration_2D_weak::GALGAS_mapTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration_2D_weak & GALGAS_mapTypeForGeneration_2D_weak::operator = (const GALGAS_mapTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration_2D_weak::GALGAS_mapTypeForGeneration_2D_weak (const GALGAS_mapTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration_2D_weak GALGAS_mapTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_mapTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration_2D_weak::bang_mapTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_mapTypeForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_mapTypeForGeneration) ;
      result = GALGAS_mapTypeForGeneration ((cPtr_mapTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@mapTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapTypeForGeneration_2D_weak ("mapTypeForGeneration-weak",
                                                     & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration_2D_weak GALGAS_mapTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapTypeForGeneration_2D_weak result ;
  const GALGAS_mapTypeForGeneration_2D_weak * p = (const GALGAS_mapTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @sortedListDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sortedListDeclarationAST::objectCompare (const GALGAS_sortedListDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST::GALGAS_sortedListDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                           GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST::GALGAS_sortedListDeclarationAST (const cPtr_sortedListDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sortedListDeclarationAST::readProperty_mSortedListTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mSortedListTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_sortedListDeclarationAST::readProperty_mPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListDeclarationAST::readProperty_mSortDescriptorList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_sortedListSortDescriptorListAST () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mSortDescriptorList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sortedListDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sortedListDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sortedListDeclarationAST (mProperty_mIsPredefined, mProperty_mSortedListTypeName, mProperty_mPropertyList, mProperty_mSortDescriptorList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@sortedListDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListDeclarationAST ("sortedListDeclarationAST",
                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedListDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedListDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @sortedListTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_sortedListTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sortedListTypeForGeneration * p = (const cPtr_sortedListTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sortedListTypeForGeneration::objectCompare (const GALGAS_sortedListTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration::GALGAS_sortedListTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration::GALGAS_sortedListTypeForGeneration (const cPtr_sortedListTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
                                                                                        const GALGAS_unifiedTypeMapEntry & inAttribute_mListElementTypeIndex,
                                                                                        const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                        const GALGAS_sortDescriptorListForGeneration & inAttribute_mSortDescriptorList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sortedListTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mListElementTypeIndex.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSortDescriptorList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sortedListTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mListElementTypeIndex, inAttribute_mTypedAttributeList, inAttribute_mSortDescriptorList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_sortedListTypeForGeneration::readProperty_mListElementTypeIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    return p->mProperty_mListElementTypeIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_sortedListTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortedListTypeForGeneration::readProperty_mSortDescriptorList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_sortDescriptorListForGeneration () ;
  }else{
    cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    return p->mProperty_mSortDescriptorList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sortedListTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_sortedListTypeForGeneration::cPtr_sortedListTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                    const GALGAS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                                                    const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                    const GALGAS_sortDescriptorListForGeneration & in_mSortDescriptorList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mListElementTypeIndex (in_mListElementTypeIndex),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mSortDescriptorList (in_mSortDescriptorList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sortedListTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;
}

void cPtr_sortedListTypeForGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@sortedListTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mListElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSortDescriptorList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sortedListTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sortedListTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mListElementTypeIndex, mProperty_mTypedAttributeList, mProperty_mSortDescriptorList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@sortedListTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListTypeForGeneration ("sortedListTypeForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedListTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedListTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sortedListTypeForGeneration_2D_weak::objectCompare (const GALGAS_sortedListTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration_2D_weak::GALGAS_sortedListTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration_2D_weak & GALGAS_sortedListTypeForGeneration_2D_weak::operator = (const GALGAS_sortedListTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration_2D_weak::GALGAS_sortedListTypeForGeneration_2D_weak (const GALGAS_sortedListTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration_2D_weak GALGAS_sortedListTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_sortedListTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration_2D_weak::bang_sortedListTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListTypeForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sortedListTypeForGeneration) ;
      result = GALGAS_sortedListTypeForGeneration ((cPtr_sortedListTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@sortedListTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListTypeForGeneration_2D_weak ("sortedListTypeForGeneration-weak",
                                                            & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedListTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedListTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration_2D_weak GALGAS_sortedListTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sortedListTypeForGeneration_2D_weak result ;
  const GALGAS_sortedListTypeForGeneration_2D_weak * p = (const GALGAS_sortedListTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedListTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @structDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_structDeclarationAST::objectCompare (const GALGAS_structDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST::GALGAS_structDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST GALGAS_structDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_structDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                       GALGAS_string::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST::GALGAS_structDeclarationAST (const cPtr_structDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structDeclarationAST::readProperty_mStructTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_mStructTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_structDeclarationAST::readProperty_mStructurePropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_mStructurePropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_structDeclarationAST::readProperty_mEnumeratedElementTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_mEnumeratedElementTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @structDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structDeclarationAST (mProperty_mIsPredefined, mProperty_mStructTypeName, mProperty_mStructurePropertyList, mProperty_mEnumeratedElementTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@structDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structDeclarationAST ("structDeclarationAST",
                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @structTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_structTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structTypeForGeneration * p = (const cPtr_structTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedPropertyList.objectCompare (p->mProperty_mTypedPropertyList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_structTypeForGeneration::objectCompare (const GALGAS_structTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration::GALGAS_structTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration::GALGAS_structTypeForGeneration (const cPtr_structTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
                                                                                const GALGAS_typedPropertyList & inAttribute_mTypedPropertyList
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mTypedPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mTypedPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_structTypeForGeneration::readProperty_mTypedPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_structTypeForGeneration * p = (cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    return p->mProperty_mTypedPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @structTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_structTypeForGeneration::cPtr_structTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                            const GALGAS_typedPropertyList & in_mTypedPropertyList
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mTypedPropertyList (in_mTypedPropertyList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration ;
}

void cPtr_structTypeForGeneration::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@structTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mTypedPropertyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@structTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structTypeForGeneration ("structTypeForGeneration",
                                                & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_structTypeForGeneration_2D_weak::objectCompare (const GALGAS_structTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration_2D_weak::GALGAS_structTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration_2D_weak & GALGAS_structTypeForGeneration_2D_weak::operator = (const GALGAS_structTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration_2D_weak::GALGAS_structTypeForGeneration_2D_weak (const GALGAS_structTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration_2D_weak GALGAS_structTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_structTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration_2D_weak::bang_structTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structTypeForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structTypeForGeneration) ;
      result = GALGAS_structTypeForGeneration ((cPtr_structTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@structTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structTypeForGeneration_2D_weak ("structTypeForGeneration-weak",
                                                        & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration_2D_weak GALGAS_structTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structTypeForGeneration_2D_weak result ;
  const GALGAS_structTypeForGeneration_2D_weak * p = (const GALGAS_structTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractExtensionGetterAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_abstractExtensionGetterAST::objectCompare (const GALGAS_abstractExtensionGetterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST::GALGAS_abstractExtensionGetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST GALGAS_abstractExtensionGetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                             GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST::GALGAS_abstractExtensionGetterAST (const cPtr_abstractExtensionGetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionGetterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionGetterAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionGetterAST::readProperty_mAbstractExtensionGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mAbstractExtensionGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_abstractExtensionGetterAST::readProperty_mAbstractExtensionGetterFormalInputParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalInputParameterListAST () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionGetterAST::readProperty_mAbstractExtensionGetterReturnedTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mAbstractExtensionGetterReturnedTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionGetterAST class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionGetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionGetterAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionGetterName, mProperty_mAbstractExtensionGetterFormalInputParameterList, mProperty_mAbstractExtensionGetterReturnedTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionGetterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionGetterAST ("abstractExtensionGetterAST",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionGetterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @abstractExtensionGetterForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_abstractExtensionGetterForGeneration::objectCompare (const GALGAS_abstractExtensionGetterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration::GALGAS_abstractExtensionGetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration::GALGAS_abstractExtensionGetterForGeneration (const cPtr_abstractExtensionGetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionGetterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMapEntry & inAttribute_mReceiverType,
                                                                                                          const GALGAS_string & inAttribute_mAbstractExtensionGetterName,
                                                                                                          const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                          const GALGAS_formalInputParameterListForGeneration & inAttribute_mAbstractExtensionGetterFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mAbstractExtensionGetterName.isValid () && inAttribute_mResultType.isValid () && inAttribute_mAbstractExtensionGetterFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionGetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mAbstractExtensionGetterName, inAttribute_mResultType, inAttribute_mAbstractExtensionGetterFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_abstractExtensionGetterForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_abstractExtensionGetterForGeneration::readProperty_mAbstractExtensionGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mAbstractExtensionGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_abstractExtensionGetterForGeneration::readProperty_mResultType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mResultType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_abstractExtensionGetterForGeneration::readProperty_mAbstractExtensionGetterFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mAbstractExtensionGetterFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionGetterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractExtensionGetterForGeneration::cPtr_abstractExtensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                      const GALGAS_string & in_mAbstractExtensionGetterName,
                                                                                      const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GALGAS_formalInputParameterListForGeneration & in_mAbstractExtensionGetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mAbstractExtensionGetterName (in_mAbstractExtensionGetterName),
mProperty_mResultType (in_mResultType),
mProperty_mAbstractExtensionGetterFormalParameterList (in_mAbstractExtensionGetterFormalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionGetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionGetterForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mAbstractExtensionGetterName, mProperty_mResultType, mProperty_mAbstractExtensionGetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionGetterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ("abstractExtensionGetterForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionGetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionGetterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractExtensionGetterForGeneration_2D_weak::objectCompare (const GALGAS_abstractExtensionGetterForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration_2D_weak::GALGAS_abstractExtensionGetterForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration_2D_weak & GALGAS_abstractExtensionGetterForGeneration_2D_weak::operator = (const GALGAS_abstractExtensionGetterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration_2D_weak::GALGAS_abstractExtensionGetterForGeneration_2D_weak (const GALGAS_abstractExtensionGetterForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration_2D_weak GALGAS_abstractExtensionGetterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration_2D_weak::bang_abstractExtensionGetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionGetterForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionGetterForGeneration) ;
      result = GALGAS_abstractExtensionGetterForGeneration ((cPtr_abstractExtensionGetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionGetterForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration_2D_weak ("abstractExtensionGetterForGeneration-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionGetterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionGetterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionGetterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration_2D_weak GALGAS_abstractExtensionGetterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterForGeneration_2D_weak result ;
  const GALGAS_abstractExtensionGetterForGeneration_2D_weak * p = (const GALGAS_abstractExtensionGetterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionGetterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractExtensionMethodAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_abstractExtensionMethodAST::objectCompare (const GALGAS_abstractExtensionMethodAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST::GALGAS_abstractExtensionMethodAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST GALGAS_abstractExtensionMethodAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionMethodAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST::GALGAS_abstractExtensionMethodAST (const cPtr_abstractExtensionMethodAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionMethodAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractExtensionMethodAST::setter_setMTypeName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractExtensionMethodAST::setter_setMAbstractExtensionMethodName (GALGAS_lstring inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    p->mProperty_mAbstractExtensionMethodName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractExtensionMethodAST::setter_setMAbstractExtensionMethodFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    p->mProperty_mAbstractExtensionMethodFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionMethodAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionMethodAST::readProperty_mAbstractExtensionMethodName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    return p->mProperty_mAbstractExtensionMethodName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_abstractExtensionMethodAST::readProperty_mAbstractExtensionMethodFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalParameterListAST () ;
  }else{
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    return p->mProperty_mAbstractExtensionMethodFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionMethodAST class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionMethodAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionMethodAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionMethodName, mProperty_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionMethodAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionMethodAST ("abstractExtensionMethodAST",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionMethodAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @abstractExtensionMethodForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_abstractExtensionMethodForGeneration::objectCompare (const GALGAS_abstractExtensionMethodForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration::GALGAS_abstractExtensionMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration::GALGAS_abstractExtensionMethodForGeneration (const cPtr_abstractExtensionMethodForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionMethodForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMapEntry & inAttribute_mReceiverType,
                                                                                                          const GALGAS_string & inAttribute_mAbstractExtensionMethodName,
                                                                                                          const GALGAS_formalParameterListForGeneration & inAttribute_mAbstractExtensionMethodFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mAbstractExtensionMethodName.isValid () && inAttribute_mAbstractExtensionMethodFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionMethodForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mAbstractExtensionMethodName, inAttribute_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractExtensionMethodForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMapEntry inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractExtensionMethodForGeneration::setter_setMAbstractExtensionMethodName (GALGAS_string inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    p->mProperty_mAbstractExtensionMethodName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractExtensionMethodForGeneration::setter_setMAbstractExtensionMethodFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    p->mProperty_mAbstractExtensionMethodFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_abstractExtensionMethodForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_abstractExtensionMethodForGeneration::readProperty_mAbstractExtensionMethodName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    return p->mProperty_mAbstractExtensionMethodName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_abstractExtensionMethodForGeneration::readProperty_mAbstractExtensionMethodFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalParameterListForGeneration () ;
  }else{
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    return p->mProperty_mAbstractExtensionMethodFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionMethodForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractExtensionMethodForGeneration::cPtr_abstractExtensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                      const GALGAS_string & in_mAbstractExtensionMethodName,
                                                                                      const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionMethodFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mAbstractExtensionMethodName (in_mAbstractExtensionMethodName),
mProperty_mAbstractExtensionMethodFormalParameterList (in_mAbstractExtensionMethodFormalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionMethodForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionMethodForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mAbstractExtensionMethodName, mProperty_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionMethodForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ("abstractExtensionMethodForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionMethodForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractExtensionMethodForGeneration_2D_weak::objectCompare (const GALGAS_abstractExtensionMethodForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak::GALGAS_abstractExtensionMethodForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak & GALGAS_abstractExtensionMethodForGeneration_2D_weak::operator = (const GALGAS_abstractExtensionMethodForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak::GALGAS_abstractExtensionMethodForGeneration_2D_weak (const GALGAS_abstractExtensionMethodForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak GALGAS_abstractExtensionMethodForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration_2D_weak::bang_abstractExtensionMethodForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionMethodForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionMethodForGeneration) ;
      result = GALGAS_abstractExtensionMethodForGeneration ((cPtr_abstractExtensionMethodForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionMethodForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration_2D_weak ("abstractExtensionMethodForGeneration-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionMethodForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionMethodForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionMethodForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak GALGAS_abstractExtensionMethodForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration_2D_weak result ;
  const GALGAS_abstractExtensionMethodForGeneration_2D_weak * p = (const GALGAS_abstractExtensionMethodForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionMethodForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractExtensionSetterAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_abstractExtensionSetterAST::objectCompare (const GALGAS_abstractExtensionSetterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST::GALGAS_abstractExtensionSetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionSetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST::GALGAS_abstractExtensionSetterAST (const cPtr_abstractExtensionSetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionSetterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionSetterAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionSetterAST::readProperty_mAbstractExtensionSetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    return p->mProperty_mAbstractExtensionSetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_abstractExtensionSetterAST::readProperty_mAbstractExtensionSetterFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalParameterListAST () ;
  }else{
    cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    return p->mProperty_mAbstractExtensionSetterFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionSetterAST class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionSetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionSetterAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionSetterName, mProperty_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionSetterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionSetterAST ("abstractExtensionSetterAST",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @abstractExtensionSetterForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_abstractExtensionSetterForGeneration::objectCompare (const GALGAS_abstractExtensionSetterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration::GALGAS_abstractExtensionSetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration::GALGAS_abstractExtensionSetterForGeneration (const cPtr_abstractExtensionSetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionSetterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMapEntry & inAttribute_mReceiverType,
                                                                                                          const GALGAS_string & inAttribute_mAbstractExtensionSetterName,
                                                                                                          const GALGAS_formalParameterListForGeneration & inAttribute_mAbstractExtensionSetterFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mAbstractExtensionSetterName.isValid () && inAttribute_mAbstractExtensionSetterFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionSetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mAbstractExtensionSetterName, inAttribute_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_abstractExtensionSetterForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_abstractExtensionSetterForGeneration::readProperty_mAbstractExtensionSetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    return p->mProperty_mAbstractExtensionSetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_abstractExtensionSetterForGeneration::readProperty_mAbstractExtensionSetterFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalParameterListForGeneration () ;
  }else{
    cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    return p->mProperty_mAbstractExtensionSetterFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionSetterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractExtensionSetterForGeneration::cPtr_abstractExtensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                      const GALGAS_string & in_mAbstractExtensionSetterName,
                                                                                      const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionSetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mAbstractExtensionSetterName (in_mAbstractExtensionSetterName),
mProperty_mAbstractExtensionSetterFormalParameterList (in_mAbstractExtensionSetterFormalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionSetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionSetterForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mAbstractExtensionSetterName, mProperty_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionSetterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ("abstractExtensionSetterForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionSetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractExtensionSetterForGeneration_2D_weak::objectCompare (const GALGAS_abstractExtensionSetterForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak::GALGAS_abstractExtensionSetterForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak & GALGAS_abstractExtensionSetterForGeneration_2D_weak::operator = (const GALGAS_abstractExtensionSetterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak::GALGAS_abstractExtensionSetterForGeneration_2D_weak (const GALGAS_abstractExtensionSetterForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak GALGAS_abstractExtensionSetterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration_2D_weak::bang_abstractExtensionSetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionSetterForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionSetterForGeneration) ;
      result = GALGAS_abstractExtensionSetterForGeneration ((cPtr_abstractExtensionSetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionSetterForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration_2D_weak ("abstractExtensionSetterForGeneration-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionSetterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak GALGAS_abstractExtensionSetterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration_2D_weak result ;
  const GALGAS_abstractExtensionSetterForGeneration_2D_weak * p = (const GALGAS_abstractExtensionSetterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionSetterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @extensionGetterAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_extensionGetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionGetterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_requiresSelfForAccessingProperty.objectCompare (p->mProperty_requiresSelfForAccessingProperty) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_extensionGetterAST::objectCompare (const GALGAS_extensionGetterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST::GALGAS_extensionGetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST GALGAS_extensionGetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionGetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST::GALGAS_extensionGetterAST (const cPtr_extensionGetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionGetterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST GALGAS_extensionGetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_bool & inAttribute_requiresSelfForAccessingProperty,
                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionGetterName,
                                                                      const GALGAS_formalInputParameterListAST & inAttribute_mExtensionGetterFormalInputParameterList,
                                                                      const GALGAS_lstring & inAttribute_mExtensionGetterReturnedTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionGetterReturnedVariableName,
                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mExtensionGetterInstructionList,
                                                                      const GALGAS_location & inAttribute_mEndOfReaderLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_requiresSelfForAccessingProperty.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mExtensionGetterName.isValid () && inAttribute_mExtensionGetterFormalInputParameterList.isValid () && inAttribute_mExtensionGetterReturnedTypeName.isValid () && inAttribute_mExtensionGetterReturnedVariableName.isValid () && inAttribute_mExtensionGetterInstructionList.isValid () && inAttribute_mEndOfReaderLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionGetterAST (inAttribute_mIsPredefined, inAttribute_requiresSelfForAccessingProperty, inAttribute_mTypeName, inAttribute_mExtensionGetterName, inAttribute_mExtensionGetterFormalInputParameterList, inAttribute_mExtensionGetterReturnedTypeName, inAttribute_mExtensionGetterReturnedVariableName, inAttribute_mExtensionGetterInstructionList, inAttribute_mEndOfReaderLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_extensionGetterAST::readProperty_requiresSelfForAccessingProperty (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_requiresSelfForAccessingProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::readProperty_mExtensionGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_extensionGetterAST::readProperty_mExtensionGetterFormalInputParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalInputParameterListAST () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterFormalInputParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::readProperty_mExtensionGetterReturnedTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterReturnedTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::readProperty_mExtensionGetterReturnedVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterReturnedVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_extensionGetterAST::readProperty_mExtensionGetterInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_extensionGetterAST::readProperty_mEndOfReaderLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mEndOfReaderLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extensionGetterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extensionGetterAST::cPtr_extensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_lstring & in_mExtensionGetterName,
                                                  const GALGAS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                                  const GALGAS_lstring & in_mExtensionGetterReturnedTypeName,
                                                  const GALGAS_lstring & in_mExtensionGetterReturnedVariableName,
                                                  const GALGAS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                                  const GALGAS_location & in_mEndOfReaderLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (in_requiresSelfForAccessingProperty),
mProperty_mTypeName (in_mTypeName),
mProperty_mExtensionGetterName (in_mExtensionGetterName),
mProperty_mExtensionGetterFormalInputParameterList (in_mExtensionGetterFormalInputParameterList),
mProperty_mExtensionGetterReturnedTypeName (in_mExtensionGetterReturnedTypeName),
mProperty_mExtensionGetterReturnedVariableName (in_mExtensionGetterReturnedVariableName),
mProperty_mExtensionGetterInstructionList (in_mExtensionGetterInstructionList),
mProperty_mEndOfReaderLocation (in_mEndOfReaderLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST ;
}

void cPtr_extensionGetterAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@extensionGetterAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extensionGetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionGetterAST (mProperty_mIsPredefined, mProperty_requiresSelfForAccessingProperty, mProperty_mTypeName, mProperty_mExtensionGetterName, mProperty_mExtensionGetterFormalInputParameterList, mProperty_mExtensionGetterReturnedTypeName, mProperty_mExtensionGetterReturnedVariableName, mProperty_mExtensionGetterInstructionList, mProperty_mEndOfReaderLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@extensionGetterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterAST ("extensionGetterAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @extensionGetterForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_extensionGetterForGeneration::objectCompare (const GALGAS_extensionGetterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration::GALGAS_extensionGetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration::GALGAS_extensionGetterForGeneration (const cPtr_extensionGetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionGetterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration GALGAS_extensionGetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMapEntry & inAttribute_mReceiverType,
                                                                                          const GALGAS_string & inAttribute_mExtensionGetterName,
                                                                                          const GALGAS_bool & inAttribute_mImplementedAsFunction,
                                                                                          const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_extensionGetterForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_extensionGetterForGeneration::readProperty_mExtensionGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mExtensionGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_extensionGetterForGeneration::readProperty_mImplementedAsFunction (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mImplementedAsFunction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_extensionGetterForGeneration::readProperty_mResultType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mResultType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_extensionGetterForGeneration::readProperty_mResultVarCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mResultVarCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_extensionGetterForGeneration::readProperty_mExtensionGetterFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mExtensionGetterFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_extensionGetterForGeneration::readProperty_mTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_extensionGetterForGeneration::readProperty_mSemanticInstructionListForGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mSemanticInstructionListForGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extensionGetterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extensionGetterForGeneration::cPtr_extensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                      const GALGAS_string & in_mExtensionGetterName,
                                                                      const GALGAS_bool & in_mImplementedAsFunction,
                                                                      const GALGAS_unifiedTypeMapEntry & in_mResultType,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extensionGetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionGetterForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mExtensionGetterName, mProperty_mImplementedAsFunction, mProperty_mResultType, mProperty_mResultVarCppName, mProperty_mExtensionGetterFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@extensionGetterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterForGeneration ("extensionGetterForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionGetterForGeneration_2D_weak::objectCompare (const GALGAS_extensionGetterForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration_2D_weak::GALGAS_extensionGetterForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration_2D_weak & GALGAS_extensionGetterForGeneration_2D_weak::operator = (const GALGAS_extensionGetterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration_2D_weak::GALGAS_extensionGetterForGeneration_2D_weak (const GALGAS_extensionGetterForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration_2D_weak GALGAS_extensionGetterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_extensionGetterForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration GALGAS_extensionGetterForGeneration_2D_weak::bang_extensionGetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_extensionGetterForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionGetterForGeneration) ;
      result = GALGAS_extensionGetterForGeneration ((cPtr_extensionGetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionGetterForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterForGeneration_2D_weak ("extensionGetterForGeneration-weak",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration_2D_weak GALGAS_extensionGetterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterForGeneration_2D_weak result ;
  const GALGAS_extensionGetterForGeneration_2D_weak * p = (const GALGAS_extensionGetterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @extensionMethodAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_extensionMethodAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionMethodAST * p = (const cPtr_extensionMethodAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionMethodAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_requiresSelfForAccessingProperty.objectCompare (p->mProperty_requiresSelfForAccessingProperty) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_extensionMethodAST::objectCompare (const GALGAS_extensionMethodAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodAST::GALGAS_extensionMethodAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodAST GALGAS_extensionMethodAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionMethodAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                     GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodAST::GALGAS_extensionMethodAST (const cPtr_extensionMethodAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionMethodAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodAST GALGAS_extensionMethodAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_bool & inAttribute_requiresSelfForAccessingProperty,
                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionMethodName,
                                                                      const GALGAS_formalParameterListAST & inAttribute_mExtensionMethodFormalParameterList,
                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mExtensionMethodInstructionList,
                                                                      const GALGAS_location & inAttribute_mEndOfMethodLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_requiresSelfForAccessingProperty.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mExtensionMethodName.isValid () && inAttribute_mExtensionMethodFormalParameterList.isValid () && inAttribute_mExtensionMethodInstructionList.isValid () && inAttribute_mEndOfMethodLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionMethodAST (inAttribute_mIsPredefined, inAttribute_requiresSelfForAccessingProperty, inAttribute_mTypeName, inAttribute_mExtensionMethodName, inAttribute_mExtensionMethodFormalParameterList, inAttribute_mExtensionMethodInstructionList, inAttribute_mEndOfMethodLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_extensionMethodAST::readProperty_requiresSelfForAccessingProperty (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    return p->mProperty_requiresSelfForAccessingProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionMethodAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionMethodAST::readProperty_mExtensionMethodName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    return p->mProperty_mExtensionMethodName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_extensionMethodAST::readProperty_mExtensionMethodFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalParameterListAST () ;
  }else{
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    return p->mProperty_mExtensionMethodFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_extensionMethodAST::readProperty_mExtensionMethodInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    return p->mProperty_mExtensionMethodInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_extensionMethodAST::readProperty_mEndOfMethodLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    return p->mProperty_mEndOfMethodLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extensionMethodAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extensionMethodAST::cPtr_extensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_lstring & in_mExtensionMethodName,
                                                  const GALGAS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                                  const GALGAS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                                  const GALGAS_location & in_mEndOfMethodLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (in_requiresSelfForAccessingProperty),
mProperty_mTypeName (in_mTypeName),
mProperty_mExtensionMethodName (in_mExtensionMethodName),
mProperty_mExtensionMethodFormalParameterList (in_mExtensionMethodFormalParameterList),
mProperty_mExtensionMethodInstructionList (in_mExtensionMethodInstructionList),
mProperty_mEndOfMethodLocation (in_mEndOfMethodLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodAST ;
}

void cPtr_extensionMethodAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@extensionMethodAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extensionMethodAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionMethodAST (mProperty_mIsPredefined, mProperty_requiresSelfForAccessingProperty, mProperty_mTypeName, mProperty_mExtensionMethodName, mProperty_mExtensionMethodFormalParameterList, mProperty_mExtensionMethodInstructionList, mProperty_mEndOfMethodLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@extensionMethodAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodAST ("extensionMethodAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

