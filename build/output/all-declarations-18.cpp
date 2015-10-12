#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-18.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_messageInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_messageInstructionAST * p = (const cPtr_messageInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_messageInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_messageInstructionAST::objectCompare (const GALGAS_messageInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_messageInstructionAST::GALGAS_messageInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_messageInstructionAST::GALGAS_messageInstructionAST (const cPtr_messageInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_messageInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_messageInstructionAST GALGAS_messageInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_messageInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_messageInstructionAST (inAttribute_mInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_messageInstructionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_messageInstructionAST * p = (const cPtr_messageInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_messageInstructionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_messageInstructionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @messageInstructionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_messageInstructionAST::cPtr_messageInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_semanticExpressionAST & in_mExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_messageInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionAST ;
}

void cPtr_messageInstructionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@messageInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_messageInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_messageInstructionAST (mAttribute_mInstructionLocation, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @messageInstructionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_messageInstructionAST ("messageInstructionAST",
                                              & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_messageInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_messageInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_messageInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_messageInstructionAST GALGAS_messageInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_messageInstructionAST result ;
  const GALGAS_messageInstructionAST * p = (const GALGAS_messageInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_messageInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("messageInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_methodCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverExpression.objectCompare (p->mAttribute_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMethodName.objectCompare (p->mAttribute_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_methodCallInstructionAST::objectCompare (const GALGAS_methodCallInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodCallInstructionAST::GALGAS_methodCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodCallInstructionAST::GALGAS_methodCallInstructionAST (const cPtr_methodCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_methodCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodCallInstructionAST GALGAS_methodCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mReceiverExpression,
                                                                                  const GALGAS_lstring & inAttribute_mMethodName,
                                                                                  const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mMethodName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_methodCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverExpression, inAttribute_mMethodName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_methodCallInstructionAST::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    result = p->mAttribute_mReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_methodCallInstructionAST::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_methodCallInstructionAST::reader_mMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    result = p->mAttribute_mMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_methodCallInstructionAST::reader_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_methodCallInstructionAST::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST cPtr_methodCallInstructionAST::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @methodCallInstructionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_methodCallInstructionAST::cPtr_methodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                              const GALGAS_lstring & in_mMethodName,
                                                              const GALGAS_actualParameterListAST & in_mActualParameterList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mReceiverExpression (in_mReceiverExpression),
mAttribute_mMethodName (in_mMethodName),
mAttribute_mActualParameterList (in_mActualParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_methodCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST ;
}

void cPtr_methodCallInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@methodCallInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_methodCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_methodCallInstructionAST (mAttribute_mInstructionLocation, mAttribute_mReceiverExpression, mAttribute_mMethodName, mAttribute_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @methodCallInstructionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodCallInstructionAST ("methodCallInstructionAST",
                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_methodCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_methodCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodCallInstructionAST GALGAS_methodCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionAST result ;
  const GALGAS_methodCallInstructionAST * p = (const GALGAS_methodCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_methodCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_plusEqualElementsInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_plusEqualElementsInstructionAST * p = (const cPtr_plusEqualElementsInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverName.objectCompare (p->mAttribute_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructAttributeList.objectCompare (p->mAttribute_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressions.objectCompare (p->mAttribute_mExpressions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_plusEqualElementsInstructionAST::objectCompare (const GALGAS_plusEqualElementsInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_plusEqualElementsInstructionAST::GALGAS_plusEqualElementsInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_plusEqualElementsInstructionAST GALGAS_plusEqualElementsInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_plusEqualElementsInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                  GALGAS_actualOutputExpressionList::constructor_emptyList (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_plusEqualElementsInstructionAST::GALGAS_plusEqualElementsInstructionAST (const cPtr_plusEqualElementsInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_plusEqualElementsInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_plusEqualElementsInstructionAST GALGAS_plusEqualElementsInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                const GALGAS_actualOutputExpressionList & inAttribute_mExpressions
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualElementsInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpressions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_plusEqualElementsInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mExpressions COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_plusEqualElementsInstructionAST::reader_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualElementsInstructionAST * p = (const cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    result = p->mAttribute_mReceiverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_plusEqualElementsInstructionAST::reader_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_plusEqualElementsInstructionAST::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualElementsInstructionAST * p = (const cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_plusEqualElementsInstructionAST::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_plusEqualElementsInstructionAST::reader_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualElementsInstructionAST * p = (const cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    result = p->mAttribute_mExpressions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList cPtr_plusEqualElementsInstructionAST::reader_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressions ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @plusEqualElementsInstructionAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_plusEqualElementsInstructionAST::cPtr_plusEqualElementsInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mReceiverName,
                                                                            const GALGAS_lstringlist & in_mStructAttributeList,
                                                                            const GALGAS_actualOutputExpressionList & in_mExpressions
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mReceiverName (in_mReceiverName),
mAttribute_mStructAttributeList (in_mStructAttributeList),
mAttribute_mExpressions (in_mExpressions) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_plusEqualElementsInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ;
}

void cPtr_plusEqualElementsInstructionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@plusEqualElementsInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_plusEqualElementsInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_plusEqualElementsInstructionAST (mAttribute_mInstructionLocation, mAttribute_mReceiverName, mAttribute_mStructAttributeList, mAttribute_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @plusEqualElementsInstructionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ("plusEqualElementsInstructionAST",
                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_plusEqualElementsInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_plusEqualElementsInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualElementsInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_plusEqualElementsInstructionAST GALGAS_plusEqualElementsInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualElementsInstructionAST result ;
  const GALGAS_plusEqualElementsInstructionAST * p = (const GALGAS_plusEqualElementsInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_plusEqualElementsInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualElementsInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_plusEqualExpressionInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_plusEqualExpressionInstructionAST * p = (const cPtr_plusEqualExpressionInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverName.objectCompare (p->mAttribute_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructAttributeList.objectCompare (p->mAttribute_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_plusEqualExpressionInstructionAST::objectCompare (const GALGAS_plusEqualExpressionInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_plusEqualExpressionInstructionAST::GALGAS_plusEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_plusEqualExpressionInstructionAST::GALGAS_plusEqualExpressionInstructionAST (const cPtr_plusEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_plusEqualExpressionInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_plusEqualExpressionInstructionAST GALGAS_plusEqualExpressionInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                    const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                    const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualExpressionInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_plusEqualExpressionInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_plusEqualExpressionInstructionAST::reader_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualExpressionInstructionAST * p = (const cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    result = p->mAttribute_mReceiverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_plusEqualExpressionInstructionAST::reader_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_plusEqualExpressionInstructionAST::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualExpressionInstructionAST * p = (const cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_plusEqualExpressionInstructionAST::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_plusEqualExpressionInstructionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_plusEqualExpressionInstructionAST * p = (const cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_plusEqualExpressionInstructionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @plusEqualExpressionInstructionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_plusEqualExpressionInstructionAST::cPtr_plusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_lstring & in_mReceiverName,
                                                                                const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                const GALGAS_semanticExpressionAST & in_mExpression
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mReceiverName (in_mReceiverName),
mAttribute_mStructAttributeList (in_mStructAttributeList),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_plusEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ;
}

void cPtr_plusEqualExpressionInstructionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@plusEqualExpressionInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_plusEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_plusEqualExpressionInstructionAST (mAttribute_mInstructionLocation, mAttribute_mReceiverName, mAttribute_mStructAttributeList, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @plusEqualExpressionInstructionAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ("plusEqualExpressionInstructionAST",
                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_plusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_plusEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_plusEqualExpressionInstructionAST GALGAS_plusEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualExpressionInstructionAST result ;
  const GALGAS_plusEqualExpressionInstructionAST * p = (const GALGAS_plusEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_plusEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_procCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineName.objectCompare (p->mAttribute_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_procCallInstructionAST::objectCompare (const GALGAS_procCallInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionAST::GALGAS_procCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_procCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_actualParameterListAST::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionAST::GALGAS_procCallInstructionAST (const cPtr_procCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                              const GALGAS_lstring & inAttribute_mRoutineName,
                                                                              const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRoutineName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mRoutineName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procCallInstructionAST::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    result = p->mAttribute_mRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_procCallInstructionAST::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_procCallInstructionAST::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST cPtr_procCallInstructionAST::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @procCallInstructionAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_procCallInstructionAST::cPtr_procCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_lstring & in_mRoutineName,
                                                          const GALGAS_actualParameterListAST & in_mActualParameterList
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mRoutineName (in_mRoutineName),
mAttribute_mActualParameterList (in_mActualParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_procCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

void cPtr_procCallInstructionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@procCallInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_procCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_procCallInstructionAST (mAttribute_mInstructionLocation, mAttribute_mRoutineName, mAttribute_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @procCallInstructionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallInstructionAST ("procCallInstructionAST",
                                               & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionAST result ;
  const GALGAS_procCallInstructionAST * p = (const GALGAS_procCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_readAccessWithInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPrefix.objectCompare (p->mAttribute_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverExpression.objectCompare (p->mAttribute_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfReceiverExpression.objectCompare (p->mAttribute_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKeyExpression.objectCompare (p->mAttribute_mKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfKeyExpression.objectCompare (p->mAttribute_mEndOfKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (p->mAttribute_mSearchMethodNameForErrorSignaling) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDoBranchInstructions.objectCompare (p->mAttribute_mDoBranchInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_do_5F_instructions.objectCompare (p->mAttribute_mEndOf_5F_do_5F_instructions) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseBranchInstructions.objectCompare (p->mAttribute_mElseBranchInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_else_5F_instructions.objectCompare (p->mAttribute_mEndOf_5F_else_5F_instructions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_readAccessWithInstructionAST::objectCompare (const GALGAS_readAccessWithInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_readAccessWithInstructionAST::GALGAS_readAccessWithInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_readAccessWithInstructionAST::GALGAS_readAccessWithInstructionAST (const cPtr_readAccessWithInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_readAccessWithInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_readAccessWithInstructionAST GALGAS_readAccessWithInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mPrefix,
                                                                                          const GALGAS_semanticExpressionAST & inAttribute_mReceiverExpression,
                                                                                          const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                                          const GALGAS_semanticExpressionAST & inAttribute_mKeyExpression,
                                                                                          const GALGAS_location & inAttribute_mEndOfKeyExpression,
                                                                                          const GALGAS_lstring & inAttribute_mSearchMethodNameForErrorSignaling,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mDoBranchInstructions,
                                                                                          const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instructions,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mElseBranchInstructions,
                                                                                          const GALGAS_location & inAttribute_mEndOf_5F_else_5F_instructions
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_readAccessWithInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefix.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mKeyExpression.isValid () && inAttribute_mEndOfKeyExpression.isValid () && inAttribute_mSearchMethodNameForErrorSignaling.isValid () && inAttribute_mDoBranchInstructions.isValid () && inAttribute_mEndOf_5F_do_5F_instructions.isValid () && inAttribute_mElseBranchInstructions.isValid () && inAttribute_mEndOf_5F_else_5F_instructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_readAccessWithInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefix, inAttribute_mReceiverExpression, inAttribute_mEndOfReceiverExpression, inAttribute_mKeyExpression, inAttribute_mEndOfKeyExpression, inAttribute_mSearchMethodNameForErrorSignaling, inAttribute_mDoBranchInstructions, inAttribute_mEndOf_5F_do_5F_instructions, inAttribute_mElseBranchInstructions, inAttribute_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_readAccessWithInstructionAST::reader_mPrefix (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mAttribute_mPrefix ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_readAccessWithInstructionAST::reader_mPrefix (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrefix ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_readAccessWithInstructionAST::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mAttribute_mReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_readAccessWithInstructionAST::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_readAccessWithInstructionAST::reader_mEndOfReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mAttribute_mEndOfReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_readAccessWithInstructionAST::reader_mEndOfReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_readAccessWithInstructionAST::reader_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mAttribute_mKeyExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_readAccessWithInstructionAST::reader_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKeyExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_readAccessWithInstructionAST::reader_mEndOfKeyExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mAttribute_mEndOfKeyExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_readAccessWithInstructionAST::reader_mEndOfKeyExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfKeyExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_readAccessWithInstructionAST::reader_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mAttribute_mSearchMethodNameForErrorSignaling ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_readAccessWithInstructionAST::reader_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSearchMethodNameForErrorSignaling ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_readAccessWithInstructionAST::reader_mDoBranchInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mAttribute_mDoBranchInstructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_readAccessWithInstructionAST::reader_mDoBranchInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDoBranchInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_readAccessWithInstructionAST::reader_mEndOf_5F_do_5F_instructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_do_5F_instructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_readAccessWithInstructionAST::reader_mEndOf_5F_do_5F_instructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_do_5F_instructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_readAccessWithInstructionAST::reader_mElseBranchInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mAttribute_mElseBranchInstructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_readAccessWithInstructionAST::reader_mElseBranchInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseBranchInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_readAccessWithInstructionAST::reader_mEndOf_5F_else_5F_instructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_else_5F_instructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_readAccessWithInstructionAST::reader_mEndOf_5F_else_5F_instructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_else_5F_instructions ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @readAccessWithInstructionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_readAccessWithInstructionAST::cPtr_readAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mPrefix,
                                                                      const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                                      const GALGAS_location & in_mEndOfReceiverExpression,
                                                                      const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                                                      const GALGAS_location & in_mEndOfKeyExpression,
                                                                      const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                                                      const GALGAS_semanticInstructionListAST & in_mDoBranchInstructions,
                                                                      const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                                                      const GALGAS_semanticInstructionListAST & in_mElseBranchInstructions,
                                                                      const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mPrefix (in_mPrefix),
mAttribute_mReceiverExpression (in_mReceiverExpression),
mAttribute_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mAttribute_mKeyExpression (in_mKeyExpression),
mAttribute_mEndOfKeyExpression (in_mEndOfKeyExpression),
mAttribute_mSearchMethodNameForErrorSignaling (in_mSearchMethodNameForErrorSignaling),
mAttribute_mDoBranchInstructions (in_mDoBranchInstructions),
mAttribute_mEndOf_5F_do_5F_instructions (in_mEndOf_5F_do_5F_instructions),
mAttribute_mElseBranchInstructions (in_mElseBranchInstructions),
mAttribute_mEndOf_5F_else_5F_instructions (in_mEndOf_5F_else_5F_instructions) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_readAccessWithInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readAccessWithInstructionAST ;
}

void cPtr_readAccessWithInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@readAccessWithInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPrefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSearchMethodNameForErrorSignaling.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDoBranchInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_do_5F_instructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseBranchInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_else_5F_instructions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_readAccessWithInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_readAccessWithInstructionAST (mAttribute_mInstructionLocation, mAttribute_mPrefix, mAttribute_mReceiverExpression, mAttribute_mEndOfReceiverExpression, mAttribute_mKeyExpression, mAttribute_mEndOfKeyExpression, mAttribute_mSearchMethodNameForErrorSignaling, mAttribute_mDoBranchInstructions, mAttribute_mEndOf_5F_do_5F_instructions, mAttribute_mElseBranchInstructions, mAttribute_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @readAccessWithInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readAccessWithInstructionAST ("readAccessWithInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_readAccessWithInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readAccessWithInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_readAccessWithInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readAccessWithInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_readAccessWithInstructionAST GALGAS_readAccessWithInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_readAccessWithInstructionAST result ;
  const GALGAS_readAccessWithInstructionAST * p = (const GALGAS_readAccessWithInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_readAccessWithInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readAccessWithInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_readWriteAccessWithInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPrefix.objectCompare (p->mAttribute_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverName.objectCompare (p->mAttribute_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFieldList.objectCompare (p->mAttribute_mFieldList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfReceiverExpression.objectCompare (p->mAttribute_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKeyExpression.objectCompare (p->mAttribute_mKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfKeyExpression.objectCompare (p->mAttribute_mEndOfKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (p->mAttribute_mSearchMethodNameForErrorSignaling) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_do_5F_Instructions.objectCompare (p->mAttribute_m_5F_do_5F_Instructions) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_do_5F_instructions.objectCompare (p->mAttribute_mEndOf_5F_do_5F_instructions) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_else_5F_Instructions.objectCompare (p->mAttribute_m_5F_else_5F_Instructions) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_else_5F_instructions.objectCompare (p->mAttribute_mEndOf_5F_else_5F_instructions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_readWriteAccessWithInstructionAST::objectCompare (const GALGAS_readWriteAccessWithInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_readWriteAccessWithInstructionAST::GALGAS_readWriteAccessWithInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_readWriteAccessWithInstructionAST::GALGAS_readWriteAccessWithInstructionAST (const cPtr_readWriteAccessWithInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_readWriteAccessWithInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_readWriteAccessWithInstructionAST GALGAS_readWriteAccessWithInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_lstring & inAttribute_mPrefix,
                                                                                                    const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                    const GALGAS_lstringlist & inAttribute_mFieldList,
                                                                                                    const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                                                    const GALGAS_semanticExpressionAST & inAttribute_mKeyExpression,
                                                                                                    const GALGAS_location & inAttribute_mEndOfKeyExpression,
                                                                                                    const GALGAS_lstring & inAttribute_mSearchMethodNameForErrorSignaling,
                                                                                                    const GALGAS_semanticInstructionListAST & inAttribute_m_5F_do_5F_Instructions,
                                                                                                    const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instructions,
                                                                                                    const GALGAS_semanticInstructionListAST & inAttribute_m_5F_else_5F_Instructions,
                                                                                                    const GALGAS_location & inAttribute_mEndOf_5F_else_5F_instructions
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_readWriteAccessWithInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefix.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mFieldList.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mKeyExpression.isValid () && inAttribute_mEndOfKeyExpression.isValid () && inAttribute_mSearchMethodNameForErrorSignaling.isValid () && inAttribute_m_5F_do_5F_Instructions.isValid () && inAttribute_mEndOf_5F_do_5F_instructions.isValid () && inAttribute_m_5F_else_5F_Instructions.isValid () && inAttribute_mEndOf_5F_else_5F_instructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_readWriteAccessWithInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefix, inAttribute_mReceiverName, inAttribute_mFieldList, inAttribute_mEndOfReceiverExpression, inAttribute_mKeyExpression, inAttribute_mEndOfKeyExpression, inAttribute_mSearchMethodNameForErrorSignaling, inAttribute_m_5F_do_5F_Instructions, inAttribute_mEndOf_5F_do_5F_instructions, inAttribute_m_5F_else_5F_Instructions, inAttribute_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_readWriteAccessWithInstructionAST::reader_mPrefix (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mAttribute_mPrefix ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_readWriteAccessWithInstructionAST::reader_mPrefix (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrefix ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_readWriteAccessWithInstructionAST::reader_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mAttribute_mReceiverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_readWriteAccessWithInstructionAST::reader_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_readWriteAccessWithInstructionAST::reader_mFieldList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mAttribute_mFieldList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_readWriteAccessWithInstructionAST::reader_mFieldList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::reader_mEndOfReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mAttribute_mEndOfReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_readWriteAccessWithInstructionAST::reader_mEndOfReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_readWriteAccessWithInstructionAST::reader_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mAttribute_mKeyExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_readWriteAccessWithInstructionAST::reader_mKeyExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKeyExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::reader_mEndOfKeyExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mAttribute_mEndOfKeyExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_readWriteAccessWithInstructionAST::reader_mEndOfKeyExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfKeyExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_readWriteAccessWithInstructionAST::reader_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mAttribute_mSearchMethodNameForErrorSignaling ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_readWriteAccessWithInstructionAST::reader_mSearchMethodNameForErrorSignaling (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSearchMethodNameForErrorSignaling ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_readWriteAccessWithInstructionAST::reader_m_5F_do_5F_Instructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mAttribute_m_5F_do_5F_Instructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_readWriteAccessWithInstructionAST::reader_m_5F_do_5F_Instructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_do_5F_Instructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::reader_mEndOf_5F_do_5F_instructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_do_5F_instructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_readWriteAccessWithInstructionAST::reader_mEndOf_5F_do_5F_instructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_do_5F_instructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_readWriteAccessWithInstructionAST::reader_m_5F_else_5F_Instructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mAttribute_m_5F_else_5F_Instructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_readWriteAccessWithInstructionAST::reader_m_5F_else_5F_Instructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_else_5F_Instructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::reader_mEndOf_5F_else_5F_instructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_else_5F_instructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_readWriteAccessWithInstructionAST::reader_mEndOf_5F_else_5F_instructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_else_5F_instructions ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @readWriteAccessWithInstructionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_readWriteAccessWithInstructionAST::cPtr_readWriteAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_lstring & in_mPrefix,
                                                                                const GALGAS_lstring & in_mReceiverName,
                                                                                const GALGAS_lstringlist & in_mFieldList,
                                                                                const GALGAS_location & in_mEndOfReceiverExpression,
                                                                                const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                                                                const GALGAS_location & in_mEndOfKeyExpression,
                                                                                const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                                                                const GALGAS_semanticInstructionListAST & in_m_5F_do_5F_Instructions,
                                                                                const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                                                                const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_Instructions,
                                                                                const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mPrefix (in_mPrefix),
mAttribute_mReceiverName (in_mReceiverName),
mAttribute_mFieldList (in_mFieldList),
mAttribute_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mAttribute_mKeyExpression (in_mKeyExpression),
mAttribute_mEndOfKeyExpression (in_mEndOfKeyExpression),
mAttribute_mSearchMethodNameForErrorSignaling (in_mSearchMethodNameForErrorSignaling),
mAttribute_m_5F_do_5F_Instructions (in_m_5F_do_5F_Instructions),
mAttribute_mEndOf_5F_do_5F_instructions (in_mEndOf_5F_do_5F_instructions),
mAttribute_m_5F_else_5F_Instructions (in_m_5F_else_5F_Instructions),
mAttribute_mEndOf_5F_else_5F_instructions (in_mEndOf_5F_else_5F_instructions) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_readWriteAccessWithInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ;
}

void cPtr_readWriteAccessWithInstructionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@readWriteAccessWithInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPrefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFieldList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfKeyExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSearchMethodNameForErrorSignaling.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_do_5F_Instructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_do_5F_instructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_else_5F_Instructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_else_5F_instructions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_readWriteAccessWithInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_readWriteAccessWithInstructionAST (mAttribute_mInstructionLocation, mAttribute_mPrefix, mAttribute_mReceiverName, mAttribute_mFieldList, mAttribute_mEndOfReceiverExpression, mAttribute_mKeyExpression, mAttribute_mEndOfKeyExpression, mAttribute_mSearchMethodNameForErrorSignaling, mAttribute_m_5F_do_5F_Instructions, mAttribute_mEndOf_5F_do_5F_instructions, mAttribute_m_5F_else_5F_Instructions, mAttribute_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @readWriteAccessWithInstructionAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ("readWriteAccessWithInstructionAST",
                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_readWriteAccessWithInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_readWriteAccessWithInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readWriteAccessWithInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_readWriteAccessWithInstructionAST GALGAS_readWriteAccessWithInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_readWriteAccessWithInstructionAST result ;
  const GALGAS_readWriteAccessWithInstructionAST * p = (const GALGAS_readWriteAccessWithInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_readWriteAccessWithInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readWriteAccessWithInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_selfAssignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfAssignmentInstructionAST * p = (const cPtr_selfAssignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfAssignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selfAssignmentInstructionAST::objectCompare (const GALGAS_selfAssignmentInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfAssignmentInstructionAST::GALGAS_selfAssignmentInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfAssignmentInstructionAST::GALGAS_selfAssignmentInstructionAST (const cPtr_selfAssignmentInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfAssignmentInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfAssignmentInstructionAST GALGAS_selfAssignmentInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfAssignmentInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfAssignmentInstructionAST (inAttribute_mInstructionLocation, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_selfAssignmentInstructionAST::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfAssignmentInstructionAST * p = (const cPtr_selfAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfAssignmentInstructionAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_selfAssignmentInstructionAST::reader_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @selfAssignmentInstructionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selfAssignmentInstructionAST::cPtr_selfAssignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selfAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ;
}

void cPtr_selfAssignmentInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@selfAssignmentInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selfAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfAssignmentInstructionAST (mAttribute_mInstructionLocation, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @selfAssignmentInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ("selfAssignmentInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selfAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selfAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfAssignmentInstructionAST GALGAS_selfAssignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfAssignmentInstructionAST result ;
  const GALGAS_selfAssignmentInstructionAST * p = (const GALGAS_selfAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_selfIncDecInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfIncDecInstructionAST * p = (const cPtr_selfIncDecInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfIncDecInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selfIncDecInstructionAST::objectCompare (const GALGAS_selfIncDecInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfIncDecInstructionAST::GALGAS_selfIncDecInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfIncDecInstructionAST::GALGAS_selfIncDecInstructionAST (const cPtr_selfIncDecInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfIncDecInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfIncDecInstructionAST GALGAS_selfIncDecInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_incDecKind & inAttribute_mKind
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfIncDecInstructionAST (inAttribute_mInstructionLocation, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_selfIncDecInstructionAST::reader_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfIncDecInstructionAST * p = (const cPtr_selfIncDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfIncDecInstructionAST) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind cPtr_selfIncDecInstructionAST::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @selfIncDecInstructionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selfIncDecInstructionAST::cPtr_selfIncDecInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_incDecKind & in_mKind
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mKind (in_mKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selfIncDecInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;
}

void cPtr_selfIncDecInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@selfIncDecInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selfIncDecInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfIncDecInstructionAST (mAttribute_mInstructionLocation, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @selfIncDecInstructionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfIncDecInstructionAST ("selfIncDecInstructionAST",
                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selfIncDecInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selfIncDecInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfIncDecInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfIncDecInstructionAST GALGAS_selfIncDecInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecInstructionAST result ;
  const GALGAS_selfIncDecInstructionAST * p = (const GALGAS_selfIncDecInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfIncDecInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_selfIncDecNoOVFInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfIncDecNoOVFInstructionAST * p = (const cPtr_selfIncDecNoOVFInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfIncDecNoOVFInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selfIncDecNoOVFInstructionAST::objectCompare (const GALGAS_selfIncDecNoOVFInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfIncDecNoOVFInstructionAST::GALGAS_selfIncDecNoOVFInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfIncDecNoOVFInstructionAST::GALGAS_selfIncDecNoOVFInstructionAST (const cPtr_selfIncDecNoOVFInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfIncDecNoOVFInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfIncDecNoOVFInstructionAST GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_incDecKind & inAttribute_mKind
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecNoOVFInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfIncDecNoOVFInstructionAST (inAttribute_mInstructionLocation, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_selfIncDecNoOVFInstructionAST::reader_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfIncDecNoOVFInstructionAST * p = (const cPtr_selfIncDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfIncDecNoOVFInstructionAST) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind cPtr_selfIncDecNoOVFInstructionAST::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @selfIncDecNoOVFInstructionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selfIncDecNoOVFInstructionAST::cPtr_selfIncDecNoOVFInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_incDecKind & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mKind (in_mKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selfIncDecNoOVFInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ;
}

void cPtr_selfIncDecNoOVFInstructionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@selfIncDecNoOVFInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selfIncDecNoOVFInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfIncDecNoOVFInstructionAST (mAttribute_mInstructionLocation, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @selfIncDecNoOVFInstructionAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ("selfIncDecNoOVFInstructionAST",
                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selfIncDecNoOVFInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selfIncDecNoOVFInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfIncDecNoOVFInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfIncDecNoOVFInstructionAST GALGAS_selfIncDecNoOVFInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecNoOVFInstructionAST result ;
  const GALGAS_selfIncDecNoOVFInstructionAST * p = (const GALGAS_selfIncDecNoOVFInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfIncDecNoOVFInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecNoOVFInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_selfPlusEqualElementsInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfPlusEqualElementsInstructionAST * p = (const cPtr_selfPlusEqualElementsInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfPlusEqualElementsInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressions.objectCompare (p->mAttribute_mExpressions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selfPlusEqualElementsInstructionAST::objectCompare (const GALGAS_selfPlusEqualElementsInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfPlusEqualElementsInstructionAST::GALGAS_selfPlusEqualElementsInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfPlusEqualElementsInstructionAST GALGAS_selfPlusEqualElementsInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_selfPlusEqualElementsInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                      GALGAS_actualOutputExpressionList::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfPlusEqualElementsInstructionAST::GALGAS_selfPlusEqualElementsInstructionAST (const cPtr_selfPlusEqualElementsInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfPlusEqualElementsInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfPlusEqualElementsInstructionAST GALGAS_selfPlusEqualElementsInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_actualOutputExpressionList & inAttribute_mExpressions
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfPlusEqualElementsInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpressions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfPlusEqualElementsInstructionAST (inAttribute_mInstructionLocation, inAttribute_mExpressions COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_selfPlusEqualElementsInstructionAST::reader_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfPlusEqualElementsInstructionAST * p = (const cPtr_selfPlusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPlusEqualElementsInstructionAST) ;
    result = p->mAttribute_mExpressions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList cPtr_selfPlusEqualElementsInstructionAST::reader_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressions ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @selfPlusEqualElementsInstructionAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selfPlusEqualElementsInstructionAST::cPtr_selfPlusEqualElementsInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_actualOutputExpressionList & in_mExpressions
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mExpressions (in_mExpressions) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selfPlusEqualElementsInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST ;
}

void cPtr_selfPlusEqualElementsInstructionAST::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@selfPlusEqualElementsInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selfPlusEqualElementsInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfPlusEqualElementsInstructionAST (mAttribute_mInstructionLocation, mAttribute_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @selfPlusEqualElementsInstructionAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST ("selfPlusEqualElementsInstructionAST",
                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selfPlusEqualElementsInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selfPlusEqualElementsInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfPlusEqualElementsInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfPlusEqualElementsInstructionAST GALGAS_selfPlusEqualElementsInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selfPlusEqualElementsInstructionAST result ;
  const GALGAS_selfPlusEqualElementsInstructionAST * p = (const GALGAS_selfPlusEqualElementsInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfPlusEqualElementsInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPlusEqualElementsInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_selfPlusEqualExpressionInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfPlusEqualExpressionInstructionAST * p = (const cPtr_selfPlusEqualExpressionInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfPlusEqualExpressionInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selfPlusEqualExpressionInstructionAST::objectCompare (const GALGAS_selfPlusEqualExpressionInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfPlusEqualExpressionInstructionAST::GALGAS_selfPlusEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfPlusEqualExpressionInstructionAST::GALGAS_selfPlusEqualExpressionInstructionAST (const cPtr_selfPlusEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfPlusEqualExpressionInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfPlusEqualExpressionInstructionAST GALGAS_selfPlusEqualExpressionInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                            const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selfPlusEqualExpressionInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfPlusEqualExpressionInstructionAST (inAttribute_mInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_selfPlusEqualExpressionInstructionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfPlusEqualExpressionInstructionAST * p = (const cPtr_selfPlusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPlusEqualExpressionInstructionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_selfPlusEqualExpressionInstructionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @selfPlusEqualExpressionInstructionAST class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selfPlusEqualExpressionInstructionAST::cPtr_selfPlusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_semanticExpressionAST & in_mExpression
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selfPlusEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ;
}

void cPtr_selfPlusEqualExpressionInstructionAST::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@selfPlusEqualExpressionInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selfPlusEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfPlusEqualExpressionInstructionAST (mAttribute_mInstructionLocation, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @selfPlusEqualExpressionInstructionAST type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ("selfPlusEqualExpressionInstructionAST",
                                                              & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selfPlusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selfPlusEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfPlusEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfPlusEqualExpressionInstructionAST GALGAS_selfPlusEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfPlusEqualExpressionInstructionAST result ;
  const GALGAS_selfPlusEqualExpressionInstructionAST * p = (const GALGAS_selfPlusEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfPlusEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPlusEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_selfSetterCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfSetterCallInstructionAST * p = (const cPtr_selfSetterCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mModifierName.objectCompare (p->mAttribute_mModifierName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selfSetterCallInstructionAST::objectCompare (const GALGAS_selfSetterCallInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfSetterCallInstructionAST::GALGAS_selfSetterCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfSetterCallInstructionAST GALGAS_selfSetterCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_selfSetterCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_actualParameterListAST::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfSetterCallInstructionAST::GALGAS_selfSetterCallInstructionAST (const cPtr_selfSetterCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfSetterCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfSetterCallInstructionAST GALGAS_selfSetterCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mModifierName,
                                                                                          const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mModifierName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfSetterCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mModifierName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_selfSetterCallInstructionAST::reader_mModifierName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionAST * p = (const cPtr_selfSetterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
    result = p->mAttribute_mModifierName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_selfSetterCallInstructionAST::reader_mModifierName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModifierName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_selfSetterCallInstructionAST::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfSetterCallInstructionAST * p = (const cPtr_selfSetterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST cPtr_selfSetterCallInstructionAST::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @selfSetterCallInstructionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selfSetterCallInstructionAST::cPtr_selfSetterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mModifierName,
                                                                      const GALGAS_actualParameterListAST & in_mActualParameterList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mModifierName (in_mModifierName),
mAttribute_mActualParameterList (in_mActualParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selfSetterCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ;
}

void cPtr_selfSetterCallInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@selfSetterCallInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mModifierName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selfSetterCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfSetterCallInstructionAST (mAttribute_mInstructionLocation, mAttribute_mModifierName, mAttribute_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @selfSetterCallInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ("selfSetterCallInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selfSetterCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selfSetterCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfSetterCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfSetterCallInstructionAST GALGAS_selfSetterCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionAST result ;
  const GALGAS_selfSetterCallInstructionAST * p = (const GALGAS_selfSetterCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfSetterCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfSetterCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_setterCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverName.objectCompare (p->mAttribute_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverStructAttributes.objectCompare (p->mAttribute_mReceiverStructAttributes) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeNameForCasting.objectCompare (p->mAttribute_mTypeNameForCasting) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mModifierName.objectCompare (p->mAttribute_mModifierName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_setterCallInstructionAST::objectCompare (const GALGAS_setterCallInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterCallInstructionAST::GALGAS_setterCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterCallInstructionAST GALGAS_setterCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_setterCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstringlist::constructor_emptyList (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_actualParameterListAST::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterCallInstructionAST::GALGAS_setterCallInstructionAST (const cPtr_setterCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setterCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterCallInstructionAST GALGAS_setterCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                  const GALGAS_lstringlist & inAttribute_mReceiverStructAttributes,
                                                                                  const GALGAS_lstring & inAttribute_mTypeNameForCasting,
                                                                                  const GALGAS_lstring & inAttribute_mModifierName,
                                                                                  const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mReceiverStructAttributes.isValid () && inAttribute_mTypeNameForCasting.isValid () && inAttribute_mModifierName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setterCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverName, inAttribute_mReceiverStructAttributes, inAttribute_mTypeNameForCasting, inAttribute_mModifierName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_setterCallInstructionAST::reader_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    result = p->mAttribute_mReceiverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_setterCallInstructionAST::reader_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_setterCallInstructionAST::reader_mReceiverStructAttributes (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    result = p->mAttribute_mReceiverStructAttributes ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_setterCallInstructionAST::reader_mReceiverStructAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverStructAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_setterCallInstructionAST::reader_mTypeNameForCasting (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    result = p->mAttribute_mTypeNameForCasting ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_setterCallInstructionAST::reader_mTypeNameForCasting (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeNameForCasting ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_setterCallInstructionAST::reader_mModifierName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    result = p->mAttribute_mModifierName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_setterCallInstructionAST::reader_mModifierName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModifierName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_setterCallInstructionAST::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST cPtr_setterCallInstructionAST::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @setterCallInstructionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_setterCallInstructionAST::cPtr_setterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_lstring & in_mReceiverName,
                                                              const GALGAS_lstringlist & in_mReceiverStructAttributes,
                                                              const GALGAS_lstring & in_mTypeNameForCasting,
                                                              const GALGAS_lstring & in_mModifierName,
                                                              const GALGAS_actualParameterListAST & in_mActualParameterList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mReceiverName (in_mReceiverName),
mAttribute_mReceiverStructAttributes (in_mReceiverStructAttributes),
mAttribute_mTypeNameForCasting (in_mTypeNameForCasting),
mAttribute_mModifierName (in_mModifierName),
mAttribute_mActualParameterList (in_mActualParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_setterCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionAST ;
}

void cPtr_setterCallInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@setterCallInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverStructAttributes.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeNameForCasting.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mModifierName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_setterCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_setterCallInstructionAST (mAttribute_mInstructionLocation, mAttribute_mReceiverName, mAttribute_mReceiverStructAttributes, mAttribute_mTypeNameForCasting, mAttribute_mModifierName, mAttribute_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @setterCallInstructionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterCallInstructionAST ("setterCallInstructionAST",
                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_setterCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_setterCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterCallInstructionAST GALGAS_setterCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionAST result ;
  const GALGAS_setterCallInstructionAST * p = (const GALGAS_setterCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_setterCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_structuredCastInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCastExpression.objectCompare (p->mAttribute_mCastExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCastInstructionBranchList.objectCompare (p->mAttribute_mCastInstructionBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionList.objectCompare (p->mAttribute_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfCastInstruction.objectCompare (p->mAttribute_mEndOfCastInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_structuredCastInstructionAST::objectCompare (const GALGAS_structuredCastInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structuredCastInstructionAST::GALGAS_structuredCastInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structuredCastInstructionAST::GALGAS_structuredCastInstructionAST (const cPtr_structuredCastInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structuredCastInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structuredCastInstructionAST GALGAS_structuredCastInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_semanticExpressionAST & inAttribute_mCastExpression,
                                                                                          const GALGAS_castInstructionBranchListAST & inAttribute_mCastInstructionBranchList,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mElseInstructionList,
                                                                                          const GALGAS_location & inAttribute_mEndOfCastInstruction
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_structuredCastInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mCastExpression.isValid () && inAttribute_mCastInstructionBranchList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfCastInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structuredCastInstructionAST (inAttribute_mInstructionLocation, inAttribute_mCastExpression, inAttribute_mCastInstructionBranchList, inAttribute_mElseInstructionList, inAttribute_mEndOfCastInstruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_structuredCastInstructionAST::reader_mCastExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    result = p->mAttribute_mCastExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_structuredCastInstructionAST::reader_mCastExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCastExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST GALGAS_structuredCastInstructionAST::reader_mCastInstructionBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    result = p->mAttribute_mCastInstructionBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST cPtr_structuredCastInstructionAST::reader_mCastInstructionBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCastInstructionBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_structuredCastInstructionAST::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_structuredCastInstructionAST::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_structuredCastInstructionAST::reader_mEndOfCastInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    result = p->mAttribute_mEndOfCastInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_structuredCastInstructionAST::reader_mEndOfCastInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfCastInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @structuredCastInstructionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structuredCastInstructionAST::cPtr_structuredCastInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_semanticExpressionAST & in_mCastExpression,
                                                                      const GALGAS_castInstructionBranchListAST & in_mCastInstructionBranchList,
                                                                      const GALGAS_semanticInstructionListAST & in_mElseInstructionList,
                                                                      const GALGAS_location & in_mEndOfCastInstruction
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mCastExpression (in_mCastExpression),
mAttribute_mCastInstructionBranchList (in_mCastInstructionBranchList),
mAttribute_mElseInstructionList (in_mElseInstructionList),
mAttribute_mEndOfCastInstruction (in_mEndOfCastInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_structuredCastInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionAST ;
}

void cPtr_structuredCastInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@structuredCastInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCastExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCastInstructionBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfCastInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_structuredCastInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structuredCastInstructionAST (mAttribute_mInstructionLocation, mAttribute_mCastExpression, mAttribute_mCastInstructionBranchList, mAttribute_mElseInstructionList, mAttribute_mEndOfCastInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @structuredCastInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structuredCastInstructionAST ("structuredCastInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structuredCastInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structuredCastInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structuredCastInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structuredCastInstructionAST GALGAS_structuredCastInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_structuredCastInstructionAST result ;
  const GALGAS_structuredCastInstructionAST * p = (const GALGAS_structuredCastInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structuredCastInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structuredCastInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_switchInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_switchInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSwitchExpression.objectCompare (p->mAttribute_mSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfSwitchExpression.objectCompare (p->mAttribute_mEndOfSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBranches.objectCompare (p->mAttribute_mBranches) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_switch_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_switch_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_switchInstructionAST::objectCompare (const GALGAS_switchInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionAST::GALGAS_switchInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionAST::GALGAS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mSwitchExpression,
                                                                          const GALGAS_location & inAttribute_mEndOfSwitchExpression,
                                                                          const GALGAS_switchBranchesAST & inAttribute_mBranches,
                                                                          const GALGAS_location & inAttribute_mEndOf_5F_switch_5F_instruction
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSwitchExpression.isValid () && inAttribute_mEndOfSwitchExpression.isValid () && inAttribute_mBranches.isValid () && inAttribute_mEndOf_5F_switch_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_switchInstructionAST (inAttribute_mInstructionLocation, inAttribute_mSwitchExpression, inAttribute_mEndOfSwitchExpression, inAttribute_mBranches, inAttribute_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_switchInstructionAST::reader_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mAttribute_mSwitchExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_switchInstructionAST::reader_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSwitchExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_switchInstructionAST::reader_mEndOfSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mAttribute_mEndOfSwitchExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_switchInstructionAST::reader_mEndOfSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfSwitchExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST GALGAS_switchInstructionAST::reader_mBranches (UNUSED_LOCATION_ARGS) const {
  GALGAS_switchBranchesAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mAttribute_mBranches ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST cPtr_switchInstructionAST::reader_mBranches (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBranches ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_switchInstructionAST::reader_mEndOf_5F_switch_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_switch_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_switchInstructionAST::reader_mEndOf_5F_switch_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_switch_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @switchInstructionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_switchInstructionAST::cPtr_switchInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_semanticExpressionAST & in_mSwitchExpression,
                                                      const GALGAS_location & in_mEndOfSwitchExpression,
                                                      const GALGAS_switchBranchesAST & in_mBranches,
                                                      const GALGAS_location & in_mEndOf_5F_switch_5F_instruction
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mSwitchExpression (in_mSwitchExpression),
mAttribute_mEndOfSwitchExpression (in_mEndOfSwitchExpression),
mAttribute_mBranches (in_mBranches),
mAttribute_mEndOf_5F_switch_5F_instruction (in_mEndOf_5F_switch_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_switchInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

void cPtr_switchInstructionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@switchInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBranches.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_switch_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_switchInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_switchInstructionAST (mAttribute_mInstructionLocation, mAttribute_mSwitchExpression, mAttribute_mEndOfSwitchExpression, mAttribute_mBranches, mAttribute_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @switchInstructionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchInstructionAST ("switchInstructionAST",
                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST result ;
  const GALGAS_switchInstructionAST * p = (const GALGAS_switchInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeMethodCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeMethodCallInstructionAST * p = (const cPtr_typeMethodCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMethodName.objectCompare (p->mAttribute_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterList.objectCompare (p->mAttribute_mActualParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typeMethodCallInstructionAST::objectCompare (const GALGAS_typeMethodCallInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMethodCallInstructionAST::GALGAS_typeMethodCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMethodCallInstructionAST GALGAS_typeMethodCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeMethodCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_actualParameterListAST::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMethodCallInstructionAST::GALGAS_typeMethodCallInstructionAST (const cPtr_typeMethodCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeMethodCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMethodCallInstructionAST GALGAS_typeMethodCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mMethodName,
                                                                                          const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mMethodName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeMethodCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mTypeName, inAttribute_mMethodName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeMethodCallInstructionAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeMethodCallInstructionAST * p = (const cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeMethodCallInstructionAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeMethodCallInstructionAST::reader_mMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeMethodCallInstructionAST * p = (const cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    result = p->mAttribute_mMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeMethodCallInstructionAST::reader_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST GALGAS_typeMethodCallInstructionAST::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeMethodCallInstructionAST * p = (const cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    result = p->mAttribute_mActualParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST cPtr_typeMethodCallInstructionAST::reader_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @typeMethodCallInstructionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typeMethodCallInstructionAST::cPtr_typeMethodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mTypeName,
                                                                      const GALGAS_lstring & in_mMethodName,
                                                                      const GALGAS_actualParameterListAST & in_mActualParameterList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mMethodName (in_mMethodName),
mAttribute_mActualParameterList (in_mActualParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeMethodCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ;
}

void cPtr_typeMethodCallInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@typeMethodCallInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typeMethodCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeMethodCallInstructionAST (mAttribute_mInstructionLocation, mAttribute_mTypeName, mAttribute_mMethodName, mAttribute_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @typeMethodCallInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ("typeMethodCallInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeMethodCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeMethodCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeMethodCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMethodCallInstructionAST GALGAS_typeMethodCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionAST result ;
  const GALGAS_typeMethodCallInstructionAST * p = (const GALGAS_typeMethodCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeMethodCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_warningInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_warningInstructionAST * p = (const cPtr_warningInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_warningInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocationExpression.objectCompare (p->mAttribute_mLocationExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMessageExpression.objectCompare (p->mAttribute_mMessageExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_warningInstructionAST::objectCompare (const GALGAS_warningInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_warningInstructionAST::GALGAS_warningInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_warningInstructionAST::GALGAS_warningInstructionAST (const cPtr_warningInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_warningInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_warningInstructionAST GALGAS_warningInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mLocationExpression,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mMessageExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_warningInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLocationExpression.isValid () && inAttribute_mMessageExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_warningInstructionAST (inAttribute_mInstructionLocation, inAttribute_mLocationExpression, inAttribute_mMessageExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_warningInstructionAST::reader_mLocationExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_warningInstructionAST * p = (const cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    result = p->mAttribute_mLocationExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_warningInstructionAST::reader_mLocationExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocationExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_warningInstructionAST::reader_mMessageExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_warningInstructionAST * p = (const cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    result = p->mAttribute_mMessageExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_warningInstructionAST::reader_mMessageExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMessageExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @warningInstructionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_warningInstructionAST::cPtr_warningInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_semanticExpressionAST & in_mLocationExpression,
                                                        const GALGAS_semanticExpressionAST & in_mMessageExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mLocationExpression (in_mLocationExpression),
mAttribute_mMessageExpression (in_mMessageExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_warningInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST ;
}

void cPtr_warningInstructionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@warningInstructionAST:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocationExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMessageExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_warningInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_warningInstructionAST (mAttribute_mInstructionLocation, mAttribute_mLocationExpression, mAttribute_mMessageExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @warningInstructionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_warningInstructionAST ("warningInstructionAST",
                                              & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_warningInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_warningInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_warningInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_warningInstructionAST GALGAS_warningInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_warningInstructionAST result ;
  const GALGAS_warningInstructionAST * p = (const GALGAS_warningInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_warningInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_syntaxSendInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_syntaxSendInstruction * p = (const cPtr_syntaxSendInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syntaxSendInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_syntaxSendInstruction::objectCompare (const GALGAS_syntaxSendInstruction & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxSendInstruction::GALGAS_syntaxSendInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxSendInstruction::GALGAS_syntaxSendInstruction (const cPtr_syntaxSendInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxSendInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxSendInstruction GALGAS_syntaxSendInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syntaxSendInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syntaxSendInstruction (inAttribute_mInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_syntaxSendInstruction::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_syntaxSendInstruction * p = (const cPtr_syntaxSendInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxSendInstruction) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_syntaxSendInstruction::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @syntaxSendInstruction class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_syntaxSendInstruction::cPtr_syntaxSendInstruction (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_semanticExpressionAST & in_mExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_syntaxSendInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstruction ;
}

void cPtr_syntaxSendInstruction::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@syntaxSendInstruction:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_syntaxSendInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syntaxSendInstruction (mAttribute_mInstructionLocation, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @syntaxSendInstruction type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxSendInstruction ("syntaxSendInstruction",
                                              & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxSendInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxSendInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxSendInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxSendInstruction GALGAS_syntaxSendInstruction::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_syntaxSendInstruction result ;
  const GALGAS_syntaxSendInstruction * p = (const GALGAS_syntaxSendInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxSendInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_terminalCheckInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_terminalCheckInstruction * p = (const cPtr_terminalCheckInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_terminalCheckInstruction) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTerminalName.objectCompare (p->mAttribute_mTerminalName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualInputParameterList.objectCompare (p->mAttribute_mActualInputParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndexingKeyList.objectCompare (p->mAttribute_mIndexingKeyList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.objectCompare (p->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.objectCompare (p->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_terminalCheckInstruction::objectCompare (const GALGAS_terminalCheckInstruction & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckInstruction::GALGAS_terminalCheckInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckInstruction::GALGAS_terminalCheckInstruction (const cPtr_terminalCheckInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_terminalCheckInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckInstruction GALGAS_terminalCheckInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_lstring & inAttribute_mTerminalName,
                                                                                  const GALGAS_actualInputParameterListAST & inAttribute_mActualInputParameterList,
                                                                                  const GALGAS__32_lstringlist & inAttribute_mIndexingKeyList,
                                                                                  const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                                                  const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mGrammarInstructionSyntaxDirectedTranslationToken
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTerminalName.isValid () && inAttribute_mActualInputParameterList.isValid () && inAttribute_mIndexingKeyList.isValid () && inAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.isValid () && inAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_terminalCheckInstruction (inAttribute_mInstructionLocation, inAttribute_mTerminalName, inAttribute_mActualInputParameterList, inAttribute_mIndexingKeyList, inAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, inAttribute_mGrammarInstructionSyntaxDirectedTranslationToken COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalCheckInstruction::reader_mTerminalName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_terminalCheckInstruction * p = (const cPtr_terminalCheckInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstruction) ;
    result = p->mAttribute_mTerminalName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_terminalCheckInstruction::reader_mTerminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST GALGAS_terminalCheckInstruction::reader_mActualInputParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualInputParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_terminalCheckInstruction * p = (const cPtr_terminalCheckInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstruction) ;
    result = p->mAttribute_mActualInputParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST cPtr_terminalCheckInstruction::reader_mActualInputParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualInputParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS_terminalCheckInstruction::reader_mIndexingKeyList (UNUSED_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_terminalCheckInstruction * p = (const cPtr_terminalCheckInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstruction) ;
    result = p->mAttribute_mIndexingKeyList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist cPtr_terminalCheckInstruction::reader_mIndexingKeyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexingKeyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_terminalCheckInstruction::reader_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (NULL != mObjectPtr) {
    const cPtr_terminalCheckInstruction * p = (const cPtr_terminalCheckInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstruction) ;
    result = p->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult cPtr_terminalCheckInstruction::reader_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_terminalCheckInstruction::reader_mGrammarInstructionSyntaxDirectedTranslationToken (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (NULL != mObjectPtr) {
    const cPtr_terminalCheckInstruction * p = (const cPtr_terminalCheckInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstruction) ;
    result = p->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult cPtr_terminalCheckInstruction::reader_mGrammarInstructionSyntaxDirectedTranslationToken (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @terminalCheckInstruction class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_terminalCheckInstruction::cPtr_terminalCheckInstruction (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_lstring & in_mTerminalName,
                                                              const GALGAS_actualInputParameterListAST & in_mActualInputParameterList,
                                                              const GALGAS__32_lstringlist & in_mIndexingKeyList,
                                                              const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                              const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken
                                                              COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mAttribute_mTerminalName (in_mTerminalName),
mAttribute_mActualInputParameterList (in_mActualInputParameterList),
mAttribute_mIndexingKeyList (in_mIndexingKeyList),
mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor),
mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken (in_mGrammarInstructionSyntaxDirectedTranslationToken) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_terminalCheckInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstruction ;
}

void cPtr_terminalCheckInstruction::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@terminalCheckInstruction:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTerminalName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualInputParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIndexingKeyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_terminalCheckInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_terminalCheckInstruction (mAttribute_mInstructionLocation, mAttribute_mTerminalName, mAttribute_mActualInputParameterList, mAttribute_mIndexingKeyList, mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @terminalCheckInstruction type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalCheckInstruction ("terminalCheckInstruction",
                                                 & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalCheckInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalCheckInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalCheckInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckInstruction GALGAS_terminalCheckInstruction::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckInstruction result ;
  const GALGAS_terminalCheckInstruction * p = (const GALGAS_terminalCheckInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalCheckInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_templateExpressionAST::objectCompare (const GALGAS_templateExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST::GALGAS_templateExpressionAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST::GALGAS_templateExpressionAST (const cPtr_templateExpressionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @templateExpressionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateExpressionAST::cPtr_templateExpressionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @templateExpressionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateExpressionAST ("templateExpressionAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateExpressionAST result ;
  const GALGAS_templateExpressionAST * p = (const GALGAS_templateExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_structFieldAccessTemplateExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structFieldAccessTemplateExpressionAST * p = (const cPtr_structFieldAccessTemplateExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructFieldName.objectCompare (p->mAttribute_mStructFieldName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_structFieldAccessTemplateExpressionAST::objectCompare (const GALGAS_structFieldAccessTemplateExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldAccessTemplateExpressionAST::GALGAS_structFieldAccessTemplateExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldAccessTemplateExpressionAST::GALGAS_structFieldAccessTemplateExpressionAST (const cPtr_structFieldAccessTemplateExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structFieldAccessTemplateExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldAccessTemplateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                              const GALGAS_templateExpressionAST & inAttribute_mExpression,
                                                                                                              const GALGAS_lstring & inAttribute_mStructFieldName
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessTemplateExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid () && inAttribute_mStructFieldName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structFieldAccessTemplateExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression, inAttribute_mStructFieldName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_structFieldAccessTemplateExpressionAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_structFieldAccessTemplateExpressionAST * p = (const cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_structFieldAccessTemplateExpressionAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structFieldAccessTemplateExpressionAST * p = (const cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_structFieldAccessTemplateExpressionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structFieldAccessTemplateExpressionAST::reader_mStructFieldName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structFieldAccessTemplateExpressionAST * p = (const cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    result = p->mAttribute_mStructFieldName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_structFieldAccessTemplateExpressionAST::reader_mStructFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @structFieldAccessTemplateExpressionAST class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                                          const GALGAS_templateExpressionAST & in_mExpression,
                                                                                          const GALGAS_lstring & in_mStructFieldName
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mExpression (in_mExpression),
mAttribute_mStructFieldName (in_mStructFieldName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_structFieldAccessTemplateExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

void cPtr_structFieldAccessTemplateExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@structFieldAccessTemplateExpressionAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructFieldName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_structFieldAccessTemplateExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structFieldAccessTemplateExpressionAST (mAttribute_mOperatorLocation, mAttribute_mExpression, mAttribute_mStructFieldName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @structFieldAccessTemplateExpressionAST type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ("structFieldAccessTemplateExpressionAST",
                                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structFieldAccessTemplateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structFieldAccessTemplateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structFieldAccessTemplateExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldAccessTemplateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessTemplateExpressionAST result ;
  const GALGAS_structFieldAccessTemplateExpressionAST * p = (const GALGAS_structFieldAccessTemplateExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structFieldAccessTemplateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structFieldAccessTemplateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateAddOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateAddOperationAST * p = (const cPtr_templateAddOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateAddOperationAST::objectCompare (const GALGAS_templateAddOperationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAddOperationAST::GALGAS_templateAddOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAddOperationAST::GALGAS_templateAddOperationAST (const cPtr_templateAddOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateAddOperationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAddOperationAST GALGAS_templateAddOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateAddOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateAddOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateAddOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateAddOperationAST * p = (const cPtr_templateAddOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateAddOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateAddOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateAddOperationAST * p = (const cPtr_templateAddOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateAddOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateAddOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateAddOperationAST * p = (const cPtr_templateAddOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateAddOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @templateAddOperationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateAddOperationAST::cPtr_templateAddOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                            const GALGAS_templateExpressionAST & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateAddOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAddOperationAST ;
}

void cPtr_templateAddOperationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateAddOperationAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateAddOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateAddOperationAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateAddOperationAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateAddOperationAST ("templateAddOperationAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateAddOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAddOperationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateAddOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateAddOperationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAddOperationAST GALGAS_templateAddOperationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateAddOperationAST result ;
  const GALGAS_templateAddOperationAST * p = (const GALGAS_templateAddOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateAddOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateAddOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateAndOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateAndOperationAST * p = (const cPtr_templateAndOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateAndOperationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateAndOperationAST::objectCompare (const GALGAS_templateAndOperationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAndOperationAST::GALGAS_templateAndOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAndOperationAST::GALGAS_templateAndOperationAST (const cPtr_templateAndOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateAndOperationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAndOperationAST GALGAS_templateAndOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateAndOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateAndOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateAndOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateAndOperationAST * p = (const cPtr_templateAndOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAndOperationAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateAndOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateAndOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateAndOperationAST * p = (const cPtr_templateAndOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAndOperationAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateAndOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateAndOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateAndOperationAST * p = (const cPtr_templateAndOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAndOperationAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateAndOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @templateAndOperationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateAndOperationAST::cPtr_templateAndOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                            const GALGAS_templateExpressionAST & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateAndOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAndOperationAST ;
}

void cPtr_templateAndOperationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateAndOperationAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateAndOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateAndOperationAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateAndOperationAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateAndOperationAST ("templateAndOperationAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateAndOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAndOperationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateAndOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateAndOperationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAndOperationAST GALGAS_templateAndOperationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateAndOperationAST result ;
  const GALGAS_templateAndOperationAST * p = (const GALGAS_templateAndOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateAndOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateAndOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateCategoryTemplateCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateCategoryTemplateCallAST * p = (const cPtr_templateCategoryTemplateCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateCategoryTemplateCallAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionValue.objectCompare (p->mAttribute_mExpressionValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTemplateName.objectCompare (p->mAttribute_mTemplateName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOutExpressionList.objectCompare (p->mAttribute_mOutExpressionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateCategoryTemplateCallAST::objectCompare (const GALGAS_templateCategoryTemplateCallAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateCategoryTemplateCallAST::GALGAS_templateCategoryTemplateCallAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateCategoryTemplateCallAST::GALGAS_templateCategoryTemplateCallAST (const cPtr_templateCategoryTemplateCallAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateCategoryTemplateCallAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateCategoryTemplateCallAST GALGAS_templateCategoryTemplateCallAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mExpressionValue,
                                                                                                const GALGAS_lstring & inAttribute_mTemplateName,
                                                                                                const GALGAS_templateExpressionListAST & inAttribute_mOutExpressionList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateCategoryTemplateCallAST result ;
  if (inAttribute_mExpressionValue.isValid () && inAttribute_mTemplateName.isValid () && inAttribute_mOutExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateCategoryTemplateCallAST (inAttribute_mExpressionValue, inAttribute_mTemplateName, inAttribute_mOutExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateCategoryTemplateCallAST::reader_mExpressionValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateCategoryTemplateCallAST * p = (const cPtr_templateCategoryTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateCategoryTemplateCallAST) ;
    result = p->mAttribute_mExpressionValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateCategoryTemplateCallAST::reader_mExpressionValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateCategoryTemplateCallAST::reader_mTemplateName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateCategoryTemplateCallAST * p = (const cPtr_templateCategoryTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateCategoryTemplateCallAST) ;
    result = p->mAttribute_mTemplateName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateCategoryTemplateCallAST::reader_mTemplateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateCategoryTemplateCallAST::reader_mOutExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateCategoryTemplateCallAST * p = (const cPtr_templateCategoryTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateCategoryTemplateCallAST) ;
    result = p->mAttribute_mOutExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST cPtr_templateCategoryTemplateCallAST::reader_mOutExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @templateCategoryTemplateCallAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateCategoryTemplateCallAST::cPtr_templateCategoryTemplateCallAST (const GALGAS_templateExpressionAST & in_mExpressionValue,
                                                                            const GALGAS_lstring & in_mTemplateName,
                                                                            const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mExpressionValue (in_mExpressionValue),
mAttribute_mTemplateName (in_mTemplateName),
mAttribute_mOutExpressionList (in_mOutExpressionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateCategoryTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateCategoryTemplateCallAST ;
}

void cPtr_templateCategoryTemplateCallAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@templateCategoryTemplateCallAST:" ;
  mAttribute_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTemplateName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateCategoryTemplateCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateCategoryTemplateCallAST (mAttribute_mExpressionValue, mAttribute_mTemplateName, mAttribute_mOutExpressionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @templateCategoryTemplateCallAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateCategoryTemplateCallAST ("templateCategoryTemplateCallAST",
                                                        & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateCategoryTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateCategoryTemplateCallAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateCategoryTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateCategoryTemplateCallAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateCategoryTemplateCallAST GALGAS_templateCategoryTemplateCallAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateCategoryTemplateCallAST result ;
  const GALGAS_templateCategoryTemplateCallAST * p = (const GALGAS_templateCategoryTemplateCallAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateCategoryTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateCategoryTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateClassToTypeOperandAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateClassToTypeOperandAST * p = (const cPtr_templateClassToTypeOperandAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateClassToTypeOperandAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateClassToTypeOperandAST::objectCompare (const GALGAS_templateClassToTypeOperandAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateClassToTypeOperandAST::GALGAS_templateClassToTypeOperandAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateClassToTypeOperandAST GALGAS_templateClassToTypeOperandAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateClassToTypeOperandAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateClassToTypeOperandAST::GALGAS_templateClassToTypeOperandAST (const cPtr_templateClassToTypeOperandAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateClassToTypeOperandAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateClassToTypeOperandAST GALGAS_templateClassToTypeOperandAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateClassToTypeOperandAST result ;
  if (inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateClassToTypeOperandAST (inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateClassToTypeOperandAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateClassToTypeOperandAST * p = (const cPtr_templateClassToTypeOperandAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassToTypeOperandAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateClassToTypeOperandAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @templateClassToTypeOperandAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateClassToTypeOperandAST::cPtr_templateClassToTypeOperandAST (const GALGAS_lstring & in_mTypeName
                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mTypeName (in_mTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateClassToTypeOperandAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateClassToTypeOperandAST ;
}

void cPtr_templateClassToTypeOperandAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@templateClassToTypeOperandAST:" ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateClassToTypeOperandAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateClassToTypeOperandAST (mAttribute_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @templateClassToTypeOperandAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateClassToTypeOperandAST ("templateClassToTypeOperandAST",
                                                      & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateClassToTypeOperandAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateClassToTypeOperandAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateClassToTypeOperandAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateClassToTypeOperandAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateClassToTypeOperandAST GALGAS_templateClassToTypeOperandAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateClassToTypeOperandAST result ;
  const GALGAS_templateClassToTypeOperandAST * p = (const GALGAS_templateClassToTypeOperandAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateClassToTypeOperandAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateClassToTypeOperandAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateConstructorAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateConstructorAST * p = (const cPtr_templateConstructorAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateConstructorAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstructorName.objectCompare (p->mAttribute_mConstructorName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionList.objectCompare (p->mAttribute_mExpressionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateConstructorAST::objectCompare (const GALGAS_templateConstructorAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateConstructorAST::GALGAS_templateConstructorAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateConstructorAST GALGAS_templateConstructorAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateConstructorAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_templateExpressionListAST::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateConstructorAST::GALGAS_templateConstructorAST (const cPtr_templateConstructorAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateConstructorAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateConstructorAST GALGAS_templateConstructorAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                              const GALGAS_lstring & inAttribute_mConstructorName,
                                                                              const GALGAS_templateExpressionListAST & inAttribute_mExpressionList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateConstructorAST result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mConstructorName.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateConstructorAST (inAttribute_mTypeName, inAttribute_mConstructorName, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateConstructorAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateConstructorAST * p = (const cPtr_templateConstructorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateConstructorAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateConstructorAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateConstructorAST::reader_mConstructorName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateConstructorAST * p = (const cPtr_templateConstructorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateConstructorAST) ;
    result = p->mAttribute_mConstructorName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateConstructorAST::reader_mConstructorName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstructorName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateConstructorAST::reader_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateConstructorAST * p = (const cPtr_templateConstructorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateConstructorAST) ;
    result = p->mAttribute_mExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST cPtr_templateConstructorAST::reader_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @templateConstructorAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateConstructorAST::cPtr_templateConstructorAST (const GALGAS_lstring & in_mTypeName,
                                                          const GALGAS_lstring & in_mConstructorName,
                                                          const GALGAS_templateExpressionListAST & in_mExpressionList
                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mConstructorName (in_mConstructorName),
mAttribute_mExpressionList (in_mExpressionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateConstructorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateConstructorAST ;
}

void cPtr_templateConstructorAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@templateConstructorAST:" ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConstructorName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateConstructorAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateConstructorAST (mAttribute_mTypeName, mAttribute_mConstructorName, mAttribute_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateConstructorAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateConstructorAST ("templateConstructorAST",
                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateConstructorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateConstructorAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateConstructorAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateConstructorAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateConstructorAST GALGAS_templateConstructorAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateConstructorAST result ;
  const GALGAS_templateConstructorAST * p = (const GALGAS_templateConstructorAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateConstructorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateConstructorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateDivideOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateDivideOperationAST * p = (const cPtr_templateDivideOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateDivideOperationAST::objectCompare (const GALGAS_templateDivideOperationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDivideOperationAST::GALGAS_templateDivideOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDivideOperationAST::GALGAS_templateDivideOperationAST (const cPtr_templateDivideOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateDivideOperationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDivideOperationAST GALGAS_templateDivideOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                      const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                      const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateDivideOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateDivideOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateDivideOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateDivideOperationAST * p = (const cPtr_templateDivideOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateDivideOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateDivideOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateDivideOperationAST * p = (const cPtr_templateDivideOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateDivideOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateDivideOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateDivideOperationAST * p = (const cPtr_templateDivideOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateDivideOperationAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateDivideOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @templateDivideOperationAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateDivideOperationAST::cPtr_templateDivideOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                                  const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                                  const GALGAS_templateExpressionAST & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateDivideOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDivideOperationAST ;
}

void cPtr_templateDivideOperationAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@templateDivideOperationAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateDivideOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateDivideOperationAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @templateDivideOperationAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateDivideOperationAST ("templateDivideOperationAST",
                                                   & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateDivideOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDivideOperationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateDivideOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateDivideOperationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDivideOperationAST GALGAS_templateDivideOperationAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateDivideOperationAST result ;
  const GALGAS_templateDivideOperationAST * p = (const GALGAS_templateDivideOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateDivideOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDivideOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateEqualTestAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateEqualTestAST * p = (const cPtr_templateEqualTestAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateEqualTestAST::objectCompare (const GALGAS_templateEqualTestAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateEqualTestAST::GALGAS_templateEqualTestAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateEqualTestAST::GALGAS_templateEqualTestAST (const cPtr_templateEqualTestAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateEqualTestAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateEqualTestAST GALGAS_templateEqualTestAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                          const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                          const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateEqualTestAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateEqualTestAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateEqualTestAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateEqualTestAST * p = (const cPtr_templateEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateEqualTestAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateEqualTestAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateEqualTestAST * p = (const cPtr_templateEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateEqualTestAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateEqualTestAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateEqualTestAST * p = (const cPtr_templateEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateEqualTestAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateEqualTestAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @templateEqualTestAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateEqualTestAST::cPtr_templateEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                                      const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                      const GALGAS_templateExpressionAST & in_mRightExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateEqualTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateEqualTestAST ;
}

void cPtr_templateEqualTestAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@templateEqualTestAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateEqualTestAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateEqualTestAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @templateEqualTestAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateEqualTestAST ("templateEqualTestAST",
                                             & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateEqualTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateEqualTestAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateEqualTestAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateEqualTestAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateEqualTestAST GALGAS_templateEqualTestAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateEqualTestAST result ;
  const GALGAS_templateEqualTestAST * p = (const GALGAS_templateEqualTestAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateEqualTestAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateEqualTestAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateFalseBoolAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateFalseBoolAST * p = (const cPtr_templateFalseBoolAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateFalseBoolAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateFalseBoolAST::objectCompare (const GALGAS_templateFalseBoolAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFalseBoolAST::GALGAS_templateFalseBoolAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFalseBoolAST GALGAS_templateFalseBoolAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateFalseBoolAST::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFalseBoolAST::GALGAS_templateFalseBoolAST (const cPtr_templateFalseBoolAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFalseBoolAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFalseBoolAST GALGAS_templateFalseBoolAST::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateFalseBoolAST result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateFalseBoolAST (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateFalseBoolAST::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFalseBoolAST * p = (const cPtr_templateFalseBoolAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFalseBoolAST) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateFalseBoolAST::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @templateFalseBoolAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateFalseBoolAST::cPtr_templateFalseBoolAST (const GALGAS_location & in_mLocation
                                                      COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateFalseBoolAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFalseBoolAST ;
}

void cPtr_templateFalseBoolAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@templateFalseBoolAST:" ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateFalseBoolAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateFalseBoolAST (mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @templateFalseBoolAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateFalseBoolAST ("templateFalseBoolAST",
                                             & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateFalseBoolAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFalseBoolAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateFalseBoolAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFalseBoolAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFalseBoolAST GALGAS_templateFalseBoolAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateFalseBoolAST result ;
  const GALGAS_templateFalseBoolAST * p = (const GALGAS_templateFalseBoolAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateFalseBoolAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFalseBoolAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateFileWrapperTemplateCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateFileWrapperTemplateCallAST * p = (const cPtr_templateFileWrapperTemplateCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFileWrapperName.objectCompare (p->mAttribute_mFileWrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTemplateName.objectCompare (p->mAttribute_mTemplateName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOutExpressionList.objectCompare (p->mAttribute_mOutExpressionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateFileWrapperTemplateCallAST::objectCompare (const GALGAS_templateFileWrapperTemplateCallAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFileWrapperTemplateCallAST::GALGAS_templateFileWrapperTemplateCallAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateFileWrapperTemplateCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_templateExpressionListAST::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFileWrapperTemplateCallAST::GALGAS_templateFileWrapperTemplateCallAST (const cPtr_templateFileWrapperTemplateCallAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFileWrapperTemplateCallAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST::constructor_new (const GALGAS_lstring & inAttribute_mFileWrapperName,
                                                                                                      const GALGAS_lstring & inAttribute_mTemplateName,
                                                                                                      const GALGAS_templateExpressionListAST & inAttribute_mOutExpressionList
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateFileWrapperTemplateCallAST result ;
  if (inAttribute_mFileWrapperName.isValid () && inAttribute_mTemplateName.isValid () && inAttribute_mOutExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateFileWrapperTemplateCallAST (inAttribute_mFileWrapperName, inAttribute_mTemplateName, inAttribute_mOutExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateFileWrapperTemplateCallAST::reader_mFileWrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFileWrapperTemplateCallAST * p = (const cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    result = p->mAttribute_mFileWrapperName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateFileWrapperTemplateCallAST::reader_mFileWrapperName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileWrapperName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateFileWrapperTemplateCallAST::reader_mTemplateName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFileWrapperTemplateCallAST * p = (const cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    result = p->mAttribute_mTemplateName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateFileWrapperTemplateCallAST::reader_mTemplateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateFileWrapperTemplateCallAST::reader_mOutExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFileWrapperTemplateCallAST * p = (const cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    result = p->mAttribute_mOutExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST cPtr_templateFileWrapperTemplateCallAST::reader_mOutExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @templateFileWrapperTemplateCallAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateFileWrapperTemplateCallAST::cPtr_templateFileWrapperTemplateCallAST (const GALGAS_lstring & in_mFileWrapperName,
                                                                                  const GALGAS_lstring & in_mTemplateName,
                                                                                  const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mFileWrapperName (in_mFileWrapperName),
mAttribute_mTemplateName (in_mTemplateName),
mAttribute_mOutExpressionList (in_mOutExpressionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateFileWrapperTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

void cPtr_templateFileWrapperTemplateCallAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@templateFileWrapperTemplateCallAST:" ;
  mAttribute_mFileWrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTemplateName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateFileWrapperTemplateCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateFileWrapperTemplateCallAST (mAttribute_mFileWrapperName, mAttribute_mTemplateName, mAttribute_mOutExpressionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateFileWrapperTemplateCallAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ("templateFileWrapperTemplateCallAST",
                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateFileWrapperTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateFileWrapperTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFileWrapperTemplateCallAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateFileWrapperTemplateCallAST result ;
  const GALGAS_templateFileWrapperTemplateCallAST * p = (const GALGAS_templateFileWrapperTemplateCallAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateFileWrapperTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFileWrapperTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateFileWrapperWithStaticPathAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateFileWrapperWithStaticPathAST * p = (const cPtr_templateFileWrapperWithStaticPathAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateFileWrapperWithStaticPathAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFileWrapperName.objectCompare (p->mAttribute_mFileWrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileIndex.objectCompare (p->mAttribute_mFileIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateFileWrapperWithStaticPathAST::objectCompare (const GALGAS_templateFileWrapperWithStaticPathAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFileWrapperWithStaticPathAST::GALGAS_templateFileWrapperWithStaticPathAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFileWrapperWithStaticPathAST GALGAS_templateFileWrapperWithStaticPathAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateFileWrapperWithStaticPathAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_uint::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFileWrapperWithStaticPathAST::GALGAS_templateFileWrapperWithStaticPathAST (const cPtr_templateFileWrapperWithStaticPathAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFileWrapperWithStaticPathAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFileWrapperWithStaticPathAST GALGAS_templateFileWrapperWithStaticPathAST::constructor_new (const GALGAS_lstring & inAttribute_mFileWrapperName,
                                                                                                          const GALGAS_uint & inAttribute_mFileIndex
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateFileWrapperWithStaticPathAST result ;
  if (inAttribute_mFileWrapperName.isValid () && inAttribute_mFileIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateFileWrapperWithStaticPathAST (inAttribute_mFileWrapperName, inAttribute_mFileIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateFileWrapperWithStaticPathAST::reader_mFileWrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFileWrapperWithStaticPathAST * p = (const cPtr_templateFileWrapperWithStaticPathAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperWithStaticPathAST) ;
    result = p->mAttribute_mFileWrapperName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateFileWrapperWithStaticPathAST::reader_mFileWrapperName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileWrapperName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_templateFileWrapperWithStaticPathAST::reader_mFileIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFileWrapperWithStaticPathAST * p = (const cPtr_templateFileWrapperWithStaticPathAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperWithStaticPathAST) ;
    result = p->mAttribute_mFileIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_templateFileWrapperWithStaticPathAST::reader_mFileIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @templateFileWrapperWithStaticPathAST class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateFileWrapperWithStaticPathAST::cPtr_templateFileWrapperWithStaticPathAST (const GALGAS_lstring & in_mFileWrapperName,
                                                                                      const GALGAS_uint & in_mFileIndex
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mFileWrapperName (in_mFileWrapperName),
mAttribute_mFileIndex (in_mFileIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateFileWrapperWithStaticPathAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperWithStaticPathAST ;
}

void cPtr_templateFileWrapperWithStaticPathAST::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@templateFileWrapperWithStaticPathAST:" ;
  mAttribute_mFileWrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateFileWrapperWithStaticPathAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateFileWrapperWithStaticPathAST (mAttribute_mFileWrapperName, mAttribute_mFileIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @templateFileWrapperWithStaticPathAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateFileWrapperWithStaticPathAST ("templateFileWrapperWithStaticPathAST",
                                                             & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateFileWrapperWithStaticPathAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperWithStaticPathAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateFileWrapperWithStaticPathAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFileWrapperWithStaticPathAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFileWrapperWithStaticPathAST GALGAS_templateFileWrapperWithStaticPathAST::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateFileWrapperWithStaticPathAST result ;
  const GALGAS_templateFileWrapperWithStaticPathAST * p = (const GALGAS_templateFileWrapperWithStaticPathAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateFileWrapperWithStaticPathAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFileWrapperWithStaticPathAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateFunctionCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateFunctionCallAST * p = (const cPtr_templateFunctionCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionName.objectCompare (p->mAttribute_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionList.objectCompare (p->mAttribute_mExpressionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateFunctionCallAST::objectCompare (const GALGAS_templateFunctionCallAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFunctionCallAST::GALGAS_templateFunctionCallAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFunctionCallAST GALGAS_templateFunctionCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateFunctionCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_templateExpressionListAST::constructor_emptyList (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFunctionCallAST::GALGAS_templateFunctionCallAST (const cPtr_templateFunctionCallAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFunctionCallAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFunctionCallAST GALGAS_templateFunctionCallAST::constructor_new (const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                const GALGAS_templateExpressionListAST & inAttribute_mExpressionList
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateFunctionCallAST result ;
  if (inAttribute_mFunctionName.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateFunctionCallAST (inAttribute_mFunctionName, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateFunctionCallAST::reader_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFunctionCallAST * p = (const cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    result = p->mAttribute_mFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateFunctionCallAST::reader_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateFunctionCallAST::reader_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFunctionCallAST * p = (const cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    result = p->mAttribute_mExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST cPtr_templateFunctionCallAST::reader_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @templateFunctionCallAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateFunctionCallAST::cPtr_templateFunctionCallAST (const GALGAS_lstring & in_mFunctionName,
                                                            const GALGAS_templateExpressionListAST & in_mExpressionList
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mFunctionName (in_mFunctionName),
mAttribute_mExpressionList (in_mExpressionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateFunctionCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

void cPtr_templateFunctionCallAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateFunctionCallAST:" ;
  mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateFunctionCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateFunctionCallAST (mAttribute_mFunctionName, mAttribute_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateFunctionCallAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateFunctionCallAST ("templateFunctionCallAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateFunctionCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateFunctionCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFunctionCallAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFunctionCallAST GALGAS_templateFunctionCallAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateFunctionCallAST result ;
  const GALGAS_templateFunctionCallAST * p = (const GALGAS_templateFunctionCallAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateFunctionCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFunctionCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateIfThenElseExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateIfThenElseExpressionAST * p = (const cPtr_templateIfThenElseExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateIfThenElseExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIfExpression.objectCompare (p->mAttribute_mIfExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mThenExpression.objectCompare (p->mAttribute_mThenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseExpression.objectCompare (p->mAttribute_mElseExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateIfThenElseExpressionAST::objectCompare (const GALGAS_templateIfThenElseExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateIfThenElseExpressionAST::GALGAS_templateIfThenElseExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateIfThenElseExpressionAST::GALGAS_templateIfThenElseExpressionAST (const cPtr_templateIfThenElseExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateIfThenElseExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateIfThenElseExpressionAST GALGAS_templateIfThenElseExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                const GALGAS_templateExpressionAST & inAttribute_mIfExpression,
                                                                                                const GALGAS_templateExpressionAST & inAttribute_mThenExpression,
                                                                                                const GALGAS_templateExpressionAST & inAttribute_mElseExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateIfThenElseExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mIfExpression.isValid () && inAttribute_mThenExpression.isValid () && inAttribute_mElseExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateIfThenElseExpressionAST (inAttribute_mOperatorLocation, inAttribute_mIfExpression, inAttribute_mThenExpression, inAttribute_mElseExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateIfThenElseExpressionAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateIfThenElseExpressionAST * p = (const cPtr_templateIfThenElseExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateIfThenElseExpressionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateIfThenElseExpressionAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateIfThenElseExpressionAST::reader_mIfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateIfThenElseExpressionAST * p = (const cPtr_templateIfThenElseExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateIfThenElseExpressionAST) ;
    result = p->mAttribute_mIfExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateIfThenElseExpressionAST::reader_mIfExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateIfThenElseExpressionAST::reader_mThenExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateIfThenElseExpressionAST * p = (const cPtr_templateIfThenElseExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateIfThenElseExpressionAST) ;
    result = p->mAttribute_mThenExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateIfThenElseExpressionAST::reader_mThenExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThenExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateIfThenElseExpressionAST::reader_mElseExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateIfThenElseExpressionAST * p = (const cPtr_templateIfThenElseExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateIfThenElseExpressionAST) ;
    result = p->mAttribute_mElseExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateIfThenElseExpressionAST::reader_mElseExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @templateIfThenElseExpressionAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateIfThenElseExpressionAST::cPtr_templateIfThenElseExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                            const GALGAS_templateExpressionAST & in_mIfExpression,
                                                                            const GALGAS_templateExpressionAST & in_mThenExpression,
                                                                            const GALGAS_templateExpressionAST & in_mElseExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mIfExpression (in_mIfExpression),
mAttribute_mThenExpression (in_mThenExpression),
mAttribute_mElseExpression (in_mElseExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateIfThenElseExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateIfThenElseExpressionAST ;
}

void cPtr_templateIfThenElseExpressionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@templateIfThenElseExpressionAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIfExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mThenExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateIfThenElseExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateIfThenElseExpressionAST (mAttribute_mOperatorLocation, mAttribute_mIfExpression, mAttribute_mThenExpression, mAttribute_mElseExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @templateIfThenElseExpressionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateIfThenElseExpressionAST ("templateIfThenElseExpressionAST",
                                                        & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateIfThenElseExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateIfThenElseExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateIfThenElseExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateIfThenElseExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateIfThenElseExpressionAST GALGAS_templateIfThenElseExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateIfThenElseExpressionAST result ;
  const GALGAS_templateIfThenElseExpressionAST * p = (const GALGAS_templateIfThenElseExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateIfThenElseExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateIfThenElseExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInfOrEqualTestAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInfOrEqualTestAST * p = (const cPtr_templateInfOrEqualTestAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInfOrEqualTestAST::objectCompare (const GALGAS_templateInfOrEqualTestAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInfOrEqualTestAST::GALGAS_templateInfOrEqualTestAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInfOrEqualTestAST::GALGAS_templateInfOrEqualTestAST (const cPtr_templateInfOrEqualTestAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInfOrEqualTestAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInfOrEqualTestAST GALGAS_templateInfOrEqualTestAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                    const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                    const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInfOrEqualTestAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInfOrEqualTestAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateInfOrEqualTestAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInfOrEqualTestAST * p = (const cPtr_templateInfOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateInfOrEqualTestAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateInfOrEqualTestAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInfOrEqualTestAST * p = (const cPtr_templateInfOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateInfOrEqualTestAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateInfOrEqualTestAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInfOrEqualTestAST * p = (const cPtr_templateInfOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInfOrEqualTestAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateInfOrEqualTestAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @templateInfOrEqualTestAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInfOrEqualTestAST::cPtr_templateInfOrEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                                                const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                                const GALGAS_templateExpressionAST & in_mRightExpression
                                                                COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInfOrEqualTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInfOrEqualTestAST ;
}

void cPtr_templateInfOrEqualTestAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@templateInfOrEqualTestAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInfOrEqualTestAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInfOrEqualTestAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @templateInfOrEqualTestAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInfOrEqualTestAST ("templateInfOrEqualTestAST",
                                                  & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInfOrEqualTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInfOrEqualTestAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInfOrEqualTestAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInfOrEqualTestAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInfOrEqualTestAST GALGAS_templateInfOrEqualTestAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInfOrEqualTestAST result ;
  const GALGAS_templateInfOrEqualTestAST * p = (const GALGAS_templateInfOrEqualTestAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInfOrEqualTestAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInfOrEqualTestAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateLeftShiftOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLeftShiftOperationAST * p = (const cPtr_templateLeftShiftOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateLeftShiftOperationAST::objectCompare (const GALGAS_templateLeftShiftOperationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLeftShiftOperationAST::GALGAS_templateLeftShiftOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLeftShiftOperationAST::GALGAS_templateLeftShiftOperationAST (const cPtr_templateLeftShiftOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLeftShiftOperationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLeftShiftOperationAST GALGAS_templateLeftShiftOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                            const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                            const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateLeftShiftOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLeftShiftOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateLeftShiftOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLeftShiftOperationAST * p = (const cPtr_templateLeftShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateLeftShiftOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateLeftShiftOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLeftShiftOperationAST * p = (const cPtr_templateLeftShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateLeftShiftOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateLeftShiftOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLeftShiftOperationAST * p = (const cPtr_templateLeftShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLeftShiftOperationAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateLeftShiftOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @templateLeftShiftOperationAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateLeftShiftOperationAST::cPtr_templateLeftShiftOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                                        const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                                        const GALGAS_templateExpressionAST & in_mRightExpression
                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateLeftShiftOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLeftShiftOperationAST ;
}

void cPtr_templateLeftShiftOperationAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@templateLeftShiftOperationAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateLeftShiftOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLeftShiftOperationAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @templateLeftShiftOperationAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLeftShiftOperationAST ("templateLeftShiftOperationAST",
                                                      & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateLeftShiftOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLeftShiftOperationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateLeftShiftOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLeftShiftOperationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLeftShiftOperationAST GALGAS_templateLeftShiftOperationAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateLeftShiftOperationAST result ;
  const GALGAS_templateLeftShiftOperationAST * p = (const GALGAS_templateLeftShiftOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLeftShiftOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLeftShiftOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateLiteralCharExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralCharExpressionAST * p = (const cPtr_templateLiteralCharExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralCharExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralChar.objectCompare (p->mAttribute_mLiteralChar) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateLiteralCharExpressionAST::objectCompare (const GALGAS_templateLiteralCharExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralCharExpressionAST::GALGAS_templateLiteralCharExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralCharExpressionAST GALGAS_templateLiteralCharExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralCharExpressionAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralCharExpressionAST::GALGAS_templateLiteralCharExpressionAST (const cPtr_templateLiteralCharExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralCharExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralCharExpressionAST GALGAS_templateLiteralCharExpressionAST::constructor_new (const GALGAS_lchar & inAttribute_mLiteralChar
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralCharExpressionAST result ;
  if (inAttribute_mLiteralChar.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralCharExpressionAST (inAttribute_mLiteralChar COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_templateLiteralCharExpressionAST::reader_mLiteralChar (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralCharExpressionAST * p = (const cPtr_templateLiteralCharExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralCharExpressionAST) ;
    result = p->mAttribute_mLiteralChar ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar cPtr_templateLiteralCharExpressionAST::reader_mLiteralChar (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralChar ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @templateLiteralCharExpressionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateLiteralCharExpressionAST::cPtr_templateLiteralCharExpressionAST (const GALGAS_lchar & in_mLiteralChar
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mLiteralChar (in_mLiteralChar) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateLiteralCharExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ;
}

void cPtr_templateLiteralCharExpressionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@templateLiteralCharExpressionAST:" ;
  mAttribute_mLiteralChar.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateLiteralCharExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLiteralCharExpressionAST (mAttribute_mLiteralChar COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @templateLiteralCharExpressionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ("templateLiteralCharExpressionAST",
                                                         & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateLiteralCharExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateLiteralCharExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralCharExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralCharExpressionAST GALGAS_templateLiteralCharExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralCharExpressionAST result ;
  const GALGAS_templateLiteralCharExpressionAST * p = (const GALGAS_templateLiteralCharExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralCharExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralCharExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateLiteralDoubleExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralDoubleExpressionAST * p = (const cPtr_templateLiteralDoubleExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralDoubleExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralDouble.objectCompare (p->mAttribute_mLiteralDouble) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateLiteralDoubleExpressionAST::objectCompare (const GALGAS_templateLiteralDoubleExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralDoubleExpressionAST::GALGAS_templateLiteralDoubleExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralDoubleExpressionAST GALGAS_templateLiteralDoubleExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralDoubleExpressionAST::constructor_new (GALGAS_ldouble::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralDoubleExpressionAST::GALGAS_templateLiteralDoubleExpressionAST (const cPtr_templateLiteralDoubleExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralDoubleExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralDoubleExpressionAST GALGAS_templateLiteralDoubleExpressionAST::constructor_new (const GALGAS_ldouble & inAttribute_mLiteralDouble
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralDoubleExpressionAST result ;
  if (inAttribute_mLiteralDouble.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralDoubleExpressionAST (inAttribute_mLiteralDouble COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble GALGAS_templateLiteralDoubleExpressionAST::reader_mLiteralDouble (UNUSED_LOCATION_ARGS) const {
  GALGAS_ldouble result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralDoubleExpressionAST * p = (const cPtr_templateLiteralDoubleExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralDoubleExpressionAST) ;
    result = p->mAttribute_mLiteralDouble ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble cPtr_templateLiteralDoubleExpressionAST::reader_mLiteralDouble (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralDouble ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @templateLiteralDoubleExpressionAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateLiteralDoubleExpressionAST::cPtr_templateLiteralDoubleExpressionAST (const GALGAS_ldouble & in_mLiteralDouble
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mLiteralDouble (in_mLiteralDouble) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateLiteralDoubleExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;
}

void cPtr_templateLiteralDoubleExpressionAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@templateLiteralDoubleExpressionAST:" ;
  mAttribute_mLiteralDouble.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateLiteralDoubleExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLiteralDoubleExpressionAST (mAttribute_mLiteralDouble COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateLiteralDoubleExpressionAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ("templateLiteralDoubleExpressionAST",
                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateLiteralDoubleExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateLiteralDoubleExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralDoubleExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralDoubleExpressionAST GALGAS_templateLiteralDoubleExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralDoubleExpressionAST result ;
  const GALGAS_templateLiteralDoubleExpressionAST * p = (const GALGAS_templateLiteralDoubleExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralDoubleExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralDoubleExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateLiteralSInt_36__34_ExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralSInt_36__34_ExpressionAST * p = (const cPtr_templateLiteralSInt_36__34_ExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralInt.objectCompare (p->mAttribute_mLiteralInt) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateLiteralSInt_36__34_ExpressionAST::objectCompare (const GALGAS_templateLiteralSInt_36__34_ExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralSInt_36__34_ExpressionAST::GALGAS_templateLiteralSInt_36__34_ExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralSInt_36__34_ExpressionAST GALGAS_templateLiteralSInt_36__34_ExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralSInt_36__34_ExpressionAST::constructor_new (GALGAS_lsint_36__34_::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralSInt_36__34_ExpressionAST::GALGAS_templateLiteralSInt_36__34_ExpressionAST (const cPtr_templateLiteralSInt_36__34_ExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralSInt_36__34_ExpressionAST GALGAS_templateLiteralSInt_36__34_ExpressionAST::constructor_new (const GALGAS_lsint_36__34_ & inAttribute_mLiteralInt
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralSInt_36__34_ExpressionAST result ;
  if (inAttribute_mLiteralInt.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralSInt_36__34_ExpressionAST (inAttribute_mLiteralInt COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_ GALGAS_templateLiteralSInt_36__34_ExpressionAST::reader_mLiteralInt (UNUSED_LOCATION_ARGS) const {
  GALGAS_lsint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralSInt_36__34_ExpressionAST * p = (const cPtr_templateLiteralSInt_36__34_ExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
    result = p->mAttribute_mLiteralInt ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_ cPtr_templateLiteralSInt_36__34_ExpressionAST::reader_mLiteralInt (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralInt ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @templateLiteralSInt64ExpressionAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateLiteralSInt_36__34_ExpressionAST::cPtr_templateLiteralSInt_36__34_ExpressionAST (const GALGAS_lsint_36__34_ & in_mLiteralInt
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mLiteralInt (in_mLiteralInt) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateLiteralSInt_36__34_ExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST ;
}

void cPtr_templateLiteralSInt_36__34_ExpressionAST::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@templateLiteralSInt64ExpressionAST:" ;
  mAttribute_mLiteralInt.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateLiteralSInt_36__34_ExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLiteralSInt_36__34_ExpressionAST (mAttribute_mLiteralInt COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateLiteralSInt64ExpressionAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST ("templateLiteralSInt64ExpressionAST",
                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateLiteralSInt_36__34_ExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateLiteralSInt_36__34_ExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralSInt_36__34_ExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralSInt_36__34_ExpressionAST GALGAS_templateLiteralSInt_36__34_ExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralSInt_36__34_ExpressionAST result ;
  const GALGAS_templateLiteralSInt_36__34_ExpressionAST * p = (const GALGAS_templateLiteralSInt_36__34_ExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralSInt_36__34_ExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralSInt64ExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateLiteralSIntExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralSIntExpressionAST * p = (const cPtr_templateLiteralSIntExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralSIntExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralInt.objectCompare (p->mAttribute_mLiteralInt) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateLiteralSIntExpressionAST::objectCompare (const GALGAS_templateLiteralSIntExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralSIntExpressionAST::GALGAS_templateLiteralSIntExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralSIntExpressionAST GALGAS_templateLiteralSIntExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralSIntExpressionAST::constructor_new (GALGAS_lsint::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralSIntExpressionAST::GALGAS_templateLiteralSIntExpressionAST (const cPtr_templateLiteralSIntExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralSIntExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralSIntExpressionAST GALGAS_templateLiteralSIntExpressionAST::constructor_new (const GALGAS_lsint & inAttribute_mLiteralInt
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralSIntExpressionAST result ;
  if (inAttribute_mLiteralInt.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralSIntExpressionAST (inAttribute_mLiteralInt COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint GALGAS_templateLiteralSIntExpressionAST::reader_mLiteralInt (UNUSED_LOCATION_ARGS) const {
  GALGAS_lsint result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralSIntExpressionAST * p = (const cPtr_templateLiteralSIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralSIntExpressionAST) ;
    result = p->mAttribute_mLiteralInt ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint cPtr_templateLiteralSIntExpressionAST::reader_mLiteralInt (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralInt ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @templateLiteralSIntExpressionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateLiteralSIntExpressionAST::cPtr_templateLiteralSIntExpressionAST (const GALGAS_lsint & in_mLiteralInt
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mLiteralInt (in_mLiteralInt) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateLiteralSIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST ;
}

void cPtr_templateLiteralSIntExpressionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@templateLiteralSIntExpressionAST:" ;
  mAttribute_mLiteralInt.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateLiteralSIntExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLiteralSIntExpressionAST (mAttribute_mLiteralInt COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @templateLiteralSIntExpressionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST ("templateLiteralSIntExpressionAST",
                                                         & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateLiteralSIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateLiteralSIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralSIntExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralSIntExpressionAST GALGAS_templateLiteralSIntExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralSIntExpressionAST result ;
  const GALGAS_templateLiteralSIntExpressionAST * p = (const GALGAS_templateLiteralSIntExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralSIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralSIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateLiteralStringExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralStringExpressionAST * p = (const cPtr_templateLiteralStringExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralStringList.objectCompare (p->mAttribute_mLiteralStringList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateLiteralStringExpressionAST::objectCompare (const GALGAS_templateLiteralStringExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralStringExpressionAST::GALGAS_templateLiteralStringExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralStringExpressionAST::constructor_new (GALGAS_stringlist::constructor_emptyList (HERE),
                                                                     GALGAS_location::constructor_nowhere (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralStringExpressionAST::GALGAS_templateLiteralStringExpressionAST (const cPtr_templateLiteralStringExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralStringExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST::constructor_new (const GALGAS_stringlist & inAttribute_mLiteralStringList,
                                                                                                      const GALGAS_location & inAttribute_mLocation
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralStringExpressionAST result ;
  if (inAttribute_mLiteralStringList.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralStringExpressionAST (inAttribute_mLiteralStringList, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_templateLiteralStringExpressionAST::reader_mLiteralStringList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralStringExpressionAST * p = (const cPtr_templateLiteralStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
    result = p->mAttribute_mLiteralStringList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cPtr_templateLiteralStringExpressionAST::reader_mLiteralStringList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralStringList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateLiteralStringExpressionAST::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralStringExpressionAST * p = (const cPtr_templateLiteralStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateLiteralStringExpressionAST::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @templateLiteralStringExpressionAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateLiteralStringExpressionAST::cPtr_templateLiteralStringExpressionAST (const GALGAS_stringlist & in_mLiteralStringList,
                                                                                  const GALGAS_location & in_mLocation
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mLiteralStringList (in_mLiteralStringList),
mAttribute_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateLiteralStringExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;
}

void cPtr_templateLiteralStringExpressionAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@templateLiteralStringExpressionAST:" ;
  mAttribute_mLiteralStringList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateLiteralStringExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLiteralStringExpressionAST (mAttribute_mLiteralStringList, mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateLiteralStringExpressionAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ("templateLiteralStringExpressionAST",
                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateLiteralStringExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateLiteralStringExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralStringExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralStringExpressionAST result ;
  const GALGAS_templateLiteralStringExpressionAST * p = (const GALGAS_templateLiteralStringExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralStringExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralStringExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateLiteralUInt_36__34_ExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralUInt_36__34_ExpressionAST * p = (const cPtr_templateLiteralUInt_36__34_ExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralInt.objectCompare (p->mAttribute_mLiteralInt) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateLiteralUInt_36__34_ExpressionAST::objectCompare (const GALGAS_templateLiteralUInt_36__34_ExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralUInt_36__34_ExpressionAST::GALGAS_templateLiteralUInt_36__34_ExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralUInt_36__34_ExpressionAST GALGAS_templateLiteralUInt_36__34_ExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralUInt_36__34_ExpressionAST::constructor_new (GALGAS_luint_36__34_::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralUInt_36__34_ExpressionAST::GALGAS_templateLiteralUInt_36__34_ExpressionAST (const cPtr_templateLiteralUInt_36__34_ExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralUInt_36__34_ExpressionAST GALGAS_templateLiteralUInt_36__34_ExpressionAST::constructor_new (const GALGAS_luint_36__34_ & inAttribute_mLiteralInt
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUInt_36__34_ExpressionAST result ;
  if (inAttribute_mLiteralInt.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralUInt_36__34_ExpressionAST (inAttribute_mLiteralInt COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_ GALGAS_templateLiteralUInt_36__34_ExpressionAST::reader_mLiteralInt (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralUInt_36__34_ExpressionAST * p = (const cPtr_templateLiteralUInt_36__34_ExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
    result = p->mAttribute_mLiteralInt ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_ cPtr_templateLiteralUInt_36__34_ExpressionAST::reader_mLiteralInt (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralInt ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @templateLiteralUInt64ExpressionAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateLiteralUInt_36__34_ExpressionAST::cPtr_templateLiteralUInt_36__34_ExpressionAST (const GALGAS_luint_36__34_ & in_mLiteralInt
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mLiteralInt (in_mLiteralInt) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateLiteralUInt_36__34_ExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST ;
}

void cPtr_templateLiteralUInt_36__34_ExpressionAST::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@templateLiteralUInt64ExpressionAST:" ;
  mAttribute_mLiteralInt.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateLiteralUInt_36__34_ExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLiteralUInt_36__34_ExpressionAST (mAttribute_mLiteralInt COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateLiteralUInt64ExpressionAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST ("templateLiteralUInt64ExpressionAST",
                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateLiteralUInt_36__34_ExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateLiteralUInt_36__34_ExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralUInt_36__34_ExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralUInt_36__34_ExpressionAST GALGAS_templateLiteralUInt_36__34_ExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUInt_36__34_ExpressionAST result ;
  const GALGAS_templateLiteralUInt_36__34_ExpressionAST * p = (const GALGAS_templateLiteralUInt_36__34_ExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralUInt_36__34_ExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralUInt64ExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateLiteralUIntExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralUIntExpressionAST * p = (const cPtr_templateLiteralUIntExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralUIntExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralInt.objectCompare (p->mAttribute_mLiteralInt) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateLiteralUIntExpressionAST::objectCompare (const GALGAS_templateLiteralUIntExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralUIntExpressionAST::GALGAS_templateLiteralUIntExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralUIntExpressionAST GALGAS_templateLiteralUIntExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralUIntExpressionAST::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralUIntExpressionAST::GALGAS_templateLiteralUIntExpressionAST (const cPtr_templateLiteralUIntExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralUIntExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralUIntExpressionAST GALGAS_templateLiteralUIntExpressionAST::constructor_new (const GALGAS_luint & inAttribute_mLiteralInt
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUIntExpressionAST result ;
  if (inAttribute_mLiteralInt.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralUIntExpressionAST (inAttribute_mLiteralInt COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_templateLiteralUIntExpressionAST::reader_mLiteralInt (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralUIntExpressionAST * p = (const cPtr_templateLiteralUIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralUIntExpressionAST) ;
    result = p->mAttribute_mLiteralInt ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_templateLiteralUIntExpressionAST::reader_mLiteralInt (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralInt ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @templateLiteralUIntExpressionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateLiteralUIntExpressionAST::cPtr_templateLiteralUIntExpressionAST (const GALGAS_luint & in_mLiteralInt
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mLiteralInt (in_mLiteralInt) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateLiteralUIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

void cPtr_templateLiteralUIntExpressionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@templateLiteralUIntExpressionAST:" ;
  mAttribute_mLiteralInt.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateLiteralUIntExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLiteralUIntExpressionAST (mAttribute_mLiteralInt COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @templateLiteralUIntExpressionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ("templateLiteralUIntExpressionAST",
                                                         & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateLiteralUIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateLiteralUIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralUIntExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralUIntExpressionAST GALGAS_templateLiteralUIntExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUIntExpressionAST result ;
  const GALGAS_templateLiteralUIntExpressionAST * p = (const GALGAS_templateLiteralUIntExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralUIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralUIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateLogicalNegateAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLogicalNegateAST * p = (const cPtr_templateLogicalNegateAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLogicalNegateAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateLogicalNegateAST::objectCompare (const GALGAS_templateLogicalNegateAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLogicalNegateAST::GALGAS_templateLogicalNegateAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLogicalNegateAST::GALGAS_templateLogicalNegateAST (const cPtr_templateLogicalNegateAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLogicalNegateAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLogicalNegateAST GALGAS_templateLogicalNegateAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                  const GALGAS_templateExpressionAST & inAttribute_mExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateLogicalNegateAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLogicalNegateAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateLogicalNegateAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLogicalNegateAST * p = (const cPtr_templateLogicalNegateAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLogicalNegateAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateLogicalNegateAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateLogicalNegateAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLogicalNegateAST * p = (const cPtr_templateLogicalNegateAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLogicalNegateAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateLogicalNegateAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @templateLogicalNegateAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateLogicalNegateAST::cPtr_templateLogicalNegateAST (const GALGAS_location & in_mOperatorLocation,
                                                              const GALGAS_templateExpressionAST & in_mExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateLogicalNegateAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLogicalNegateAST ;
}

void cPtr_templateLogicalNegateAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@templateLogicalNegateAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateLogicalNegateAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLogicalNegateAST (mAttribute_mOperatorLocation, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @templateLogicalNegateAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLogicalNegateAST ("templateLogicalNegateAST",
                                                 & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateLogicalNegateAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLogicalNegateAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateLogicalNegateAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLogicalNegateAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLogicalNegateAST GALGAS_templateLogicalNegateAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLogicalNegateAST result ;
  const GALGAS_templateLogicalNegateAST * p = (const GALGAS_templateLogicalNegateAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLogicalNegateAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLogicalNegateAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateModuloOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateModuloOperationAST * p = (const cPtr_templateModuloOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateModuloOperationAST::objectCompare (const GALGAS_templateModuloOperationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateModuloOperationAST::GALGAS_templateModuloOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateModuloOperationAST::GALGAS_templateModuloOperationAST (const cPtr_templateModuloOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateModuloOperationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateModuloOperationAST GALGAS_templateModuloOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                      const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                      const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateModuloOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateModuloOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateModuloOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateModuloOperationAST * p = (const cPtr_templateModuloOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateModuloOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateModuloOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateModuloOperationAST * p = (const cPtr_templateModuloOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateModuloOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateModuloOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateModuloOperationAST * p = (const cPtr_templateModuloOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateModuloOperationAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateModuloOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @templateModuloOperationAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateModuloOperationAST::cPtr_templateModuloOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                                  const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                                  const GALGAS_templateExpressionAST & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateModuloOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateModuloOperationAST ;
}

void cPtr_templateModuloOperationAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@templateModuloOperationAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateModuloOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateModuloOperationAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @templateModuloOperationAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateModuloOperationAST ("templateModuloOperationAST",
                                                   & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateModuloOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateModuloOperationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateModuloOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateModuloOperationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateModuloOperationAST GALGAS_templateModuloOperationAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateModuloOperationAST result ;
  const GALGAS_templateModuloOperationAST * p = (const GALGAS_templateModuloOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateModuloOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateModuloOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateMultiplyOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateMultiplyOperationAST * p = (const cPtr_templateMultiplyOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateMultiplyOperationAST::objectCompare (const GALGAS_templateMultiplyOperationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateMultiplyOperationAST::GALGAS_templateMultiplyOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateMultiplyOperationAST::GALGAS_templateMultiplyOperationAST (const cPtr_templateMultiplyOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateMultiplyOperationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateMultiplyOperationAST GALGAS_templateMultiplyOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                          const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                          const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateMultiplyOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateMultiplyOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateMultiplyOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateMultiplyOperationAST * p = (const cPtr_templateMultiplyOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateMultiplyOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateMultiplyOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateMultiplyOperationAST * p = (const cPtr_templateMultiplyOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateMultiplyOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateMultiplyOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateMultiplyOperationAST * p = (const cPtr_templateMultiplyOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateMultiplyOperationAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateMultiplyOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @templateMultiplyOperationAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateMultiplyOperationAST::cPtr_templateMultiplyOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                                      const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                                      const GALGAS_templateExpressionAST & in_mRightExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateMultiplyOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateMultiplyOperationAST ;
}

void cPtr_templateMultiplyOperationAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@templateMultiplyOperationAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateMultiplyOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateMultiplyOperationAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @templateMultiplyOperationAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateMultiplyOperationAST ("templateMultiplyOperationAST",
                                                     & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateMultiplyOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateMultiplyOperationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateMultiplyOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateMultiplyOperationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateMultiplyOperationAST GALGAS_templateMultiplyOperationAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateMultiplyOperationAST result ;
  const GALGAS_templateMultiplyOperationAST * p = (const GALGAS_templateMultiplyOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateMultiplyOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateMultiplyOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateNonEqualTestAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateNonEqualTestAST * p = (const cPtr_templateNonEqualTestAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateNonEqualTestAST::objectCompare (const GALGAS_templateNonEqualTestAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateNonEqualTestAST::GALGAS_templateNonEqualTestAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateNonEqualTestAST::GALGAS_templateNonEqualTestAST (const cPtr_templateNonEqualTestAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateNonEqualTestAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateNonEqualTestAST GALGAS_templateNonEqualTestAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateNonEqualTestAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateNonEqualTestAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateNonEqualTestAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateNonEqualTestAST * p = (const cPtr_templateNonEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateNonEqualTestAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateNonEqualTestAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateNonEqualTestAST * p = (const cPtr_templateNonEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateNonEqualTestAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateNonEqualTestAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateNonEqualTestAST * p = (const cPtr_templateNonEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNonEqualTestAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateNonEqualTestAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @templateNonEqualTestAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateNonEqualTestAST::cPtr_templateNonEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                            const GALGAS_templateExpressionAST & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateNonEqualTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNonEqualTestAST ;
}

void cPtr_templateNonEqualTestAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateNonEqualTestAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateNonEqualTestAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateNonEqualTestAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateNonEqualTestAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateNonEqualTestAST ("templateNonEqualTestAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateNonEqualTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNonEqualTestAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateNonEqualTestAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateNonEqualTestAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateNonEqualTestAST GALGAS_templateNonEqualTestAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateNonEqualTestAST result ;
  const GALGAS_templateNonEqualTestAST * p = (const GALGAS_templateNonEqualTestAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateNonEqualTestAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateNonEqualTestAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateNotOperatorAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateNotOperatorAST * p = (const cPtr_templateNotOperatorAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateNotOperatorAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateNotOperatorAST::objectCompare (const GALGAS_templateNotOperatorAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateNotOperatorAST::GALGAS_templateNotOperatorAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateNotOperatorAST::GALGAS_templateNotOperatorAST (const cPtr_templateNotOperatorAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateNotOperatorAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateNotOperatorAST GALGAS_templateNotOperatorAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                              const GALGAS_templateExpressionAST & inAttribute_mExpression
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateNotOperatorAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateNotOperatorAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateNotOperatorAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateNotOperatorAST * p = (const cPtr_templateNotOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNotOperatorAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateNotOperatorAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateNotOperatorAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateNotOperatorAST * p = (const cPtr_templateNotOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNotOperatorAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateNotOperatorAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @templateNotOperatorAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateNotOperatorAST::cPtr_templateNotOperatorAST (const GALGAS_location & in_mOperatorLocation,
                                                          const GALGAS_templateExpressionAST & in_mExpression
                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateNotOperatorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNotOperatorAST ;
}

void cPtr_templateNotOperatorAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@templateNotOperatorAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateNotOperatorAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateNotOperatorAST (mAttribute_mOperatorLocation, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateNotOperatorAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateNotOperatorAST ("templateNotOperatorAST",
                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateNotOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNotOperatorAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateNotOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateNotOperatorAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateNotOperatorAST GALGAS_templateNotOperatorAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateNotOperatorAST result ;
  const GALGAS_templateNotOperatorAST * p = (const GALGAS_templateNotOperatorAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateNotOperatorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateNotOperatorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateOptionAccessAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateOptionAccessAST * p = (const cPtr_templateOptionAccessAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOptionComponentName.objectCompare (p->mAttribute_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptionName.objectCompare (p->mAttribute_mOptionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReaderName.objectCompare (p->mAttribute_mReaderName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateOptionAccessAST::objectCompare (const GALGAS_templateOptionAccessAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateOptionAccessAST::GALGAS_templateOptionAccessAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateOptionAccessAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateOptionAccessAST::GALGAS_templateOptionAccessAST (const cPtr_templateOptionAccessAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateOptionAccessAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST::constructor_new (const GALGAS_lstring & inAttribute_mOptionComponentName,
                                                                                const GALGAS_lstring & inAttribute_mOptionName,
                                                                                const GALGAS_lstring & inAttribute_mReaderName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateOptionAccessAST result ;
  if (inAttribute_mOptionComponentName.isValid () && inAttribute_mOptionName.isValid () && inAttribute_mReaderName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateOptionAccessAST (inAttribute_mOptionComponentName, inAttribute_mOptionName, inAttribute_mReaderName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateOptionAccessAST::reader_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateOptionAccessAST * p = (const cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    result = p->mAttribute_mOptionComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateOptionAccessAST::reader_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateOptionAccessAST::reader_mOptionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateOptionAccessAST * p = (const cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    result = p->mAttribute_mOptionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateOptionAccessAST::reader_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateOptionAccessAST::reader_mReaderName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateOptionAccessAST * p = (const cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    result = p->mAttribute_mReaderName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateOptionAccessAST::reader_mReaderName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReaderName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @templateOptionAccessAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (const GALGAS_lstring & in_mOptionComponentName,
                                                            const GALGAS_lstring & in_mOptionName,
                                                            const GALGAS_lstring & in_mReaderName
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOptionComponentName (in_mOptionComponentName),
mAttribute_mOptionName (in_mOptionName),
mAttribute_mReaderName (in_mReaderName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateOptionAccessAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

void cPtr_templateOptionAccessAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateOptionAccessAST:" ;
  mAttribute_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOptionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReaderName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateOptionAccessAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateOptionAccessAST (mAttribute_mOptionComponentName, mAttribute_mOptionName, mAttribute_mReaderName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateOptionAccessAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateOptionAccessAST ("templateOptionAccessAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateOptionAccessAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateOptionAccessAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateOptionAccessAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateOptionAccessAST result ;
  const GALGAS_templateOptionAccessAST * p = (const GALGAS_templateOptionAccessAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateOptionAccessAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateOptionAccessAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateOrOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateOrOperationAST * p = (const cPtr_templateOrOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateOrOperationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateOrOperationAST::objectCompare (const GALGAS_templateOrOperationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateOrOperationAST::GALGAS_templateOrOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateOrOperationAST::GALGAS_templateOrOperationAST (const cPtr_templateOrOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateOrOperationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateOrOperationAST GALGAS_templateOrOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                              const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                              const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateOrOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateOrOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateOrOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateOrOperationAST * p = (const cPtr_templateOrOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOrOperationAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateOrOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateOrOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateOrOperationAST * p = (const cPtr_templateOrOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOrOperationAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateOrOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateOrOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateOrOperationAST * p = (const cPtr_templateOrOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOrOperationAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateOrOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @templateOrOperationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateOrOperationAST::cPtr_templateOrOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                          const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                          const GALGAS_templateExpressionAST & in_mRightExpression
                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateOrOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOrOperationAST ;
}

void cPtr_templateOrOperationAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@templateOrOperationAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateOrOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateOrOperationAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateOrOperationAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateOrOperationAST ("templateOrOperationAST",
                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateOrOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOrOperationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateOrOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateOrOperationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateOrOperationAST GALGAS_templateOrOperationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateOrOperationAST result ;
  const GALGAS_templateOrOperationAST * p = (const GALGAS_templateOrOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateOrOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateOrOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateReaderCallInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateReaderCallInExpressionAST * p = (const cPtr_templateReaderCallInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateReaderCallInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverExpression.objectCompare (p->mAttribute_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReaderName.objectCompare (p->mAttribute_mReaderName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionList.objectCompare (p->mAttribute_mExpressionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateReaderCallInExpressionAST::objectCompare (const GALGAS_templateReaderCallInExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReaderCallInExpressionAST::GALGAS_templateReaderCallInExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReaderCallInExpressionAST::GALGAS_templateReaderCallInExpressionAST (const cPtr_templateReaderCallInExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateReaderCallInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReaderCallInExpressionAST GALGAS_templateReaderCallInExpressionAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mReceiverExpression,
                                                                                                    const GALGAS_lstring & inAttribute_mReaderName,
                                                                                                    const GALGAS_templateExpressionListAST & inAttribute_mExpressionList
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateReaderCallInExpressionAST result ;
  if (inAttribute_mReceiverExpression.isValid () && inAttribute_mReaderName.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateReaderCallInExpressionAST (inAttribute_mReceiverExpression, inAttribute_mReaderName, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateReaderCallInExpressionAST::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateReaderCallInExpressionAST * p = (const cPtr_templateReaderCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateReaderCallInExpressionAST) ;
    result = p->mAttribute_mReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateReaderCallInExpressionAST::reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateReaderCallInExpressionAST::reader_mReaderName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateReaderCallInExpressionAST * p = (const cPtr_templateReaderCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateReaderCallInExpressionAST) ;
    result = p->mAttribute_mReaderName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateReaderCallInExpressionAST::reader_mReaderName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReaderName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateReaderCallInExpressionAST::reader_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateReaderCallInExpressionAST * p = (const cPtr_templateReaderCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateReaderCallInExpressionAST) ;
    result = p->mAttribute_mExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST cPtr_templateReaderCallInExpressionAST::reader_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @templateReaderCallInExpressionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateReaderCallInExpressionAST::cPtr_templateReaderCallInExpressionAST (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                                                                const GALGAS_lstring & in_mReaderName,
                                                                                const GALGAS_templateExpressionListAST & in_mExpressionList
                                                                                COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mReceiverExpression (in_mReceiverExpression),
mAttribute_mReaderName (in_mReaderName),
mAttribute_mExpressionList (in_mExpressionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateReaderCallInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateReaderCallInExpressionAST ;
}

void cPtr_templateReaderCallInExpressionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@templateReaderCallInExpressionAST:" ;
  mAttribute_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReaderName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateReaderCallInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateReaderCallInExpressionAST (mAttribute_mReceiverExpression, mAttribute_mReaderName, mAttribute_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @templateReaderCallInExpressionAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateReaderCallInExpressionAST ("templateReaderCallInExpressionAST",
                                                          & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateReaderCallInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateReaderCallInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateReaderCallInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateReaderCallInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReaderCallInExpressionAST GALGAS_templateReaderCallInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateReaderCallInExpressionAST result ;
  const GALGAS_templateReaderCallInExpressionAST * p = (const GALGAS_templateReaderCallInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateReaderCallInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateReaderCallInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateRightShiftOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateRightShiftOperationAST * p = (const cPtr_templateRightShiftOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateRightShiftOperationAST::objectCompare (const GALGAS_templateRightShiftOperationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateRightShiftOperationAST::GALGAS_templateRightShiftOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateRightShiftOperationAST::GALGAS_templateRightShiftOperationAST (const cPtr_templateRightShiftOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateRightShiftOperationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateRightShiftOperationAST GALGAS_templateRightShiftOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                              const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                              const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateRightShiftOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateRightShiftOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateRightShiftOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateRightShiftOperationAST * p = (const cPtr_templateRightShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateRightShiftOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateRightShiftOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateRightShiftOperationAST * p = (const cPtr_templateRightShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateRightShiftOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateRightShiftOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateRightShiftOperationAST * p = (const cPtr_templateRightShiftOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateRightShiftOperationAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateRightShiftOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @templateRightShiftOperationAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateRightShiftOperationAST::cPtr_templateRightShiftOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                                          const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                                          const GALGAS_templateExpressionAST & in_mRightExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateRightShiftOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateRightShiftOperationAST ;
}

void cPtr_templateRightShiftOperationAST::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@templateRightShiftOperationAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateRightShiftOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateRightShiftOperationAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @templateRightShiftOperationAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateRightShiftOperationAST ("templateRightShiftOperationAST",
                                                       & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateRightShiftOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateRightShiftOperationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateRightShiftOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateRightShiftOperationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateRightShiftOperationAST GALGAS_templateRightShiftOperationAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateRightShiftOperationAST result ;
  const GALGAS_templateRightShiftOperationAST * p = (const GALGAS_templateRightShiftOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateRightShiftOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateRightShiftOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateStrictInfTestAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateStrictInfTestAST * p = (const cPtr_templateStrictInfTestAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateStrictInfTestAST::objectCompare (const GALGAS_templateStrictInfTestAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateStrictInfTestAST::GALGAS_templateStrictInfTestAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateStrictInfTestAST::GALGAS_templateStrictInfTestAST (const cPtr_templateStrictInfTestAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateStrictInfTestAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateStrictInfTestAST GALGAS_templateStrictInfTestAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                  const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                  const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateStrictInfTestAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateStrictInfTestAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateStrictInfTestAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateStrictInfTestAST * p = (const cPtr_templateStrictInfTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateStrictInfTestAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateStrictInfTestAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateStrictInfTestAST * p = (const cPtr_templateStrictInfTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateStrictInfTestAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateStrictInfTestAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateStrictInfTestAST * p = (const cPtr_templateStrictInfTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictInfTestAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateStrictInfTestAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @templateStrictInfTestAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateStrictInfTestAST::cPtr_templateStrictInfTestAST (const GALGAS_location & in_mOperatorLocation,
                                                              const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                              const GALGAS_templateExpressionAST & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateStrictInfTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictInfTestAST ;
}

void cPtr_templateStrictInfTestAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@templateStrictInfTestAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateStrictInfTestAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateStrictInfTestAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @templateStrictInfTestAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateStrictInfTestAST ("templateStrictInfTestAST",
                                                 & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateStrictInfTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictInfTestAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateStrictInfTestAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateStrictInfTestAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateStrictInfTestAST GALGAS_templateStrictInfTestAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateStrictInfTestAST result ;
  const GALGAS_templateStrictInfTestAST * p = (const GALGAS_templateStrictInfTestAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateStrictInfTestAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateStrictInfTestAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateStrictSupTestAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateStrictSupTestAST * p = (const cPtr_templateStrictSupTestAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateStrictSupTestAST::objectCompare (const GALGAS_templateStrictSupTestAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateStrictSupTestAST::GALGAS_templateStrictSupTestAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateStrictSupTestAST::GALGAS_templateStrictSupTestAST (const cPtr_templateStrictSupTestAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateStrictSupTestAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateStrictSupTestAST GALGAS_templateStrictSupTestAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                  const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                  const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateStrictSupTestAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateStrictSupTestAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateStrictSupTestAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateStrictSupTestAST * p = (const cPtr_templateStrictSupTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateStrictSupTestAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateStrictSupTestAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateStrictSupTestAST * p = (const cPtr_templateStrictSupTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateStrictSupTestAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateStrictSupTestAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateStrictSupTestAST * p = (const cPtr_templateStrictSupTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateStrictSupTestAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateStrictSupTestAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @templateStrictSupTestAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateStrictSupTestAST::cPtr_templateStrictSupTestAST (const GALGAS_location & in_mOperatorLocation,
                                                              const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                              const GALGAS_templateExpressionAST & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateStrictSupTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictSupTestAST ;
}

void cPtr_templateStrictSupTestAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@templateStrictSupTestAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateStrictSupTestAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateStrictSupTestAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @templateStrictSupTestAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateStrictSupTestAST ("templateStrictSupTestAST",
                                                 & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateStrictSupTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateStrictSupTestAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateStrictSupTestAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateStrictSupTestAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateStrictSupTestAST GALGAS_templateStrictSupTestAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateStrictSupTestAST result ;
  const GALGAS_templateStrictSupTestAST * p = (const GALGAS_templateStrictSupTestAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateStrictSupTestAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateStrictSupTestAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateSubOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateSubOperationAST * p = (const cPtr_templateSubOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateSubOperationAST::objectCompare (const GALGAS_templateSubOperationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateSubOperationAST::GALGAS_templateSubOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateSubOperationAST::GALGAS_templateSubOperationAST (const cPtr_templateSubOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateSubOperationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateSubOperationAST GALGAS_templateSubOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateSubOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateSubOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateSubOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateSubOperationAST * p = (const cPtr_templateSubOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateSubOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateSubOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateSubOperationAST * p = (const cPtr_templateSubOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateSubOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateSubOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateSubOperationAST * p = (const cPtr_templateSubOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateSubOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @templateSubOperationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateSubOperationAST::cPtr_templateSubOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                            const GALGAS_templateExpressionAST & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateSubOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSubOperationAST ;
}

void cPtr_templateSubOperationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateSubOperationAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateSubOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateSubOperationAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateSubOperationAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateSubOperationAST ("templateSubOperationAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateSubOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSubOperationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateSubOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateSubOperationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateSubOperationAST GALGAS_templateSubOperationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateSubOperationAST result ;
  const GALGAS_templateSubOperationAST * p = (const GALGAS_templateSubOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateSubOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateSubOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateSupOrEqualTestAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateSupOrEqualTestAST * p = (const cPtr_templateSupOrEqualTestAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateSupOrEqualTestAST::objectCompare (const GALGAS_templateSupOrEqualTestAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateSupOrEqualTestAST::GALGAS_templateSupOrEqualTestAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateSupOrEqualTestAST::GALGAS_templateSupOrEqualTestAST (const cPtr_templateSupOrEqualTestAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateSupOrEqualTestAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateSupOrEqualTestAST GALGAS_templateSupOrEqualTestAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                    const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                    const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateSupOrEqualTestAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateSupOrEqualTestAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateSupOrEqualTestAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateSupOrEqualTestAST * p = (const cPtr_templateSupOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateSupOrEqualTestAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateSupOrEqualTestAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateSupOrEqualTestAST * p = (const cPtr_templateSupOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateSupOrEqualTestAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateSupOrEqualTestAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateSupOrEqualTestAST * p = (const cPtr_templateSupOrEqualTestAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSupOrEqualTestAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateSupOrEqualTestAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @templateSupOrEqualTestAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateSupOrEqualTestAST::cPtr_templateSupOrEqualTestAST (const GALGAS_location & in_mOperatorLocation,
                                                                const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                                const GALGAS_templateExpressionAST & in_mRightExpression
                                                                COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateSupOrEqualTestAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSupOrEqualTestAST ;
}

void cPtr_templateSupOrEqualTestAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@templateSupOrEqualTestAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateSupOrEqualTestAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateSupOrEqualTestAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @templateSupOrEqualTestAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateSupOrEqualTestAST ("templateSupOrEqualTestAST",
                                                  & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateSupOrEqualTestAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSupOrEqualTestAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateSupOrEqualTestAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateSupOrEqualTestAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateSupOrEqualTestAST GALGAS_templateSupOrEqualTestAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateSupOrEqualTestAST result ;
  const GALGAS_templateSupOrEqualTestAST * p = (const GALGAS_templateSupOrEqualTestAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateSupOrEqualTestAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateSupOrEqualTestAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateTrueBoolAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateTrueBoolAST * p = (const cPtr_templateTrueBoolAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateTrueBoolAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateTrueBoolAST::objectCompare (const GALGAS_templateTrueBoolAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateTrueBoolAST::GALGAS_templateTrueBoolAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateTrueBoolAST GALGAS_templateTrueBoolAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateTrueBoolAST::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateTrueBoolAST::GALGAS_templateTrueBoolAST (const cPtr_templateTrueBoolAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateTrueBoolAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateTrueBoolAST GALGAS_templateTrueBoolAST::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateTrueBoolAST result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateTrueBoolAST (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateTrueBoolAST::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateTrueBoolAST * p = (const cPtr_templateTrueBoolAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTrueBoolAST) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateTrueBoolAST::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @templateTrueBoolAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateTrueBoolAST::cPtr_templateTrueBoolAST (const GALGAS_location & in_mLocation
                                                    COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateTrueBoolAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTrueBoolAST ;
}

void cPtr_templateTrueBoolAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@templateTrueBoolAST:" ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateTrueBoolAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateTrueBoolAST (mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @templateTrueBoolAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateTrueBoolAST ("templateTrueBoolAST",
                                            & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateTrueBoolAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTrueBoolAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateTrueBoolAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateTrueBoolAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateTrueBoolAST GALGAS_templateTrueBoolAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateTrueBoolAST result ;
  const GALGAS_templateTrueBoolAST * p = (const GALGAS_templateTrueBoolAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateTrueBoolAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateTrueBoolAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateUnaryMinusOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateUnaryMinusOperationAST * p = (const cPtr_templateUnaryMinusOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateUnaryMinusOperationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateUnaryMinusOperationAST::objectCompare (const GALGAS_templateUnaryMinusOperationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateUnaryMinusOperationAST::GALGAS_templateUnaryMinusOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateUnaryMinusOperationAST::GALGAS_templateUnaryMinusOperationAST (const cPtr_templateUnaryMinusOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateUnaryMinusOperationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateUnaryMinusOperationAST GALGAS_templateUnaryMinusOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                              const GALGAS_templateExpressionAST & inAttribute_mExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateUnaryMinusOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateUnaryMinusOperationAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateUnaryMinusOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateUnaryMinusOperationAST * p = (const cPtr_templateUnaryMinusOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateUnaryMinusOperationAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateUnaryMinusOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateUnaryMinusOperationAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateUnaryMinusOperationAST * p = (const cPtr_templateUnaryMinusOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateUnaryMinusOperationAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateUnaryMinusOperationAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @templateUnaryMinusOperationAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateUnaryMinusOperationAST::cPtr_templateUnaryMinusOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                                          const GALGAS_templateExpressionAST & in_mExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateUnaryMinusOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST ;
}

void cPtr_templateUnaryMinusOperationAST::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@templateUnaryMinusOperationAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateUnaryMinusOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateUnaryMinusOperationAST (mAttribute_mOperatorLocation, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @templateUnaryMinusOperationAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST ("templateUnaryMinusOperationAST",
                                                       & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateUnaryMinusOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateUnaryMinusOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateUnaryMinusOperationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateUnaryMinusOperationAST GALGAS_templateUnaryMinusOperationAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateUnaryMinusOperationAST result ;
  const GALGAS_templateUnaryMinusOperationAST * p = (const GALGAS_templateUnaryMinusOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateUnaryMinusOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateUnaryMinusOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateVarInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateVarInExpressionAST * p = (const cPtr_templateVarInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateVarInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateVarInExpressionAST::objectCompare (const GALGAS_templateVarInExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVarInExpressionAST::GALGAS_templateVarInExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVarInExpressionAST GALGAS_templateVarInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateVarInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVarInExpressionAST::GALGAS_templateVarInExpressionAST (const cPtr_templateVarInExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateVarInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVarInExpressionAST GALGAS_templateVarInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mVarName
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateVarInExpressionAST result ;
  if (inAttribute_mVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateVarInExpressionAST (inAttribute_mVarName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateVarInExpressionAST::reader_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateVarInExpressionAST * p = (const cPtr_templateVarInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateVarInExpressionAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateVarInExpressionAST::reader_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @templateVarInExpressionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateVarInExpressionAST::cPtr_templateVarInExpressionAST (const GALGAS_lstring & in_mVarName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mVarName (in_mVarName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateVarInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

void cPtr_templateVarInExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@templateVarInExpressionAST:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateVarInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateVarInExpressionAST (mAttribute_mVarName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @templateVarInExpressionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateVarInExpressionAST ("templateVarInExpressionAST",
                                                   & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateVarInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateVarInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateVarInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVarInExpressionAST GALGAS_templateVarInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateVarInExpressionAST result ;
  const GALGAS_templateVarInExpressionAST * p = (const GALGAS_templateVarInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateVarInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVarInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateXorOperationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateXorOperationAST * p = (const cPtr_templateXorOperationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateXorOperationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateXorOperationAST::objectCompare (const GALGAS_templateXorOperationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateXorOperationAST::GALGAS_templateXorOperationAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateXorOperationAST::GALGAS_templateXorOperationAST (const cPtr_templateXorOperationAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateXorOperationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateXorOperationAST GALGAS_templateXorOperationAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mLeftExpression,
                                                                                const GALGAS_templateExpressionAST & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateXorOperationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateXorOperationAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateXorOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateXorOperationAST * p = (const cPtr_templateXorOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateXorOperationAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateXorOperationAST::reader_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateXorOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateXorOperationAST * p = (const cPtr_templateXorOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateXorOperationAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateXorOperationAST::reader_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateXorOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateXorOperationAST * p = (const cPtr_templateXorOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateXorOperationAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateXorOperationAST::reader_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @templateXorOperationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateXorOperationAST::cPtr_templateXorOperationAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_templateExpressionAST & in_mLeftExpression,
                                                            const GALGAS_templateExpressionAST & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateXorOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateXorOperationAST ;
}

void cPtr_templateXorOperationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateXorOperationAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateXorOperationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateXorOperationAST (mAttribute_mOperatorLocation, mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateXorOperationAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateXorOperationAST ("templateXorOperationAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateXorOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateXorOperationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateXorOperationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateXorOperationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateXorOperationAST GALGAS_templateXorOperationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateXorOperationAST result ;
  const GALGAS_templateXorOperationAST * p = (const GALGAS_templateXorOperationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateXorOperationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateXorOperationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_templateInstructionAST::objectCompare (const GALGAS_templateInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionAST::GALGAS_templateInstructionAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionAST::GALGAS_templateInstructionAST (const cPtr_templateInstructionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @templateInstructionAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionAST::cPtr_templateInstructionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateInstructionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionAST ("templateInstructionAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionAST GALGAS_templateInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionAST result ;
  const GALGAS_templateInstructionAST * p = (const GALGAS_templateInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateBlockInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateBlockInstructionAST * p = (const cPtr_templateBlockInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBlockInstructionList.objectCompare (p->mAttribute_mBlockInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateBlockInstructionAST::objectCompare (const GALGAS_templateBlockInstructionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateBlockInstructionAST::GALGAS_templateBlockInstructionAST (void) :
GALGAS_templateInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateBlockInstructionAST::GALGAS_templateBlockInstructionAST (const cPtr_templateBlockInstructionAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateBlockInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateBlockInstructionAST GALGAS_templateBlockInstructionAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mExpression,
                                                                                        const GALGAS_location & inAttribute_mLocation,
                                                                                        const GALGAS_templateInstructionListAST & inAttribute_mBlockInstructionList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateBlockInstructionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mLocation.isValid () && inAttribute_mBlockInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateBlockInstructionAST (inAttribute_mExpression, inAttribute_mLocation, inAttribute_mBlockInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateBlockInstructionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateBlockInstructionAST * p = (const cPtr_templateBlockInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateBlockInstructionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateBlockInstructionAST::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateBlockInstructionAST * p = (const cPtr_templateBlockInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateBlockInstructionAST::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateBlockInstructionAST::reader_mBlockInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateBlockInstructionAST * p = (const cPtr_templateBlockInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionAST) ;
    result = p->mAttribute_mBlockInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST cPtr_templateBlockInstructionAST::reader_mBlockInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @templateBlockInstructionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateBlockInstructionAST::cPtr_templateBlockInstructionAST (const GALGAS_templateExpressionAST & in_mExpression,
                                                                    const GALGAS_location & in_mLocation,
                                                                    const GALGAS_templateInstructionListAST & in_mBlockInstructionList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mAttribute_mExpression (in_mExpression),
mAttribute_mLocation (in_mLocation),
mAttribute_mBlockInstructionList (in_mBlockInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateBlockInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionAST ;
}

void cPtr_templateBlockInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@templateBlockInstructionAST:" ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBlockInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateBlockInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateBlockInstructionAST (mAttribute_mExpression, mAttribute_mLocation, mAttribute_mBlockInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @templateBlockInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateBlockInstructionAST ("templateBlockInstructionAST",
                                                    & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateBlockInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateBlockInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateBlockInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateBlockInstructionAST GALGAS_templateBlockInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateBlockInstructionAST result ;
  const GALGAS_templateBlockInstructionAST * p = (const GALGAS_templateBlockInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateBlockInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateBlockInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionExpressionAST * p = (const cPtr_templateInstructionExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionExpressionAST::objectCompare (const GALGAS_templateInstructionExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionExpressionAST::GALGAS_templateInstructionExpressionAST (void) :
GALGAS_templateInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionExpressionAST::GALGAS_templateInstructionExpressionAST (const cPtr_templateInstructionExpressionAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionExpressionAST GALGAS_templateInstructionExpressionAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mExpression,
                                                                                                  const GALGAS_location & inAttribute_mLocation
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionExpressionAST (inAttribute_mExpression, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateInstructionExpressionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionExpressionAST * p = (const cPtr_templateInstructionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateInstructionExpressionAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateInstructionExpressionAST::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionExpressionAST * p = (const cPtr_templateInstructionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionAST) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateInstructionExpressionAST::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @templateInstructionExpressionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionExpressionAST::cPtr_templateInstructionExpressionAST (const GALGAS_templateExpressionAST & in_mExpression,
                                                                              const GALGAS_location & in_mLocation
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mAttribute_mExpression (in_mExpression),
mAttribute_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionAST ;
}

void cPtr_templateInstructionExpressionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@templateInstructionExpressionAST:" ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionExpressionAST (mAttribute_mExpression, mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @templateInstructionExpressionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionExpressionAST ("templateInstructionExpressionAST",
                                                         & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionExpressionAST GALGAS_templateInstructionExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionAST result ;
  const GALGAS_templateInstructionExpressionAST * p = (const GALGAS_templateInstructionExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionForeachAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsAscending.objectCompare (p->mAttribute_mIsAscending) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPrefix.objectCompare (p->mAttribute_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBeforeInstructionList.objectCompare (p->mAttribute_mBeforeInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDoInstructionList.objectCompare (p->mAttribute_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndexIdentifier.objectCompare (p->mAttribute_mIndexIdentifier) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBetweenInstructionList.objectCompare (p->mAttribute_mBetweenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAfterInstructionList.objectCompare (p->mAttribute_mAfterInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionForeachAST::objectCompare (const GALGAS_templateInstructionForeachAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForeachAST::GALGAS_templateInstructionForeachAST (void) :
GALGAS_templateInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForeachAST::GALGAS_templateInstructionForeachAST (const cPtr_templateInstructionForeachAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForeachAST GALGAS_templateInstructionForeachAST::constructor_new (const GALGAS_bool & inAttribute_mIsAscending,
                                                                                            const GALGAS_templateExpressionAST & inAttribute_mExpression,
                                                                                            const GALGAS_string & inAttribute_mPrefix,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mBeforeInstructionList,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mDoInstructionList,
                                                                                            const GALGAS_lstring & inAttribute_mIndexIdentifier,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mBetweenInstructionList,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mAfterInstructionList
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachAST result ;
  if (inAttribute_mIsAscending.isValid () && inAttribute_mExpression.isValid () && inAttribute_mPrefix.isValid () && inAttribute_mBeforeInstructionList.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mIndexIdentifier.isValid () && inAttribute_mBetweenInstructionList.isValid () && inAttribute_mAfterInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionForeachAST (inAttribute_mIsAscending, inAttribute_mExpression, inAttribute_mPrefix, inAttribute_mBeforeInstructionList, inAttribute_mDoInstructionList, inAttribute_mIndexIdentifier, inAttribute_mBetweenInstructionList, inAttribute_mAfterInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_templateInstructionForeachAST::reader_mIsAscending (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mIsAscending ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_templateInstructionForeachAST::reader_mIsAscending (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsAscending ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateInstructionForeachAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateInstructionForeachAST::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_templateInstructionForeachAST::reader_mPrefix (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mPrefix ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_templateInstructionForeachAST::reader_mPrefix (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrefix ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::reader_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mBeforeInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST cPtr_templateInstructionForeachAST::reader_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBeforeInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::reader_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST cPtr_templateInstructionForeachAST::reader_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateInstructionForeachAST::reader_mIndexIdentifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mIndexIdentifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateInstructionForeachAST::reader_mIndexIdentifier (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexIdentifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::reader_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mBetweenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST cPtr_templateInstructionForeachAST::reader_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBetweenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::reader_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mAfterInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST cPtr_templateInstructionForeachAST::reader_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAfterInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @templateInstructionForeachAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionForeachAST::cPtr_templateInstructionForeachAST (const GALGAS_bool & in_mIsAscending,
                                                                        const GALGAS_templateExpressionAST & in_mExpression,
                                                                        const GALGAS_string & in_mPrefix,
                                                                        const GALGAS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                        const GALGAS_templateInstructionListAST & in_mDoInstructionList,
                                                                        const GALGAS_lstring & in_mIndexIdentifier,
                                                                        const GALGAS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                        const GALGAS_templateInstructionListAST & in_mAfterInstructionList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mAttribute_mIsAscending (in_mIsAscending),
mAttribute_mExpression (in_mExpression),
mAttribute_mPrefix (in_mPrefix),
mAttribute_mBeforeInstructionList (in_mBeforeInstructionList),
mAttribute_mDoInstructionList (in_mDoInstructionList),
mAttribute_mIndexIdentifier (in_mIndexIdentifier),
mAttribute_mBetweenInstructionList (in_mBetweenInstructionList),
mAttribute_mAfterInstructionList (in_mAfterInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionForeachAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

void cPtr_templateInstructionForeachAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@templateInstructionForeachAST:" ;
  mAttribute_mIsAscending.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPrefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIndexIdentifier.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionForeachAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionForeachAST (mAttribute_mIsAscending, mAttribute_mExpression, mAttribute_mPrefix, mAttribute_mBeforeInstructionList, mAttribute_mDoInstructionList, mAttribute_mIndexIdentifier, mAttribute_mBetweenInstructionList, mAttribute_mAfterInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @templateInstructionForeachAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionForeachAST ("templateInstructionForeachAST",
                                                      & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionForeachAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionForeachAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForeachAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionGetColumnLocationAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionGetColumnLocationAST::objectCompare (const GALGAS_templateInstructionGetColumnLocationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGetColumnLocationAST::GALGAS_templateInstructionGetColumnLocationAST (void) :
GALGAS_templateInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGetColumnLocationAST GALGAS_templateInstructionGetColumnLocationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionGetColumnLocationAST::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGetColumnLocationAST::GALGAS_templateInstructionGetColumnLocationAST (const cPtr_templateInstructionGetColumnLocationAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGetColumnLocationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGetColumnLocationAST GALGAS_templateInstructionGetColumnLocationAST::constructor_new (LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionGetColumnLocationAST (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @templateInstructionGetColumnLocationAST class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionGetColumnLocationAST::cPtr_templateInstructionGetColumnLocationAST (LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionGetColumnLocationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST ;
}

void cPtr_templateInstructionGetColumnLocationAST::description (C_String & ioString,
                                                                const int32_t /* inIndentation */) const {
  ioString << "[@templateInstructionGetColumnLocationAST]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionGetColumnLocationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionGetColumnLocationAST (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @templateInstructionGetColumnLocationAST type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST ("templateInstructionGetColumnLocationAST",
                                                                & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionGetColumnLocationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionGetColumnLocationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionGetColumnLocationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGetColumnLocationAST GALGAS_templateInstructionGetColumnLocationAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationAST result ;
  const GALGAS_templateInstructionGetColumnLocationAST * p = (const GALGAS_templateInstructionGetColumnLocationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionGetColumnLocationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGetColumnLocationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionGotoColumnLocationAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionGotoColumnLocationAST::objectCompare (const GALGAS_templateInstructionGotoColumnLocationAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGotoColumnLocationAST::GALGAS_templateInstructionGotoColumnLocationAST (void) :
GALGAS_templateInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGotoColumnLocationAST GALGAS_templateInstructionGotoColumnLocationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionGotoColumnLocationAST::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGotoColumnLocationAST::GALGAS_templateInstructionGotoColumnLocationAST (const cPtr_templateInstructionGotoColumnLocationAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGotoColumnLocationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGotoColumnLocationAST GALGAS_templateInstructionGotoColumnLocationAST::constructor_new (LOCATION_ARGS) {
  GALGAS_templateInstructionGotoColumnLocationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionGotoColumnLocationAST (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @templateInstructionGotoColumnLocationAST class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionGotoColumnLocationAST::cPtr_templateInstructionGotoColumnLocationAST (LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionGotoColumnLocationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST ;
}

void cPtr_templateInstructionGotoColumnLocationAST::description (C_String & ioString,
                                                                 const int32_t /* inIndentation */) const {
  ioString << "[@templateInstructionGotoColumnLocationAST]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionGotoColumnLocationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionGotoColumnLocationAST (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @templateInstructionGotoColumnLocationAST type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST ("templateInstructionGotoColumnLocationAST",
                                                                 & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionGotoColumnLocationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionGotoColumnLocationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionGotoColumnLocationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGotoColumnLocationAST GALGAS_templateInstructionGotoColumnLocationAST::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionGotoColumnLocationAST result ;
  const GALGAS_templateInstructionGotoColumnLocationAST * p = (const GALGAS_templateInstructionGotoColumnLocationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionGotoColumnLocationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGotoColumnLocationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionIfAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionIfAST * p = (const cPtr_templateInstructionIfAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTemplateInstructionIfBranchList.objectCompare (p->mAttribute_mTemplateInstructionIfBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionList.objectCompare (p->mAttribute_mElseInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionIfAST::objectCompare (const GALGAS_templateInstructionIfAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfAST::GALGAS_templateInstructionIfAST (void) :
GALGAS_templateInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfAST GALGAS_templateInstructionIfAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionIfAST::constructor_new (GALGAS_templateInstructionIfBranchListAST::constructor_emptyList (HERE),
                                                           GALGAS_templateInstructionListAST::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfAST::GALGAS_templateInstructionIfAST (const cPtr_templateInstructionIfAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionIfAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfAST GALGAS_templateInstructionIfAST::constructor_new (const GALGAS_templateInstructionIfBranchListAST & inAttribute_mTemplateInstructionIfBranchList,
                                                                                  const GALGAS_templateInstructionListAST & inAttribute_mElseInstructionList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfAST result ;
  if (inAttribute_mTemplateInstructionIfBranchList.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionIfAST (inAttribute_mTemplateInstructionIfBranchList, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST GALGAS_templateInstructionIfAST::reader_mTemplateInstructionIfBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionIfAST * p = (const cPtr_templateInstructionIfAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
    result = p->mAttribute_mTemplateInstructionIfBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST cPtr_templateInstructionIfAST::reader_mTemplateInstructionIfBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateInstructionIfBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionIfAST::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionIfAST * p = (const cPtr_templateInstructionIfAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfAST) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST cPtr_templateInstructionIfAST::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @templateInstructionIfAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionIfAST::cPtr_templateInstructionIfAST (const GALGAS_templateInstructionIfBranchListAST & in_mTemplateInstructionIfBranchList,
                                                              const GALGAS_templateInstructionListAST & in_mElseInstructionList
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mAttribute_mTemplateInstructionIfBranchList (in_mTemplateInstructionIfBranchList),
mAttribute_mElseInstructionList (in_mElseInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionIfAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfAST ;
}

void cPtr_templateInstructionIfAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@templateInstructionIfAST:" ;
  mAttribute_mTemplateInstructionIfBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionIfAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionIfAST (mAttribute_mTemplateInstructionIfBranchList, mAttribute_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @templateInstructionIfAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfAST ("templateInstructionIfAST",
                                                 & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionIfAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionIfAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfAST GALGAS_templateInstructionIfAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfAST result ;
  const GALGAS_templateInstructionIfAST * p = (const GALGAS_templateInstructionIfAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionStringAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionStringAST * p = (const cPtr_templateInstructionStringAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionStringAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTemplateString.objectCompare (p->mAttribute_mTemplateString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionStringAST::objectCompare (const GALGAS_templateInstructionStringAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionStringAST::GALGAS_templateInstructionStringAST (void) :
GALGAS_templateInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionStringAST GALGAS_templateInstructionStringAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionStringAST::constructor_new (GALGAS_string::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionStringAST::GALGAS_templateInstructionStringAST (const cPtr_templateInstructionStringAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionStringAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionStringAST GALGAS_templateInstructionStringAST::constructor_new (const GALGAS_string & inAttribute_mTemplateString
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringAST result ;
  if (inAttribute_mTemplateString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionStringAST (inAttribute_mTemplateString COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_templateInstructionStringAST::reader_mTemplateString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionStringAST * p = (const cPtr_templateInstructionStringAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionStringAST) ;
    result = p->mAttribute_mTemplateString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_templateInstructionStringAST::reader_mTemplateString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateString ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @templateInstructionStringAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionStringAST::cPtr_templateInstructionStringAST (const GALGAS_string & in_mTemplateString
                                                                      COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mAttribute_mTemplateString (in_mTemplateString) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionStringAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringAST ;
}

void cPtr_templateInstructionStringAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@templateInstructionStringAST:" ;
  mAttribute_mTemplateString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionStringAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionStringAST (mAttribute_mTemplateString COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @templateInstructionStringAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionStringAST ("templateInstructionStringAST",
                                                     & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionStringAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionStringAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionStringAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionStringAST GALGAS_templateInstructionStringAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringAST result ;
  const GALGAS_templateInstructionStringAST * p = (const GALGAS_templateInstructionStringAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionStringAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionSwitchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionSwitchAST * p = (const cPtr_templateInstructionSwitchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSwitchExpression.objectCompare (p->mAttribute_mSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSwitchExpressionEndLocation.objectCompare (p->mAttribute_mSwitchExpressionEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTemplateInstructionSwitchBranchList.objectCompare (p->mAttribute_mTemplateInstructionSwitchBranchList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionSwitchAST::objectCompare (const GALGAS_templateInstructionSwitchAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchAST::GALGAS_templateInstructionSwitchAST (void) :
GALGAS_templateInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchAST::GALGAS_templateInstructionSwitchAST (const cPtr_templateInstructionSwitchAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionSwitchAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchAST GALGAS_templateInstructionSwitchAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mSwitchExpression,
                                                                                          const GALGAS_location & inAttribute_mSwitchExpressionEndLocation,
                                                                                          const GALGAS_templateInstructionSwitchBranchListAST & inAttribute_mTemplateInstructionSwitchBranchList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchAST result ;
  if (inAttribute_mSwitchExpression.isValid () && inAttribute_mSwitchExpressionEndLocation.isValid () && inAttribute_mTemplateInstructionSwitchBranchList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionSwitchAST (inAttribute_mSwitchExpression, inAttribute_mSwitchExpressionEndLocation, inAttribute_mTemplateInstructionSwitchBranchList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateInstructionSwitchAST::reader_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionSwitchAST * p = (const cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    result = p->mAttribute_mSwitchExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateInstructionSwitchAST::reader_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSwitchExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateInstructionSwitchAST::reader_mSwitchExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionSwitchAST * p = (const cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    result = p->mAttribute_mSwitchExpressionEndLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateInstructionSwitchAST::reader_mSwitchExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSwitchExpressionEndLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchAST::reader_mTemplateInstructionSwitchBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionSwitchAST * p = (const cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    result = p->mAttribute_mTemplateInstructionSwitchBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST cPtr_templateInstructionSwitchAST::reader_mTemplateInstructionSwitchBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateInstructionSwitchBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @templateInstructionSwitchAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionSwitchAST::cPtr_templateInstructionSwitchAST (const GALGAS_templateExpressionAST & in_mSwitchExpression,
                                                                      const GALGAS_location & in_mSwitchExpressionEndLocation,
                                                                      const GALGAS_templateInstructionSwitchBranchListAST & in_mTemplateInstructionSwitchBranchList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mAttribute_mSwitchExpression (in_mSwitchExpression),
mAttribute_mSwitchExpressionEndLocation (in_mSwitchExpressionEndLocation),
mAttribute_mTemplateInstructionSwitchBranchList (in_mTemplateInstructionSwitchBranchList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionSwitchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchAST ;
}

void cPtr_templateInstructionSwitchAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@templateInstructionSwitchAST:" ;
  mAttribute_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSwitchExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTemplateInstructionSwitchBranchList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionSwitchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionSwitchAST (mAttribute_mSwitchExpression, mAttribute_mSwitchExpressionEndLocation, mAttribute_mTemplateInstructionSwitchBranchList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @templateInstructionSwitchAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchAST ("templateInstructionSwitchAST",
                                                     & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionSwitchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchAST GALGAS_templateInstructionSwitchAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchAST result ;
  const GALGAS_templateInstructionSwitchAST * p = (const GALGAS_templateInstructionSwitchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_templateInstructionForGeneration::objectCompare (const GALGAS_templateInstructionForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForGeneration::GALGAS_templateInstructionForGeneration (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForGeneration::GALGAS_templateInstructionForGeneration (const cPtr_templateInstructionForGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @templateInstructionForGeneration class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionForGeneration::cPtr_templateInstructionForGeneration (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @templateInstructionForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionForGeneration ("templateInstructionForGeneration",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForGeneration GALGAS_templateInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForGeneration result ;
  const GALGAS_templateInstructionForGeneration * p = (const GALGAS_templateInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateBlockInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateBlockInstructionForGeneration * p = (const cPtr_templateBlockInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBlockInstructionList.objectCompare (p->mAttribute_mBlockInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateBlockInstructionForGeneration::objectCompare (const GALGAS_templateBlockInstructionForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateBlockInstructionForGeneration::GALGAS_templateBlockInstructionForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateBlockInstructionForGeneration::GALGAS_templateBlockInstructionForGeneration (const cPtr_templateBlockInstructionForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateBlockInstructionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateBlockInstructionForGeneration GALGAS_templateBlockInstructionForGeneration::constructor_new (const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression,
                                                                                                            const GALGAS_location & inAttribute_mLocation,
                                                                                                            const GALGAS_templateInstructionListForGeneration & inAttribute_mBlockInstructionList
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateBlockInstructionForGeneration result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mLocation.isValid () && inAttribute_mBlockInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateBlockInstructionForGeneration (inAttribute_mExpression, inAttribute_mLocation, inAttribute_mBlockInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_templateBlockInstructionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateBlockInstructionForGeneration * p = (const cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_templateBlockInstructionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateBlockInstructionForGeneration::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateBlockInstructionForGeneration * p = (const cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateBlockInstructionForGeneration::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateBlockInstructionForGeneration::reader_mBlockInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateBlockInstructionForGeneration * p = (const cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    result = p->mAttribute_mBlockInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration cPtr_templateBlockInstructionForGeneration::reader_mBlockInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @templateBlockInstructionForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateBlockInstructionForGeneration::cPtr_templateBlockInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                        const GALGAS_location & in_mLocation,
                                                                                        const GALGAS_templateInstructionListForGeneration & in_mBlockInstructionList
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mAttribute_mExpression (in_mExpression),
mAttribute_mLocation (in_mLocation),
mAttribute_mBlockInstructionList (in_mBlockInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateBlockInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;
}

void cPtr_templateBlockInstructionForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@templateBlockInstructionForGeneration:" ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBlockInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateBlockInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateBlockInstructionForGeneration (mAttribute_mExpression, mAttribute_mLocation, mAttribute_mBlockInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @templateBlockInstructionForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ("templateBlockInstructionForGeneration",
                                                              & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateBlockInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateBlockInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateBlockInstructionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateBlockInstructionForGeneration GALGAS_templateBlockInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateBlockInstructionForGeneration result ;
  const GALGAS_templateBlockInstructionForGeneration * p = (const GALGAS_templateBlockInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateBlockInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateBlockInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionExpressionForGeneration * p = (const cPtr_templateInstructionExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionExpressionForGeneration::objectCompare (const GALGAS_templateInstructionExpressionForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionExpressionForGeneration::GALGAS_templateInstructionExpressionForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionExpressionForGeneration::GALGAS_templateInstructionExpressionForGeneration (const cPtr_templateInstructionExpressionForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::constructor_new (const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionForGeneration result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionExpressionForGeneration (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionExpressionForGeneration * p = (const cPtr_templateInstructionExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionForGeneration) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_templateInstructionExpressionForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         Pointer class for @templateInstructionExpressionForGeneration class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionExpressionForGeneration::cPtr_templateInstructionExpressionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

void cPtr_templateInstructionExpressionForGeneration::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@templateInstructionExpressionForGeneration:" ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionExpressionForGeneration (mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @templateInstructionExpressionForGeneration type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ("templateInstructionExpressionForGeneration",
                                                                   & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionForGeneration result ;
  const GALGAS_templateInstructionExpressionForGeneration * p = (const GALGAS_templateInstructionExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionForeachForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsAscending.objectCompare (p->mAttribute_mIsAscending) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumeratorCppName.objectCompare (p->mAttribute_mEnumeratorCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBeforeInstructionList.objectCompare (p->mAttribute_mBeforeInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDoInstructionList.objectCompare (p->mAttribute_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndexCppName.objectCompare (p->mAttribute_mIndexCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBetweenInstructionList.objectCompare (p->mAttribute_mBetweenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAfterInstructionList.objectCompare (p->mAttribute_mAfterInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionForeachForGeneration::objectCompare (const GALGAS_templateInstructionForeachForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForeachForGeneration::GALGAS_templateInstructionForeachForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForeachForGeneration::GALGAS_templateInstructionForeachForGeneration (const cPtr_templateInstructionForeachForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_templateInstructionForeachForGeneration::reader_mIsAscending (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mAttribute_mIsAscending ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_templateInstructionForeachForGeneration::reader_mIsAscending (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsAscending ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionForeachForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_templateInstructionForeachForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_templateInstructionForeachForGeneration::reader_mEnumeratorCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mAttribute_mEnumeratorCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_templateInstructionForeachForGeneration::reader_mEnumeratorCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratorCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::reader_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mAttribute_mBeforeInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration cPtr_templateInstructionForeachForGeneration::reader_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBeforeInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::reader_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mAttribute_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration cPtr_templateInstructionForeachForGeneration::reader_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_templateInstructionForeachForGeneration::reader_mIndexCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mAttribute_mIndexCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_templateInstructionForeachForGeneration::reader_mIndexCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::reader_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mAttribute_mBetweenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration cPtr_templateInstructionForeachForGeneration::reader_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBetweenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::reader_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mAttribute_mAfterInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration cPtr_templateInstructionForeachForGeneration::reader_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAfterInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @templateInstructionForeachForGeneration class                           *
//---------------------------------------------------------------------------------------------------------------------*

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
mAttribute_mIsAscending (in_mIsAscending),
mAttribute_mExpression (in_mExpression),
mAttribute_mEnumeratorCppName (in_mEnumeratorCppName),
mAttribute_mBeforeInstructionList (in_mBeforeInstructionList),
mAttribute_mDoInstructionList (in_mDoInstructionList),
mAttribute_mIndexCppName (in_mIndexCppName),
mAttribute_mBetweenInstructionList (in_mBetweenInstructionList),
mAttribute_mAfterInstructionList (in_mAfterInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionForeachForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;
}

void cPtr_templateInstructionForeachForGeneration::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@templateInstructionForeachForGeneration:" ;
  mAttribute_mIsAscending.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEnumeratorCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIndexCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionForeachForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionForeachForGeneration (mAttribute_mIsAscending, mAttribute_mExpression, mAttribute_mEnumeratorCppName, mAttribute_mBeforeInstructionList, mAttribute_mDoInstructionList, mAttribute_mIndexCppName, mAttribute_mBetweenInstructionList, mAttribute_mAfterInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @templateInstructionForeachForGeneration type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ("templateInstructionForeachForGeneration",
                                                                & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionForeachForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionForeachForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForeachForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionGetColumnLocationForGeneration::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionGetColumnLocationForGeneration::objectCompare (const GALGAS_templateInstructionGetColumnLocationForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGetColumnLocationForGeneration::GALGAS_templateInstructionGetColumnLocationForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGetColumnLocationForGeneration GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGetColumnLocationForGeneration::GALGAS_templateInstructionGetColumnLocationForGeneration (const cPtr_templateInstructionGetColumnLocationForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGetColumnLocationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGetColumnLocationForGeneration GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionGetColumnLocationForGeneration (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                     Pointer class for @templateInstructionGetColumnLocationForGeneration class                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionGetColumnLocationForGeneration::cPtr_templateInstructionGetColumnLocationForGeneration (LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionGetColumnLocationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ;
}

void cPtr_templateInstructionGetColumnLocationForGeneration::description (C_String & ioString,
                                                                          const int32_t /* inIndentation */) const {
  ioString << "[@templateInstructionGetColumnLocationForGeneration]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionGetColumnLocationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionGetColumnLocationForGeneration (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @templateInstructionGetColumnLocationForGeneration type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ("templateInstructionGetColumnLocationForGeneration",
                                                                          & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionGetColumnLocationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionGetColumnLocationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionGetColumnLocationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGetColumnLocationForGeneration GALGAS_templateInstructionGetColumnLocationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionGetColumnLocationForGeneration result ;
  const GALGAS_templateInstructionGetColumnLocationForGeneration * p = (const GALGAS_templateInstructionGetColumnLocationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionGetColumnLocationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGetColumnLocationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionGotoColumnLocationForGeneration::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionGotoColumnLocationForGeneration::objectCompare (const GALGAS_templateInstructionGotoColumnLocationForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGotoColumnLocationForGeneration::GALGAS_templateInstructionGotoColumnLocationForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGotoColumnLocationForGeneration GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGotoColumnLocationForGeneration::GALGAS_templateInstructionGotoColumnLocationForGeneration (const cPtr_templateInstructionGotoColumnLocationForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGotoColumnLocationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGotoColumnLocationForGeneration GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (LOCATION_ARGS) {
  GALGAS_templateInstructionGotoColumnLocationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionGotoColumnLocationForGeneration (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                     Pointer class for @templateInstructionGotoColumnLocationForGeneration class                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionGotoColumnLocationForGeneration::cPtr_templateInstructionGotoColumnLocationForGeneration (LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionGotoColumnLocationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ;
}

void cPtr_templateInstructionGotoColumnLocationForGeneration::description (C_String & ioString,
                                                                           const int32_t /* inIndentation */) const {
  ioString << "[@templateInstructionGotoColumnLocationForGeneration]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionGotoColumnLocationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionGotoColumnLocationForGeneration (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @templateInstructionGotoColumnLocationForGeneration type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ("templateInstructionGotoColumnLocationForGeneration",
                                                                           & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionGotoColumnLocationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionGotoColumnLocationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionGotoColumnLocationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionGotoColumnLocationForGeneration GALGAS_templateInstructionGotoColumnLocationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionGotoColumnLocationForGeneration result ;
  const GALGAS_templateInstructionGotoColumnLocationForGeneration * p = (const GALGAS_templateInstructionGotoColumnLocationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionGotoColumnLocationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGotoColumnLocationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionIfForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionIfForGeneration * p = (const cPtr_templateInstructionIfForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTemplateInstructionIfBranchList.objectCompare (p->mAttribute_mTemplateInstructionIfBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionList.objectCompare (p->mAttribute_mElseInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionIfForGeneration::objectCompare (const GALGAS_templateInstructionIfForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfForGeneration::GALGAS_templateInstructionIfForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfForGeneration GALGAS_templateInstructionIfForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionIfForGeneration::constructor_new (GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (HERE),
                                                                     GALGAS_templateInstructionListForGeneration::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfForGeneration::GALGAS_templateInstructionIfForGeneration (const cPtr_templateInstructionIfForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionIfForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfForGeneration GALGAS_templateInstructionIfForGeneration::constructor_new (const GALGAS_templateInstructionIfBranchListForGeneration & inAttribute_mTemplateInstructionIfBranchList,
                                                                                                      const GALGAS_templateInstructionListForGeneration & inAttribute_mElseInstructionList
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfForGeneration result ;
  if (inAttribute_mTemplateInstructionIfBranchList.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionIfForGeneration (inAttribute_mTemplateInstructionIfBranchList, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration GALGAS_templateInstructionIfForGeneration::reader_mTemplateInstructionIfBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionIfBranchListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionIfForGeneration * p = (const cPtr_templateInstructionIfForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
    result = p->mAttribute_mTemplateInstructionIfBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration cPtr_templateInstructionIfForGeneration::reader_mTemplateInstructionIfBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateInstructionIfBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionIfForGeneration::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionIfForGeneration * p = (const cPtr_templateInstructionIfForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration cPtr_templateInstructionIfForGeneration::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @templateInstructionIfForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionIfForGeneration::cPtr_templateInstructionIfForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
                                                                                  const GALGAS_templateInstructionListForGeneration & in_mElseInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mAttribute_mTemplateInstructionIfBranchList (in_mTemplateInstructionIfBranchList),
mAttribute_mElseInstructionList (in_mElseInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionIfForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ;
}

void cPtr_templateInstructionIfForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@templateInstructionIfForGeneration:" ;
  mAttribute_mTemplateInstructionIfBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionIfForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionIfForGeneration (mAttribute_mTemplateInstructionIfBranchList, mAttribute_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateInstructionIfForGeneration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ("templateInstructionIfForGeneration",
                                                           & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionIfForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionIfForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfForGeneration GALGAS_templateInstructionIfForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfForGeneration result ;
  const GALGAS_templateInstructionIfForGeneration * p = (const GALGAS_templateInstructionIfForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionStringForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionStringForGeneration * p = (const cPtr_templateInstructionStringForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionStringForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTemplateString.objectCompare (p->mAttribute_mTemplateString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionStringForGeneration::objectCompare (const GALGAS_templateInstructionStringForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionStringForGeneration::GALGAS_templateInstructionStringForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionStringForGeneration GALGAS_templateInstructionStringForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionStringForGeneration::constructor_new (GALGAS_string::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionStringForGeneration::GALGAS_templateInstructionStringForGeneration (const cPtr_templateInstructionStringForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionStringForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionStringForGeneration GALGAS_templateInstructionStringForGeneration::constructor_new (const GALGAS_string & inAttribute_mTemplateString
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringForGeneration result ;
  if (inAttribute_mTemplateString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionStringForGeneration (inAttribute_mTemplateString COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_templateInstructionStringForGeneration::reader_mTemplateString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionStringForGeneration * p = (const cPtr_templateInstructionStringForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionStringForGeneration) ;
    result = p->mAttribute_mTemplateString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_templateInstructionStringForGeneration::reader_mTemplateString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateString ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @templateInstructionStringForGeneration class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionStringForGeneration::cPtr_templateInstructionStringForGeneration (const GALGAS_string & in_mTemplateString
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mAttribute_mTemplateString (in_mTemplateString) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionStringForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;
}

void cPtr_templateInstructionStringForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@templateInstructionStringForGeneration:" ;
  mAttribute_mTemplateString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionStringForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionStringForGeneration (mAttribute_mTemplateString COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @templateInstructionStringForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ("templateInstructionStringForGeneration",
                                                               & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionStringForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionStringForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionStringForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionStringForGeneration GALGAS_templateInstructionStringForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringForGeneration result ;
  const GALGAS_templateInstructionStringForGeneration * p = (const GALGAS_templateInstructionStringForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionStringForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

