#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-7.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_rightShiftExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_rightShiftExpressionAST * p = (const cPtr_rightShiftExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_rightShiftExpressionAST::objectCompare (const GALGAS_rightShiftExpressionAST & inOperand) const {
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

GALGAS_rightShiftExpressionAST::GALGAS_rightShiftExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_rightShiftExpressionAST::GALGAS_rightShiftExpressionAST (const cPtr_rightShiftExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_rightShiftExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_rightShiftExpressionAST GALGAS_rightShiftExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_rightShiftExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_rightShiftExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_rightShiftExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_rightShiftExpressionAST * p = (const cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_rightShiftExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_rightShiftExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_rightShiftExpressionAST * p = (const cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_rightShiftExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_rightShiftExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_rightShiftExpressionAST * p = (const cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_rightShiftExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @rightShiftExpressionAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_rightShiftExpressionAST::cPtr_rightShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_rightShiftExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST ;
}

void cPtr_rightShiftExpressionAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@rightShiftExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_rightShiftExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_rightShiftExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @rightShiftExpressionAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_rightShiftExpressionAST ("rightShiftExpressionAST",
                                                & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_rightShiftExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_rightShiftExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_rightShiftExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_rightShiftExpressionAST GALGAS_rightShiftExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_rightShiftExpressionAST result ;
  const GALGAS_rightShiftExpressionAST * p = (const GALGAS_rightShiftExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_rightShiftExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rightShiftExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_leftShiftExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_leftShiftExpressionAST * p = (const cPtr_leftShiftExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_leftShiftExpressionAST::objectCompare (const GALGAS_leftShiftExpressionAST & inOperand) const {
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

GALGAS_leftShiftExpressionAST::GALGAS_leftShiftExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_leftShiftExpressionAST::GALGAS_leftShiftExpressionAST (const cPtr_leftShiftExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_leftShiftExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_leftShiftExpressionAST GALGAS_leftShiftExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                              const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                              const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_leftShiftExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_leftShiftExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_leftShiftExpressionAST * p = (const cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_leftShiftExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_leftShiftExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_leftShiftExpressionAST * p = (const cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_leftShiftExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_leftShiftExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_leftShiftExpressionAST * p = (const cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_leftShiftExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @leftShiftExpressionAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_leftShiftExpressionAST::cPtr_leftShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                          const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                          const GALGAS_semanticExpressionAST & in_mRightExpression
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_leftShiftExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST ;
}

void cPtr_leftShiftExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@leftShiftExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_leftShiftExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_leftShiftExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @leftShiftExpressionAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_leftShiftExpressionAST ("leftShiftExpressionAST",
                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_leftShiftExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_leftShiftExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_leftShiftExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_leftShiftExpressionAST GALGAS_leftShiftExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftExpressionAST result ;
  const GALGAS_leftShiftExpressionAST * p = (const GALGAS_leftShiftExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_leftShiftExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_addExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addExpressionAST * p = (const cPtr_addExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_addExpressionAST::objectCompare (const GALGAS_addExpressionAST & inOperand) const {
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

GALGAS_addExpressionAST::GALGAS_addExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addExpressionAST::GALGAS_addExpressionAST (const cPtr_addExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addExpressionAST GALGAS_addExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_addExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionAST * p = (const cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_addExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_addExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionAST * p = (const cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_addExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_addExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionAST * p = (const cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_addExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                      Pointer class for @addExpressionAST class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_addExpressionAST::cPtr_addExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_addExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST ;
}

void cPtr_addExpressionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@addExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_addExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @addExpressionAST type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addExpressionAST ("addExpressionAST",
                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_addExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_addExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addExpressionAST GALGAS_addExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionAST result ;
  const GALGAS_addExpressionAST * p = (const GALGAS_addExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_addExpressionNoOverflowAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addExpressionNoOverflowAST * p = (const cPtr_addExpressionNoOverflowAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_addExpressionNoOverflowAST::objectCompare (const GALGAS_addExpressionNoOverflowAST & inOperand) const {
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

GALGAS_addExpressionNoOverflowAST::GALGAS_addExpressionNoOverflowAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addExpressionNoOverflowAST::GALGAS_addExpressionNoOverflowAST (const cPtr_addExpressionNoOverflowAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addExpressionNoOverflowAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addExpressionNoOverflowAST GALGAS_addExpressionNoOverflowAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                      const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                      const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionNoOverflowAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addExpressionNoOverflowAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_addExpressionNoOverflowAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionNoOverflowAST * p = (const cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_addExpressionNoOverflowAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_addExpressionNoOverflowAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionNoOverflowAST * p = (const cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_addExpressionNoOverflowAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_addExpressionNoOverflowAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionNoOverflowAST * p = (const cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_addExpressionNoOverflowAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @addExpressionNoOverflowAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_addExpressionNoOverflowAST::cPtr_addExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_addExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;
}

void cPtr_addExpressionNoOverflowAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@addExpressionNoOverflowAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_addExpressionNoOverflowAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @addExpressionNoOverflowAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ("addExpressionNoOverflowAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_addExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_addExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addExpressionNoOverflowAST GALGAS_addExpressionNoOverflowAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionNoOverflowAST result ;
  const GALGAS_addExpressionNoOverflowAST * p = (const GALGAS_addExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_subExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_subExpressionAST * p = (const cPtr_subExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_subExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_subExpressionAST::objectCompare (const GALGAS_subExpressionAST & inOperand) const {
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

GALGAS_subExpressionAST::GALGAS_subExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_subExpressionAST::GALGAS_subExpressionAST (const cPtr_subExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_subExpressionAST GALGAS_subExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_subExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_subExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionAST * p = (const cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_subExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_subExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionAST * p = (const cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_subExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_subExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionAST * p = (const cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_subExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                      Pointer class for @subExpressionAST class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_subExpressionAST::cPtr_subExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_subExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST ;
}

void cPtr_subExpressionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@subExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_subExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_subExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @subExpressionAST type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_subExpressionAST ("subExpressionAST",
                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_subExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_subExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_subExpressionAST GALGAS_subExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionAST result ;
  const GALGAS_subExpressionAST * p = (const GALGAS_subExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_subExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_subExpressionNoOverflowAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_subExpressionNoOverflowAST * p = (const cPtr_subExpressionNoOverflowAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_subExpressionNoOverflowAST::objectCompare (const GALGAS_subExpressionNoOverflowAST & inOperand) const {
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

GALGAS_subExpressionNoOverflowAST::GALGAS_subExpressionNoOverflowAST (void) :
GALGAS_semanticExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_subExpressionNoOverflowAST::GALGAS_subExpressionNoOverflowAST (const cPtr_subExpressionNoOverflowAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionNoOverflowAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_subExpressionNoOverflowAST GALGAS_subExpressionNoOverflowAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                      const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                      const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionNoOverflowAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_subExpressionNoOverflowAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_subExpressionNoOverflowAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionNoOverflowAST * p = (const cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_subExpressionNoOverflowAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_subExpressionNoOverflowAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionNoOverflowAST * p = (const cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_subExpressionNoOverflowAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_subExpressionNoOverflowAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionNoOverflowAST * p = (const cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_subExpressionNoOverflowAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @subExpressionNoOverflowAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_subExpressionNoOverflowAST::cPtr_subExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_subExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;
}

void cPtr_subExpressionNoOverflowAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@subExpressionNoOverflowAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_subExpressionNoOverflowAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_subExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @subExpressionNoOverflowAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ("subExpressionNoOverflowAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_subExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_subExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_subExpressionNoOverflowAST GALGAS_subExpressionNoOverflowAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionNoOverflowAST result ;
  const GALGAS_subExpressionNoOverflowAST * p = (const GALGAS_subExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_subExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_variableMap::cMapElement_variableMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                  const GALGAS_string & in_mCppName,
                                                  const GALGAS_string & in_mNameForCheckingFormalParameterUsing
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTypeProxy (in_mTypeProxy),
mProperty_mCppName (in_mCppName),
mProperty_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_variableMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTypeProxy.isValid () && mProperty_mCppName.isValid () && mProperty_mNameForCheckingFormalParameterUsing.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_variableMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_variableMap (mProperty_lkey, mProperty_mTypeProxy, mProperty_mCppName, mProperty_mNameForCheckingFormalParameterUsing COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_variableMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeProxy" ":" ;
  mProperty_mTypeProxy.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCppName" ":" ;
  mProperty_mCppName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNameForCheckingFormalParameterUsing" ":" ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_variableMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_variableMap * operand = (cMapElement_variableMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeProxy.objectCompare (operand->mProperty_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppName.objectCompare (operand->mProperty_mCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameForCheckingFormalParameterUsing.objectCompare (operand->mProperty_mNameForCheckingFormalParameterUsing) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_variableMap::GALGAS_variableMap (void) :
AC_GALGAS_uniqueMap (kMapAutomatonNoIssue, "") {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_variableMap::GALGAS_variableMap (const GALGAS_variableMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_variableMap & GALGAS_variableMap::operator = (const GALGAS_variableMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_variableMap GALGAS_variableMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_variableMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton states                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static const uint32_t kMapStateCount_variableMap = 24 ;
#endif
static const uint32_t kMapState_variableMap_constantInputFormalArgument = 14 ;
static const uint32_t kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused = 16 ;
static const uint32_t kMapState_variableMap_currentInstanceAttribute = 21 ;
static const uint32_t kMapState_variableMap_currentInstanceAttributeInModifier = 22 ;
static const uint32_t kMapState_variableMap_currentInstanceDroppedAttributeInModifier = 23 ;
static const uint32_t kMapState_variableMap_definedLocalVariable = 5 ;
static const uint32_t kMapState_variableMap_definedOutputFormalArgument = 9 ;
static const uint32_t kMapState_variableMap_droppedInputFormalArgument = 19 ;
static const uint32_t kMapState_variableMap_droppedInputOutputFormalArgument = 12 ;
static const uint32_t kMapState_variableMap_droppedLocalConstant = 3 ;
static const uint32_t kMapState_variableMap_droppedLocalVariable = 7 ;
static const uint32_t kMapState_variableMap_inputFormalArgumentDeclaredAsUnused = 20 ;
static const uint32_t kMapState_variableMap_inputFormalParameter = 17 ;
static const uint32_t kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused = 13 ;
static const uint32_t kMapState_variableMap_localConstant = 1 ;
static const uint32_t kMapState_variableMap_readLocalConstant = 0 ;
static const uint32_t kMapState_variableMap_undefinedLocalConstant = 2 ;
static const uint32_t kMapState_variableMap_undefinedLocalVariable = 4 ;
static const uint32_t kMapState_variableMap_undefinedOutputFormalArgument = 8 ;
static const uint32_t kMapState_variableMap_unusedInputOutputFormalArgument = 10 ;
static const uint32_t kMapState_variableMap_usedConstantInputFormalArgument = 15 ;
static const uint32_t kMapState_variableMap_usedInputFormalArgument = 18 ;
static const uint32_t kMapState_variableMap_usedInputOutputFormalArgument = 11 ;
static const uint32_t kMapState_variableMap_usedLocalVariable = 6 ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton state names                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * kMapStateNames_variableMap [24] = {
  "readLocalConstant",
  "localConstant",
  "undefinedLocalConstant",
  "droppedLocalConstant",
  "undefinedLocalVariable",
  "definedLocalVariable",
  "usedLocalVariable",
  "droppedLocalVariable",
  "undefinedOutputFormalArgument",
  "definedOutputFormalArgument",
  "unusedInputOutputFormalArgument",
  "usedInputOutputFormalArgument",
  "droppedInputOutputFormalArgument",
  "inputOutputFormalArgumentDeclaredAsUnused",
  "constantInputFormalArgument",
  "usedConstantInputFormalArgument",
  "constantInputFormalArgumentDeclaredAsUnused",
  "inputFormalParameter",
  "usedInputFormalArgument",
  "droppedInputFormalArgument",
  "inputFormalArgumentDeclaredAsUnused",
  "currentInstanceAttribute",
  "currentInstanceAttributeInModifier",
  "currentInstanceDroppedAttributeInModifier"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton actions                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const uint32_t kMapActionCount_variableMap = 5 ;
static const uint32_t kMapAction_variableMap_dropAccess = 3 ;
static const uint32_t kMapAction_variableMap_neutralAccess = 4 ;
static const uint32_t kMapAction_variableMap_readAccess = 0 ;
static const uint32_t kMapAction_variableMap_readWriteAccess = 2 ;
static const uint32_t kMapAction_variableMap_writeAccess = 1 ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton transitions                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const cMapAutomatonTransition kMapTransitions_variableMap [24 * 5] = {
// State 'readLocalConstant', index 0 
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'localConstant', index 1 
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "the '%K' constant value is unused"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_localConstant /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'undefinedLocalConstant', index 2 
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_localConstant /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "the dropped constant is undefined"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'droppedLocalConstant', index 3 
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the constant has been dropped"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_localConstant /* 1 */, kMapAutomatonIssueError, "the constant has been dropped"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the constant has been dropped"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueWarning, "the constant has been dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'undefinedLocalVariable', index 4 
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapAutomatonIssueError, "an undefined local variable cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapAutomatonIssueError, "an undefined local variable cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapAutomatonIssueWarning, "the local variable has no value"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'definedLocalVariable', index 5 
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonIssueWarning, "the local variable has been dropped without any read"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedLocalVariable', index 6 
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'droppedLocalVariable', index 7 
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonIssueError, "a dropped local variable cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonIssueError, "a dropped local variable cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonIssueWarning, "the local variable is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'undefinedOutputFormalArgument', index 8 
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapAutomatonIssueError, "an undefined output formal parameter cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapAutomatonIssueError, "an undefined output formal parameter cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapAutomatonIssueWarning, "the output formal parameter has no value"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'definedOutputFormalArgument', index 9 
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'unusedInputOutputFormalArgument', index 10 
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedInputOutputFormalArgument', index 11 
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'droppedInputOutputFormalArgument', index 12 
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueError, "a dropped input/output formal argument cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueError, "a dropped input/output formal argument cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueWarning, "the input/output formal argument is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'inputOutputFormalArgumentDeclaredAsUnused', index 13 
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'constantInputFormalArgument', index 14 
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_constantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedConstantInputFormalArgument', index 15 
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'constantInputFormalArgumentDeclaredAsUnused', index 16 
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueWarning, "the constant input formal parameter is declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'inputFormalParameter', index 17 
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedInputFormalArgument', index 18 
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'droppedInputFormalArgument', index 19 
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "a dropped input formal parameter cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "a dropped input formal parameter cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueWarning, "the input formal parameter is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'inputFormalArgumentDeclaredAsUnused', index 20 
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'currentInstanceAttribute', index 21 
  {kMapState_variableMap_currentInstanceAttribute /* 21 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_currentInstanceAttribute /* 21 */, kMapAutomatonIssueError, "an attribute cannot be written within a method or a getter"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_currentInstanceAttribute /* 21 */, kMapAutomatonIssueError, "an attribute cannot be modified within a method or a getter"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_currentInstanceAttribute /* 21 */, kMapAutomatonIssueError, "an attribute cannot be dropped within a method or a getter"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_currentInstanceAttribute /* 21 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'currentInstanceAttributeInModifier', index 22 
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'currentInstanceDroppedAttributeInModifier', index 23 
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapAutomatonIssueError, "the attribute cannot be read, it has been dropped"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapAutomatonIssueError, "the attribute cannot be read/written, it has been dropped"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapAutomatonIssueWarning, "the attribute is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton final state issues                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const cMapAutomatonFinalIssue kMapAutomatonFinalIssue_variableMap [24] = {
  {kMapAutomatonNoIssue, ""},// state 'readLocalConstant' (index 0)
  {kMapAutomatonIssueWarning, "the '%K' constant value is unused"},// state 'localConstant' (index 1)
  {kMapAutomatonIssueWarning, "the '%K' constant value is unused"},// state 'undefinedLocalConstant' (index 2)
  {kMapAutomatonNoIssue, ""},// state 'droppedLocalConstant' (index 3)
  {kMapAutomatonIssueWarning, "the '%K' local variable is unused"},// state 'undefinedLocalVariable' (index 4)
  {kMapAutomatonNoIssue, ""},// state 'definedLocalVariable' (index 5)
  {kMapAutomatonNoIssue, ""},// state 'usedLocalVariable' (index 6)
  {kMapAutomatonNoIssue, ""},// state 'droppedLocalVariable' (index 7)
  {kMapAutomatonIssueError, "the '%K' output formal parameter is undefined"},// state 'undefinedOutputFormalArgument' (index 8)
  {kMapAutomatonNoIssue, ""},// state 'definedOutputFormalArgument' (index 9)
  {kMapAutomatonIssueWarning, "the '%K' input/output formal parameter is unused"},// state 'unusedInputOutputFormalArgument' (index 10)
  {kMapAutomatonNoIssue, ""},// state 'usedInputOutputFormalArgument' (index 11)
  {kMapAutomatonIssueError, "the '%K' input/ouput formal argument should be valuated at the end of the routine"},// state 'droppedInputOutputFormalArgument' (index 12)
  {kMapAutomatonNoIssue, ""},// state 'inputOutputFormalArgumentDeclaredAsUnused' (index 13)
  {kMapAutomatonIssueWarning, "the constant '%K' input formal parameter is not used and is not declared as unused"},// state 'constantInputFormalArgument' (index 14)
  {kMapAutomatonNoIssue, ""},// state 'usedConstantInputFormalArgument' (index 15)
  {kMapAutomatonNoIssue, ""},// state 'constantInputFormalArgumentDeclaredAsUnused' (index 16)
  {kMapAutomatonIssueWarning, "the '%K' input formal parameter is not used and is not declared as unused"},// state 'inputFormalParameter' (index 17)
  {kMapAutomatonNoIssue, ""},// state 'usedInputFormalArgument' (index 18)
  {kMapAutomatonNoIssue, ""},// state 'droppedInputFormalArgument' (index 19)
  {kMapAutomatonNoIssue, ""},// state 'inputFormalArgumentDeclaredAsUnused' (index 20)
  {kMapAutomatonNoIssue, ""},// state 'currentInstanceAttribute' (index 21)
  {kMapAutomatonNoIssue, ""},// state 'currentInstanceAttributeInModifier' (index 22)
  {kMapAutomatonIssueWarning, "the '%K' attribute is in the dropped state at the end of the setter"},// state 'currentInstanceDroppedAttributeInModifier' (index 23)
} ;
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_closeBranch (GALGAS_location inErrorLocation,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  closeBranch (inErrorLocation,
               kMapAutomatonFinalIssue_variableMap,
               #ifndef DO_NOT_GENERATE_CHECKINGS
                 kMapStateCount_variableMap,
               #endif
               inCompiler COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::method_checkAutomatonStates (GALGAS_location inErrorLocation,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  checkAutomatonStates (inErrorLocation, kMapAutomatonFinalIssue_variableMap, inCompiler COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                             map override 'selectBlock'                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_variableMap_selectBlock [39] = {
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "this branch lets the '%K' constant defined, while previous ones do not define it"},
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch lets the '%K' constant defined, while previous ones drop it"},
  {kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "this branch defines the '%K' constant, while previous ones let it undefined"},
  {kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch let the '%K' constant defined, while previous ones drop it"},
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "this branch lets the '%K' undefined, while previous ones drop it"},
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch drops the '%K' constant, while previous ones let it defined"},
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch drops the '%K' constant, while previous ones let it defined"},
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "this branch drops the '%K' constant, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""},
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_variableMap_selectBlock [50] = {
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "this branch lets the '%K' constant defined, while previous ones do not define it"},
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch lets the '%K' constant defined, while previous ones drop it"},
  {kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch let the '%K' constant defined, while previous ones drop it"},
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "this branch lets the '%K' undefined, while previous ones drop it"},
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch drops the '%K' constant, while previous ones let it defined"},
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch drops the '%K' constant, while previous ones let it defined"},
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "this branch drops the '%K' constant, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous ones define it"},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonIssueError, "this branch drops the '%K' variable, while previous ones let it defined"},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous defines let it"},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonIssueError, "this branch drops the '%K' variable, while previous ones let it defined"},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones drop it"},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones drop it"},
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "this branch defines the '%K' output formal argument, while previous ones let it undefined"},
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous ones define it"},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "this branch drops the '%K' input/output formal argument, while previous ones let it undefined"},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "this branch drops the '%K' input/output formal argument, while previous ones let it defined"},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "this branch lets the '%K' input/output formal argument defined, while previous ones drop it"},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "this branch lets the '%K' input/output formal argument defined, while previous ones drop it"},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonIssueError, "this branch lets the '%K' input formal argument defined, while previous ones drop it"},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument defined, while previous ones let it defined"},
  {kMapState_variableMap_constantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_constantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_inputFormalParameter /* 17 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous let it defined"},
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous ones let it defined"},
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous ones let it defined"},
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonIssueError, "this branch defines the '%K' input formal argument, while previous ones let it dropped"},
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonIssueError, "this branch drops the '%K' attribute, while previous ones let it defined"},
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonIssueError, "this branch lets the '%K' attribute defined, while previous ones drop it"},
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_openOverrideForSelectBlock (C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  openOverride (kBranchBehaviourForOverride_variableMap_selectBlock, 39,
                kBranchCombinationForOverride_variableMap_selectBlock, 50,
                "selectBlock",
                inCompiler
                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                             map override 'repeatBlock'                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_variableMap_repeatBlock [39] = {
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonIssueError, "a branch lets the '%K' constant undefined"},
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant undefined"},
  {kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonIssueError, "the repeated branch should not define the dropped '%K' variable"},
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' output formal argument"},
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' output formal argument"},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueError, "the repeated branch should define the '%K' input formal argument"},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_variableMap_constantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_inputFormalParameter /* 17 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' attribute"},
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""},
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_variableMap_repeatBlock [26] = {
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "a branch drops the '%K' constant, while other one lets it undefined"},
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_readLocalConstant /* 0 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_variableMap_droppedLocalConstant /* 3 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "a branch drops the '%K' constant, while other one lets it undefined"},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_constantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""},
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_openOverrideForRepeatBlock (C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  openOverride (kBranchBehaviourForOverride_variableMap_repeatBlock, 39,
                kBranchCombinationForOverride_variableMap_repeatBlock, 26,
                "repeatBlock",
                inCompiler
                COMMA_THERE) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_insertMutableAttribute (GALGAS_lstring inKey,
                                                        GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                        GALGAS_string inArgument1,
                                                        GALGAS_string inArgument2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' attribute (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_currentInstanceAttributeInModifier,
                     kMapStateNames_variableMap [kMapState_variableMap_currentInstanceAttributeInModifier],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_insertNonMutableAttribute (GALGAS_lstring inKey,
                                                           GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                           GALGAS_string inArgument1,
                                                           GALGAS_string inArgument2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' attribute (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_currentInstanceAttribute,
                     kMapStateNames_variableMap [kMapState_variableMap_currentInstanceAttribute],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_insertUndefinedLocalVariable (GALGAS_lstring inKey,
                                                              GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                              GALGAS_string inArgument1,
                                                              GALGAS_string inArgument2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_undefinedLocalVariable,
                     kMapStateNames_variableMap [kMapState_variableMap_undefinedLocalVariable],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_insertDefinedLocalVariable (GALGAS_lstring inKey,
                                                            GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                            GALGAS_string inArgument1,
                                                            GALGAS_string inArgument2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_definedLocalVariable,
                     kMapStateNames_variableMap [kMapState_variableMap_definedLocalVariable],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_insertUndefinedLocalConstant (GALGAS_lstring inKey,
                                                              GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                              GALGAS_string inArgument1,
                                                              GALGAS_string inArgument2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_undefinedLocalConstant,
                     kMapStateNames_variableMap [kMapState_variableMap_undefinedLocalConstant],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_insertLocalConstant (GALGAS_lstring inKey,
                                                     GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                     GALGAS_string inArgument1,
                                                     GALGAS_string inArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_localConstant,
                     kMapStateNames_variableMap [kMapState_variableMap_localConstant],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_insertUsedLocalConstant (GALGAS_lstring inKey,
                                                         GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                         GALGAS_string inArgument1,
                                                         GALGAS_string inArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_readLocalConstant,
                     kMapStateNames_variableMap [kMapState_variableMap_readLocalConstant],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_insertInputFormalArgument (GALGAS_lstring inKey,
                                                           GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                           GALGAS_string inArgument1,
                                                           GALGAS_string inArgument2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_inputFormalParameter,
                     kMapStateNames_variableMap [kMapState_variableMap_inputFormalParameter],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_insertInputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                           GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                           GALGAS_string inArgument1,
                                                                           GALGAS_string inArgument2,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_inputFormalArgumentDeclaredAsUnused,
                     kMapStateNames_variableMap [kMapState_variableMap_inputFormalArgumentDeclaredAsUnused],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_insertConstantInputFormalArgument (GALGAS_lstring inKey,
                                                                   GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                   GALGAS_string inArgument1,
                                                                   GALGAS_string inArgument2,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_constantInputFormalArgument,
                     kMapStateNames_variableMap [kMapState_variableMap_constantInputFormalArgument],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_insertConstantInputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                                   GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                                   GALGAS_string inArgument1,
                                                                                   GALGAS_string inArgument2,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused,
                     kMapStateNames_variableMap [kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_insertOutputFormalArgument (GALGAS_lstring inKey,
                                                            GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                            GALGAS_string inArgument1,
                                                            GALGAS_string inArgument2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_undefinedOutputFormalArgument,
                     kMapStateNames_variableMap [kMapState_variableMap_undefinedOutputFormalArgument],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_insertInputOutputFormalArgument (GALGAS_lstring inKey,
                                                                 GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                 GALGAS_string inArgument1,
                                                                 GALGAS_string inArgument2,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_unusedInputOutputFormalArgument,
                     kMapStateNames_variableMap [kMapState_variableMap_unusedInputOutputFormalArgument],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_insertInputOutputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                                 GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                                 GALGAS_string inArgument1,
                                                                                 GALGAS_string inArgument2,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused,
                     kMapStateNames_variableMap [kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_variableMap_searchForReadAccess = "the '%K' variable is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_searchForReadAccess (GALGAS_lstring inKey,
                                                     GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                     GALGAS_string & outArgument1,
                                                     GALGAS_string & outArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_readAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForReadAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mProperty_mTypeProxy ;
    outArgument1 = p->mProperty_mCppName ;
    outArgument2 = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_variableMap_searchForWriteAccess = "the '%K' variable is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_searchForWriteAccess (GALGAS_lstring inKey,
                                                      GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                      GALGAS_string & outArgument1,
                                                      GALGAS_string & outArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_writeAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForWriteAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mProperty_mTypeProxy ;
    outArgument1 = p->mProperty_mCppName ;
    outArgument2 = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_variableMap_searchForReadWriteAccess = "the '%K' variable is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_searchForReadWriteAccess (GALGAS_lstring inKey,
                                                          GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                          GALGAS_string & outArgument1,
                                                          GALGAS_string & outArgument2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_readWriteAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForReadWriteAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mProperty_mTypeProxy ;
    outArgument1 = p->mProperty_mCppName ;
    outArgument2 = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_variableMap_searchForDropAccess = "the '%K' variable is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_searchForDropAccess (GALGAS_lstring inKey,
                                                     GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                     GALGAS_string & outArgument1,
                                                     GALGAS_string & outArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_dropAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForDropAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mProperty_mTypeProxy ;
    outArgument1 = p->mProperty_mCppName ;
    outArgument2 = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_variableMap_neutralAccess = "the '%K' variable is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_neutralAccess (GALGAS_lstring inKey,
                                               GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                               GALGAS_string & outArgument1,
                                               GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_neutralAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_neutralAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mProperty_mTypeProxy ;
    outArgument1 = p->mProperty_mCppName ;
    outArgument2 = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_variableMap::getter_mTypeProxyForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mProperty_mTypeProxy ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_variableMap::getter_mCppNameForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mProperty_mCppName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_variableMap::getter_mNameForCheckingFormalParameterUsingForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_setMTypeProxyForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mProperty_mTypeProxy = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_setMCppNameForKey (GALGAS_string inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mProperty_mCppName = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap::setter_setMNameForCheckingFormalParameterUsingForKey (GALGAS_string inAttributeValue,
                                                                               GALGAS_string inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mProperty_mNameForCheckingFormalParameterUsing = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_variableMap * GALGAS_variableMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * result = (cMapElement_variableMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_variableMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_variableMap::cEnumerator_variableMap (const GALGAS_variableMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_variableMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_variableMap::current_mTypeProxy (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mProperty_mTypeProxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_variableMap::current_mCppName (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mProperty_mCppName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_variableMap::current_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mProperty_mNameForCheckingFormalParameterUsing ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @variableMap type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_variableMap ("variableMap",
                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_variableMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_variableMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_variableMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_variableMap GALGAS_variableMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_variableMap result ;
  const GALGAS_variableMap * p = (const GALGAS_variableMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_variableMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("variableMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_variableMap_2D_proxy::GALGAS_variableMap_2D_proxy (void) :
AC_GALGAS_uniqueMapProxy () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_null (LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.makeNullProxy (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap_2D_proxy::class_method_makeOptionalProxy (GALGAS_variableMap & ioMap,
                                                                  GALGAS_lstring inKey,
                                                                  GALGAS_variableMap_2D_proxy & outProxy
                                                                  COMMA_LOCATION_ARGS) {
  outProxy.internalMakeOptionalProxy (ioMap, inKey COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap_2D_proxy::class_method_makeProxy (GALGAS_variableMap & ioMap,
                                                          GALGAS_lstring inKey,
                                                          GALGAS_variableMap_2D_proxy & outProxy
                                                          COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxy (ioMap, inKey COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_variableMap_2D_proxy::class_method_makeProxyFromString (GALGAS_variableMap & ioMap,
                                                                    GALGAS_string inKey,
                                                                    GALGAS_variableMap_2D_proxy & outProxy
                                                                    COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxyFromString (ioMap, inKey COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_variableMap_2D_proxy::getter_mTypeProxy (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "mTypeProxy" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mProperty_mTypeProxy;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_variableMap_2D_proxy::getter_mCppName (C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "mCppName" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mProperty_mCppName;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_variableMap_2D_proxy::getter_mNameForCheckingFormalParameterUsing (C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "mNameForCheckingFormalParameterUsing" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mProperty_mNameForCheckingFormalParameterUsing;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForReadAccess (const GALGAS_variableMap & inMap,
                                                                                          const GALGAS_lstring & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForReadAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForWriteAccess (const GALGAS_variableMap & inMap,
                                                                                           const GALGAS_lstring & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForWriteAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForReadWriteAccess (const GALGAS_variableMap & inMap,
                                                                                               const GALGAS_lstring & inKey,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForReadWriteAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForDropAccess (const GALGAS_variableMap & inMap,
                                                                                          const GALGAS_lstring & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForDropAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_neutralAccess (const GALGAS_variableMap & inMap,
                                                                                    const GALGAS_lstring & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_neutralAccess, inCompiler COMMA_THERE) ;
  return result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @variableMap-proxy type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_variableMap_2D_proxy ("variableMap-proxy",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_variableMap_2D_proxy::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableMap_2D_proxy ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_variableMap_2D_proxy::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_variableMap_2D_proxy (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  const GALGAS_variableMap_2D_proxy * p = (const GALGAS_variableMap_2D_proxy *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_variableMap_2D_proxy *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("variableMap-proxy", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Abstract extension method '@semanticExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_semanticExpressionAST_analyzeSemanticExpression> gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeSemanticExpression (const int32_t inClassIndex,
                                                     extensionMethodSignature_semanticExpressionAST_analyzeSemanticExpression inMethod) {
  gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_semanticExpressionAST_analyzeSemanticExpression (void) {
  gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_semanticExpressionAST_analyzeSemanticExpression (NULL,
                                                                            freeExtensionMethod_semanticExpressionAST_analyzeSemanticExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                    const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                    GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                    const GALGAS_unifiedTypeMap_2D_proxy constin_inType,
                                                    const GALGAS_analysisContext constin_inAnalysisContext,
                                                    GALGAS_variableMap & io_ioVariableMap,
                                                    GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outExpression.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_semanticExpressionAST_analyzeSemanticExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression.count ()) {
      f = gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression.count ()) {
          f = gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inType, constin_inAnalysisContext, io_ioVariableMap, out_outExpression, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Abstract extension method '@abstractCollectionValueElement enterInSemanticContext'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractCollectionValueElement_enterInSemanticContext> gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractCollectionValueElement_enterInSemanticContext inMethod) {
  gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractCollectionValueElement_enterInSemanticContext (void) {
  gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractCollectionValueElement_enterInSemanticContext (NULL,
                                                                                  freeExtensionMethod_abstractCollectionValueElement_enterInSemanticContext) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                 GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractCollectionValueElement) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractCollectionValueElement_enterInSemanticContext f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext.count ()) {
      f = gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext.count ()) {
          f = gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Abstract extension method '@abstractCollectionValueElement analyze'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractCollectionValueElement_analyze> gExtensionMethodTable_abstractCollectionValueElement_analyze ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyze (const int32_t inClassIndex,
                                   extensionMethodSignature_abstractCollectionValueElement_analyze inMethod) {
  gExtensionMethodTable_abstractCollectionValueElement_analyze.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractCollectionValueElement_analyze (void) {
  gExtensionMethodTable_abstractCollectionValueElement_analyze.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractCollectionValueElement_analyze (NULL,
                                                                   freeExtensionMethod_abstractCollectionValueElement_analyze) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                  const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                  GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                  const GALGAS_analysisContext constin_inAnalysisContext,
                                  const GALGAS_unifiedTypeMap_2D_proxy constin_inElementType,
                                  GALGAS_variableMap & io_ioVariableMap,
                                  GALGAS_collectionValueElementListForGeneration & io_ioCollectionValueElementListForGeneration,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractCollectionValueElement) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractCollectionValueElement_analyze f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractCollectionValueElement_analyze.count ()) {
      f = gExtensionMethodTable_abstractCollectionValueElement_analyze (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractCollectionValueElement_analyze.count ()) {
          f = gExtensionMethodTable_abstractCollectionValueElement_analyze (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractCollectionValueElement_analyze.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, constin_inElementType, io_ioVariableMap, io_ioCollectionValueElementListForGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Class for element of '@collectionValueElementListForGeneration' list                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_collectionValueElementListForGeneration : public cCollectionElement {
  public : GALGAS_collectionValueElementListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_collectionValueElementListForGeneration (const GALGAS_abstractCollectionValueElementForGeneration & in_mElement
                                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_collectionValueElementListForGeneration (const GALGAS_collectionValueElementListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_collectionValueElementListForGeneration::cCollectionElement_collectionValueElementListForGeneration (const GALGAS_abstractCollectionValueElementForGeneration & in_mElement
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_collectionValueElementListForGeneration::cCollectionElement_collectionValueElementListForGeneration (const GALGAS_collectionValueElementListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_collectionValueElementListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_collectionValueElementListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_collectionValueElementListForGeneration (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_collectionValueElementListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_collectionValueElementListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_collectionValueElementListForGeneration * operand = (cCollectionElement_collectionValueElementListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_collectionValueElementListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueElementListForGeneration::GALGAS_collectionValueElementListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueElementListForGeneration::GALGAS_collectionValueElementListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_collectionValueElementListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::constructor_listWithValue (const GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_collectionValueElementListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_collectionValueElementListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_collectionValueElementListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_abstractCollectionValueElementForGeneration & in_mElement
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_collectionValueElementListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_collectionValueElementListForGeneration (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_collectionValueElementListForGeneration::addAssign_operation (const GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_collectionValueElementListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_collectionValueElementListForGeneration::setter_append (GALGAS_collectionValueElementListForGeneration_2D_element inElement,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_collectionValueElementListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_collectionValueElementListForGeneration::setter_insertAtIndex (const GALGAS_abstractCollectionValueElementForGeneration inOperand0,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_collectionValueElementListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_collectionValueElementListForGeneration::setter_removeAtIndex (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mElement ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_collectionValueElementListForGeneration::setter_popFirst (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_collectionValueElementListForGeneration::setter_popLast (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_collectionValueElementListForGeneration::method_first (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_collectionValueElementListForGeneration::method_last (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::add_operation (const GALGAS_collectionValueElementListForGeneration & inOperand,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_collectionValueElementListForGeneration::plusAssign_operation (const GALGAS_collectionValueElementListForGeneration inOperand,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractCollectionValueElementForGeneration GALGAS_collectionValueElementListForGeneration::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  GALGAS_abstractCollectionValueElementForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_collectionValueElementListForGeneration::cEnumerator_collectionValueElementListForGeneration (const GALGAS_collectionValueElementListForGeneration & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueElementListForGeneration_2D_element cEnumerator_collectionValueElementListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_collectionValueElementListForGeneration * p = (const cCollectionElement_collectionValueElementListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractCollectionValueElementForGeneration cEnumerator_collectionValueElementListForGeneration::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_collectionValueElementListForGeneration * p = (const cCollectionElement_collectionValueElementListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
  return p->mObject.mProperty_mElement ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @collectionValueElementListForGeneration type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ("collectionValueElementListForGeneration",
                                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_collectionValueElementListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_collectionValueElementListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueElementListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementListForGeneration result ;
  const GALGAS_collectionValueElementListForGeneration * p = (const GALGAS_collectionValueElementListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_collectionValueElementListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_abstractCollectionValueElementForGeneration::objectCompare (const GALGAS_abstractCollectionValueElementForGeneration & inOperand) const {
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

GALGAS_abstractCollectionValueElementForGeneration::GALGAS_abstractCollectionValueElementForGeneration (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractCollectionValueElementForGeneration::GALGAS_abstractCollectionValueElementForGeneration (const cPtr_abstractCollectionValueElementForGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractCollectionValueElementForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_abstractCollectionValueElementForGeneration::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractCollectionValueElementForGeneration * p = (const cPtr_abstractCollectionValueElementForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCollectionValueElementForGeneration) ;
    result = p->mProperty_mExpressionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_abstractCollectionValueElementForGeneration::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                        Pointer class for @abstractCollectionValueElementForGeneration class                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractCollectionValueElementForGeneration::cPtr_abstractCollectionValueElementForGeneration (const GALGAS_location & in_mExpressionLocation
                                                                                                    COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mExpressionLocation (in_mExpressionLocation) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @abstractCollectionValueElementForGeneration type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration ("abstractCollectionValueElementForGeneration",
                                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractCollectionValueElementForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractCollectionValueElementForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractCollectionValueElementForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractCollectionValueElementForGeneration GALGAS_abstractCollectionValueElementForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractCollectionValueElementForGeneration result ;
  const GALGAS_abstractCollectionValueElementForGeneration * p = (const GALGAS_abstractCollectionValueElementForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractCollectionValueElementForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractCollectionValueElementForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_expressionListCollectionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_expressionListCollectionForGeneration * p = (const cPtr_expressionListCollectionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_expressionListCollectionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpressionLocation.objectCompare (p->mProperty_mExpressionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_expressionListCollectionForGeneration::objectCompare (const GALGAS_expressionListCollectionForGeneration & inOperand) const {
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

GALGAS_expressionListCollectionForGeneration::GALGAS_expressionListCollectionForGeneration (void) :
GALGAS_abstractCollectionValueElementForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionListCollectionForGeneration GALGAS_expressionListCollectionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_expressionListCollectionForGeneration::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_semanticExpressionListForGeneration::constructor_emptyList (HERE)
                                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionListCollectionForGeneration::GALGAS_expressionListCollectionForGeneration (const cPtr_expressionListCollectionForGeneration * inSourcePtr) :
GALGAS_abstractCollectionValueElementForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionListCollectionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionListCollectionForGeneration GALGAS_expressionListCollectionForGeneration::constructor_new (const GALGAS_location & inAttribute_mExpressionLocation,
                                                                                                            const GALGAS_semanticExpressionListForGeneration & inAttribute_mExpressionList
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionForGeneration result ;
  if (inAttribute_mExpressionLocation.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_expressionListCollectionForGeneration (inAttribute_mExpressionLocation, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionListForGeneration GALGAS_expressionListCollectionForGeneration::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionListCollectionForGeneration * p = (const cPtr_expressionListCollectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionForGeneration) ;
    result = p->mProperty_mExpressionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionListForGeneration cPtr_expressionListCollectionForGeneration::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @expressionListCollectionForGeneration class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_expressionListCollectionForGeneration::cPtr_expressionListCollectionForGeneration (const GALGAS_location & in_mExpressionLocation,
                                                                                        const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractCollectionValueElementForGeneration (in_mExpressionLocation COMMA_THERE),
mProperty_mExpressionList (in_mExpressionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_expressionListCollectionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ;
}

void cPtr_expressionListCollectionForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@expressionListCollectionForGeneration:" ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_expressionListCollectionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_expressionListCollectionForGeneration (mProperty_mExpressionLocation, mProperty_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @expressionListCollectionForGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ("expressionListCollectionForGeneration",
                                                              & kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_expressionListCollectionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_expressionListCollectionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionListCollectionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionListCollectionForGeneration GALGAS_expressionListCollectionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionForGeneration result ;
  const GALGAS_expressionListCollectionForGeneration * p = (const GALGAS_expressionListCollectionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionListCollectionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionListCollectionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//       Abstract extension method '@abstractCollectionValueElementForGeneration generateCollectionElementCode'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode> gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_generateCollectionElementCode (const int32_t inClassIndex,
                                                         extensionMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode inMethod) {
  gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractCollectionValueElementForGeneration_generateCollectionElementCode (void) {
  gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractCollectionValueElementForGeneration_generateCollectionElementCode (NULL,
                                                                                                      freeExtensionMethod_abstractCollectionValueElementForGeneration_generateCollectionElementCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                        const GALGAS_unifiedTypeMap_2D_proxy constin_inTargetType,
                                                        GALGAS_string & io_ioGeneratedCode,
                                                        GALGAS_stringset & io_ioInclusionSet,
                                                        GALGAS_uint & io_ioTemporaryVariableIndex,
                                                        GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                        const GALGAS_string constin_inCppTargetVar,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractCollectionValueElementForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.count ()) {
      f = gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.count ()) {
          f = gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inTargetType, io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, constin_inCppTargetVar, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@castInstructionBranchListAST' list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_castInstructionBranchListAST : public cCollectionElement {
  public : GALGAS_castInstructionBranchListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_castInstructionBranchListAST (const GALGAS_lstring & in_mTypeName,
                                                            const GALGAS_lstring & in_mConstantVarName,
                                                            const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                            const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                            const GALGAS_location & in_mEndOfInstructions
                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_castInstructionBranchListAST (const GALGAS_castInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_castInstructionBranchListAST::cCollectionElement_castInstructionBranchListAST (const GALGAS_lstring & in_mTypeName,
                                                                                                  const GALGAS_lstring & in_mConstantVarName,
                                                                                                  const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                                                  const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                  const GALGAS_location & in_mEndOfInstructions
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mConstantVarName, in_mInstructionList, in_mTypeComparisonKind, in_mEndOfInstructions) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_castInstructionBranchListAST::cCollectionElement_castInstructionBranchListAST (const GALGAS_castInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mConstantVarName, inElement.mProperty_mInstructionList, inElement.mProperty_mTypeComparisonKind, inElement.mProperty_mEndOfInstructions) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_castInstructionBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_castInstructionBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_castInstructionBranchListAST (mObject.mProperty_mTypeName, mObject.mProperty_mConstantVarName, mObject.mProperty_mInstructionList, mObject.mProperty_mTypeComparisonKind, mObject.mProperty_mEndOfInstructions COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_castInstructionBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantVarName" ":" ;
  mObject.mProperty_mConstantVarName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeComparisonKind" ":" ;
  mObject.mProperty_mTypeComparisonKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInstructions" ":" ;
  mObject.mProperty_mEndOfInstructions.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_castInstructionBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_castInstructionBranchListAST * operand = (cCollectionElement_castInstructionBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_castInstructionBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListAST::GALGAS_castInstructionBranchListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListAST::GALGAS_castInstructionBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_castInstructionBranchListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                    const GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                                    const GALGAS_location & inOperand4
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_castInstructionBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_castInstructionBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_lstring & in_mTypeName,
                                                                     const GALGAS_lstring & in_mConstantVarName,
                                                                     const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                     const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                     const GALGAS_location & in_mEndOfInstructions
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_castInstructionBranchListAST (in_mTypeName,
                                                                  in_mConstantVarName,
                                                                  in_mInstructionList,
                                                                  in_mTypeComparisonKind,
                                                                  in_mEndOfInstructions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                               const GALGAS_lstring & inOperand1,
                                                               const GALGAS_semanticInstructionListAST & inOperand2,
                                                               const GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                               const GALGAS_location & inOperand4
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListAST::setter_append (GALGAS_castInstructionBranchListAST_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                const GALGAS_lstring inOperand1,
                                                                const GALGAS_semanticInstructionListAST inOperand2,
                                                                const GALGAS_dynamicTypeComparisonKind inOperand3,
                                                                const GALGAS_location inOperand4,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_semanticInstructionListAST & outOperand2,
                                                                GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                                GALGAS_location & outOperand4,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
      outOperand0 = p->mObject.mProperty_mTypeName ;
      outOperand1 = p->mObject.mProperty_mConstantVarName ;
      outOperand2 = p->mObject.mProperty_mInstructionList ;
      outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
      outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_semanticInstructionListAST & outOperand2,
                                                           GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                           GALGAS_location & outOperand4,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_semanticInstructionListAST & outOperand2,
                                                          GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                          GALGAS_location & outOperand4,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListAST::method_first (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_semanticInstructionListAST & outOperand2,
                                                        GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                        GALGAS_location & outOperand4,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListAST::method_last (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_semanticInstructionListAST & outOperand2,
                                                       GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                       GALGAS_location & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::add_operation (const GALGAS_castInstructionBranchListAST & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result = GALGAS_castInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result = GALGAS_castInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result = GALGAS_castInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListAST::plusAssign_operation (const GALGAS_castInstructionBranchListAST inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_castInstructionBranchListAST::getter_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_castInstructionBranchListAST::getter_mConstantVarNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mConstantVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_castInstructionBranchListAST::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_semanticInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListAST::getter_mTypeComparisonKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_dynamicTypeComparisonKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mTypeComparisonKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_castInstructionBranchListAST::getter_mEndOfInstructionsAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mEndOfInstructions ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_castInstructionBranchListAST::cEnumerator_castInstructionBranchListAST (const GALGAS_castInstructionBranchListAST & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListAST_2D_element cEnumerator_castInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_castInstructionBranchListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_castInstructionBranchListAST::current_mConstantVarName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mConstantVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cEnumerator_castInstructionBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynamicTypeComparisonKind cEnumerator_castInstructionBranchListAST::current_mTypeComparisonKind (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mTypeComparisonKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_castInstructionBranchListAST::current_mEndOfInstructions (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mEndOfInstructions ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @castInstructionBranchListAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListAST ("castInstructionBranchListAST",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_castInstructionBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST result ;
  const GALGAS_castInstructionBranchListAST * p = (const GALGAS_castInstructionBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInstructionBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_structuredCastInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCastExpression.objectCompare (p->mProperty_mCastExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCastInstructionBranchList.objectCompare (p->mProperty_mCastInstructionBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfCastInstruction.objectCompare (p->mProperty_mEndOfCastInstruction) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structuredCastInstructionAST::GALGAS_structuredCastInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structuredCastInstructionAST::GALGAS_structuredCastInstructionAST (const cPtr_structuredCastInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structuredCastInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_structuredCastInstructionAST::getter_mCastExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    result = p->mProperty_mCastExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_structuredCastInstructionAST::getter_mCastExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCastExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListAST GALGAS_structuredCastInstructionAST::getter_mCastInstructionBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    result = p->mProperty_mCastInstructionBranchList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListAST cPtr_structuredCastInstructionAST::getter_mCastInstructionBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCastInstructionBranchList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_structuredCastInstructionAST::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_structuredCastInstructionAST::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_structuredCastInstructionAST::getter_mEndOfCastInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    result = p->mProperty_mEndOfCastInstruction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_structuredCastInstructionAST::getter_mEndOfCastInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfCastInstruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @structuredCastInstructionAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_structuredCastInstructionAST::cPtr_structuredCastInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_semanticExpressionAST & in_mCastExpression,
                                                                      const GALGAS_castInstructionBranchListAST & in_mCastInstructionBranchList,
                                                                      const GALGAS_semanticInstructionListAST & in_mElseInstructionList,
                                                                      const GALGAS_location & in_mEndOfCastInstruction
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mCastExpression (in_mCastExpression),
mProperty_mCastInstructionBranchList (in_mCastInstructionBranchList),
mProperty_mElseInstructionList (in_mElseInstructionList),
mProperty_mEndOfCastInstruction (in_mEndOfCastInstruction) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_structuredCastInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionAST ;
}

void cPtr_structuredCastInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@structuredCastInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCastExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCastInstructionBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfCastInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_structuredCastInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structuredCastInstructionAST (mProperty_mInstructionLocation, mProperty_mCastExpression, mProperty_mCastInstructionBranchList, mProperty_mElseInstructionList, mProperty_mEndOfCastInstruction COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @structuredCastInstructionAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structuredCastInstructionAST ("structuredCastInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_structuredCastInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_structuredCastInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structuredCastInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Class for element of '@castInstructionBranchListForGeneration' list                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_castInstructionBranchListForGeneration : public cCollectionElement {
  public : GALGAS_castInstructionBranchListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                      const GALGAS_string & in_mCastedVarCppName,
                                                                      const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_castInstructionBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_castInstructionBranchListForGeneration::cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                                                                      const GALGAS_string & in_mCastedVarCppName,
                                                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeComparisonKind, in_mType, in_mCastedVarCppName, in_mInstructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_castInstructionBranchListForGeneration::cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_castInstructionBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeComparisonKind, inElement.mProperty_mType, inElement.mProperty_mCastedVarCppName, inElement.mProperty_mInstructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_castInstructionBranchListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_castInstructionBranchListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_castInstructionBranchListForGeneration (mObject.mProperty_mTypeComparisonKind, mObject.mProperty_mType, mObject.mProperty_mCastedVarCppName, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_castInstructionBranchListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeComparisonKind" ":" ;
  mObject.mProperty_mTypeComparisonKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCastedVarCppName" ":" ;
  mObject.mProperty_mCastedVarCppName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_castInstructionBranchListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_castInstructionBranchListForGeneration * operand = (cCollectionElement_castInstructionBranchListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_castInstructionBranchListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListForGeneration::GALGAS_castInstructionBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListForGeneration::GALGAS_castInstructionBranchListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_castInstructionBranchListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::constructor_listWithValue (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                        const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_castInstructionBranchListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_castInstructionBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                               const GALGAS_string & in_mCastedVarCppName,
                                                                               const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (in_mTypeComparisonKind,
                                                                            in_mType,
                                                                            in_mCastedVarCppName,
                                                                            in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListForGeneration::addAssign_operation (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                         const GALGAS_string & inOperand2,
                                                                         const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListForGeneration::setter_append (GALGAS_castInstructionBranchListForGeneration_2D_element inElement,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListForGeneration::setter_insertAtIndex (const GALGAS_dynamicTypeComparisonKind inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy inOperand1,
                                                                          const GALGAS_string inOperand2,
                                                                          const GALGAS_semanticInstructionListForGeneration inOperand3,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListForGeneration::setter_removeAtIndex (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                          GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
      outOperand1 = p->mObject.mProperty_mType ;
      outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
      outOperand3 = p->mObject.mProperty_mInstructionList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListForGeneration::setter_popFirst (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                     GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                     GALGAS_string & outOperand2,
                                                                     GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListForGeneration::setter_popLast (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                    GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListForGeneration::method_first (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                  GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListForGeneration::method_last (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                 GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                 GALGAS_string & outOperand2,
                                                                 GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::add_operation (const GALGAS_castInstructionBranchListForGeneration & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_castInstructionBranchListForGeneration::plusAssign_operation (const GALGAS_castInstructionBranchListForGeneration inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListForGeneration::getter_mTypeComparisonKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_dynamicTypeComparisonKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mTypeComparisonKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_castInstructionBranchListForGeneration::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_castInstructionBranchListForGeneration::getter_mCastedVarCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mCastedVarCppName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_castInstructionBranchListForGeneration::cEnumerator_castInstructionBranchListForGeneration (const GALGAS_castInstructionBranchListForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListForGeneration_2D_element cEnumerator_castInstructionBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynamicTypeComparisonKind cEnumerator_castInstructionBranchListForGeneration::current_mTypeComparisonKind (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mTypeComparisonKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_castInstructionBranchListForGeneration::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_castInstructionBranchListForGeneration::current_mCastedVarCppName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mCastedVarCppName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration cEnumerator_castInstructionBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @castInstructionBranchListForGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration ("castInstructionBranchListForGeneration",
                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_castInstructionBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration result ;
  const GALGAS_castInstructionBranchListForGeneration * p = (const GALGAS_castInstructionBranchListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInstructionBranchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_dropInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dropInstructionAST * p = (const cPtr_dropInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dropInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDropList.objectCompare (p->mProperty_mDropList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_dropInstructionAST::objectCompare (const GALGAS_dropInstructionAST & inOperand) const {
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

GALGAS_dropInstructionAST::GALGAS_dropInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dropInstructionAST GALGAS_dropInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_dropInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_lstringlist::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dropInstructionAST::GALGAS_dropInstructionAST (const cPtr_dropInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dropInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dropInstructionAST GALGAS_dropInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                      const GALGAS_lstringlist & inAttribute_mDropList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dropInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mDropList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dropInstructionAST (inAttribute_mInstructionLocation, inAttribute_mDropList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_dropInstructionAST::getter_mDropList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_dropInstructionAST * p = (const cPtr_dropInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dropInstructionAST) ;
    result = p->mProperty_mDropList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_dropInstructionAST::getter_mDropList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDropList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @dropInstructionAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_dropInstructionAST::cPtr_dropInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstringlist & in_mDropList
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mDropList (in_mDropList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_dropInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionAST ;
}

void cPtr_dropInstructionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@dropInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDropList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_dropInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dropInstructionAST (mProperty_mInstructionLocation, mProperty_mDropList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @dropInstructionAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dropInstructionAST ("dropInstructionAST",
                                           & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_dropInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_dropInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dropInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dropInstructionAST GALGAS_dropInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_dropInstructionAST result ;
  const GALGAS_dropInstructionAST * p = (const GALGAS_dropInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dropInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dropInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_fixitElementAST_fixItReplace::cEnumAssociatedValues_fixitElementAST_fixItReplace (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                                                        const GALGAS_location & inAssociatedValue1
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_fixitElementAST_fixItReplace::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_fixitElementAST_fixItReplace::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementAST_fixItReplace * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementAST_fixItReplace *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_fixitElementAST_fixItInsertAfter::cEnumAssociatedValues_fixitElementAST_fixItInsertAfter (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                                                                const GALGAS_location & inAssociatedValue1
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_fixitElementAST_fixItInsertAfter::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_fixitElementAST_fixItInsertAfter::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_fixitElementAST_fixItInsertBefore::cEnumAssociatedValues_fixitElementAST_fixItInsertBefore (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                                                                  const GALGAS_location & inAssociatedValue1
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_fixitElementAST_fixItInsertBefore::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_fixitElementAST_fixItInsertBefore::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementAST::GALGAS_fixitElementAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementAST GALGAS_fixitElementAST::constructor_fixItRemove (UNUSED_LOCATION_ARGS) {
  GALGAS_fixitElementAST result ;
  result.mEnum = kEnum_fixItRemove ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementAST GALGAS_fixitElementAST::constructor_fixItReplace (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                         const GALGAS_location & inAssociatedValue1
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_fixItReplace ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementAST_fixItReplace (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementAST GALGAS_fixitElementAST::constructor_fixItInsertAfter (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                             const GALGAS_location & inAssociatedValue1
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_fixItInsertAfter ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementAST_fixItInsertAfter (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementAST GALGAS_fixitElementAST::constructor_fixItInsertBefore (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                              const GALGAS_location & inAssociatedValue1
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_fixItInsertBefore ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementAST_fixItInsertBefore (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitElementAST::method_fixItReplace (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                  GALGAS_location & outAssociatedValue1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItReplace) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @fixitElementAST fixItReplace invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementAST_fixItReplace * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitElementAST::method_fixItInsertAfter (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                      GALGAS_location & outAssociatedValue1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItInsertAfter) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @fixitElementAST fixItInsertAfter invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitElementAST::method_fixItInsertBefore (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                       GALGAS_location & outAssociatedValue1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItInsertBefore) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @fixitElementAST fixItInsertBefore invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_fixitElementAST [5] = {
  "(not built)",
  "fixItRemove",
  "fixItReplace",
  "fixItInsertAfter",
  "fixItInsertBefore"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_fixitElementAST::getter_isFixItRemove (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItRemove == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_fixitElementAST::getter_isFixItReplace (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItReplace == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_fixitElementAST::getter_isFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItInsertAfter == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_fixitElementAST::getter_isFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItInsertBefore == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitElementAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<enum @fixitElementAST: " << gEnumNameArrayFor_fixitElementAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_fixitElementAST::objectCompare (const GALGAS_fixitElementAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @fixitElementAST type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixitElementAST ("fixitElementAST",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_fixitElementAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_fixitElementAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitElementAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementAST GALGAS_fixitElementAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST result ;
  const GALGAS_fixitElementAST * p = (const GALGAS_fixitElementAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fixitElementAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Class for element of '@fixitListAST' list                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_fixitListAST : public cCollectionElement {
  public : GALGAS_fixitListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_fixitListAST (const GALGAS_fixitElementAST & in_mElement
                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_fixitListAST (const GALGAS_fixitListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_fixitListAST::cCollectionElement_fixitListAST (const GALGAS_fixitElementAST & in_mElement
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_fixitListAST::cCollectionElement_fixitListAST (const GALGAS_fixitListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_fixitListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_fixitListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_fixitListAST (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_fixitListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_fixitListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_fixitListAST * operand = (cCollectionElement_fixitListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_fixitListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListAST::GALGAS_fixitListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListAST::GALGAS_fixitListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListAST GALGAS_fixitListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_fixitListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListAST GALGAS_fixitListAST::constructor_listWithValue (const GALGAS_fixitElementAST & inOperand0
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_fixitListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_fixitListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_fixitListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_fixitElementAST & in_mElement
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_fixitListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_fixitListAST (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListAST::addAssign_operation (const GALGAS_fixitElementAST & inOperand0
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_fixitListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListAST::setter_append (GALGAS_fixitListAST_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_fixitListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListAST::setter_insertAtIndex (const GALGAS_fixitElementAST inOperand0,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_fixitListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListAST::setter_removeAtIndex (GALGAS_fixitElementAST & outOperand0,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
      outOperand0 = p->mObject.mProperty_mElement ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListAST::setter_popFirst (GALGAS_fixitElementAST & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListAST::setter_popLast (GALGAS_fixitElementAST & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListAST::method_first (GALGAS_fixitElementAST & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListAST::method_last (GALGAS_fixitElementAST & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListAST GALGAS_fixitListAST::add_operation (const GALGAS_fixitListAST & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_fixitListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListAST GALGAS_fixitListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListAST result = GALGAS_fixitListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListAST GALGAS_fixitListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListAST result = GALGAS_fixitListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListAST GALGAS_fixitListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListAST result = GALGAS_fixitListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListAST::plusAssign_operation (const GALGAS_fixitListAST inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementAST GALGAS_fixitListAST::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  GALGAS_fixitElementAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_fixitListAST::cEnumerator_fixitListAST (const GALGAS_fixitListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListAST_2D_element cEnumerator_fixitListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_fixitListAST * p = (const cCollectionElement_fixitListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementAST cEnumerator_fixitListAST::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_fixitListAST * p = (const cCollectionElement_fixitListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
  return p->mObject.mProperty_mElement ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @fixitListAST type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixitListAST ("fixitListAST",
                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_fixitListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_fixitListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListAST GALGAS_fixitListAST::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_fixitListAST result ;
  const GALGAS_fixitListAST * p = (const GALGAS_fixitListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fixitListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_errorInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_errorInstructionAST * p = (const cPtr_errorInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_errorInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocationExpression.objectCompare (p->mProperty_mLocationExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMessageExpression.objectCompare (p->mProperty_mMessageExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBuiltVariableList.objectCompare (p->mProperty_mBuiltVariableList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFixitListAST.objectCompare (p->mProperty_mFixitListAST) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_errorInstructionAST::objectCompare (const GALGAS_errorInstructionAST & inOperand) const {
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

GALGAS_errorInstructionAST::GALGAS_errorInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_errorInstructionAST::GALGAS_errorInstructionAST (const cPtr_errorInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_errorInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_errorInstructionAST GALGAS_errorInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                        const GALGAS_semanticExpressionAST & inAttribute_mLocationExpression,
                                                                        const GALGAS_semanticExpressionAST & inAttribute_mMessageExpression,
                                                                        const GALGAS_lstringlist & inAttribute_mBuiltVariableList,
                                                                        const GALGAS_fixitListAST & inAttribute_mFixitListAST
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_errorInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLocationExpression.isValid () && inAttribute_mMessageExpression.isValid () && inAttribute_mBuiltVariableList.isValid () && inAttribute_mFixitListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_errorInstructionAST (inAttribute_mInstructionLocation, inAttribute_mLocationExpression, inAttribute_mMessageExpression, inAttribute_mBuiltVariableList, inAttribute_mFixitListAST COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_errorInstructionAST::getter_mLocationExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionAST * p = (const cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    result = p->mProperty_mLocationExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_errorInstructionAST::getter_mLocationExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocationExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_errorInstructionAST::getter_mMessageExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionAST * p = (const cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    result = p->mProperty_mMessageExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_errorInstructionAST::getter_mMessageExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMessageExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_errorInstructionAST::getter_mBuiltVariableList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionAST * p = (const cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    result = p->mProperty_mBuiltVariableList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_errorInstructionAST::getter_mBuiltVariableList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuiltVariableList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListAST GALGAS_errorInstructionAST::getter_mFixitListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_fixitListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionAST * p = (const cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    result = p->mProperty_mFixitListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListAST cPtr_errorInstructionAST::getter_mFixitListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFixitListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @errorInstructionAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_errorInstructionAST::cPtr_errorInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_semanticExpressionAST & in_mLocationExpression,
                                                    const GALGAS_semanticExpressionAST & in_mMessageExpression,
                                                    const GALGAS_lstringlist & in_mBuiltVariableList,
                                                    const GALGAS_fixitListAST & in_mFixitListAST
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mLocationExpression (in_mLocationExpression),
mProperty_mMessageExpression (in_mMessageExpression),
mProperty_mBuiltVariableList (in_mBuiltVariableList),
mProperty_mFixitListAST (in_mFixitListAST) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_errorInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST ;
}

void cPtr_errorInstructionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@errorInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocationExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMessageExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBuiltVariableList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFixitListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_errorInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_errorInstructionAST (mProperty_mInstructionLocation, mProperty_mLocationExpression, mProperty_mMessageExpression, mProperty_mBuiltVariableList, mProperty_mFixitListAST COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @errorInstructionAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_errorInstructionAST ("errorInstructionAST",
                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_errorInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_errorInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_errorInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_errorInstructionAST GALGAS_errorInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_errorInstructionAST result ;
  const GALGAS_errorInstructionAST * p = (const GALGAS_errorInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_errorInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension method '@fixitListAST enterFixItListInSemanticContext'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterFixItListInSemanticContext (const GALGAS_fixitListAST inObject,
                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_fixitListAST temp_0 = inObject ;
  cEnumerator_fixitListAST enumerator_4295 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4295.hasCurrentObject ()) {
    switch (enumerator_4295.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_4453 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_4295.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_4453->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 121)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_4570 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_4295.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_4570->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 123)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_4686 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_4295.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_4686->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 125)) ;
      }
      break ;
    }
    enumerator_4295.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_fixitElementForGeneration_fixItReplace::cEnumAssociatedValues_fixitElementForGeneration_fixItReplace (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_fixitElementForGeneration_fixItReplace::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_fixitElementForGeneration_fixItReplace::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore::cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter::cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter::description (C_String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementForGeneration::GALGAS_fixitElementForGeneration (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementForGeneration GALGAS_fixitElementForGeneration::constructor_fixItRemove (UNUSED_LOCATION_ARGS) {
  GALGAS_fixitElementForGeneration result ;
  result.mEnum = kEnum_fixItRemove ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementForGeneration GALGAS_fixitElementForGeneration::constructor_fixItReplace (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementForGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_fixItReplace ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementForGeneration_fixItReplace (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementForGeneration GALGAS_fixitElementForGeneration::constructor_fixItInsertBefore (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementForGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_fixItInsertBefore ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementForGeneration GALGAS_fixitElementForGeneration::constructor_fixItInsertAfter (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementForGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_fixItInsertAfter ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitElementForGeneration::method_fixItReplace (GALGAS_semanticExpressionForGeneration & outAssociatedValue0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItReplace) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @fixitElementForGeneration fixItReplace invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitElementForGeneration::method_fixItInsertBefore (GALGAS_semanticExpressionForGeneration & outAssociatedValue0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItInsertBefore) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @fixitElementForGeneration fixItInsertBefore invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitElementForGeneration::method_fixItInsertAfter (GALGAS_semanticExpressionForGeneration & outAssociatedValue0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItInsertAfter) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @fixitElementForGeneration fixItInsertAfter invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_fixitElementForGeneration [5] = {
  "(not built)",
  "fixItRemove",
  "fixItReplace",
  "fixItInsertBefore",
  "fixItInsertAfter"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_fixitElementForGeneration::getter_isFixItRemove (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItRemove == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_fixitElementForGeneration::getter_isFixItReplace (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItReplace == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_fixitElementForGeneration::getter_isFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItInsertBefore == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_fixitElementForGeneration::getter_isFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItInsertAfter == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitElementForGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<enum @fixitElementForGeneration: " << gEnumNameArrayFor_fixitElementForGeneration [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_fixitElementForGeneration::objectCompare (const GALGAS_fixitElementForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @fixitElementForGeneration type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixitElementForGeneration ("fixitElementForGeneration",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_fixitElementForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_fixitElementForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitElementForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementForGeneration GALGAS_fixitElementForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementForGeneration result ;
  const GALGAS_fixitElementForGeneration * p = (const GALGAS_fixitElementForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fixitElementForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@fixitListForGeneration' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_fixitListForGeneration : public cCollectionElement {
  public : GALGAS_fixitListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_fixitListForGeneration (const GALGAS_fixitElementForGeneration & in_mElement
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_fixitListForGeneration (const GALGAS_fixitListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_fixitListForGeneration::cCollectionElement_fixitListForGeneration (const GALGAS_fixitElementForGeneration & in_mElement
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_fixitListForGeneration::cCollectionElement_fixitListForGeneration (const GALGAS_fixitListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_fixitListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_fixitListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_fixitListForGeneration (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_fixitListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_fixitListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_fixitListForGeneration * operand = (cCollectionElement_fixitListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_fixitListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListForGeneration::GALGAS_fixitListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListForGeneration::GALGAS_fixitListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_fixitListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::constructor_listWithValue (const GALGAS_fixitElementForGeneration & inOperand0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_fixitListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_fixitListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_fixitListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_fixitElementForGeneration & in_mElement
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_fixitListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_fixitListForGeneration (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListForGeneration::addAssign_operation (const GALGAS_fixitElementForGeneration & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_fixitListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListForGeneration::setter_append (GALGAS_fixitListForGeneration_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_fixitListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListForGeneration::setter_insertAtIndex (const GALGAS_fixitElementForGeneration inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_fixitListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListForGeneration::setter_removeAtIndex (GALGAS_fixitElementForGeneration & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mElement ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListForGeneration::setter_popFirst (GALGAS_fixitElementForGeneration & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListForGeneration::setter_popLast (GALGAS_fixitElementForGeneration & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListForGeneration::method_first (GALGAS_fixitElementForGeneration & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListForGeneration::method_last (GALGAS_fixitElementForGeneration & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::add_operation (const GALGAS_fixitListForGeneration & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_fixitListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListForGeneration result = GALGAS_fixitListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListForGeneration result = GALGAS_fixitListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListForGeneration result = GALGAS_fixitListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_fixitListForGeneration::plusAssign_operation (const GALGAS_fixitListForGeneration inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementForGeneration GALGAS_fixitListForGeneration::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  GALGAS_fixitElementForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_fixitListForGeneration::cEnumerator_fixitListForGeneration (const GALGAS_fixitListForGeneration & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListForGeneration_2D_element cEnumerator_fixitListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_fixitListForGeneration * p = (const cCollectionElement_fixitListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitElementForGeneration cEnumerator_fixitListForGeneration::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_fixitListForGeneration * p = (const cCollectionElement_fixitListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
  return p->mObject.mProperty_mElement ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @fixitListForGeneration type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixitListForGeneration ("fixitListForGeneration",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_fixitListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_fixitListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_fixitListForGeneration result ;
  const GALGAS_fixitListForGeneration * p = (const GALGAS_fixitListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fixitListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@fixitListForGeneration generateFixIt'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateFixIt (const GALGAS_fixitListForGeneration inObject,
                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                    GALGAS_string & outArgument_outFixItArrayCppName,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFixItArrayCppName.drop () ; // Release 'out' argument
  outArgument_outFixItArrayCppName = GALGAS_string ("fixItArray").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-error.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 344)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 345)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("TC_Array <C_FixItDescription> ").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 346)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 346)) ;
  const GALGAS_fixitListForGeneration temp_0 = inObject ;
  cEnumerator_fixitListForGeneration enumerator_14093 (temp_0, kENUMERATION_UP) ;
  while (enumerator_14093.hasCurrentObject ()) {
    switch (enumerator_14093.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementForGeneration::kNotBuilt:
      break ;
    case GALGAS_fixitElementForGeneration::kEnum_fixItRemove:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outFixItArrayCppName.add_operation (GALGAS_string (".appendObject (C_FixItDescription (kFixItRemove, \"\")) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 350)) ;
      }
      break ;
    case GALGAS_fixitElementForGeneration::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace * extractPtr_14630 = (const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace *) (enumerator_14093.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_exp = extractPtr_14630->mAssociatedValue0 ;
        GALGAS_string var_receiverCppVarName_14498 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_14498, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 352)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 359)).add_operation (GALGAS_string (", kFixItReplace, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 359)).add_operation (var_receiverCppVarName_14498, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 359)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 359)) ;
      }
      break ;
    case GALGAS_fixitElementForGeneration::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore * extractPtr_15020 = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore *) (enumerator_14093.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_exp = extractPtr_15020->mAssociatedValue0 ;
        GALGAS_string var_receiverCppVarName_14883 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_14883, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 361)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 368)).add_operation (GALGAS_string (", kFixItInsertBefore, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 368)).add_operation (var_receiverCppVarName_14883, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 368)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 368)) ;
      }
      break ;
    case GALGAS_fixitElementForGeneration::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter * extractPtr_15408 = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter *) (enumerator_14093.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_exp = extractPtr_15408->mAssociatedValue0 ;
        GALGAS_string var_receiverCppVarName_15272 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_15272, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 370)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 377)).add_operation (GALGAS_string (", kFixItInsertAfter, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 377)).add_operation (var_receiverCppVarName_15272, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 377)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 377)) ;
      }
      break ;
    }
    enumerator_14093.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Class for element of '@forInstructionEnumeratedObjectElementListAST' list                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_forInstructionEnumeratedObjectElementListAST : public cCollectionElement {
  public : GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_lstring & in_mOptionalConstantName
                                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_forInstructionEnumeratedObjectElementListAST::cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GALGAS_lstring & in_mOptionalTypeName,
                                                                                                                                  const GALGAS_lstring & in_mOptionalConstantName
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionalTypeName, in_mOptionalConstantName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_forInstructionEnumeratedObjectElementListAST::cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionalTypeName, inElement.mProperty_mOptionalConstantName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_forInstructionEnumeratedObjectElementListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectElementListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectElementListAST (mObject.mProperty_mOptionalTypeName, mObject.mProperty_mOptionalConstantName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_forInstructionEnumeratedObjectElementListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionalTypeName" ":" ;
  mObject.mProperty_mOptionalTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionalConstantName" ":" ;
  mObject.mProperty_mOptionalConstantName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_forInstructionEnumeratedObjectElementListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * operand = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectElementListAST::GALGAS_forInstructionEnumeratedObjectElementListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectElementListAST::GALGAS_forInstructionEnumeratedObjectElementListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_forInstructionEnumeratedObjectElementListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                                    const GALGAS_lstring & inOperand1
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectElementListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_forInstructionEnumeratedObjectElementListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectElementListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_lstring & in_mOptionalTypeName,
                                                                                     const GALGAS_lstring & in_mOptionalConstantName
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (in_mOptionalTypeName,
                                                                                  in_mOptionalConstantName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectElementListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                               const GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_append (GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element inElement,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                                const GALGAS_lstring inOperand1,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                                GALGAS_lstring & outOperand1,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
      outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
      outOperand1 = p->mObject.mProperty_mOptionalConstantName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                           GALGAS_lstring & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                          GALGAS_lstring & outOperand1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectElementListAST::method_first (GALGAS_lstring & outOperand0,
                                                                        GALGAS_lstring & outOperand1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectElementListAST::method_last (GALGAS_lstring & outOperand0,
                                                                       GALGAS_lstring & outOperand1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::add_operation (const GALGAS_forInstructionEnumeratedObjectElementListAST & inOperand,
                                                                                                                        C_Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectElementListAST::plusAssign_operation (const GALGAS_forInstructionEnumeratedObjectElementListAST inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_forInstructionEnumeratedObjectElementListAST::cEnumerator_forInstructionEnumeratedObjectElementListAST (const GALGAS_forInstructionEnumeratedObjectElementListAST & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element cEnumerator_forInstructionEnumeratedObjectElementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalTypeName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mOptionalTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalConstantName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mOptionalConstantName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @forInstructionEnumeratedObjectElementListAST type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ("forInstructionEnumeratedObjectElementListAST",
                                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectElementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectElementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectElementListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST result ;
  const GALGAS_forInstructionEnumeratedObjectElementListAST * p = (const GALGAS_forInstructionEnumeratedObjectElementListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectElementListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectElementListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_abstractEnumeratedCollectionAST::objectCompare (const GALGAS_abstractEnumeratedCollectionAST & inOperand) const {
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

GALGAS_abstractEnumeratedCollectionAST::GALGAS_abstractEnumeratedCollectionAST (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractEnumeratedCollectionAST::GALGAS_abstractEnumeratedCollectionAST (const cPtr_abstractEnumeratedCollectionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractEnumeratedCollectionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @abstractEnumeratedCollectionAST class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractEnumeratedCollectionAST::cPtr_abstractEnumeratedCollectionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @abstractEnumeratedCollectionAST type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ("abstractEnumeratedCollectionAST",
                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractEnumeratedCollectionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractEnumeratedCollectionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractEnumeratedCollectionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractEnumeratedCollectionAST GALGAS_abstractEnumeratedCollectionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractEnumeratedCollectionAST result ;
  const GALGAS_abstractEnumeratedCollectionAST * p = (const GALGAS_abstractEnumeratedCollectionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractEnumeratedCollectionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractEnumeratedCollectionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_enumeratedCollectionCstListInExpAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumeratedCollectionCstListInExpAST * p = (const cPtr_enumeratedCollectionCstListInExpAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mElementList.objectCompare (p->mProperty_mElementList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndsWithEllipsis.objectCompare (p->mProperty_mEndsWithEllipsis) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedExpression.objectCompare (p->mProperty_mEnumeratedExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfEnumerationExpression.objectCompare (p->mProperty_mEndOfEnumerationExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_enumeratedCollectionCstListInExpAST::objectCompare (const GALGAS_enumeratedCollectionCstListInExpAST & inOperand) const {
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

GALGAS_enumeratedCollectionCstListInExpAST::GALGAS_enumeratedCollectionCstListInExpAST (void) :
GALGAS_abstractEnumeratedCollectionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumeratedCollectionCstListInExpAST::GALGAS_enumeratedCollectionCstListInExpAST (const cPtr_enumeratedCollectionCstListInExpAST * inSourcePtr) :
GALGAS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionCstListInExpAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumeratedCollectionCstListInExpAST GALGAS_enumeratedCollectionCstListInExpAST::constructor_new (const GALGAS_forInstructionEnumeratedObjectElementListAST & inAttribute_mElementList,
                                                                                                        const GALGAS_bool & inAttribute_mEndsWithEllipsis,
                                                                                                        const GALGAS_semanticExpressionAST & inAttribute_mEnumeratedExpression,
                                                                                                        const GALGAS_location & inAttribute_mEndOfEnumerationExpression
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionCstListInExpAST result ;
  if (inAttribute_mElementList.isValid () && inAttribute_mEndsWithEllipsis.isValid () && inAttribute_mEnumeratedExpression.isValid () && inAttribute_mEndOfEnumerationExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumeratedCollectionCstListInExpAST (inAttribute_mElementList, inAttribute_mEndsWithEllipsis, inAttribute_mEnumeratedExpression, inAttribute_mEndOfEnumerationExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_enumeratedCollectionCstListInExpAST::getter_mElementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionCstListInExpAST * p = (const cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    result = p->mProperty_mElementList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectElementListAST cPtr_enumeratedCollectionCstListInExpAST::getter_mElementList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_enumeratedCollectionCstListInExpAST::getter_mEndsWithEllipsis (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionCstListInExpAST * p = (const cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    result = p->mProperty_mEndsWithEllipsis ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_enumeratedCollectionCstListInExpAST::getter_mEndsWithEllipsis (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndsWithEllipsis ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_enumeratedCollectionCstListInExpAST::getter_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionCstListInExpAST * p = (const cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    result = p->mProperty_mEnumeratedExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_enumeratedCollectionCstListInExpAST::getter_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumeratedExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_enumeratedCollectionCstListInExpAST::getter_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionCstListInExpAST * p = (const cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    result = p->mProperty_mEndOfEnumerationExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_enumeratedCollectionCstListInExpAST::getter_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfEnumerationExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @enumeratedCollectionCstListInExpAST class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumeratedCollectionCstListInExpAST::cPtr_enumeratedCollectionCstListInExpAST (const GALGAS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                                                    const GALGAS_bool & in_mEndsWithEllipsis,
                                                                                    const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                    const GALGAS_location & in_mEndOfEnumerationExpression
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (THERE),
mProperty_mElementList (in_mElementList),
mProperty_mEndsWithEllipsis (in_mEndsWithEllipsis),
mProperty_mEnumeratedExpression (in_mEnumeratedExpression),
mProperty_mEndOfEnumerationExpression (in_mEndOfEnumerationExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_enumeratedCollectionCstListInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;
}

void cPtr_enumeratedCollectionCstListInExpAST::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@enumeratedCollectionCstListInExpAST:" ;
  mProperty_mElementList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndsWithEllipsis.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumeratedCollectionCstListInExpAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumeratedCollectionCstListInExpAST (mProperty_mElementList, mProperty_mEndsWithEllipsis, mProperty_mEnumeratedExpression, mProperty_mEndOfEnumerationExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @enumeratedCollectionCstListInExpAST type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ("enumeratedCollectionCstListInExpAST",
                                                            & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionCstListInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumeratedCollectionCstListInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionCstListInExpAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumeratedCollectionCstListInExpAST GALGAS_enumeratedCollectionCstListInExpAST::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionCstListInExpAST result ;
  const GALGAS_enumeratedCollectionCstListInExpAST * p = (const GALGAS_enumeratedCollectionCstListInExpAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumeratedCollectionCstListInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionCstListInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Class for element of '@forInstructionEnumeratedObjectListAST' list                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_forInstructionEnumeratedObjectListAST : public cCollectionElement {
  public : GALGAS_forInstructionEnumeratedObjectListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_forInstructionEnumeratedObjectListAST (const GALGAS_bool & in_mAscending,
                                                                     const GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_forInstructionEnumeratedObjectListAST (const GALGAS_forInstructionEnumeratedObjectListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_forInstructionEnumeratedObjectListAST::cCollectionElement_forInstructionEnumeratedObjectListAST (const GALGAS_bool & in_mAscending,
                                                                                                                    const GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAscending, in_mEnumeratedCollection) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_forInstructionEnumeratedObjectListAST::cCollectionElement_forInstructionEnumeratedObjectListAST (const GALGAS_forInstructionEnumeratedObjectListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAscending, inElement.mProperty_mEnumeratedCollection) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_forInstructionEnumeratedObjectListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectListAST (mObject.mProperty_mAscending, mObject.mProperty_mEnumeratedCollection COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_forInstructionEnumeratedObjectListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAscending" ":" ;
  mObject.mProperty_mAscending.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumeratedCollection" ":" ;
  mObject.mProperty_mEnumeratedCollection.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_forInstructionEnumeratedObjectListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_forInstructionEnumeratedObjectListAST * operand = (cCollectionElement_forInstructionEnumeratedObjectListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListAST::GALGAS_forInstructionEnumeratedObjectListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListAST::GALGAS_forInstructionEnumeratedObjectListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_forInstructionEnumeratedObjectListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                                                                      const GALGAS_abstractEnumeratedCollectionAST & inOperand1
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_forInstructionEnumeratedObjectListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                              const GALGAS_bool & in_mAscending,
                                                                              const GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (in_mAscending,
                                                                           in_mEnumeratedCollection COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListAST::addAssign_operation (const GALGAS_bool & inOperand0,
                                                                        const GALGAS_abstractEnumeratedCollectionAST & inOperand1
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListAST::setter_append (GALGAS_forInstructionEnumeratedObjectListAST_2D_element inElement,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListAST::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                                         const GALGAS_abstractEnumeratedCollectionAST inOperand1,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListAST::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                                         GALGAS_abstractEnumeratedCollectionAST & outOperand1,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
      outOperand0 = p->mObject.mProperty_mAscending ;
      outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListAST::setter_popFirst (GALGAS_bool & outOperand0,
                                                                    GALGAS_abstractEnumeratedCollectionAST & outOperand1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListAST::setter_popLast (GALGAS_bool & outOperand0,
                                                                   GALGAS_abstractEnumeratedCollectionAST & outOperand1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListAST::method_first (GALGAS_bool & outOperand0,
                                                                 GALGAS_abstractEnumeratedCollectionAST & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListAST::method_last (GALGAS_bool & outOperand0,
                                                                GALGAS_abstractEnumeratedCollectionAST & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::add_operation (const GALGAS_forInstructionEnumeratedObjectListAST & inOperand,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListAST result = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListAST result = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListAST result = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListAST::plusAssign_operation (const GALGAS_forInstructionEnumeratedObjectListAST inOperand,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_forInstructionEnumeratedObjectListAST::getter_mAscendingAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    result = p->mObject.mProperty_mAscending ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractEnumeratedCollectionAST GALGAS_forInstructionEnumeratedObjectListAST::getter_mEnumeratedCollectionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  GALGAS_abstractEnumeratedCollectionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    result = p->mObject.mProperty_mEnumeratedCollection ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_forInstructionEnumeratedObjectListAST::cEnumerator_forInstructionEnumeratedObjectListAST (const GALGAS_forInstructionEnumeratedObjectListAST & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListAST_2D_element cEnumerator_forInstructionEnumeratedObjectListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_forInstructionEnumeratedObjectListAST::current_mAscending (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject.mProperty_mAscending ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractEnumeratedCollectionAST cEnumerator_forInstructionEnumeratedObjectListAST::current_mEnumeratedCollection (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject.mProperty_mEnumeratedCollection ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @forInstructionEnumeratedObjectListAST type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ("forInstructionEnumeratedObjectListAST",
                                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST result ;
  const GALGAS_forInstructionEnumeratedObjectListAST * p = (const GALGAS_forInstructionEnumeratedObjectListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Abstract extension method '@abstractEnumeratedCollectionAST enterInSemanticContext'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractEnumeratedCollectionAST_enterInSemanticContext> gExtensionMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractEnumeratedCollectionAST_enterInSemanticContext inMethod) {
  gExtensionMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractEnumeratedCollectionAST_enterInSemanticContext (void) {
  gExtensionMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractEnumeratedCollectionAST_enterInSemanticContext (NULL,
                                                                                   freeExtensionMethod_abstractEnumeratedCollectionAST_enterInSemanticContext) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                 GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractEnumeratedCollectionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractEnumeratedCollectionAST_enterInSemanticContext f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext.count ()) {
      f = gExtensionMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext.count ()) {
          f = gExtensionMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractEnumeratedCollectionAST_enterInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Abstract extension method '@abstractEnumeratedCollectionAST analyzeEnumeration'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractEnumeratedCollectionAST_analyzeEnumeration> gExtensionMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeEnumeration (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractEnumeratedCollectionAST_analyzeEnumeration inMethod) {
  gExtensionMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractEnumeratedCollectionAST_analyzeEnumeration (void) {
  gExtensionMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractEnumeratedCollectionAST_analyzeEnumeration (NULL,
                                                                               freeExtensionMethod_abstractEnumeratedCollectionAST_analyzeEnumeration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                             const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                             GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                             const GALGAS_analysisContext constin_inAnalysisContext,
                                             GALGAS_variableMap & io_ioVariableMap,
                                             GALGAS_localInitializedVariableList & io_ioLocalConstantListForDoBranch,
                                             GALGAS_string & out_outEnumeratorCppName,
                                             GALGAS_semanticExpressionForGeneration & out_outEnumerationExpression,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outEnumeratorCppName.drop () ;
  out_outEnumerationExpression.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractEnumeratedCollectionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractEnumeratedCollectionAST_analyzeEnumeration f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration.count ()) {
      f = gExtensionMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration.count ()) {
          f = gExtensionMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractEnumeratedCollectionAST_analyzeEnumeration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioVariableMap, io_ioLocalConstantListForDoBranch, out_outEnumeratorCppName, out_outEnumerationExpression, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Class for element of '@forInstructionEnumeratedObjectListForGeneration' list                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_forInstructionEnumeratedObjectListForGeneration : public cCollectionElement {
  public : GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GALGAS_string & in_mEnumerationOrder,
                                                                               const GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                               const GALGAS_string & in_mEnumeratorCppName
                                                                               COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_forInstructionEnumeratedObjectListForGeneration::cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GALGAS_string & in_mEnumerationOrder,
                                                                                                                                        const GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                                                                        const GALGAS_string & in_mEnumeratorCppName
                                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumerationOrder, in_mEnumeratedExpression, in_mEnumeratorCppName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_forInstructionEnumeratedObjectListForGeneration::cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEnumerationOrder, inElement.mProperty_mEnumeratedExpression, inElement.mProperty_mEnumeratorCppName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_forInstructionEnumeratedObjectListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (mObject.mProperty_mEnumerationOrder, mObject.mProperty_mEnumeratedExpression, mObject.mProperty_mEnumeratorCppName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_forInstructionEnumeratedObjectListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumerationOrder" ":" ;
  mObject.mProperty_mEnumerationOrder.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumeratedExpression" ":" ;
  mObject.mProperty_mEnumeratedExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumeratorCppName" ":" ;
  mObject.mProperty_mEnumeratorCppName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_forInstructionEnumeratedObjectListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * operand = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListForGeneration::GALGAS_forInstructionEnumeratedObjectListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListForGeneration::GALGAS_forInstructionEnumeratedObjectListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_forInstructionEnumeratedObjectListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                          const GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                          const GALGAS_string & inOperand2
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_forInstructionEnumeratedObjectListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                        const GALGAS_string & in_mEnumerationOrder,
                                                                                        const GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                        const GALGAS_string & in_mEnumeratorCppName
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (in_mEnumerationOrder,
                                                                                     in_mEnumeratedExpression,
                                                                                     in_mEnumeratorCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                  const GALGAS_string & inOperand2
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::setter_append (GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element inElement,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                   const GALGAS_semanticExpressionForGeneration inOperand1,
                                                                                   const GALGAS_string inOperand2,
                                                                                   const GALGAS_uint inInsertionIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                   GALGAS_semanticExpressionForGeneration & outOperand1,
                                                                                   GALGAS_string & outOperand2,
                                                                                   const GALGAS_uint inRemoveIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
      outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
      outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                              GALGAS_semanticExpressionForGeneration & outOperand1,
                                                                              GALGAS_string & outOperand2,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                             GALGAS_semanticExpressionForGeneration & outOperand1,
                                                                             GALGAS_string & outOperand2,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                           GALGAS_semanticExpressionForGeneration & outOperand1,
                                                                           GALGAS_string & outOperand2,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                          GALGAS_semanticExpressionForGeneration & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::add_operation (const GALGAS_forInstructionEnumeratedObjectListForGeneration & inOperand,
                                                                                                                              C_Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::plusAssign_operation (const GALGAS_forInstructionEnumeratedObjectListForGeneration inOperand,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_forInstructionEnumeratedObjectListForGeneration::getter_mEnumerationOrderAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    result = p->mObject.mProperty_mEnumerationOrder ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::getter_mEnumeratedExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    result = p->mObject.mProperty_mEnumeratedExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_forInstructionEnumeratedObjectListForGeneration::getter_mEnumeratorCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    result = p->mObject.mProperty_mEnumeratorCppName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_forInstructionEnumeratedObjectListForGeneration::cEnumerator_forInstructionEnumeratedObjectListForGeneration (const GALGAS_forInstructionEnumeratedObjectListForGeneration & inEnumeratedObject,
                                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element cEnumerator_forInstructionEnumeratedObjectListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumerationOrder (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumerationOrder ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumeratedExpression (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumeratedExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumeratorCppName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumeratorCppName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @forInstructionEnumeratedObjectListForGeneration type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration ("forInstructionEnumeratedObjectListForGeneration",
                                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result ;
  const GALGAS_forInstructionEnumeratedObjectListForGeneration * p = (const GALGAS_forInstructionEnumeratedObjectListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone & inOperand) const {
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

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (THERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                   Pointer class for @grammarInstructionSyntaxDirectedTranslationResultNone class                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::description (C_String & ioString,
                                                                              const int32_t /* inIndentation */) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultNone]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @grammarInstructionSyntaxDirectedTranslationResultNone type                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ("grammarInstructionSyntaxDirectedTranslationResultNone",
                                                                              & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultNone", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult & inOperand) const {
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

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                   Pointer class for @grammarInstructionSyntaxDirectedTranslationDropResult class                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (const GALGAS_location & in_mLocation
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mProperty_mLocation (in_mLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationDropResult:" ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @grammarInstructionSyntaxDirectedTranslationDropResult type                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ("grammarInstructionSyntaxDirectedTranslationDropResult",
                                                                              & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationDropResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind::GALGAS_incDecKind (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind GALGAS_incDecKind::constructor_increment (UNUSED_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  result.mEnum = kEnum_increment ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind GALGAS_incDecKind::constructor_decrement (UNUSED_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  result.mEnum = kEnum_decrement ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_incDecKind [3] = {
  "(not built)",
  "increment",
  "decrement"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_incDecKind::getter_isIncrement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_increment == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_incDecKind::getter_isDecrement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_decrement == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_incDecKind::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @incDecKind: " << gEnumNameArrayFor_incDecKind [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_incDecKind::objectCompare (const GALGAS_incDecKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @incDecKind type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecKind ("incDecKind",
                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_incDecKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_incDecKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind GALGAS_incDecKind::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  const GALGAS_incDecKind * p = (const GALGAS_incDecKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_selfIncDecInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfIncDecInstructionAST * p = (const cPtr_selfIncDecInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfIncDecInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfIncDecInstructionAST::GALGAS_selfIncDecInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfIncDecInstructionAST::GALGAS_selfIncDecInstructionAST (const cPtr_selfIncDecInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfIncDecInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfIncDecInstructionAST GALGAS_selfIncDecInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_incDecKind & inAttribute_mKind
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfIncDecInstructionAST (inAttribute_mInstructionLocation, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind GALGAS_selfIncDecInstructionAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfIncDecInstructionAST * p = (const cPtr_selfIncDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfIncDecInstructionAST) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind cPtr_selfIncDecInstructionAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @selfIncDecInstructionAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_selfIncDecInstructionAST::cPtr_selfIncDecInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_incDecKind & in_mKind
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mKind (in_mKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_selfIncDecInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;
}

void cPtr_selfIncDecInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@selfIncDecInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_selfIncDecInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfIncDecInstructionAST (mProperty_mInstructionLocation, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @selfIncDecInstructionAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfIncDecInstructionAST ("selfIncDecInstructionAST",
                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_selfIncDecInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_selfIncDecInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfIncDecInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_selfIncDecNoOVFInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfIncDecNoOVFInstructionAST * p = (const cPtr_selfIncDecNoOVFInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfIncDecNoOVFInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfIncDecNoOVFInstructionAST::GALGAS_selfIncDecNoOVFInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfIncDecNoOVFInstructionAST::GALGAS_selfIncDecNoOVFInstructionAST (const cPtr_selfIncDecNoOVFInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfIncDecNoOVFInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfIncDecNoOVFInstructionAST GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_incDecKind & inAttribute_mKind
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecNoOVFInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfIncDecNoOVFInstructionAST (inAttribute_mInstructionLocation, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind GALGAS_selfIncDecNoOVFInstructionAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfIncDecNoOVFInstructionAST * p = (const cPtr_selfIncDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfIncDecNoOVFInstructionAST) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_incDecKind cPtr_selfIncDecNoOVFInstructionAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @selfIncDecNoOVFInstructionAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_selfIncDecNoOVFInstructionAST::cPtr_selfIncDecNoOVFInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_incDecKind & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mKind (in_mKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_selfIncDecNoOVFInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ;
}

void cPtr_selfIncDecNoOVFInstructionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@selfIncDecNoOVFInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_selfIncDecNoOVFInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfIncDecNoOVFInstructionAST (mProperty_mInstructionLocation, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @selfIncDecNoOVFInstructionAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ("selfIncDecNoOVFInstructionAST",
                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_selfIncDecNoOVFInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_selfIncDecNoOVFInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfIncDecNoOVFInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_ifExpressionKind_regularExp::cEnumAssociatedValues_ifExpressionKind_regularExp (const GALGAS_semanticExpressionAST & inAssociatedValue0
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_ifExpressionKind_regularExp::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_ifExpressionKind_regularExp::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_ifExpressionKind_regularExp * ptr = dynamic_cast<const cEnumAssociatedValues_ifExpressionKind_regularExp *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_ifExpressionKind_letExp::cEnumAssociatedValues_ifExpressionKind_letExp (const GALGAS_lstring & inAssociatedValue0,
                                                                                              const GALGAS_semanticExpressionAST & inAssociatedValue1,
                                                                                              const GALGAS_location & inAssociatedValue2,
                                                                                              const GALGAS_lstring & inAssociatedValue3
                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_ifExpressionKind_letExp::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_ifExpressionKind_letExp::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_ifExpressionKind_letExp * ptr = dynamic_cast<const cEnumAssociatedValues_ifExpressionKind_letExp *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionKind::GALGAS_ifExpressionKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionKind GALGAS_ifExpressionKind::constructor_regularExp (const GALGAS_semanticExpressionAST & inAssociatedValue0
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_regularExp ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_ifExpressionKind_regularExp (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionKind GALGAS_ifExpressionKind::constructor_letExp (const GALGAS_lstring & inAssociatedValue0,
                                                                     const GALGAS_semanticExpressionAST & inAssociatedValue1,
                                                                     const GALGAS_location & inAssociatedValue2,
                                                                     const GALGAS_lstring & inAssociatedValue3
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_letExp ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_ifExpressionKind_letExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifExpressionKind::method_regularExp (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_regularExp) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @ifExpressionKind regularExp invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_ifExpressionKind_regularExp * ptr = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifExpressionKind::method_letExp (GALGAS_lstring & outAssociatedValue0,
                                             GALGAS_semanticExpressionAST & outAssociatedValue1,
                                             GALGAS_location & outAssociatedValue2,
                                             GALGAS_lstring & outAssociatedValue3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_letExp) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @ifExpressionKind letExp invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_ifExpressionKind_letExp * ptr = (const cEnumAssociatedValues_ifExpressionKind_letExp *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_ifExpressionKind [3] = {
  "(not built)",
  "regularExp",
  "letExp"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_ifExpressionKind::getter_isRegularExp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_regularExp == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_ifExpressionKind::getter_isLetExp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_letExp == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifExpressionKind::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<enum @ifExpressionKind: " << gEnumNameArrayFor_ifExpressionKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_ifExpressionKind::objectCompare (const GALGAS_ifExpressionKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @ifExpressionKind type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifExpressionKind ("ifExpressionKind",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ifExpressionKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ifExpressionKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionKind GALGAS_ifExpressionKind::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionKind result ;
  const GALGAS_ifExpressionKind * p = (const GALGAS_ifExpressionKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifExpressionKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Class for element of '@ifExpressionList' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_ifExpressionList : public cCollectionElement {
  public : GALGAS_ifExpressionList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_ifExpressionList (const GALGAS_ifExpressionKind & in_mExpression
                                                COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_ifExpressionList (const GALGAS_ifExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_ifExpressionList::cCollectionElement_ifExpressionList (const GALGAS_ifExpressionKind & in_mExpression
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_ifExpressionList::cCollectionElement_ifExpressionList (const GALGAS_ifExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_ifExpressionList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_ifExpressionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_ifExpressionList (mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_ifExpressionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_ifExpressionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ifExpressionList * operand = (cCollectionElement_ifExpressionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ifExpressionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionList::GALGAS_ifExpressionList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionList::GALGAS_ifExpressionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionList GALGAS_ifExpressionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ifExpressionList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionList GALGAS_ifExpressionList::constructor_listWithValue (const GALGAS_ifExpressionKind & inOperand0
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_ifExpressionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ifExpressionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_ifExpressionKind & in_mExpression
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_ifExpressionList * p = NULL ;
  macroMyNew (p, cCollectionElement_ifExpressionList (in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifExpressionList::addAssign_operation (const GALGAS_ifExpressionKind & inOperand0
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ifExpressionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifExpressionList::setter_append (GALGAS_ifExpressionList_2D_element inElement,
                                             C_Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ifExpressionList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifExpressionList::setter_insertAtIndex (const GALGAS_ifExpressionKind inOperand0,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ifExpressionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifExpressionList::setter_removeAtIndex (GALGAS_ifExpressionKind & outOperand0,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
      outOperand0 = p->mObject.mProperty_mExpression ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifExpressionList::setter_popFirst (GALGAS_ifExpressionKind & outOperand0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifExpressionList::setter_popLast (GALGAS_ifExpressionKind & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifExpressionList::method_first (GALGAS_ifExpressionKind & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifExpressionList::method_last (GALGAS_ifExpressionKind & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionList GALGAS_ifExpressionList::add_operation (const GALGAS_ifExpressionList & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ifExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionList GALGAS_ifExpressionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_ifExpressionList result = GALGAS_ifExpressionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionList GALGAS_ifExpressionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_ifExpressionList result = GALGAS_ifExpressionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionList GALGAS_ifExpressionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_ifExpressionList result = GALGAS_ifExpressionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifExpressionList::plusAssign_operation (const GALGAS_ifExpressionList inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionKind GALGAS_ifExpressionList::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
  GALGAS_ifExpressionKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_ifExpressionList::cEnumerator_ifExpressionList (const GALGAS_ifExpressionList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionList_2D_element cEnumerator_ifExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_ifExpressionList * p = (const cCollectionElement_ifExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionKind cEnumerator_ifExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_ifExpressionList * p = (const cCollectionElement_ifExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
  return p->mObject.mProperty_mExpression ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @ifExpressionList type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifExpressionList ("ifExpressionList",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ifExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ifExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionList GALGAS_ifExpressionList::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionList result ;
  const GALGAS_ifExpressionList * p = (const GALGAS_ifExpressionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_ifInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_then_5F_instructionList.objectCompare (p->mProperty_m_5F_then_5F_instructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_then_5F_branch.objectCompare (p->mProperty_mEndOf_5F_then_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_else_5F_instructionList.objectCompare (p->mProperty_m_5F_else_5F_instructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_if_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_if_5F_instruction) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_ifInstructionAST::objectCompare (const GALGAS_ifInstructionAST & inOperand) const {
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

GALGAS_ifInstructionAST::GALGAS_ifInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_ifInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                   GALGAS_ifExpressionList::constructor_emptyList (HERE),
                                                   GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                   GALGAS_location::constructor_nowhere (HERE),
                                                   GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                   GALGAS_location::constructor_nowhere (HERE)
                                                   COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifInstructionAST::GALGAS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                  const GALGAS_ifExpressionList & inAttribute_mExpressions,
                                                                  const GALGAS_semanticInstructionListAST & inAttribute_m_5F_then_5F_instructionList,
                                                                  const GALGAS_location & inAttribute_mEndOf_5F_then_5F_branch,
                                                                  const GALGAS_semanticInstructionListAST & inAttribute_m_5F_else_5F_instructionList,
                                                                  const GALGAS_location & inAttribute_mEndOf_5F_if_5F_instruction
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpressions.isValid () && inAttribute_m_5F_then_5F_instructionList.isValid () && inAttribute_mEndOf_5F_then_5F_branch.isValid () && inAttribute_m_5F_else_5F_instructionList.isValid () && inAttribute_mEndOf_5F_if_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifInstructionAST (inAttribute_mInstructionLocation, inAttribute_mExpressions, inAttribute_m_5F_then_5F_instructionList, inAttribute_mEndOf_5F_then_5F_branch, inAttribute_m_5F_else_5F_instructionList, inAttribute_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionList GALGAS_ifInstructionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_ifExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mProperty_mExpressions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifExpressionList cPtr_ifInstructionAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_ifInstructionAST::getter_m_5F_then_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mProperty_m_5F_then_5F_instructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_ifInstructionAST::getter_m_5F_then_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_then_5F_instructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_ifInstructionAST::getter_mEndOf_5F_then_5F_branch (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mProperty_mEndOf_5F_then_5F_branch ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_ifInstructionAST::getter_mEndOf_5F_then_5F_branch (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_then_5F_branch ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_ifInstructionAST::getter_m_5F_else_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mProperty_m_5F_else_5F_instructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_ifInstructionAST::getter_m_5F_else_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_else_5F_instructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_ifInstructionAST::getter_mEndOf_5F_if_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mProperty_mEndOf_5F_if_5F_instruction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_ifInstructionAST::getter_mEndOf_5F_if_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_if_5F_instruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                      Pointer class for @ifInstructionAST class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_ifInstructionAST::cPtr_ifInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_ifExpressionList & in_mExpressions,
                                              const GALGAS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                                              const GALGAS_location & in_mEndOf_5F_then_5F_branch,
                                              const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                                              const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpressions (in_mExpressions),
mProperty_m_5F_then_5F_instructionList (in_m_5F_then_5F_instructionList),
mProperty_mEndOf_5F_then_5F_branch (in_mEndOf_5F_then_5F_branch),
mProperty_m_5F_else_5F_instructionList (in_m_5F_else_5F_instructionList),
mProperty_mEndOf_5F_if_5F_instruction (in_mEndOf_5F_if_5F_instruction) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_ifInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

void cPtr_ifInstructionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@ifInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_then_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_then_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_else_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_if_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_ifInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifInstructionAST (mProperty_mInstructionLocation, mProperty_mExpressions, mProperty_m_5F_then_5F_instructionList, mProperty_mEndOf_5F_then_5F_branch, mProperty_m_5F_else_5F_instructionList, mProperty_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @ifInstructionAST type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifInstructionAST ("ifInstructionAST",
                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ifInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ifInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  const GALGAS_ifInstructionAST * p = (const GALGAS_ifInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_ifTestForGeneration_regular::cEnumAssociatedValues_ifTestForGeneration_regular (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_ifTestForGeneration_regular::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_ifTestForGeneration_regular::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_ifTestForGeneration_regular * ptr = dynamic_cast<const cEnumAssociatedValues_ifTestForGeneration_regular *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_ifTestForGeneration_letExp::cEnumAssociatedValues_ifTestForGeneration_letExp (const GALGAS_string & inAssociatedValue0,
                                                                                                    const GALGAS_semanticExpressionForGeneration & inAssociatedValue1,
                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue2
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_ifTestForGeneration_letExp::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_ifTestForGeneration_letExp::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_ifTestForGeneration_letExp * ptr = dynamic_cast<const cEnumAssociatedValues_ifTestForGeneration_letExp *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestForGeneration::GALGAS_ifTestForGeneration (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestForGeneration GALGAS_ifTestForGeneration::constructor_regular (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ifTestForGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_regular ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_ifTestForGeneration_regular (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestForGeneration GALGAS_ifTestForGeneration::constructor_letExp (const GALGAS_string & inAssociatedValue0,
                                                                           const GALGAS_semanticExpressionForGeneration & inAssociatedValue1,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue2
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_ifTestForGeneration result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_letExp ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_ifTestForGeneration_letExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifTestForGeneration::method_regular (GALGAS_semanticExpressionForGeneration & outAssociatedValue0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_regular) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @ifTestForGeneration regular invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_ifTestForGeneration_regular * ptr = (const cEnumAssociatedValues_ifTestForGeneration_regular *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifTestForGeneration::method_letExp (GALGAS_string & outAssociatedValue0,
                                                GALGAS_semanticExpressionForGeneration & outAssociatedValue1,
                                                GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_letExp) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @ifTestForGeneration letExp invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_ifTestForGeneration_letExp * ptr = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_ifTestForGeneration [3] = {
  "(not built)",
  "regular",
  "letExp"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_ifTestForGeneration::getter_isRegular (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_regular == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_ifTestForGeneration::getter_isLetExp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_letExp == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifTestForGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<enum @ifTestForGeneration: " << gEnumNameArrayFor_ifTestForGeneration [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_ifTestForGeneration::objectCompare (const GALGAS_ifTestForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @ifTestForGeneration type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifTestForGeneration ("ifTestForGeneration",
                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ifTestForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ifTestForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifTestForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestForGeneration GALGAS_ifTestForGeneration::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ifTestForGeneration result ;
  const GALGAS_ifTestForGeneration * p = (const GALGAS_ifTestForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifTestForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@ifTestListForGeneration' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_ifTestListForGeneration : public cCollectionElement {
  public : GALGAS_ifTestListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_ifTestListForGeneration (const GALGAS_ifTestForGeneration & in_mExpression
                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_ifTestListForGeneration (const GALGAS_ifTestListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_ifTestListForGeneration::cCollectionElement_ifTestListForGeneration (const GALGAS_ifTestForGeneration & in_mExpression
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_ifTestListForGeneration::cCollectionElement_ifTestListForGeneration (const GALGAS_ifTestListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_ifTestListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_ifTestListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_ifTestListForGeneration (mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_ifTestListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_ifTestListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ifTestListForGeneration * operand = (cCollectionElement_ifTestListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ifTestListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestListForGeneration::GALGAS_ifTestListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestListForGeneration::GALGAS_ifTestListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestListForGeneration GALGAS_ifTestListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ifTestListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestListForGeneration GALGAS_ifTestListForGeneration::constructor_listWithValue (const GALGAS_ifTestForGeneration & inOperand0
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ifTestListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_ifTestListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ifTestListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifTestListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_ifTestForGeneration & in_mExpression
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_ifTestListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_ifTestListForGeneration (in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifTestListForGeneration::addAssign_operation (const GALGAS_ifTestForGeneration & inOperand0
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ifTestListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifTestListForGeneration::setter_append (GALGAS_ifTestListForGeneration_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ifTestListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifTestListForGeneration::setter_insertAtIndex (const GALGAS_ifTestForGeneration inOperand0,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ifTestListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifTestListForGeneration::setter_removeAtIndex (GALGAS_ifTestForGeneration & outOperand0,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mExpression ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifTestListForGeneration::setter_popFirst (GALGAS_ifTestForGeneration & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifTestListForGeneration::setter_popLast (GALGAS_ifTestForGeneration & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifTestListForGeneration::method_first (GALGAS_ifTestForGeneration & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifTestListForGeneration::method_last (GALGAS_ifTestForGeneration & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestListForGeneration GALGAS_ifTestListForGeneration::add_operation (const GALGAS_ifTestListForGeneration & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ifTestListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestListForGeneration GALGAS_ifTestListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_ifTestListForGeneration result = GALGAS_ifTestListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestListForGeneration GALGAS_ifTestListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_ifTestListForGeneration result = GALGAS_ifTestListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestListForGeneration GALGAS_ifTestListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_ifTestListForGeneration result = GALGAS_ifTestListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ifTestListForGeneration::plusAssign_operation (const GALGAS_ifTestListForGeneration inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestForGeneration GALGAS_ifTestListForGeneration::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  GALGAS_ifTestForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_ifTestListForGeneration::cEnumerator_ifTestListForGeneration (const GALGAS_ifTestListForGeneration & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestListForGeneration_2D_element cEnumerator_ifTestListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_ifTestListForGeneration * p = (const cCollectionElement_ifTestListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestForGeneration cEnumerator_ifTestListForGeneration::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_ifTestListForGeneration * p = (const cCollectionElement_ifTestListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
  return p->mObject.mProperty_mExpression ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @ifTestListForGeneration type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifTestListForGeneration ("ifTestListForGeneration",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ifTestListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ifTestListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifTestListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestListForGeneration GALGAS_ifTestListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifTestListForGeneration result ;
  const GALGAS_ifTestListForGeneration * p = (const GALGAS_ifTestListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifTestListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_ifInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifInstructionForGeneration * p = (const cPtr_ifInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_then_5F_instructionList.objectCompare (p->mProperty_m_5F_then_5F_instructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_else_5F_instructionList.objectCompare (p->mProperty_m_5F_else_5F_instructionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_ifInstructionForGeneration::objectCompare (const GALGAS_ifInstructionForGeneration & inOperand) const {
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

GALGAS_ifInstructionForGeneration::GALGAS_ifInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifInstructionForGeneration GALGAS_ifInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_ifInstructionForGeneration::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                             GALGAS_ifTestListForGeneration::constructor_emptyList (HERE),
                                                             GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE),
                                                             GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                             COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifInstructionForGeneration::GALGAS_ifInstructionForGeneration (const cPtr_ifInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifInstructionForGeneration GALGAS_ifInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                      const GALGAS_ifTestListForGeneration & inAttribute_mExpressions,
                                                                                      const GALGAS_semanticInstructionListForGeneration & inAttribute_m_5F_then_5F_instructionList,
                                                                                      const GALGAS_semanticInstructionListForGeneration & inAttribute_m_5F_else_5F_instructionList
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpressions.isValid () && inAttribute_m_5F_then_5F_instructionList.isValid () && inAttribute_m_5F_else_5F_instructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mExpressions, inAttribute_m_5F_then_5F_instructionList, inAttribute_m_5F_else_5F_instructionList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_ifInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionForGeneration * p = (const cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_ifInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestListForGeneration GALGAS_ifInstructionForGeneration::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_ifTestListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionForGeneration * p = (const cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    result = p->mProperty_mExpressions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifTestListForGeneration cPtr_ifInstructionForGeneration::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration GALGAS_ifInstructionForGeneration::getter_m_5F_then_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionForGeneration * p = (const cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    result = p->mProperty_m_5F_then_5F_instructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration cPtr_ifInstructionForGeneration::getter_m_5F_then_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_then_5F_instructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration GALGAS_ifInstructionForGeneration::getter_m_5F_else_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionForGeneration * p = (const cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    result = p->mProperty_m_5F_else_5F_instructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration cPtr_ifInstructionForGeneration::getter_m_5F_else_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_else_5F_instructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @ifInstructionForGeneration class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_ifInstructionForGeneration::cPtr_ifInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_ifTestListForGeneration & in_mExpressions,
                                                                  const GALGAS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                                                  const GALGAS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mExpressions (in_mExpressions),
mProperty_m_5F_then_5F_instructionList (in_m_5F_then_5F_instructionList),
mProperty_m_5F_else_5F_instructionList (in_m_5F_else_5F_instructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_ifInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration ;
}

void cPtr_ifInstructionForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@ifInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_then_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_else_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_ifInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mExpressions, mProperty_m_5F_then_5F_instructionList, mProperty_m_5F_else_5F_instructionList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @ifInstructionForGeneration type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifInstructionForGeneration ("ifInstructionForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ifInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ifInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ifInstructionForGeneration GALGAS_ifInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionForGeneration result ;
  const GALGAS_ifInstructionForGeneration * p = (const GALGAS_ifInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Class for element of '@logListAST' list                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_logListAST : public cCollectionElement {
  public : GALGAS_logListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_logListAST (const GALGAS_lstring & in_mLogMessage,
                                          const GALGAS_semanticExpressionAST & in_mLogExpression
                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_logListAST (const GALGAS_logListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_logListAST::cCollectionElement_logListAST (const GALGAS_lstring & in_mLogMessage,
                                                              const GALGAS_semanticExpressionAST & in_mLogExpression
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLogMessage, in_mLogExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_logListAST::cCollectionElement_logListAST (const GALGAS_logListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLogMessage, inElement.mProperty_mLogExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_logListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_logListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_logListAST (mObject.mProperty_mLogMessage, mObject.mProperty_mLogExpression COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_logListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLogMessage" ":" ;
  mObject.mProperty_mLogMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLogExpression" ":" ;
  mObject.mProperty_mLogExpression.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_logListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_logListAST * operand = (cCollectionElement_logListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_logListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logListAST::GALGAS_logListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logListAST::GALGAS_logListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logListAST GALGAS_logListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_logListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logListAST GALGAS_logListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_semanticExpressionAST & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_logListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_logListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_logListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_logListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_lstring & in_mLogMessage,
                                                   const GALGAS_semanticExpressionAST & in_mLogExpression
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_logListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_logListAST (in_mLogMessage,
                                                in_mLogExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_logListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                             const GALGAS_semanticExpressionAST & inOperand1
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_logListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_logListAST::setter_append (GALGAS_logListAST_2D_element inElement,
                                       C_Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_logListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_logListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                              const GALGAS_semanticExpressionAST inOperand1,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_logListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_logListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                              GALGAS_semanticExpressionAST & outOperand1,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_logListAST) ;
      outOperand0 = p->mObject.mProperty_mLogMessage ;
      outOperand1 = p->mObject.mProperty_mLogExpression ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_logListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                         GALGAS_semanticExpressionAST & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_logListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                        GALGAS_semanticExpressionAST & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_logListAST::method_first (GALGAS_lstring & outOperand0,
                                      GALGAS_semanticExpressionAST & outOperand1,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_logListAST::method_last (GALGAS_lstring & outOperand0,
                                     GALGAS_semanticExpressionAST & outOperand1,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logListAST GALGAS_logListAST::add_operation (const GALGAS_logListAST & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_logListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logListAST GALGAS_logListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_logListAST result = GALGAS_logListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logListAST GALGAS_logListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_logListAST result = GALGAS_logListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logListAST GALGAS_logListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_logListAST result = GALGAS_logListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_logListAST::plusAssign_operation (const GALGAS_logListAST inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_logListAST::getter_mLogMessageAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    result = p->mObject.mProperty_mLogMessage ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_logListAST::getter_mLogExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  GALGAS_semanticExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    result = p->mObject.mProperty_mLogExpression ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_logListAST::cEnumerator_logListAST (const GALGAS_logListAST & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logListAST_2D_element cEnumerator_logListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_logListAST::current_mLogMessage (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject.mProperty_mLogMessage ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cEnumerator_logListAST::current_mLogExpression (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject.mProperty_mLogExpression ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @logListAST type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logListAST ("logListAST",
                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_logListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_logListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logListAST GALGAS_logListAST::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_logListAST result ;
  const GALGAS_logListAST * p = (const GALGAS_logListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_logListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_logInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_logInstructionAST * p = (const cPtr_logInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_logInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLogList.objectCompare (p->mProperty_mLogList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_logInstructionAST::objectCompare (const GALGAS_logInstructionAST & inOperand) const {
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

GALGAS_logInstructionAST::GALGAS_logInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logInstructionAST GALGAS_logInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_logInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_logListAST::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logInstructionAST::GALGAS_logInstructionAST (const cPtr_logInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logInstructionAST GALGAS_logInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_logListAST & inAttribute_mLogList
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_logInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLogList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_logInstructionAST (inAttribute_mInstructionLocation, inAttribute_mLogList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logListAST GALGAS_logInstructionAST::getter_mLogList (UNUSED_LOCATION_ARGS) const {
  GALGAS_logListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_logInstructionAST * p = (const cPtr_logInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionAST) ;
    result = p->mProperty_mLogList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logListAST cPtr_logInstructionAST::getter_mLogList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLogList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @logInstructionAST class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_logInstructionAST::cPtr_logInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_logListAST & in_mLogList
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mLogList (in_mLogList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_logInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionAST ;
}

void cPtr_logInstructionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@logInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLogList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_logInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_logInstructionAST (mProperty_mInstructionLocation, mProperty_mLogList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @logInstructionAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logInstructionAST ("logInstructionAST",
                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_logInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_logInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logInstructionAST GALGAS_logInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_logInstructionAST result ;
  const GALGAS_logInstructionAST * p = (const GALGAS_logInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_logInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_loopInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loopInstructionAST * p = (const cPtr_loopInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loopInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariantExpression.objectCompare (p->mProperty_mVariantExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfVariantExpression.objectCompare (p->mProperty_mEndOfVariantExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFirstInstructions.objectCompare (p->mProperty_mFirstInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfFirstInstructions.objectCompare (p->mProperty_mEndOfFirstInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLoopExpression.objectCompare (p->mProperty_mLoopExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfLoopExpression.objectCompare (p->mProperty_mEndOfLoopExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSecondInstructions.objectCompare (p->mProperty_mSecondInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSecondInstructions.objectCompare (p->mProperty_mEndOfSecondInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfLoopInstruction.objectCompare (p->mProperty_mEndOfLoopInstruction) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_loopInstructionAST::objectCompare (const GALGAS_loopInstructionAST & inOperand) const {
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

GALGAS_loopInstructionAST::GALGAS_loopInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_loopInstructionAST::GALGAS_loopInstructionAST (const cPtr_loopInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_loopInstructionAST GALGAS_loopInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                      const GALGAS_semanticExpressionAST & inAttribute_mVariantExpression,
                                                                      const GALGAS_location & inAttribute_mEndOfVariantExpression,
                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mFirstInstructions,
                                                                      const GALGAS_location & inAttribute_mEndOfFirstInstructions,
                                                                      const GALGAS_semanticExpressionAST & inAttribute_mLoopExpression,
                                                                      const GALGAS_location & inAttribute_mEndOfLoopExpression,
                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mSecondInstructions,
                                                                      const GALGAS_location & inAttribute_mEndOfSecondInstructions,
                                                                      const GALGAS_location & inAttribute_mEndOfLoopInstruction
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVariantExpression.isValid () && inAttribute_mEndOfVariantExpression.isValid () && inAttribute_mFirstInstructions.isValid () && inAttribute_mEndOfFirstInstructions.isValid () && inAttribute_mLoopExpression.isValid () && inAttribute_mEndOfLoopExpression.isValid () && inAttribute_mSecondInstructions.isValid () && inAttribute_mEndOfSecondInstructions.isValid () && inAttribute_mEndOfLoopInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loopInstructionAST (inAttribute_mInstructionLocation, inAttribute_mVariantExpression, inAttribute_mEndOfVariantExpression, inAttribute_mFirstInstructions, inAttribute_mEndOfFirstInstructions, inAttribute_mLoopExpression, inAttribute_mEndOfLoopExpression, inAttribute_mSecondInstructions, inAttribute_mEndOfSecondInstructions, inAttribute_mEndOfLoopInstruction COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_loopInstructionAST::getter_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionAST * p = (const cPtr_loopInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionAST) ;
    result = p->mProperty_mVariantExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_loopInstructionAST::getter_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariantExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_loopInstructionAST::getter_mEndOfVariantExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionAST * p = (const cPtr_loopInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionAST) ;
    result = p->mProperty_mEndOfVariantExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_loopInstructionAST::getter_mEndOfVariantExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfVariantExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_loopInstructionAST::getter_mFirstInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionAST * p = (const cPtr_loopInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionAST) ;
    result = p->mProperty_mFirstInstructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_loopInstructionAST::getter_mFirstInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFirstInstructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_loopInstructionAST::getter_mEndOfFirstInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionAST * p = (const cPtr_loopInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionAST) ;
    result = p->mProperty_mEndOfFirstInstructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_loopInstructionAST::getter_mEndOfFirstInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfFirstInstructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST GALGAS_loopInstructionAST::getter_mLoopExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionAST * p = (const cPtr_loopInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionAST) ;
    result = p->mProperty_mLoopExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionAST cPtr_loopInstructionAST::getter_mLoopExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLoopExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_loopInstructionAST::getter_mEndOfLoopExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionAST * p = (const cPtr_loopInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionAST) ;
    result = p->mProperty_mEndOfLoopExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_loopInstructionAST::getter_mEndOfLoopExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfLoopExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_loopInstructionAST::getter_mSecondInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionAST * p = (const cPtr_loopInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionAST) ;
    result = p->mProperty_mSecondInstructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_loopInstructionAST::getter_mSecondInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondInstructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_loopInstructionAST::getter_mEndOfSecondInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionAST * p = (const cPtr_loopInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionAST) ;
    result = p->mProperty_mEndOfSecondInstructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_loopInstructionAST::getter_mEndOfSecondInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfSecondInstructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_loopInstructionAST::getter_mEndOfLoopInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionAST * p = (const cPtr_loopInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionAST) ;
    result = p->mProperty_mEndOfLoopInstruction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_loopInstructionAST::getter_mEndOfLoopInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfLoopInstruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @loopInstructionAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_loopInstructionAST::cPtr_loopInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_semanticExpressionAST & in_mVariantExpression,
                                                  const GALGAS_location & in_mEndOfVariantExpression,
                                                  const GALGAS_semanticInstructionListAST & in_mFirstInstructions,
                                                  const GALGAS_location & in_mEndOfFirstInstructions,
                                                  const GALGAS_semanticExpressionAST & in_mLoopExpression,
                                                  const GALGAS_location & in_mEndOfLoopExpression,
                                                  const GALGAS_semanticInstructionListAST & in_mSecondInstructions,
                                                  const GALGAS_location & in_mEndOfSecondInstructions,
                                                  const GALGAS_location & in_mEndOfLoopInstruction
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVariantExpression (in_mVariantExpression),
mProperty_mEndOfVariantExpression (in_mEndOfVariantExpression),
mProperty_mFirstInstructions (in_mFirstInstructions),
mProperty_mEndOfFirstInstructions (in_mEndOfFirstInstructions),
mProperty_mLoopExpression (in_mLoopExpression),
mProperty_mEndOfLoopExpression (in_mEndOfLoopExpression),
mProperty_mSecondInstructions (in_mSecondInstructions),
mProperty_mEndOfSecondInstructions (in_mEndOfSecondInstructions),
mProperty_mEndOfLoopInstruction (in_mEndOfLoopInstruction) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_loopInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionAST ;
}

void cPtr_loopInstructionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@loopInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfVariantExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfFirstInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfLoopExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfSecondInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfLoopInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_loopInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loopInstructionAST (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mEndOfVariantExpression, mProperty_mFirstInstructions, mProperty_mEndOfFirstInstructions, mProperty_mLoopExpression, mProperty_mEndOfLoopExpression, mProperty_mSecondInstructions, mProperty_mEndOfSecondInstructions, mProperty_mEndOfLoopInstruction COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @loopInstructionAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loopInstructionAST ("loopInstructionAST",
                                           & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_loopInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_loopInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loopInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_loopInstructionAST GALGAS_loopInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionAST result ;
  const GALGAS_loopInstructionAST * p = (const GALGAS_loopInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loopInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@matchEntryListAST' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_matchEntryListAST : public cCollectionElement {
  public : GALGAS_matchEntryListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_matchEntryListAST (const GALGAS_bool & in_mIsType,
                                                 const GALGAS_lstring & in_mTypeNameOrEnumerationConstantName,
                                                 const GALGAS_lstring & in_mLocalConstantName
                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_matchEntryListAST (const GALGAS_matchEntryListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_matchEntryListAST::cCollectionElement_matchEntryListAST (const GALGAS_bool & in_mIsType,
                                                                            const GALGAS_lstring & in_mTypeNameOrEnumerationConstantName,
                                                                            const GALGAS_lstring & in_mLocalConstantName
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mIsType, in_mTypeNameOrEnumerationConstantName, in_mLocalConstantName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_matchEntryListAST::cCollectionElement_matchEntryListAST (const GALGAS_matchEntryListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mIsType, inElement.mProperty_mTypeNameOrEnumerationConstantName, inElement.mProperty_mLocalConstantName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_matchEntryListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_matchEntryListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_matchEntryListAST (mObject.mProperty_mIsType, mObject.mProperty_mTypeNameOrEnumerationConstantName, mObject.mProperty_mLocalConstantName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_matchEntryListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsType" ":" ;
  mObject.mProperty_mIsType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeNameOrEnumerationConstantName" ":" ;
  mObject.mProperty_mTypeNameOrEnumerationConstantName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLocalConstantName" ":" ;
  mObject.mProperty_mLocalConstantName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_matchEntryListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_matchEntryListAST * operand = (cCollectionElement_matchEntryListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_matchEntryListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchEntryListAST::GALGAS_matchEntryListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchEntryListAST::GALGAS_matchEntryListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_matchEntryListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                              const GALGAS_lstring & inOperand1,
                                                                              const GALGAS_lstring & inOperand2
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_matchEntryListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_matchEntryListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_matchEntryListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchEntryListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_bool & in_mIsType,
                                                          const GALGAS_lstring & in_mTypeNameOrEnumerationConstantName,
                                                          const GALGAS_lstring & in_mLocalConstantName
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_matchEntryListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_matchEntryListAST (in_mIsType,
                                                       in_mTypeNameOrEnumerationConstantName,
                                                       in_mLocalConstantName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchEntryListAST::addAssign_operation (const GALGAS_bool & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_lstring & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchEntryListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchEntryListAST::setter_append (GALGAS_matchEntryListAST_2D_element inElement,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchEntryListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchEntryListAST::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     const GALGAS_lstring inOperand2,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchEntryListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchEntryListAST::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_matchEntryListAST * p = (cCollectionElement_matchEntryListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
      outOperand0 = p->mObject.mProperty_mIsType ;
      outOperand1 = p->mObject.mProperty_mTypeNameOrEnumerationConstantName ;
      outOperand2 = p->mObject.mProperty_mLocalConstantName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchEntryListAST::setter_popFirst (GALGAS_bool & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_lstring & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchEntryListAST * p = (cCollectionElement_matchEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
    outOperand0 = p->mObject.mProperty_mIsType ;
    outOperand1 = p->mObject.mProperty_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mProperty_mLocalConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchEntryListAST::setter_popLast (GALGAS_bool & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_lstring & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchEntryListAST * p = (cCollectionElement_matchEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
    outOperand0 = p->mObject.mProperty_mIsType ;
    outOperand1 = p->mObject.mProperty_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mProperty_mLocalConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchEntryListAST::method_first (GALGAS_bool & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             GALGAS_lstring & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchEntryListAST * p = (cCollectionElement_matchEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
    outOperand0 = p->mObject.mProperty_mIsType ;
    outOperand1 = p->mObject.mProperty_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mProperty_mLocalConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchEntryListAST::method_last (GALGAS_bool & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            GALGAS_lstring & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchEntryListAST * p = (cCollectionElement_matchEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
    outOperand0 = p->mObject.mProperty_mIsType ;
    outOperand1 = p->mObject.mProperty_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mProperty_mLocalConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::add_operation (const GALGAS_matchEntryListAST & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_matchEntryListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_matchEntryListAST result = GALGAS_matchEntryListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_matchEntryListAST result = GALGAS_matchEntryListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_matchEntryListAST result = GALGAS_matchEntryListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchEntryListAST::plusAssign_operation (const GALGAS_matchEntryListAST inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_matchEntryListAST::cEnumerator_matchEntryListAST (const GALGAS_matchEntryListAST & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchEntryListAST_2D_element cEnumerator_matchEntryListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_matchEntryListAST * p = (const cCollectionElement_matchEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_matchEntryListAST::current_mIsType (LOCATION_ARGS) const {
  const cCollectionElement_matchEntryListAST * p = (const cCollectionElement_matchEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
  return p->mObject.mProperty_mIsType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_matchEntryListAST::current_mTypeNameOrEnumerationConstantName (LOCATION_ARGS) const {
  const cCollectionElement_matchEntryListAST * p = (const cCollectionElement_matchEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
  return p->mObject.mProperty_mTypeNameOrEnumerationConstantName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_matchEntryListAST::current_mLocalConstantName (LOCATION_ARGS) const {
  const cCollectionElement_matchEntryListAST * p = (const cCollectionElement_matchEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
  return p->mObject.mProperty_mLocalConstantName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @matchEntryListAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchEntryListAST ("matchEntryListAST",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_matchEntryListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchEntryListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_matchEntryListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchEntryListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_matchEntryListAST result ;
  const GALGAS_matchEntryListAST * p = (const GALGAS_matchEntryListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchEntryListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchEntryListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@matchInstructionBranchListAST' list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_matchInstructionBranchListAST : public cCollectionElement {
  public : GALGAS_matchInstructionBranchListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_matchInstructionBranchListAST (const GALGAS_matchEntryListAST & in_mMatchEntryList,
                                                             const GALGAS_location & in_mEndOfMatchEntryList,
                                                             const GALGAS_semanticInstructionListAST & in_mMatchBranchInstructionList,
                                                             const GALGAS_location & in_mEndOf_5F_instructionList
                                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_matchInstructionBranchListAST (const GALGAS_matchInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_matchInstructionBranchListAST::cCollectionElement_matchInstructionBranchListAST (const GALGAS_matchEntryListAST & in_mMatchEntryList,
                                                                                                    const GALGAS_location & in_mEndOfMatchEntryList,
                                                                                                    const GALGAS_semanticInstructionListAST & in_mMatchBranchInstructionList,
                                                                                                    const GALGAS_location & in_mEndOf_5F_instructionList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMatchEntryList, in_mEndOfMatchEntryList, in_mMatchBranchInstructionList, in_mEndOf_5F_instructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_matchInstructionBranchListAST::cCollectionElement_matchInstructionBranchListAST (const GALGAS_matchInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMatchEntryList, inElement.mProperty_mEndOfMatchEntryList, inElement.mProperty_mMatchBranchInstructionList, inElement.mProperty_mEndOf_5F_instructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_matchInstructionBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_matchInstructionBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_matchInstructionBranchListAST (mObject.mProperty_mMatchEntryList, mObject.mProperty_mEndOfMatchEntryList, mObject.mProperty_mMatchBranchInstructionList, mObject.mProperty_mEndOf_5F_instructionList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_matchInstructionBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMatchEntryList" ":" ;
  mObject.mProperty_mMatchEntryList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfMatchEntryList" ":" ;
  mObject.mProperty_mEndOfMatchEntryList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMatchBranchInstructionList" ":" ;
  mObject.mProperty_mMatchBranchInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOf_instructionList" ":" ;
  mObject.mProperty_mEndOf_5F_instructionList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_matchInstructionBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_matchInstructionBranchListAST * operand = (cCollectionElement_matchInstructionBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_matchInstructionBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionBranchListAST::GALGAS_matchInstructionBranchListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionBranchListAST::GALGAS_matchInstructionBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_matchInstructionBranchListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::constructor_listWithValue (const GALGAS_matchEntryListAST & inOperand0,
                                                                                                      const GALGAS_location & inOperand1,
                                                                                                      const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                      const GALGAS_location & inOperand3
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_matchInstructionBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_matchInstructionBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchInstructionBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_matchEntryListAST & in_mMatchEntryList,
                                                                      const GALGAS_location & in_mEndOfMatchEntryList,
                                                                      const GALGAS_semanticInstructionListAST & in_mMatchBranchInstructionList,
                                                                      const GALGAS_location & in_mEndOf_5F_instructionList
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_matchInstructionBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_matchInstructionBranchListAST (in_mMatchEntryList,
                                                                   in_mEndOfMatchEntryList,
                                                                   in_mMatchBranchInstructionList,
                                                                   in_mEndOf_5F_instructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchInstructionBranchListAST::addAssign_operation (const GALGAS_matchEntryListAST & inOperand0,
                                                                const GALGAS_location & inOperand1,
                                                                const GALGAS_semanticInstructionListAST & inOperand2,
                                                                const GALGAS_location & inOperand3
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchInstructionBranchListAST::setter_append (GALGAS_matchInstructionBranchListAST_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchInstructionBranchListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchInstructionBranchListAST::setter_insertAtIndex (const GALGAS_matchEntryListAST inOperand0,
                                                                 const GALGAS_location inOperand1,
                                                                 const GALGAS_semanticInstructionListAST inOperand2,
                                                                 const GALGAS_location inOperand3,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchInstructionBranchListAST::setter_removeAtIndex (GALGAS_matchEntryListAST & outOperand0,
                                                                 GALGAS_location & outOperand1,
                                                                 GALGAS_semanticInstructionListAST & outOperand2,
                                                                 GALGAS_location & outOperand3,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_matchInstructionBranchListAST * p = (cCollectionElement_matchInstructionBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
      outOperand0 = p->mObject.mProperty_mMatchEntryList ;
      outOperand1 = p->mObject.mProperty_mEndOfMatchEntryList ;
      outOperand2 = p->mObject.mProperty_mMatchBranchInstructionList ;
      outOperand3 = p->mObject.mProperty_mEndOf_5F_instructionList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchInstructionBranchListAST::setter_popFirst (GALGAS_matchEntryListAST & outOperand0,
                                                            GALGAS_location & outOperand1,
                                                            GALGAS_semanticInstructionListAST & outOperand2,
                                                            GALGAS_location & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListAST * p = (cCollectionElement_matchInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mMatchEntryList ;
    outOperand1 = p->mObject.mProperty_mEndOfMatchEntryList ;
    outOperand2 = p->mObject.mProperty_mMatchBranchInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOf_5F_instructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchInstructionBranchListAST::setter_popLast (GALGAS_matchEntryListAST & outOperand0,
                                                           GALGAS_location & outOperand1,
                                                           GALGAS_semanticInstructionListAST & outOperand2,
                                                           GALGAS_location & outOperand3,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListAST * p = (cCollectionElement_matchInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mMatchEntryList ;
    outOperand1 = p->mObject.mProperty_mEndOfMatchEntryList ;
    outOperand2 = p->mObject.mProperty_mMatchBranchInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOf_5F_instructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchInstructionBranchListAST::method_first (GALGAS_matchEntryListAST & outOperand0,
                                                         GALGAS_location & outOperand1,
                                                         GALGAS_semanticInstructionListAST & outOperand2,
                                                         GALGAS_location & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListAST * p = (cCollectionElement_matchInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mMatchEntryList ;
    outOperand1 = p->mObject.mProperty_mEndOfMatchEntryList ;
    outOperand2 = p->mObject.mProperty_mMatchBranchInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOf_5F_instructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchInstructionBranchListAST::method_last (GALGAS_matchEntryListAST & outOperand0,
                                                        GALGAS_location & outOperand1,
                                                        GALGAS_semanticInstructionListAST & outOperand2,
                                                        GALGAS_location & outOperand3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListAST * p = (cCollectionElement_matchInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mMatchEntryList ;
    outOperand1 = p->mObject.mProperty_mEndOfMatchEntryList ;
    outOperand2 = p->mObject.mProperty_mMatchBranchInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOf_5F_instructionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::add_operation (const GALGAS_matchInstructionBranchListAST & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListAST result = GALGAS_matchInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListAST result = GALGAS_matchInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListAST result = GALGAS_matchInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchInstructionBranchListAST::plusAssign_operation (const GALGAS_matchInstructionBranchListAST inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_matchInstructionBranchListAST::cEnumerator_matchInstructionBranchListAST (const GALGAS_matchInstructionBranchListAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionBranchListAST_2D_element cEnumerator_matchInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListAST * p = (const cCollectionElement_matchInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchEntryListAST cEnumerator_matchInstructionBranchListAST::current_mMatchEntryList (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListAST * p = (const cCollectionElement_matchInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
  return p->mObject.mProperty_mMatchEntryList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_matchInstructionBranchListAST::current_mEndOfMatchEntryList (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListAST * p = (const cCollectionElement_matchInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
  return p->mObject.mProperty_mEndOfMatchEntryList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cEnumerator_matchInstructionBranchListAST::current_mMatchBranchInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListAST * p = (const cCollectionElement_matchInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
  return p->mObject.mProperty_mMatchBranchInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_matchInstructionBranchListAST::current_mEndOf_5F_instructionList (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListAST * p = (const cCollectionElement_matchInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
  return p->mObject.mProperty_mEndOf_5F_instructionList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @matchInstructionBranchListAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchInstructionBranchListAST ("matchInstructionBranchListAST",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_matchInstructionBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchInstructionBranchListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_matchInstructionBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchInstructionBranchListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListAST result ;
  const GALGAS_matchInstructionBranchListAST * p = (const GALGAS_matchInstructionBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchInstructionBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchInstructionBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_matchInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_matchInstructionAST * p = (const cPtr_matchInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_matchInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMatchedExpressionList.objectCompare (p->mProperty_mMatchedExpressionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMatchInstructionBranchList.objectCompare (p->mProperty_mMatchInstructionBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_match_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_match_5F_instruction) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_matchInstructionAST::objectCompare (const GALGAS_matchInstructionAST & inOperand) const {
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

GALGAS_matchInstructionAST::GALGAS_matchInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionAST GALGAS_matchInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_matchInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                      GALGAS_semanticExpressionListAST::constructor_emptyList (HERE),
                                                      GALGAS_matchInstructionBranchListAST::constructor_emptyList (HERE),
                                                      GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                      GALGAS_location::constructor_nowhere (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionAST::GALGAS_matchInstructionAST (const cPtr_matchInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_matchInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionAST GALGAS_matchInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                        const GALGAS_semanticExpressionListAST & inAttribute_mMatchedExpressionList,
                                                                        const GALGAS_matchInstructionBranchListAST & inAttribute_mMatchInstructionBranchList,
                                                                        const GALGAS_semanticInstructionListAST & inAttribute_mElseInstructionList,
                                                                        const GALGAS_location & inAttribute_mEndOf_5F_match_5F_instruction
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mMatchedExpressionList.isValid () && inAttribute_mMatchInstructionBranchList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOf_5F_match_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_matchInstructionAST (inAttribute_mInstructionLocation, inAttribute_mMatchedExpressionList, inAttribute_mMatchInstructionBranchList, inAttribute_mElseInstructionList, inAttribute_mEndOf_5F_match_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionListAST GALGAS_matchInstructionAST::getter_mMatchedExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_matchInstructionAST * p = (const cPtr_matchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_matchInstructionAST) ;
    result = p->mProperty_mMatchedExpressionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionListAST cPtr_matchInstructionAST::getter_mMatchedExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMatchedExpressionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionAST::getter_mMatchInstructionBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_matchInstructionAST * p = (const cPtr_matchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_matchInstructionAST) ;
    result = p->mProperty_mMatchInstructionBranchList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionBranchListAST cPtr_matchInstructionAST::getter_mMatchInstructionBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMatchInstructionBranchList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST GALGAS_matchInstructionAST::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_matchInstructionAST * p = (const cPtr_matchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_matchInstructionAST) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListAST cPtr_matchInstructionAST::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_matchInstructionAST::getter_mEndOf_5F_match_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_matchInstructionAST * p = (const cPtr_matchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_matchInstructionAST) ;
    result = p->mProperty_mEndOf_5F_match_5F_instruction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_matchInstructionAST::getter_mEndOf_5F_match_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_match_5F_instruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @matchInstructionAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_matchInstructionAST::cPtr_matchInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_semanticExpressionListAST & in_mMatchedExpressionList,
                                                    const GALGAS_matchInstructionBranchListAST & in_mMatchInstructionBranchList,
                                                    const GALGAS_semanticInstructionListAST & in_mElseInstructionList,
                                                    const GALGAS_location & in_mEndOf_5F_match_5F_instruction
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mMatchedExpressionList (in_mMatchedExpressionList),
mProperty_mMatchInstructionBranchList (in_mMatchInstructionBranchList),
mProperty_mElseInstructionList (in_mElseInstructionList),
mProperty_mEndOf_5F_match_5F_instruction (in_mEndOf_5F_match_5F_instruction) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_matchInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchInstructionAST ;
}

void cPtr_matchInstructionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@matchInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMatchedExpressionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMatchInstructionBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_match_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_matchInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_matchInstructionAST (mProperty_mInstructionLocation, mProperty_mMatchedExpressionList, mProperty_mMatchInstructionBranchList, mProperty_mElseInstructionList, mProperty_mEndOf_5F_match_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @matchInstructionAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchInstructionAST ("matchInstructionAST",
                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_matchInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_matchInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchInstructionAST GALGAS_matchInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionAST result ;
  const GALGAS_matchInstructionAST * p = (const GALGAS_matchInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@matchListForGeneration' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_matchListForGeneration : public cCollectionElement {
  public : GALGAS_matchListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_matchListForGeneration (const GALGAS_bool & in_mIsType,
                                                      const GALGAS_string & in_mTypeNameOrEnumerationConstantName,
                                                      const GALGAS_string & in_mLocalConstantName
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_matchListForGeneration (const GALGAS_matchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_matchListForGeneration::cCollectionElement_matchListForGeneration (const GALGAS_bool & in_mIsType,
                                                                                      const GALGAS_string & in_mTypeNameOrEnumerationConstantName,
                                                                                      const GALGAS_string & in_mLocalConstantName
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mIsType, in_mTypeNameOrEnumerationConstantName, in_mLocalConstantName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_matchListForGeneration::cCollectionElement_matchListForGeneration (const GALGAS_matchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mIsType, inElement.mProperty_mTypeNameOrEnumerationConstantName, inElement.mProperty_mLocalConstantName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_matchListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_matchListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_matchListForGeneration (mObject.mProperty_mIsType, mObject.mProperty_mTypeNameOrEnumerationConstantName, mObject.mProperty_mLocalConstantName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_matchListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsType" ":" ;
  mObject.mProperty_mIsType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeNameOrEnumerationConstantName" ":" ;
  mObject.mProperty_mTypeNameOrEnumerationConstantName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLocalConstantName" ":" ;
  mObject.mProperty_mLocalConstantName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_matchListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_matchListForGeneration * operand = (cCollectionElement_matchListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_matchListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchListForGeneration::GALGAS_matchListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchListForGeneration::GALGAS_matchListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchListForGeneration GALGAS_matchListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_matchListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchListForGeneration GALGAS_matchListForGeneration::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                                        const GALGAS_string & inOperand1,
                                                                                        const GALGAS_string & inOperand2
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_matchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_matchListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_matchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_bool & in_mIsType,
                                                               const GALGAS_string & in_mTypeNameOrEnumerationConstantName,
                                                               const GALGAS_string & in_mLocalConstantName
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_matchListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_matchListForGeneration (in_mIsType,
                                                            in_mTypeNameOrEnumerationConstantName,
                                                            in_mLocalConstantName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchListForGeneration::addAssign_operation (const GALGAS_bool & inOperand0,
                                                         const GALGAS_string & inOperand1,
                                                         const GALGAS_string & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchListForGeneration::setter_append (GALGAS_matchListForGeneration_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchListForGeneration::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                          const GALGAS_string inOperand1,
                                                          const GALGAS_string inOperand2,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchListForGeneration::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_string & outOperand2,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mIsType ;
      outOperand1 = p->mObject.mProperty_mTypeNameOrEnumerationConstantName ;
      outOperand2 = p->mObject.mProperty_mLocalConstantName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchListForGeneration::setter_popFirst (GALGAS_bool & outOperand0,
                                                     GALGAS_string & outOperand1,
                                                     GALGAS_string & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mIsType ;
    outOperand1 = p->mObject.mProperty_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mProperty_mLocalConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchListForGeneration::setter_popLast (GALGAS_bool & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_string & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mIsType ;
    outOperand1 = p->mObject.mProperty_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mProperty_mLocalConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchListForGeneration::method_first (GALGAS_bool & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mIsType ;
    outOperand1 = p->mObject.mProperty_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mProperty_mLocalConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchListForGeneration::method_last (GALGAS_bool & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mIsType ;
    outOperand1 = p->mObject.mProperty_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mProperty_mLocalConstantName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchListForGeneration GALGAS_matchListForGeneration::add_operation (const GALGAS_matchListForGeneration & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_matchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchListForGeneration GALGAS_matchListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_matchListForGeneration result = GALGAS_matchListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchListForGeneration GALGAS_matchListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_matchListForGeneration result = GALGAS_matchListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchListForGeneration GALGAS_matchListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_matchListForGeneration result = GALGAS_matchListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_matchListForGeneration::plusAssign_operation (const GALGAS_matchListForGeneration inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_matchListForGeneration::getter_mIsTypeAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
    result = p->mObject.mProperty_mIsType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_matchListForGeneration::getter_mTypeNameOrEnumerationConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
    result = p->mObject.mProperty_mTypeNameOrEnumerationConstantName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_matchListForGeneration::getter_mLocalConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_matchListForGeneration * p = (cCollectionElement_matchListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
    result = p->mObject.mProperty_mLocalConstantName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_matchListForGeneration::cEnumerator_matchListForGeneration (const GALGAS_matchListForGeneration & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchListForGeneration_2D_element cEnumerator_matchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_matchListForGeneration * p = (const cCollectionElement_matchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_matchListForGeneration::current_mIsType (LOCATION_ARGS) const {
  const cCollectionElement_matchListForGeneration * p = (const cCollectionElement_matchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
  return p->mObject.mProperty_mIsType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_matchListForGeneration::current_mTypeNameOrEnumerationConstantName (LOCATION_ARGS) const {
  const cCollectionElement_matchListForGeneration * p = (const cCollectionElement_matchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
  return p->mObject.mProperty_mTypeNameOrEnumerationConstantName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_matchListForGeneration::current_mLocalConstantName (LOCATION_ARGS) const {
  const cCollectionElement_matchListForGeneration * p = (const cCollectionElement_matchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchListForGeneration) ;
  return p->mObject.mProperty_mLocalConstantName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @matchListForGeneration type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchListForGeneration ("matchListForGeneration",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_matchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_matchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_matchListForGeneration GALGAS_matchListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_matchListForGeneration result ;
  const GALGAS_matchListForGeneration * p = (const GALGAS_matchListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

