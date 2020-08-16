#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-19.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_greaterOrEqualExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_greaterOrEqualExpressionForGeneration * p = (const cPtr_greaterOrEqualExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_greaterOrEqualExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_greaterOrEqualExpressionForGeneration::objectCompare (const GALGAS_greaterOrEqualExpressionForGeneration & inOperand) const {
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

GALGAS_greaterOrEqualExpressionForGeneration::GALGAS_greaterOrEqualExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_greaterOrEqualExpressionForGeneration::GALGAS_greaterOrEqualExpressionForGeneration (const cPtr_greaterOrEqualExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_greaterOrEqualExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_greaterOrEqualExpressionForGeneration GALGAS_greaterOrEqualExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                            const GALGAS_location & inAttribute_mLocation,
                                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_greaterOrEqualExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_greaterOrEqualExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_greaterOrEqualExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_greaterOrEqualExpressionForGeneration * p = (const cPtr_greaterOrEqualExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_greaterOrEqualExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_greaterOrEqualExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_greaterOrEqualExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_greaterOrEqualExpressionForGeneration * p = (const cPtr_greaterOrEqualExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_greaterOrEqualExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_greaterOrEqualExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_greaterOrEqualExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_greaterOrEqualExpressionForGeneration * p = (cPtr_greaterOrEqualExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_greaterOrEqualExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_greaterOrEqualExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_greaterOrEqualExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_greaterOrEqualExpressionForGeneration * p = (cPtr_greaterOrEqualExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_greaterOrEqualExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_greaterOrEqualExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @greaterOrEqualExpressionForGeneration class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_greaterOrEqualExpressionForGeneration::cPtr_greaterOrEqualExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                        const GALGAS_location & in_mLocation,
                                                                                        const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                        const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_greaterOrEqualExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_greaterOrEqualExpressionForGeneration ;
}

void cPtr_greaterOrEqualExpressionForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@greaterOrEqualExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_greaterOrEqualExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_greaterOrEqualExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @greaterOrEqualExpressionForGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_greaterOrEqualExpressionForGeneration ("greaterOrEqualExpressionForGeneration",
                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_greaterOrEqualExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_greaterOrEqualExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_greaterOrEqualExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_greaterOrEqualExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_greaterOrEqualExpressionForGeneration GALGAS_greaterOrEqualExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_greaterOrEqualExpressionForGeneration result ;
  const GALGAS_greaterOrEqualExpressionForGeneration * p = (const GALGAS_greaterOrEqualExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_greaterOrEqualExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("greaterOrEqualExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_strictGreaterExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_strictGreaterExpressionForGeneration * p = (const cPtr_strictGreaterExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_strictGreaterExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_strictGreaterExpressionForGeneration::objectCompare (const GALGAS_strictGreaterExpressionForGeneration & inOperand) const {
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

GALGAS_strictGreaterExpressionForGeneration::GALGAS_strictGreaterExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_strictGreaterExpressionForGeneration::GALGAS_strictGreaterExpressionForGeneration (const cPtr_strictGreaterExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_strictGreaterExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_strictGreaterExpressionForGeneration GALGAS_strictGreaterExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                                          const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                          const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_strictGreaterExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_strictGreaterExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_strictGreaterExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_strictGreaterExpressionForGeneration * p = (const cPtr_strictGreaterExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_strictGreaterExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_strictGreaterExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_strictGreaterExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_strictGreaterExpressionForGeneration * p = (const cPtr_strictGreaterExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_strictGreaterExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_strictGreaterExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_strictGreaterExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_strictGreaterExpressionForGeneration * p = (cPtr_strictGreaterExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_strictGreaterExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_strictGreaterExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_strictGreaterExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_strictGreaterExpressionForGeneration * p = (cPtr_strictGreaterExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_strictGreaterExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_strictGreaterExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @strictGreaterExpressionForGeneration class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_strictGreaterExpressionForGeneration::cPtr_strictGreaterExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_strictGreaterExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_strictGreaterExpressionForGeneration ;
}

void cPtr_strictGreaterExpressionForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@strictGreaterExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_strictGreaterExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_strictGreaterExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @strictGreaterExpressionForGeneration type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_strictGreaterExpressionForGeneration ("strictGreaterExpressionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_strictGreaterExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_strictGreaterExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_strictGreaterExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_strictGreaterExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_strictGreaterExpressionForGeneration GALGAS_strictGreaterExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_strictGreaterExpressionForGeneration result ;
  const GALGAS_strictGreaterExpressionForGeneration * p = (const GALGAS_strictGreaterExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_strictGreaterExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("strictGreaterExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_strictLowerExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_strictLowerExpressionForGeneration * p = (const cPtr_strictLowerExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_strictLowerExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_strictLowerExpressionForGeneration::objectCompare (const GALGAS_strictLowerExpressionForGeneration & inOperand) const {
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

GALGAS_strictLowerExpressionForGeneration::GALGAS_strictLowerExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_strictLowerExpressionForGeneration::GALGAS_strictLowerExpressionForGeneration (const cPtr_strictLowerExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_strictLowerExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_strictLowerExpressionForGeneration GALGAS_strictLowerExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_strictLowerExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_strictLowerExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_strictLowerExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_strictLowerExpressionForGeneration * p = (const cPtr_strictLowerExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_strictLowerExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_strictLowerExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_strictLowerExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_strictLowerExpressionForGeneration * p = (const cPtr_strictLowerExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_strictLowerExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_strictLowerExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_strictLowerExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_strictLowerExpressionForGeneration * p = (cPtr_strictLowerExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_strictLowerExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_strictLowerExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_strictLowerExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_strictLowerExpressionForGeneration * p = (cPtr_strictLowerExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_strictLowerExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_strictLowerExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @strictLowerExpressionForGeneration class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_strictLowerExpressionForGeneration::cPtr_strictLowerExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_strictLowerExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_strictLowerExpressionForGeneration ;
}

void cPtr_strictLowerExpressionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@strictLowerExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_strictLowerExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_strictLowerExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @strictLowerExpressionForGeneration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_strictLowerExpressionForGeneration ("strictLowerExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_strictLowerExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_strictLowerExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_strictLowerExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_strictLowerExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_strictLowerExpressionForGeneration GALGAS_strictLowerExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_strictLowerExpressionForGeneration result ;
  const GALGAS_strictLowerExpressionForGeneration * p = (const GALGAS_strictLowerExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_strictLowerExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("strictLowerExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_rightShiftExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_rightShiftExpressionForGeneration * p = (const cPtr_rightShiftExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_rightShiftExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_rightShiftExpressionForGeneration::objectCompare (const GALGAS_rightShiftExpressionForGeneration & inOperand) const {
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

GALGAS_rightShiftExpressionForGeneration::GALGAS_rightShiftExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_rightShiftExpressionForGeneration::GALGAS_rightShiftExpressionForGeneration (const cPtr_rightShiftExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_rightShiftExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_rightShiftExpressionForGeneration GALGAS_rightShiftExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_rightShiftExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_rightShiftExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_rightShiftExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_rightShiftExpressionForGeneration * p = (const cPtr_rightShiftExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_rightShiftExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_rightShiftExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_rightShiftExpressionForGeneration * p = (const cPtr_rightShiftExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_rightShiftExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_rightShiftExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_rightShiftExpressionForGeneration * p = (cPtr_rightShiftExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_rightShiftExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_rightShiftExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_rightShiftExpressionForGeneration * p = (cPtr_rightShiftExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_rightShiftExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @rightShiftExpressionForGeneration class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_rightShiftExpressionForGeneration::cPtr_rightShiftExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                const GALGAS_location & in_mLocation,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_rightShiftExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionForGeneration ;
}

void cPtr_rightShiftExpressionForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@rightShiftExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_rightShiftExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_rightShiftExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @rightShiftExpressionForGeneration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_rightShiftExpressionForGeneration ("rightShiftExpressionForGeneration",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_rightShiftExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_rightShiftExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_rightShiftExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_rightShiftExpressionForGeneration GALGAS_rightShiftExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_rightShiftExpressionForGeneration result ;
  const GALGAS_rightShiftExpressionForGeneration * p = (const GALGAS_rightShiftExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_rightShiftExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rightShiftExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_leftShiftExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_leftShiftExpressionForGeneration * p = (const cPtr_leftShiftExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_leftShiftExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_leftShiftExpressionForGeneration::objectCompare (const GALGAS_leftShiftExpressionForGeneration & inOperand) const {
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

GALGAS_leftShiftExpressionForGeneration::GALGAS_leftShiftExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_leftShiftExpressionForGeneration::GALGAS_leftShiftExpressionForGeneration (const cPtr_leftShiftExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_leftShiftExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_leftShiftExpressionForGeneration GALGAS_leftShiftExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                  const GALGAS_location & inAttribute_mLocation,
                                                                                                  const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                  const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_leftShiftExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_leftShiftExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_leftShiftExpressionForGeneration * p = (const cPtr_leftShiftExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_leftShiftExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_leftShiftExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_leftShiftExpressionForGeneration * p = (const cPtr_leftShiftExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_leftShiftExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_leftShiftExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_leftShiftExpressionForGeneration * p = (cPtr_leftShiftExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_leftShiftExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_leftShiftExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_leftShiftExpressionForGeneration * p = (cPtr_leftShiftExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_leftShiftExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @leftShiftExpressionForGeneration class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_leftShiftExpressionForGeneration::cPtr_leftShiftExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                              const GALGAS_location & in_mLocation,
                                                                              const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                              const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_leftShiftExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionForGeneration ;
}

void cPtr_leftShiftExpressionForGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@leftShiftExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_leftShiftExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_leftShiftExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @leftShiftExpressionForGeneration type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_leftShiftExpressionForGeneration ("leftShiftExpressionForGeneration",
                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_leftShiftExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_leftShiftExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_leftShiftExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_leftShiftExpressionForGeneration GALGAS_leftShiftExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftExpressionForGeneration result ;
  const GALGAS_leftShiftExpressionForGeneration * p = (const GALGAS_leftShiftExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_leftShiftExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_addExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addExpressionForGeneration * p = (const cPtr_addExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_addExpressionForGeneration::objectCompare (const GALGAS_addExpressionForGeneration & inOperand) const {
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

GALGAS_addExpressionForGeneration::GALGAS_addExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addExpressionForGeneration::GALGAS_addExpressionForGeneration (const cPtr_addExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addExpressionForGeneration GALGAS_addExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_addExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionForGeneration * p = (const cPtr_addExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_addExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_addExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionForGeneration * p = (const cPtr_addExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_addExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_addExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_addExpressionForGeneration * p = (cPtr_addExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_addExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_addExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_addExpressionForGeneration * p = (cPtr_addExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_addExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @addExpressionForGeneration class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_addExpressionForGeneration::cPtr_addExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                  const GALGAS_location & in_mLocation,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_addExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionForGeneration ;
}

void cPtr_addExpressionForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@addExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_addExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @addExpressionForGeneration type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addExpressionForGeneration ("addExpressionForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_addExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_addExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addExpressionForGeneration GALGAS_addExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionForGeneration result ;
  const GALGAS_addExpressionForGeneration * p = (const GALGAS_addExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_addExpressionNoOverflowForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addExpressionNoOverflowForGeneration * p = (const cPtr_addExpressionNoOverflowForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addExpressionNoOverflowForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_addExpressionNoOverflowForGeneration::objectCompare (const GALGAS_addExpressionNoOverflowForGeneration & inOperand) const {
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

GALGAS_addExpressionNoOverflowForGeneration::GALGAS_addExpressionNoOverflowForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addExpressionNoOverflowForGeneration::GALGAS_addExpressionNoOverflowForGeneration (const cPtr_addExpressionNoOverflowForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addExpressionNoOverflowForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addExpressionNoOverflowForGeneration GALGAS_addExpressionNoOverflowForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                                          const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                          const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionNoOverflowForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addExpressionNoOverflowForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_addExpressionNoOverflowForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionNoOverflowForGeneration * p = (const cPtr_addExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_addExpressionNoOverflowForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_addExpressionNoOverflowForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionNoOverflowForGeneration * p = (const cPtr_addExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_addExpressionNoOverflowForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_addExpressionNoOverflowForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_addExpressionNoOverflowForGeneration * p = (cPtr_addExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_addExpressionNoOverflowForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_addExpressionNoOverflowForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_addExpressionNoOverflowForGeneration * p = (cPtr_addExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_addExpressionNoOverflowForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @addExpressionNoOverflowForGeneration class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_addExpressionNoOverflowForGeneration::cPtr_addExpressionNoOverflowForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_addExpressionNoOverflowForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowForGeneration ;
}

void cPtr_addExpressionNoOverflowForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@addExpressionNoOverflowForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_addExpressionNoOverflowForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addExpressionNoOverflowForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @addExpressionNoOverflowForGeneration type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addExpressionNoOverflowForGeneration ("addExpressionNoOverflowForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_addExpressionNoOverflowForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_addExpressionNoOverflowForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addExpressionNoOverflowForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addExpressionNoOverflowForGeneration GALGAS_addExpressionNoOverflowForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionNoOverflowForGeneration result ;
  const GALGAS_addExpressionNoOverflowForGeneration * p = (const GALGAS_addExpressionNoOverflowForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addExpressionNoOverflowForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionNoOverflowForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_subExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_subExpressionForGeneration * p = (const cPtr_subExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_subExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_subExpressionForGeneration::objectCompare (const GALGAS_subExpressionForGeneration & inOperand) const {
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

GALGAS_subExpressionForGeneration::GALGAS_subExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_subExpressionForGeneration::GALGAS_subExpressionForGeneration (const cPtr_subExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_subExpressionForGeneration GALGAS_subExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_subExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_subExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionForGeneration * p = (const cPtr_subExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_subExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_subExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionForGeneration * p = (const cPtr_subExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_subExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_subExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_subExpressionForGeneration * p = (cPtr_subExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_subExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_subExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_subExpressionForGeneration * p = (cPtr_subExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_subExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @subExpressionForGeneration class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_subExpressionForGeneration::cPtr_subExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                  const GALGAS_location & in_mLocation,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_subExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionForGeneration ;
}

void cPtr_subExpressionForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@subExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_subExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_subExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @subExpressionForGeneration type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_subExpressionForGeneration ("subExpressionForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_subExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_subExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_subExpressionForGeneration GALGAS_subExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionForGeneration result ;
  const GALGAS_subExpressionForGeneration * p = (const GALGAS_subExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_subExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_subExpressionNoOverflowForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_subExpressionNoOverflowForGeneration * p = (const cPtr_subExpressionNoOverflowForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_subExpressionNoOverflowForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_subExpressionNoOverflowForGeneration::objectCompare (const GALGAS_subExpressionNoOverflowForGeneration & inOperand) const {
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

GALGAS_subExpressionNoOverflowForGeneration::GALGAS_subExpressionNoOverflowForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_subExpressionNoOverflowForGeneration::GALGAS_subExpressionNoOverflowForGeneration (const cPtr_subExpressionNoOverflowForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionNoOverflowForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_subExpressionNoOverflowForGeneration GALGAS_subExpressionNoOverflowForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                                          const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                          const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionNoOverflowForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_subExpressionNoOverflowForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_subExpressionNoOverflowForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionNoOverflowForGeneration * p = (const cPtr_subExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_subExpressionNoOverflowForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_subExpressionNoOverflowForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionNoOverflowForGeneration * p = (const cPtr_subExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_subExpressionNoOverflowForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_subExpressionNoOverflowForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_subExpressionNoOverflowForGeneration * p = (cPtr_subExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_subExpressionNoOverflowForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_subExpressionNoOverflowForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_subExpressionNoOverflowForGeneration * p = (cPtr_subExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_subExpressionNoOverflowForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @subExpressionNoOverflowForGeneration class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_subExpressionNoOverflowForGeneration::cPtr_subExpressionNoOverflowForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_subExpressionNoOverflowForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowForGeneration ;
}

void cPtr_subExpressionNoOverflowForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@subExpressionNoOverflowForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_subExpressionNoOverflowForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_subExpressionNoOverflowForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @subExpressionNoOverflowForGeneration type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_subExpressionNoOverflowForGeneration ("subExpressionNoOverflowForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_subExpressionNoOverflowForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_subExpressionNoOverflowForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subExpressionNoOverflowForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_subExpressionNoOverflowForGeneration GALGAS_subExpressionNoOverflowForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionNoOverflowForGeneration result ;
  const GALGAS_subExpressionNoOverflowForGeneration * p = (const GALGAS_subExpressionNoOverflowForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_subExpressionNoOverflowForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionNoOverflowForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_testDynamicClassInExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_testDynamicClassInExpressionForGeneration * p = (const cPtr_testDynamicClassInExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeComparisonKind.objectCompare (p->mProperty_mTypeComparisonKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCastType.objectCompare (p->mProperty_mCastType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_testDynamicClassInExpressionForGeneration::objectCompare (const GALGAS_testDynamicClassInExpressionForGeneration & inOperand) const {
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

GALGAS_testDynamicClassInExpressionForGeneration::GALGAS_testDynamicClassInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_testDynamicClassInExpressionForGeneration::GALGAS_testDynamicClassInExpressionForGeneration (const cPtr_testDynamicClassInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testDynamicClassInExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_testDynamicClassInExpressionForGeneration GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                                                    const GALGAS_dynamicTypeComparisonKind & inAttribute_mTypeComparisonKind,
                                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mCastType
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_testDynamicClassInExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mTypeComparisonKind.isValid () && inAttribute_mCastType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_testDynamicClassInExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mReceiverExpression, inAttribute_mTypeComparisonKind, inAttribute_mCastType COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_testDynamicClassInExpressionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_testDynamicClassInExpressionForGeneration * p = (const cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    result = p->mProperty_mReceiverExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_testDynamicClassInExpressionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynamicTypeComparisonKind GALGAS_testDynamicClassInExpressionForGeneration::getter_mTypeComparisonKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_dynamicTypeComparisonKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_testDynamicClassInExpressionForGeneration * p = (const cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    result = p->mProperty_mTypeComparisonKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_dynamicTypeComparisonKind cPtr_testDynamicClassInExpressionForGeneration::getter_mTypeComparisonKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeComparisonKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_testDynamicClassInExpressionForGeneration::getter_mCastType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_testDynamicClassInExpressionForGeneration * p = (const cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    result = p->mProperty_mCastType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_testDynamicClassInExpressionForGeneration::getter_mCastType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCastType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_testDynamicClassInExpressionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_testDynamicClassInExpressionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_testDynamicClassInExpressionForGeneration::setter_setMTypeComparisonKind (GALGAS_dynamicTypeComparisonKind inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    p->mProperty_mTypeComparisonKind = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_testDynamicClassInExpressionForGeneration::setter_setMTypeComparisonKind (GALGAS_dynamicTypeComparisonKind inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeComparisonKind = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_testDynamicClassInExpressionForGeneration::setter_setMCastType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    p->mProperty_mCastType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_testDynamicClassInExpressionForGeneration::setter_setMCastType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCastType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         Pointer class for @testDynamicClassInExpressionForGeneration class                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_testDynamicClassInExpressionForGeneration::cPtr_testDynamicClassInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                                const GALGAS_location & in_mLocation,
                                                                                                const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                                const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mCastType
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mTypeComparisonKind (in_mTypeComparisonKind),
mProperty_mCastType (in_mCastType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_testDynamicClassInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ;
}

void cPtr_testDynamicClassInExpressionForGeneration::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@testDynamicClassInExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCastType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_testDynamicClassInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_testDynamicClassInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mCastType COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @testDynamicClassInExpressionForGeneration type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ("testDynamicClassInExpressionForGeneration",
                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_testDynamicClassInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_testDynamicClassInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testDynamicClassInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_testDynamicClassInExpressionForGeneration GALGAS_testDynamicClassInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_testDynamicClassInExpressionForGeneration result ;
  const GALGAS_testDynamicClassInExpressionForGeneration * p = (const GALGAS_testDynamicClassInExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_testDynamicClassInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testDynamicClassInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_extractObjectInExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extractObjectInExpressionForGeneration * p = (const cPtr_extractObjectInExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extractObjectInExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_extractObjectInExpressionForGeneration::objectCompare (const GALGAS_extractObjectInExpressionForGeneration & inOperand) const {
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

GALGAS_extractObjectInExpressionForGeneration::GALGAS_extractObjectInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extractObjectInExpressionForGeneration::GALGAS_extractObjectInExpressionForGeneration (const cPtr_extractObjectInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extractObjectInExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extractObjectInExpressionForGeneration GALGAS_extractObjectInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                              const GALGAS_location & inAttribute_mLocation,
                                                                                                              const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                                              const GALGAS_string & inAttribute_mTypeName
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extractObjectInExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extractObjectInExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mReceiverExpression, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_extractObjectInExpressionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_extractObjectInExpressionForGeneration * p = (const cPtr_extractObjectInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extractObjectInExpressionForGeneration) ;
    result = p->mProperty_mReceiverExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_extractObjectInExpressionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_extractObjectInExpressionForGeneration::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_extractObjectInExpressionForGeneration * p = (const cPtr_extractObjectInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extractObjectInExpressionForGeneration) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_extractObjectInExpressionForGeneration::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extractObjectInExpressionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extractObjectInExpressionForGeneration * p = (cPtr_extractObjectInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extractObjectInExpressionForGeneration) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extractObjectInExpressionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_extractObjectInExpressionForGeneration::setter_setMTypeName (GALGAS_string inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_extractObjectInExpressionForGeneration * p = (cPtr_extractObjectInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extractObjectInExpressionForGeneration) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_extractObjectInExpressionForGeneration::setter_setMTypeName (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTypeName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @extractObjectInExpressionForGeneration class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_extractObjectInExpressionForGeneration::cPtr_extractObjectInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                          const GALGAS_location & in_mLocation,
                                                                                          const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                          const GALGAS_string & in_mTypeName
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mTypeName (in_mTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_extractObjectInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ;
}

void cPtr_extractObjectInExpressionForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@extractObjectInExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_extractObjectInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extractObjectInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @extractObjectInExpressionForGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ("extractObjectInExpressionForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_extractObjectInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_extractObjectInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extractObjectInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extractObjectInExpressionForGeneration GALGAS_extractObjectInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_extractObjectInExpressionForGeneration result ;
  const GALGAS_extractObjectInExpressionForGeneration * p = (const GALGAS_extractObjectInExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extractObjectInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractObjectInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_optionValueExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_optionValueExpressionForGeneration * p = (const cPtr_optionValueExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentIsPredefined.objectCompare (p->mProperty_mOptionComponentIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentName.objectCompare (p->mProperty_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionEntryName.objectCompare (p->mProperty_mOptionEntryName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_optionValueExpressionForGeneration::objectCompare (const GALGAS_optionValueExpressionForGeneration & inOperand) const {
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

GALGAS_optionValueExpressionForGeneration::GALGAS_optionValueExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionValueExpressionForGeneration GALGAS_optionValueExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionValueExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                     GALGAS_location::constructor_nowhere (HERE),
                                                                     GALGAS_bool::constructor_default (HERE),
                                                                     GALGAS_string::constructor_default (HERE),
                                                                     GALGAS_string::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionValueExpressionForGeneration::GALGAS_optionValueExpressionForGeneration (const cPtr_optionValueExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionValueExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionValueExpressionForGeneration GALGAS_optionValueExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                      const GALGAS_bool & inAttribute_mOptionComponentIsPredefined,
                                                                                                      const GALGAS_string & inAttribute_mOptionComponentName,
                                                                                                      const GALGAS_string & inAttribute_mOptionEntryName
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_optionValueExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mOptionComponentIsPredefined.isValid () && inAttribute_mOptionComponentName.isValid () && inAttribute_mOptionEntryName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_optionValueExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mOptionComponentIsPredefined, inAttribute_mOptionComponentName, inAttribute_mOptionEntryName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_optionValueExpressionForGeneration::getter_mOptionComponentIsPredefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionValueExpressionForGeneration * p = (const cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    result = p->mProperty_mOptionComponentIsPredefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_optionValueExpressionForGeneration::getter_mOptionComponentIsPredefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionComponentIsPredefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_optionValueExpressionForGeneration::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionValueExpressionForGeneration * p = (const cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    result = p->mProperty_mOptionComponentName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_optionValueExpressionForGeneration::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionComponentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_optionValueExpressionForGeneration::getter_mOptionEntryName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionValueExpressionForGeneration * p = (const cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    result = p->mProperty_mOptionEntryName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_optionValueExpressionForGeneration::getter_mOptionEntryName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionEntryName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_optionValueExpressionForGeneration::setter_setMOptionComponentIsPredefined (GALGAS_bool inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    p->mProperty_mOptionComponentIsPredefined = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_optionValueExpressionForGeneration::setter_setMOptionComponentIsPredefined (GALGAS_bool inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionComponentIsPredefined = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_optionValueExpressionForGeneration::setter_setMOptionComponentName (GALGAS_string inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    p->mProperty_mOptionComponentName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_optionValueExpressionForGeneration::setter_setMOptionComponentName (GALGAS_string inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionComponentName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_optionValueExpressionForGeneration::setter_setMOptionEntryName (GALGAS_string inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    p->mProperty_mOptionEntryName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_optionValueExpressionForGeneration::setter_setMOptionEntryName (GALGAS_string inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionEntryName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @optionValueExpressionForGeneration class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_optionValueExpressionForGeneration::cPtr_optionValueExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                                                  const GALGAS_string & in_mOptionComponentName,
                                                                                  const GALGAS_string & in_mOptionEntryName
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mOptionComponentIsPredefined (in_mOptionComponentIsPredefined),
mProperty_mOptionComponentName (in_mOptionComponentName),
mProperty_mOptionEntryName (in_mOptionEntryName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_optionValueExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ;
}

void cPtr_optionValueExpressionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@optionValueExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_optionValueExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionValueExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @optionValueExpressionForGeneration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ("optionValueExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_optionValueExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_optionValueExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionValueExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionValueExpressionForGeneration GALGAS_optionValueExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_optionValueExpressionForGeneration result ;
  const GALGAS_optionValueExpressionForGeneration * p = (const GALGAS_optionValueExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionValueExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionValueExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_optionCharExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_optionCharExpressionForGeneration * p = (const cPtr_optionCharExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentIsPredefined.objectCompare (p->mProperty_mOptionComponentIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentName.objectCompare (p->mProperty_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionEntryName.objectCompare (p->mProperty_mOptionEntryName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_optionCharExpressionForGeneration::objectCompare (const GALGAS_optionCharExpressionForGeneration & inOperand) const {
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

GALGAS_optionCharExpressionForGeneration::GALGAS_optionCharExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionCharExpressionForGeneration GALGAS_optionCharExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionCharExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                    GALGAS_location::constructor_nowhere (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_string::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionCharExpressionForGeneration::GALGAS_optionCharExpressionForGeneration (const cPtr_optionCharExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionCharExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionCharExpressionForGeneration GALGAS_optionCharExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                    const GALGAS_bool & inAttribute_mOptionComponentIsPredefined,
                                                                                                    const GALGAS_string & inAttribute_mOptionComponentName,
                                                                                                    const GALGAS_string & inAttribute_mOptionEntryName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_optionCharExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mOptionComponentIsPredefined.isValid () && inAttribute_mOptionComponentName.isValid () && inAttribute_mOptionEntryName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_optionCharExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mOptionComponentIsPredefined, inAttribute_mOptionComponentName, inAttribute_mOptionEntryName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_optionCharExpressionForGeneration::getter_mOptionComponentIsPredefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionCharExpressionForGeneration * p = (const cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    result = p->mProperty_mOptionComponentIsPredefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_optionCharExpressionForGeneration::getter_mOptionComponentIsPredefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionComponentIsPredefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_optionCharExpressionForGeneration::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionCharExpressionForGeneration * p = (const cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    result = p->mProperty_mOptionComponentName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_optionCharExpressionForGeneration::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionComponentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_optionCharExpressionForGeneration::getter_mOptionEntryName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionCharExpressionForGeneration * p = (const cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    result = p->mProperty_mOptionEntryName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_optionCharExpressionForGeneration::getter_mOptionEntryName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionEntryName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_optionCharExpressionForGeneration::setter_setMOptionComponentIsPredefined (GALGAS_bool inValue
                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    p->mProperty_mOptionComponentIsPredefined = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_optionCharExpressionForGeneration::setter_setMOptionComponentIsPredefined (GALGAS_bool inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionComponentIsPredefined = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_optionCharExpressionForGeneration::setter_setMOptionComponentName (GALGAS_string inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    p->mProperty_mOptionComponentName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_optionCharExpressionForGeneration::setter_setMOptionComponentName (GALGAS_string inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionComponentName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_optionCharExpressionForGeneration::setter_setMOptionEntryName (GALGAS_string inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    p->mProperty_mOptionEntryName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_optionCharExpressionForGeneration::setter_setMOptionEntryName (GALGAS_string inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionEntryName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @optionCharExpressionForGeneration class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_optionCharExpressionForGeneration::cPtr_optionCharExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                const GALGAS_location & in_mLocation,
                                                                                const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                                                const GALGAS_string & in_mOptionComponentName,
                                                                                const GALGAS_string & in_mOptionEntryName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mOptionComponentIsPredefined (in_mOptionComponentIsPredefined),
mProperty_mOptionComponentName (in_mOptionComponentName),
mProperty_mOptionEntryName (in_mOptionEntryName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_optionCharExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ;
}

void cPtr_optionCharExpressionForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@optionCharExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_optionCharExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionCharExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @optionCharExpressionForGeneration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ("optionCharExpressionForGeneration",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_optionCharExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_optionCharExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionCharExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionCharExpressionForGeneration GALGAS_optionCharExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_optionCharExpressionForGeneration result ;
  const GALGAS_optionCharExpressionForGeneration * p = (const GALGAS_optionCharExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionCharExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionCharExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_optionStringExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_optionStringExpressionForGeneration * p = (const cPtr_optionStringExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentIsPredefined.objectCompare (p->mProperty_mOptionComponentIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentName.objectCompare (p->mProperty_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionEntryName.objectCompare (p->mProperty_mOptionEntryName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_optionStringExpressionForGeneration::objectCompare (const GALGAS_optionStringExpressionForGeneration & inOperand) const {
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

GALGAS_optionStringExpressionForGeneration::GALGAS_optionStringExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionStringExpressionForGeneration GALGAS_optionStringExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionStringExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                      GALGAS_location::constructor_nowhere (HERE),
                                                                      GALGAS_bool::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE)
                                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionStringExpressionForGeneration::GALGAS_optionStringExpressionForGeneration (const cPtr_optionStringExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionStringExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionStringExpressionForGeneration GALGAS_optionStringExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                        const GALGAS_location & inAttribute_mLocation,
                                                                                                        const GALGAS_bool & inAttribute_mOptionComponentIsPredefined,
                                                                                                        const GALGAS_string & inAttribute_mOptionComponentName,
                                                                                                        const GALGAS_string & inAttribute_mOptionEntryName
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionStringExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mOptionComponentIsPredefined.isValid () && inAttribute_mOptionComponentName.isValid () && inAttribute_mOptionEntryName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_optionStringExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mOptionComponentIsPredefined, inAttribute_mOptionComponentName, inAttribute_mOptionEntryName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_optionStringExpressionForGeneration::getter_mOptionComponentIsPredefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionStringExpressionForGeneration * p = (const cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    result = p->mProperty_mOptionComponentIsPredefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_optionStringExpressionForGeneration::getter_mOptionComponentIsPredefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionComponentIsPredefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_optionStringExpressionForGeneration::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionStringExpressionForGeneration * p = (const cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    result = p->mProperty_mOptionComponentName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_optionStringExpressionForGeneration::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionComponentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_optionStringExpressionForGeneration::getter_mOptionEntryName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionStringExpressionForGeneration * p = (const cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    result = p->mProperty_mOptionEntryName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_optionStringExpressionForGeneration::getter_mOptionEntryName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionEntryName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_optionStringExpressionForGeneration::setter_setMOptionComponentIsPredefined (GALGAS_bool inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    p->mProperty_mOptionComponentIsPredefined = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_optionStringExpressionForGeneration::setter_setMOptionComponentIsPredefined (GALGAS_bool inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionComponentIsPredefined = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_optionStringExpressionForGeneration::setter_setMOptionComponentName (GALGAS_string inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    p->mProperty_mOptionComponentName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_optionStringExpressionForGeneration::setter_setMOptionComponentName (GALGAS_string inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionComponentName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_optionStringExpressionForGeneration::setter_setMOptionEntryName (GALGAS_string inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    p->mProperty_mOptionEntryName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_optionStringExpressionForGeneration::setter_setMOptionEntryName (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionEntryName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @optionStringExpressionForGeneration class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_optionStringExpressionForGeneration::cPtr_optionStringExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                    const GALGAS_location & in_mLocation,
                                                                                    const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                                                    const GALGAS_string & in_mOptionComponentName,
                                                                                    const GALGAS_string & in_mOptionEntryName
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mOptionComponentIsPredefined (in_mOptionComponentIsPredefined),
mProperty_mOptionComponentName (in_mOptionComponentName),
mProperty_mOptionEntryName (in_mOptionEntryName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_optionStringExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ;
}

void cPtr_optionStringExpressionForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@optionStringExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_optionStringExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionStringExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @optionStringExpressionForGeneration type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ("optionStringExpressionForGeneration",
                                                            & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_optionStringExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_optionStringExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionStringExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionStringExpressionForGeneration GALGAS_optionStringExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_optionStringExpressionForGeneration result ;
  const GALGAS_optionStringExpressionForGeneration * p = (const GALGAS_optionStringExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionStringExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionStringExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_optionCommentExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_optionCommentExpressionForGeneration * p = (const cPtr_optionCommentExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentIsPredefined.objectCompare (p->mProperty_mOptionComponentIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentName.objectCompare (p->mProperty_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionEntryName.objectCompare (p->mProperty_mOptionEntryName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_optionCommentExpressionForGeneration::objectCompare (const GALGAS_optionCommentExpressionForGeneration & inOperand) const {
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

GALGAS_optionCommentExpressionForGeneration::GALGAS_optionCommentExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionCommentExpressionForGeneration GALGAS_optionCommentExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionCommentExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_location::constructor_nowhere (HERE),
                                                                       GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionCommentExpressionForGeneration::GALGAS_optionCommentExpressionForGeneration (const cPtr_optionCommentExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionCommentExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionCommentExpressionForGeneration GALGAS_optionCommentExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                                          const GALGAS_bool & inAttribute_mOptionComponentIsPredefined,
                                                                                                          const GALGAS_string & inAttribute_mOptionComponentName,
                                                                                                          const GALGAS_string & inAttribute_mOptionEntryName
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_optionCommentExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mOptionComponentIsPredefined.isValid () && inAttribute_mOptionComponentName.isValid () && inAttribute_mOptionEntryName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_optionCommentExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mOptionComponentIsPredefined, inAttribute_mOptionComponentName, inAttribute_mOptionEntryName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_optionCommentExpressionForGeneration::getter_mOptionComponentIsPredefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionCommentExpressionForGeneration * p = (const cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    result = p->mProperty_mOptionComponentIsPredefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_optionCommentExpressionForGeneration::getter_mOptionComponentIsPredefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionComponentIsPredefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_optionCommentExpressionForGeneration::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionCommentExpressionForGeneration * p = (const cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    result = p->mProperty_mOptionComponentName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_optionCommentExpressionForGeneration::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionComponentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_optionCommentExpressionForGeneration::getter_mOptionEntryName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionCommentExpressionForGeneration * p = (const cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    result = p->mProperty_mOptionEntryName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_optionCommentExpressionForGeneration::getter_mOptionEntryName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionEntryName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_optionCommentExpressionForGeneration::setter_setMOptionComponentIsPredefined (GALGAS_bool inValue
                                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    p->mProperty_mOptionComponentIsPredefined = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_optionCommentExpressionForGeneration::setter_setMOptionComponentIsPredefined (GALGAS_bool inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionComponentIsPredefined = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_optionCommentExpressionForGeneration::setter_setMOptionComponentName (GALGAS_string inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    p->mProperty_mOptionComponentName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_optionCommentExpressionForGeneration::setter_setMOptionComponentName (GALGAS_string inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionComponentName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_optionCommentExpressionForGeneration::setter_setMOptionEntryName (GALGAS_string inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    p->mProperty_mOptionEntryName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_optionCommentExpressionForGeneration::setter_setMOptionEntryName (GALGAS_string inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOptionEntryName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @optionCommentExpressionForGeneration class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_optionCommentExpressionForGeneration::cPtr_optionCommentExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                                                      const GALGAS_string & in_mOptionComponentName,
                                                                                      const GALGAS_string & in_mOptionEntryName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mOptionComponentIsPredefined (in_mOptionComponentIsPredefined),
mProperty_mOptionComponentName (in_mOptionComponentName),
mProperty_mOptionEntryName (in_mOptionEntryName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_optionCommentExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ;
}

void cPtr_optionCommentExpressionForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@optionCommentExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_optionCommentExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionCommentExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @optionCommentExpressionForGeneration type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ("optionCommentExpressionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_optionCommentExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_optionCommentExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionCommentExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_optionCommentExpressionForGeneration GALGAS_optionCommentExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionCommentExpressionForGeneration result ;
  const GALGAS_optionCommentExpressionForGeneration * p = (const GALGAS_optionCommentExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionCommentExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionCommentExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_lexiqueIntrospectionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexiqueIntrospectionForGeneration * p = (const cPtr_lexiqueIntrospectionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueComponentName.objectCompare (p->mProperty_mLexiqueComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueGetterName.objectCompare (p->mProperty_mLexiqueGetterName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_lexiqueIntrospectionForGeneration::objectCompare (const GALGAS_lexiqueIntrospectionForGeneration & inOperand) const {
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

GALGAS_lexiqueIntrospectionForGeneration::GALGAS_lexiqueIntrospectionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueIntrospectionForGeneration GALGAS_lexiqueIntrospectionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexiqueIntrospectionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                    GALGAS_location::constructor_nowhere (HERE),
                                                                    GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_string::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueIntrospectionForGeneration::GALGAS_lexiqueIntrospectionForGeneration (const cPtr_lexiqueIntrospectionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueIntrospectionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueIntrospectionForGeneration GALGAS_lexiqueIntrospectionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                    const GALGAS_string & inAttribute_mLexiqueComponentName,
                                                                                                    const GALGAS_string & inAttribute_mLexiqueGetterName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueIntrospectionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLexiqueComponentName.isValid () && inAttribute_mLexiqueGetterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexiqueIntrospectionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLexiqueComponentName, inAttribute_mLexiqueGetterName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_lexiqueIntrospectionForGeneration::getter_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueIntrospectionForGeneration * p = (const cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    result = p->mProperty_mLexiqueComponentName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_lexiqueIntrospectionForGeneration::getter_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueComponentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_lexiqueIntrospectionForGeneration::getter_mLexiqueGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueIntrospectionForGeneration * p = (const cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    result = p->mProperty_mLexiqueGetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_lexiqueIntrospectionForGeneration::getter_mLexiqueGetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueGetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueIntrospectionForGeneration::setter_setMLexiqueComponentName (GALGAS_string inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueIntrospectionForGeneration * p = (cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    p->mProperty_mLexiqueComponentName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueIntrospectionForGeneration::setter_setMLexiqueComponentName (GALGAS_string inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexiqueComponentName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_lexiqueIntrospectionForGeneration::setter_setMLexiqueGetterName (GALGAS_string inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexiqueIntrospectionForGeneration * p = (cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    p->mProperty_mLexiqueGetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_lexiqueIntrospectionForGeneration::setter_setMLexiqueGetterName (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexiqueGetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @lexiqueIntrospectionForGeneration class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_lexiqueIntrospectionForGeneration::cPtr_lexiqueIntrospectionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                const GALGAS_location & in_mLocation,
                                                                                const GALGAS_string & in_mLexiqueComponentName,
                                                                                const GALGAS_string & in_mLexiqueGetterName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLexiqueComponentName (in_mLexiqueComponentName),
mProperty_mLexiqueGetterName (in_mLexiqueGetterName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_lexiqueIntrospectionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ;
}

void cPtr_lexiqueIntrospectionForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@lexiqueIntrospectionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexiqueGetterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_lexiqueIntrospectionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexiqueIntrospectionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLexiqueComponentName, mProperty_mLexiqueGetterName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @lexiqueIntrospectionForGeneration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ("lexiqueIntrospectionForGeneration",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_lexiqueIntrospectionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_lexiqueIntrospectionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueIntrospectionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lexiqueIntrospectionForGeneration GALGAS_lexiqueIntrospectionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueIntrospectionForGeneration result ;
  const GALGAS_lexiqueIntrospectionForGeneration * p = (const GALGAS_lexiqueIntrospectionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueIntrospectionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueIntrospectionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_filewrapperInExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperInExpressionForGeneration * p = (const cPtr_filewrapperInExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperPath.objectCompare (p->mProperty_mFilewrapperPath) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_filewrapperInExpressionForGeneration::objectCompare (const GALGAS_filewrapperInExpressionForGeneration & inOperand) const {
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

GALGAS_filewrapperInExpressionForGeneration::GALGAS_filewrapperInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperInExpressionForGeneration GALGAS_filewrapperInExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_location::constructor_nowhere (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperInExpressionForGeneration::GALGAS_filewrapperInExpressionForGeneration (const cPtr_filewrapperInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperInExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperInExpressionForGeneration GALGAS_filewrapperInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                                          const GALGAS_string & inAttribute_mFilewrapperName,
                                                                                                          const GALGAS_string & inAttribute_mFilewrapperPath
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperInExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperPath.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperInExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mFilewrapperName, inAttribute_mFilewrapperPath COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_filewrapperInExpressionForGeneration::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperInExpressionForGeneration * p = (const cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    result = p->mProperty_mFilewrapperName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_filewrapperInExpressionForGeneration::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_filewrapperInExpressionForGeneration::getter_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperInExpressionForGeneration * p = (const cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    result = p->mProperty_mFilewrapperPath ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_filewrapperInExpressionForGeneration::getter_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperPath ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_filewrapperInExpressionForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_filewrapperInExpressionForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_filewrapperInExpressionForGeneration::setter_setMFilewrapperPath (GALGAS_string inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    p->mProperty_mFilewrapperPath = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_filewrapperInExpressionForGeneration::setter_setMFilewrapperPath (GALGAS_string inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperPath = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @filewrapperInExpressionForGeneration class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_filewrapperInExpressionForGeneration::cPtr_filewrapperInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_string & in_mFilewrapperName,
                                                                                      const GALGAS_string & in_mFilewrapperPath
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mFilewrapperName (in_mFilewrapperName),
mProperty_mFilewrapperPath (in_mFilewrapperPath) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_filewrapperInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ;
}

void cPtr_filewrapperInExpressionForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@filewrapperInExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_filewrapperInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFilewrapperName, mProperty_mFilewrapperPath COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @filewrapperInExpressionForGeneration type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ("filewrapperInExpressionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_filewrapperInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_filewrapperInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperInExpressionForGeneration GALGAS_filewrapperInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperInExpressionForGeneration result ;
  const GALGAS_filewrapperInExpressionForGeneration * p = (const GALGAS_filewrapperInExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_filewrapperTemplateInExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperTemplateInExpressionForGeneration * p = (const cPtr_filewrapperTemplateInExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperTemplateName.objectCompare (p->mProperty_mFilewrapperTemplateName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualOutputParameterList.objectCompare (p->mProperty_mActualOutputParameterList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_filewrapperTemplateInExpressionForGeneration::objectCompare (const GALGAS_filewrapperTemplateInExpressionForGeneration & inOperand) const {
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

GALGAS_filewrapperTemplateInExpressionForGeneration::GALGAS_filewrapperTemplateInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperTemplateInExpressionForGeneration GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                               GALGAS_location::constructor_nowhere (HERE),
                                                                               GALGAS_string::constructor_default (HERE),
                                                                               GALGAS_string::constructor_default (HERE),
                                                                               GALGAS_semanticExpressionListForGeneration::constructor_emptyList (HERE)
                                                                               COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperTemplateInExpressionForGeneration::GALGAS_filewrapperTemplateInExpressionForGeneration (const cPtr_filewrapperTemplateInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperTemplateInExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperTemplateInExpressionForGeneration GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                                                          const GALGAS_string & inAttribute_mFilewrapperName,
                                                                                                                          const GALGAS_string & inAttribute_mFilewrapperTemplateName,
                                                                                                                          const GALGAS_semanticExpressionListForGeneration & inAttribute_mActualOutputParameterList
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateInExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperTemplateName.isValid () && inAttribute_mActualOutputParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperTemplateInExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mFilewrapperName, inAttribute_mFilewrapperTemplateName, inAttribute_mActualOutputParameterList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_filewrapperTemplateInExpressionForGeneration::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperTemplateInExpressionForGeneration * p = (const cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    result = p->mProperty_mFilewrapperName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_filewrapperTemplateInExpressionForGeneration::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_filewrapperTemplateInExpressionForGeneration::getter_mFilewrapperTemplateName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperTemplateInExpressionForGeneration * p = (const cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    result = p->mProperty_mFilewrapperTemplateName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_filewrapperTemplateInExpressionForGeneration::getter_mFilewrapperTemplateName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperTemplateName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionListForGeneration GALGAS_filewrapperTemplateInExpressionForGeneration::getter_mActualOutputParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperTemplateInExpressionForGeneration * p = (const cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    result = p->mProperty_mActualOutputParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionListForGeneration cPtr_filewrapperTemplateInExpressionForGeneration::getter_mActualOutputParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualOutputParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_filewrapperTemplateInExpressionForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_filewrapperTemplateInExpressionForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_filewrapperTemplateInExpressionForGeneration::setter_setMFilewrapperTemplateName (GALGAS_string inValue
                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    p->mProperty_mFilewrapperTemplateName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_filewrapperTemplateInExpressionForGeneration::setter_setMFilewrapperTemplateName (GALGAS_string inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperTemplateName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_filewrapperTemplateInExpressionForGeneration::setter_setMActualOutputParameterList (GALGAS_semanticExpressionListForGeneration inValue
                                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    p->mProperty_mActualOutputParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_filewrapperTemplateInExpressionForGeneration::setter_setMActualOutputParameterList (GALGAS_semanticExpressionListForGeneration inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualOutputParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                        Pointer class for @filewrapperTemplateInExpressionForGeneration class                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_filewrapperTemplateInExpressionForGeneration::cPtr_filewrapperTemplateInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                                      const GALGAS_location & in_mLocation,
                                                                                                      const GALGAS_string & in_mFilewrapperName,
                                                                                                      const GALGAS_string & in_mFilewrapperTemplateName,
                                                                                                      const GALGAS_semanticExpressionListForGeneration & in_mActualOutputParameterList
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mFilewrapperName (in_mFilewrapperName),
mProperty_mFilewrapperTemplateName (in_mFilewrapperTemplateName),
mProperty_mActualOutputParameterList (in_mActualOutputParameterList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_filewrapperTemplateInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration ;
}

void cPtr_filewrapperTemplateInExpressionForGeneration::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "[@filewrapperTemplateInExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualOutputParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_filewrapperTemplateInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperTemplateInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFilewrapperName, mProperty_mFilewrapperTemplateName, mProperty_mActualOutputParameterList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @filewrapperTemplateInExpressionForGeneration type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration ("filewrapperTemplateInExpressionForGeneration",
                                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_filewrapperTemplateInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperTemplateInExpressionForGeneration GALGAS_filewrapperTemplateInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateInExpressionForGeneration result ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration * p = (const GALGAS_filewrapperTemplateInExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_filewrapperStaticPathInExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperStaticPathInExpressionForGeneration * p = (const cPtr_filewrapperStaticPathInExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperFileIndex.objectCompare (p->mProperty_mFilewrapperFileIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsTextFile.objectCompare (p->mProperty_mIsTextFile) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_filewrapperStaticPathInExpressionForGeneration::objectCompare (const GALGAS_filewrapperStaticPathInExpressionForGeneration & inOperand) const {
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

GALGAS_filewrapperStaticPathInExpressionForGeneration::GALGAS_filewrapperStaticPathInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperStaticPathInExpressionForGeneration GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                                 GALGAS_location::constructor_nowhere (HERE),
                                                                                 GALGAS_string::constructor_default (HERE),
                                                                                 GALGAS_uint::constructor_default (HERE),
                                                                                 GALGAS_bool::constructor_default (HERE)
                                                                                 COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperStaticPathInExpressionForGeneration::GALGAS_filewrapperStaticPathInExpressionForGeneration (const cPtr_filewrapperStaticPathInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperStaticPathInExpressionForGeneration GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                                              const GALGAS_location & inAttribute_mLocation,
                                                                                                                              const GALGAS_string & inAttribute_mFilewrapperName,
                                                                                                                              const GALGAS_uint & inAttribute_mFilewrapperFileIndex,
                                                                                                                              const GALGAS_bool & inAttribute_mIsTextFile
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperStaticPathInExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperFileIndex.isValid () && inAttribute_mIsTextFile.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperStaticPathInExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mFilewrapperName, inAttribute_mFilewrapperFileIndex, inAttribute_mIsTextFile COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_filewrapperStaticPathInExpressionForGeneration::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperStaticPathInExpressionForGeneration * p = (const cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    result = p->mProperty_mFilewrapperName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_filewrapperStaticPathInExpressionForGeneration::getter_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_filewrapperStaticPathInExpressionForGeneration::getter_mFilewrapperFileIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperStaticPathInExpressionForGeneration * p = (const cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    result = p->mProperty_mFilewrapperFileIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_filewrapperStaticPathInExpressionForGeneration::getter_mFilewrapperFileIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperFileIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_filewrapperStaticPathInExpressionForGeneration::getter_mIsTextFile (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperStaticPathInExpressionForGeneration * p = (const cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    result = p->mProperty_mIsTextFile ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_filewrapperStaticPathInExpressionForGeneration::getter_mIsTextFile (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsTextFile ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_filewrapperStaticPathInExpressionForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_filewrapperStaticPathInExpressionForGeneration::setter_setMFilewrapperName (GALGAS_string inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_filewrapperStaticPathInExpressionForGeneration::setter_setMFilewrapperFileIndex (GALGAS_uint inValue
                                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    p->mProperty_mFilewrapperFileIndex = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_filewrapperStaticPathInExpressionForGeneration::setter_setMFilewrapperFileIndex (GALGAS_uint inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFilewrapperFileIndex = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_filewrapperStaticPathInExpressionForGeneration::setter_setMIsTextFile (GALGAS_bool inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    p->mProperty_mIsTextFile = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_filewrapperStaticPathInExpressionForGeneration::setter_setMIsTextFile (GALGAS_bool inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsTextFile = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                       Pointer class for @filewrapperStaticPathInExpressionForGeneration class                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_filewrapperStaticPathInExpressionForGeneration::cPtr_filewrapperStaticPathInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                                          const GALGAS_location & in_mLocation,
                                                                                                          const GALGAS_string & in_mFilewrapperName,
                                                                                                          const GALGAS_uint & in_mFilewrapperFileIndex,
                                                                                                          const GALGAS_bool & in_mIsTextFile
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mFilewrapperName (in_mFilewrapperName),
mProperty_mFilewrapperFileIndex (in_mFilewrapperFileIndex),
mProperty_mIsTextFile (in_mIsTextFile) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_filewrapperStaticPathInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ;
}

void cPtr_filewrapperStaticPathInExpressionForGeneration::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "[@filewrapperStaticPathInExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperFileIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsTextFile.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_filewrapperStaticPathInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperStaticPathInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFilewrapperName, mProperty_mFilewrapperFileIndex, mProperty_mIsTextFile COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @filewrapperStaticPathInExpressionForGeneration type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ("filewrapperStaticPathInExpressionForGeneration",
                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_filewrapperStaticPathInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_filewrapperStaticPathInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperStaticPathInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_filewrapperStaticPathInExpressionForGeneration GALGAS_filewrapperStaticPathInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperStaticPathInExpressionForGeneration result ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration * p = (const GALGAS_filewrapperStaticPathInExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperStaticPathInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperStaticPathInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_getterCallExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getterCallExpressionForGeneration * p = (const cPtr_getterCallExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFieldList.objectCompare (p->mProperty_mFieldList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGetterName.objectCompare (p->mProperty_mGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (p->mProperty_mHasCompilerArgument) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_getterCallExpressionForGeneration::objectCompare (const GALGAS_getterCallExpressionForGeneration & inOperand) const {
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

GALGAS_getterCallExpressionForGeneration::GALGAS_getterCallExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getterCallExpressionForGeneration::GALGAS_getterCallExpressionForGeneration (const cPtr_getterCallExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getterCallExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getterCallExpressionForGeneration GALGAS_getterCallExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                    const GALGAS_methodKind & inAttribute_mKind,
                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                                    const GALGAS_stringlist & inAttribute_mFieldList,
                                                                                                    const GALGAS_string & inAttribute_mGetterName,
                                                                                                    const GALGAS_semanticExpressionListForGeneration & inAttribute_mExpressions,
                                                                                                    const GALGAS_bool & inAttribute_mHasCompilerArgument
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_getterCallExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mKind.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mFieldList.isValid () && inAttribute_mGetterName.isValid () && inAttribute_mExpressions.isValid () && inAttribute_mHasCompilerArgument.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getterCallExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mKind, inAttribute_mReceiverExpression, inAttribute_mFieldList, inAttribute_mGetterName, inAttribute_mExpressions, inAttribute_mHasCompilerArgument COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_methodKind GALGAS_getterCallExpressionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_methodKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionForGeneration * p = (const cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_methodKind cPtr_getterCallExpressionForGeneration::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_getterCallExpressionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionForGeneration * p = (const cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    result = p->mProperty_mReceiverExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_getterCallExpressionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_getterCallExpressionForGeneration::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionForGeneration * p = (const cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    result = p->mProperty_mFieldList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist cPtr_getterCallExpressionForGeneration::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_getterCallExpressionForGeneration::getter_mGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionForGeneration * p = (const cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    result = p->mProperty_mGetterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_getterCallExpressionForGeneration::getter_mGetterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGetterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionListForGeneration GALGAS_getterCallExpressionForGeneration::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionForGeneration * p = (const cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    result = p->mProperty_mExpressions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionListForGeneration cPtr_getterCallExpressionForGeneration::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_getterCallExpressionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_getterCallExpressionForGeneration * p = (const cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_getterCallExpressionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasCompilerArgument ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_getterCallExpressionForGeneration::setter_setMKind (GALGAS_methodKind inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mKind = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_getterCallExpressionForGeneration::setter_setMKind (GALGAS_methodKind inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKind = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_getterCallExpressionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_getterCallExpressionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_getterCallExpressionForGeneration::setter_setMFieldList (GALGAS_stringlist inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mFieldList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_getterCallExpressionForGeneration::setter_setMFieldList (GALGAS_stringlist inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFieldList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_getterCallExpressionForGeneration::setter_setMGetterName (GALGAS_string inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mGetterName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_getterCallExpressionForGeneration::setter_setMGetterName (GALGAS_string inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGetterName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_getterCallExpressionForGeneration::setter_setMExpressions (GALGAS_semanticExpressionListForGeneration inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mExpressions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_getterCallExpressionForGeneration::setter_setMExpressions (GALGAS_semanticExpressionListForGeneration inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpressions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_getterCallExpressionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    p->mProperty_mHasCompilerArgument = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_getterCallExpressionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasCompilerArgument = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @getterCallExpressionForGeneration class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_getterCallExpressionForGeneration::cPtr_getterCallExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                const GALGAS_location & in_mLocation,
                                                                                const GALGAS_methodKind & in_mKind,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                const GALGAS_stringlist & in_mFieldList,
                                                                                const GALGAS_string & in_mGetterName,
                                                                                const GALGAS_semanticExpressionListForGeneration & in_mExpressions,
                                                                                const GALGAS_bool & in_mHasCompilerArgument
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mKind (in_mKind),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mFieldList (in_mFieldList),
mProperty_mGetterName (in_mGetterName),
mProperty_mExpressions (in_mExpressions),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_getterCallExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ;
}

void cPtr_getterCallExpressionForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@getterCallExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFieldList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_getterCallExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getterCallExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mKind, mProperty_mReceiverExpression, mProperty_mFieldList, mProperty_mGetterName, mProperty_mExpressions, mProperty_mHasCompilerArgument COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @getterCallExpressionForGeneration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ("getterCallExpressionForGeneration",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_getterCallExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_getterCallExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getterCallExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getterCallExpressionForGeneration GALGAS_getterCallExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_getterCallExpressionForGeneration result ;
  const GALGAS_getterCallExpressionForGeneration * p = (const GALGAS_getterCallExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getterCallExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterCallExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_constructorExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_constructorExpressionForGeneration * p = (const cPtr_constructorExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstructorType.objectCompare (p->mProperty_mConstructorType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstructorName.objectCompare (p->mProperty_mConstructorName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEffectiveParameterList.objectCompare (p->mProperty_mEffectiveParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (p->mProperty_mHasCompilerArgument) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_constructorExpressionForGeneration::objectCompare (const GALGAS_constructorExpressionForGeneration & inOperand) const {
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

GALGAS_constructorExpressionForGeneration::GALGAS_constructorExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorExpressionForGeneration GALGAS_constructorExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_constructorExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                     GALGAS_location::constructor_nowhere (HERE),
                                                                     GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                     GALGAS_string::constructor_default (HERE),
                                                                     GALGAS_semanticExpressionListForGeneration::constructor_emptyList (HERE),
                                                                     GALGAS_bool::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorExpressionForGeneration::GALGAS_constructorExpressionForGeneration (const cPtr_constructorExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constructorExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorExpressionForGeneration GALGAS_constructorExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mConstructorType,
                                                                                                      const GALGAS_string & inAttribute_mConstructorName,
                                                                                                      const GALGAS_semanticExpressionListForGeneration & inAttribute_mEffectiveParameterList,
                                                                                                      const GALGAS_bool & inAttribute_mHasCompilerArgument
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_constructorExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mConstructorType.isValid () && inAttribute_mConstructorName.isValid () && inAttribute_mEffectiveParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_constructorExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mConstructorType, inAttribute_mConstructorName, inAttribute_mEffectiveParameterList, inAttribute_mHasCompilerArgument COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_constructorExpressionForGeneration::getter_mConstructorType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorExpressionForGeneration * p = (const cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    result = p->mProperty_mConstructorType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_constructorExpressionForGeneration::getter_mConstructorType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstructorType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_constructorExpressionForGeneration::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorExpressionForGeneration * p = (const cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    result = p->mProperty_mConstructorName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_constructorExpressionForGeneration::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstructorName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionListForGeneration GALGAS_constructorExpressionForGeneration::getter_mEffectiveParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorExpressionForGeneration * p = (const cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    result = p->mProperty_mEffectiveParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionListForGeneration cPtr_constructorExpressionForGeneration::getter_mEffectiveParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEffectiveParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_constructorExpressionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorExpressionForGeneration * p = (const cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_constructorExpressionForGeneration::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasCompilerArgument ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_constructorExpressionForGeneration::setter_setMConstructorType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_constructorExpressionForGeneration * p = (cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    p->mProperty_mConstructorType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_constructorExpressionForGeneration::setter_setMConstructorType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mConstructorType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_constructorExpressionForGeneration::setter_setMConstructorName (GALGAS_string inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_constructorExpressionForGeneration * p = (cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    p->mProperty_mConstructorName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_constructorExpressionForGeneration::setter_setMConstructorName (GALGAS_string inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mConstructorName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_constructorExpressionForGeneration::setter_setMEffectiveParameterList (GALGAS_semanticExpressionListForGeneration inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_constructorExpressionForGeneration * p = (cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    p->mProperty_mEffectiveParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_constructorExpressionForGeneration::setter_setMEffectiveParameterList (GALGAS_semanticExpressionListForGeneration inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEffectiveParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_constructorExpressionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_constructorExpressionForGeneration * p = (cPtr_constructorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionForGeneration) ;
    p->mProperty_mHasCompilerArgument = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_constructorExpressionForGeneration::setter_setMHasCompilerArgument (GALGAS_bool inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasCompilerArgument = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @constructorExpressionForGeneration class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_constructorExpressionForGeneration::cPtr_constructorExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mConstructorType,
                                                                                  const GALGAS_string & in_mConstructorName,
                                                                                  const GALGAS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                                                  const GALGAS_bool & in_mHasCompilerArgument
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mConstructorType (in_mConstructorType),
mProperty_mConstructorName (in_mConstructorName),
mProperty_mEffectiveParameterList (in_mEffectiveParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_constructorExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorExpressionForGeneration ;
}

void cPtr_constructorExpressionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@constructorExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstructorType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstructorName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEffectiveParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_constructorExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_constructorExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mConstructorType, mProperty_mConstructorName, mProperty_mEffectiveParameterList, mProperty_mHasCompilerArgument COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @constructorExpressionForGeneration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorExpressionForGeneration ("constructorExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_constructorExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_constructorExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorExpressionForGeneration GALGAS_constructorExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_constructorExpressionForGeneration result ;
  const GALGAS_constructorExpressionForGeneration * p = (const GALGAS_constructorExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_defaultConstructorExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_defaultConstructorExpressionForGeneration * p = (const cPtr_defaultConstructorExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_defaultConstructorExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_defaultConstructorExpressionForGeneration::objectCompare (const GALGAS_defaultConstructorExpressionForGeneration & inOperand) const {
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

GALGAS_defaultConstructorExpressionForGeneration::GALGAS_defaultConstructorExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultConstructorExpressionForGeneration GALGAS_defaultConstructorExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_defaultConstructorExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                            GALGAS_location::constructor_nowhere (HERE)
                                                                            COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultConstructorExpressionForGeneration::GALGAS_defaultConstructorExpressionForGeneration (const cPtr_defaultConstructorExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_defaultConstructorExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultConstructorExpressionForGeneration GALGAS_defaultConstructorExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                                    const GALGAS_location & inAttribute_mLocation
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_defaultConstructorExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_defaultConstructorExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         Pointer class for @defaultConstructorExpressionForGeneration class                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_defaultConstructorExpressionForGeneration::cPtr_defaultConstructorExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                                const GALGAS_location & in_mLocation
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_defaultConstructorExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration ;
}

void cPtr_defaultConstructorExpressionForGeneration::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@defaultConstructorExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_defaultConstructorExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_defaultConstructorExpressionForGeneration (mProperty_mResultType, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @defaultConstructorExpressionForGeneration type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration ("defaultConstructorExpressionForGeneration",
                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_defaultConstructorExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_defaultConstructorExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultConstructorExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_defaultConstructorExpressionForGeneration GALGAS_defaultConstructorExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_defaultConstructorExpressionForGeneration result ;
  const GALGAS_defaultConstructorExpressionForGeneration * p = (const GALGAS_defaultConstructorExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_defaultConstructorExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("defaultConstructorExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_functionCallExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionCallExpressionForGeneration * p = (const cPtr_functionCallExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionCallExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_functionCallExpressionForGeneration::objectCompare (const GALGAS_functionCallExpressionForGeneration & inOperand) const {
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

GALGAS_functionCallExpressionForGeneration::GALGAS_functionCallExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallExpressionForGeneration GALGAS_functionCallExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionCallExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                      GALGAS_location::constructor_nowhere (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_semanticExpressionListForGeneration::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallExpressionForGeneration::GALGAS_functionCallExpressionForGeneration (const cPtr_functionCallExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionCallExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallExpressionForGeneration GALGAS_functionCallExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                        const GALGAS_location & inAttribute_mLocation,
                                                                                                        const GALGAS_string & inAttribute_mFunctionName,
                                                                                                        const GALGAS_semanticExpressionListForGeneration & inAttribute_mExpressions
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_functionCallExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mExpressions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionCallExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mFunctionName, inAttribute_mExpressions COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_functionCallExpressionForGeneration::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionCallExpressionForGeneration * p = (const cPtr_functionCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionForGeneration) ;
    result = p->mProperty_mFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_functionCallExpressionForGeneration::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionListForGeneration GALGAS_functionCallExpressionForGeneration::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionCallExpressionForGeneration * p = (const cPtr_functionCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionForGeneration) ;
    result = p->mProperty_mExpressions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionListForGeneration cPtr_functionCallExpressionForGeneration::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionCallExpressionForGeneration::setter_setMFunctionName (GALGAS_string inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionCallExpressionForGeneration * p = (cPtr_functionCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionForGeneration) ;
    p->mProperty_mFunctionName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_functionCallExpressionForGeneration::setter_setMFunctionName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFunctionName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_functionCallExpressionForGeneration::setter_setMExpressions (GALGAS_semanticExpressionListForGeneration inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_functionCallExpressionForGeneration * p = (cPtr_functionCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionForGeneration) ;
    p->mProperty_mExpressions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_functionCallExpressionForGeneration::setter_setMExpressions (GALGAS_semanticExpressionListForGeneration inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpressions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @functionCallExpressionForGeneration class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_functionCallExpressionForGeneration::cPtr_functionCallExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                    const GALGAS_location & in_mLocation,
                                                                                    const GALGAS_string & in_mFunctionName,
                                                                                    const GALGAS_semanticExpressionListForGeneration & in_mExpressions
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mExpressions (in_mExpressions) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_functionCallExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ;
}

void cPtr_functionCallExpressionForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@functionCallExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_functionCallExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionCallExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFunctionName, mProperty_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @functionCallExpressionForGeneration type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ("functionCallExpressionForGeneration",
                                                            & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_functionCallExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_functionCallExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionCallExpressionForGeneration GALGAS_functionCallExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_functionCallExpressionForGeneration result ;
  const GALGAS_functionCallExpressionForGeneration * p = (const GALGAS_functionCallExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionCallExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_literalTypeInExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalTypeInExpressionForGeneration * p = (const cPtr_literalTypeInExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalTypeInExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLiteralType.objectCompare (p->mProperty_mLiteralType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_literalTypeInExpressionForGeneration::objectCompare (const GALGAS_literalTypeInExpressionForGeneration & inOperand) const {
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

GALGAS_literalTypeInExpressionForGeneration::GALGAS_literalTypeInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalTypeInExpressionForGeneration GALGAS_literalTypeInExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalTypeInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_location::constructor_nowhere (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)
                                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalTypeInExpressionForGeneration::GALGAS_literalTypeInExpressionForGeneration (const cPtr_literalTypeInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalTypeInExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalTypeInExpressionForGeneration GALGAS_literalTypeInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mLiteralType
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalTypeInExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLiteralType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalTypeInExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLiteralType COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_literalTypeInExpressionForGeneration::getter_mLiteralType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalTypeInExpressionForGeneration * p = (const cPtr_literalTypeInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalTypeInExpressionForGeneration) ;
    result = p->mProperty_mLiteralType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_literalTypeInExpressionForGeneration::getter_mLiteralType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_literalTypeInExpressionForGeneration::setter_setMLiteralType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_literalTypeInExpressionForGeneration * p = (cPtr_literalTypeInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalTypeInExpressionForGeneration) ;
    p->mProperty_mLiteralType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_literalTypeInExpressionForGeneration::setter_setMLiteralType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLiteralType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @literalTypeInExpressionForGeneration class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_literalTypeInExpressionForGeneration::cPtr_literalTypeInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mLiteralType
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLiteralType (in_mLiteralType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_literalTypeInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration ;
}

void cPtr_literalTypeInExpressionForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@literalTypeInExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLiteralType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_literalTypeInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalTypeInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLiteralType COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @literalTypeInExpressionForGeneration type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration ("literalTypeInExpressionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_literalTypeInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_literalTypeInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalTypeInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalTypeInExpressionForGeneration GALGAS_literalTypeInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalTypeInExpressionForGeneration result ;
  const GALGAS_literalTypeInExpressionForGeneration * p = (const GALGAS_literalTypeInExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalTypeInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalTypeInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_expressionCollectionValueForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_expressionCollectionValueForGeneration * p = (const cPtr_expressionCollectionValueForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_expressionCollectionValueForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpressionLocation.objectCompare (p->mProperty_mExpressionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_expressionCollectionValueForGeneration::objectCompare (const GALGAS_expressionCollectionValueForGeneration & inOperand) const {
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

GALGAS_expressionCollectionValueForGeneration::GALGAS_expressionCollectionValueForGeneration (void) :
GALGAS_abstractCollectionValueElementForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionCollectionValueForGeneration::GALGAS_expressionCollectionValueForGeneration (const cPtr_expressionCollectionValueForGeneration * inSourcePtr) :
GALGAS_abstractCollectionValueElementForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionCollectionValueForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionCollectionValueForGeneration GALGAS_expressionCollectionValueForGeneration::constructor_new (const GALGAS_location & inAttribute_mExpressionLocation,
                                                                                                              const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_expressionCollectionValueForGeneration result ;
  if (inAttribute_mExpressionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_expressionCollectionValueForGeneration (inAttribute_mExpressionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_expressionCollectionValueForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionCollectionValueForGeneration * p = (const cPtr_expressionCollectionValueForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionValueForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_expressionCollectionValueForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_expressionCollectionValueForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_expressionCollectionValueForGeneration * p = (cPtr_expressionCollectionValueForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionValueForGeneration) ;
    p->mProperty_mExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_expressionCollectionValueForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @expressionCollectionValueForGeneration class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_expressionCollectionValueForGeneration::cPtr_expressionCollectionValueForGeneration (const GALGAS_location & in_mExpressionLocation,
                                                                                          const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractCollectionValueElementForGeneration (in_mExpressionLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_expressionCollectionValueForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration ;
}

void cPtr_expressionCollectionValueForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@expressionCollectionValueForGeneration:" ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_expressionCollectionValueForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_expressionCollectionValueForGeneration (mProperty_mExpressionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @expressionCollectionValueForGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration ("expressionCollectionValueForGeneration",
                                                               & kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_expressionCollectionValueForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_expressionCollectionValueForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionCollectionValueForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionCollectionValueForGeneration GALGAS_expressionCollectionValueForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_expressionCollectionValueForGeneration result ;
  const GALGAS_expressionCollectionValueForGeneration * p = (const GALGAS_expressionCollectionValueForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionCollectionValueForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionCollectionValueForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_expressionCollectionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_expressionCollectionForGeneration * p = (const cPtr_expressionCollectionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_expressionCollectionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementList.objectCompare (p->mProperty_mElementList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_expressionCollectionForGeneration::objectCompare (const GALGAS_expressionCollectionForGeneration & inOperand) const {
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

GALGAS_expressionCollectionForGeneration::GALGAS_expressionCollectionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionCollectionForGeneration GALGAS_expressionCollectionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_expressionCollectionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                    GALGAS_location::constructor_nowhere (HERE),
                                                                    GALGAS_collectionValueElementListForGeneration::constructor_emptyList (HERE)
                                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionCollectionForGeneration::GALGAS_expressionCollectionForGeneration (const cPtr_expressionCollectionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionCollectionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionCollectionForGeneration GALGAS_expressionCollectionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                    const GALGAS_collectionValueElementListForGeneration & inAttribute_mElementList
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_expressionCollectionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mElementList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_expressionCollectionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mElementList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueElementListForGeneration GALGAS_expressionCollectionForGeneration::getter_mElementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionCollectionForGeneration * p = (const cPtr_expressionCollectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionForGeneration) ;
    result = p->mProperty_mElementList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_collectionValueElementListForGeneration cPtr_expressionCollectionForGeneration::getter_mElementList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_expressionCollectionForGeneration::setter_setMElementList (GALGAS_collectionValueElementListForGeneration inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_expressionCollectionForGeneration * p = (cPtr_expressionCollectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionForGeneration) ;
    p->mProperty_mElementList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_expressionCollectionForGeneration::setter_setMElementList (GALGAS_collectionValueElementListForGeneration inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElementList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @expressionCollectionForGeneration class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_expressionCollectionForGeneration::cPtr_expressionCollectionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                const GALGAS_location & in_mLocation,
                                                                                const GALGAS_collectionValueElementListForGeneration & in_mElementList
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mElementList (in_mElementList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_expressionCollectionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionForGeneration ;
}

void cPtr_expressionCollectionForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@expressionCollectionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_expressionCollectionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_expressionCollectionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mElementList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @expressionCollectionForGeneration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionCollectionForGeneration ("expressionCollectionForGeneration",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_expressionCollectionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_expressionCollectionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionCollectionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionCollectionForGeneration GALGAS_expressionCollectionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_expressionCollectionForGeneration result ;
  const GALGAS_expressionCollectionForGeneration * p = (const GALGAS_expressionCollectionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionCollectionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionCollectionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_selfInExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfInExpressionForGeneration * p = (const cPtr_selfInExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfInExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSelfCppName.objectCompare (p->mProperty_mSelfCppName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_selfInExpressionForGeneration::objectCompare (const GALGAS_selfInExpressionForGeneration & inOperand) const {
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

GALGAS_selfInExpressionForGeneration::GALGAS_selfInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfInExpressionForGeneration GALGAS_selfInExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_selfInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_string::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfInExpressionForGeneration::GALGAS_selfInExpressionForGeneration (const cPtr_selfInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfInExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfInExpressionForGeneration GALGAS_selfInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                            const GALGAS_location & inAttribute_mLocation,
                                                                                            const GALGAS_string & inAttribute_mSelfCppName
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selfInExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mSelfCppName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfInExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mSelfCppName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selfInExpressionForGeneration::getter_mSelfCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfInExpressionForGeneration * p = (const cPtr_selfInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfInExpressionForGeneration) ;
    result = p->mProperty_mSelfCppName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_selfInExpressionForGeneration::getter_mSelfCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfCppName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selfInExpressionForGeneration::setter_setMSelfCppName (GALGAS_string inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selfInExpressionForGeneration * p = (cPtr_selfInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfInExpressionForGeneration) ;
    p->mProperty_mSelfCppName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_selfInExpressionForGeneration::setter_setMSelfCppName (GALGAS_string inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSelfCppName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @selfInExpressionForGeneration class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_selfInExpressionForGeneration::cPtr_selfInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                        const GALGAS_location & in_mLocation,
                                                                        const GALGAS_string & in_mSelfCppName
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mSelfCppName (in_mSelfCppName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_selfInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionForGeneration ;
}

void cPtr_selfInExpressionForGeneration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@selfInExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSelfCppName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_selfInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mSelfCppName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @selfInExpressionForGeneration type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfInExpressionForGeneration ("selfInExpressionForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_selfInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_selfInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selfInExpressionForGeneration GALGAS_selfInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfInExpressionForGeneration result ;
  const GALGAS_selfInExpressionForGeneration * p = (const GALGAS_selfInExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_structPropertyAccessExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structPropertyAccessExpressionForGeneration * p = (const cPtr_structPropertyAccessExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structPropertyAccessExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructFieldName.objectCompare (p->mProperty_mStructFieldName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_structPropertyAccessExpressionForGeneration::objectCompare (const GALGAS_structPropertyAccessExpressionForGeneration & inOperand) const {
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

GALGAS_structPropertyAccessExpressionForGeneration::GALGAS_structPropertyAccessExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structPropertyAccessExpressionForGeneration::GALGAS_structPropertyAccessExpressionForGeneration (const cPtr_structPropertyAccessExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structPropertyAccessExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structPropertyAccessExpressionForGeneration GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                                        const GALGAS_location & inAttribute_mLocation,
                                                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression,
                                                                                                                        const GALGAS_string & inAttribute_mStructFieldName
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_structPropertyAccessExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid () && inAttribute_mStructFieldName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structPropertyAccessExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression, inAttribute_mStructFieldName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_structPropertyAccessExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_structPropertyAccessExpressionForGeneration * p = (const cPtr_structPropertyAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_structPropertyAccessExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_structPropertyAccessExpressionForGeneration::getter_mStructFieldName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_structPropertyAccessExpressionForGeneration * p = (const cPtr_structPropertyAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionForGeneration) ;
    result = p->mProperty_mStructFieldName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_structPropertyAccessExpressionForGeneration::getter_mStructFieldName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructFieldName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structPropertyAccessExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structPropertyAccessExpressionForGeneration * p = (cPtr_structPropertyAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionForGeneration) ;
    p->mProperty_mExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_structPropertyAccessExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structPropertyAccessExpressionForGeneration::setter_setMStructFieldName (GALGAS_string inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structPropertyAccessExpressionForGeneration * p = (cPtr_structPropertyAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionForGeneration) ;
    p->mProperty_mStructFieldName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_structPropertyAccessExpressionForGeneration::setter_setMStructFieldName (GALGAS_string inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructFieldName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                        Pointer class for @structPropertyAccessExpressionForGeneration class                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_structPropertyAccessExpressionForGeneration::cPtr_structPropertyAccessExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                                    const GALGAS_location & in_mLocation,
                                                                                                    const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                                    const GALGAS_string & in_mStructFieldName
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mExpression (in_mExpression),
mProperty_mStructFieldName (in_mStructFieldName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_structPropertyAccessExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionForGeneration ;
}

void cPtr_structPropertyAccessExpressionForGeneration::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@structPropertyAccessExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructFieldName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_structPropertyAccessExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structPropertyAccessExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression, mProperty_mStructFieldName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @structPropertyAccessExpressionForGeneration type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structPropertyAccessExpressionForGeneration ("structPropertyAccessExpressionForGeneration",
                                                                    & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_structPropertyAccessExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_structPropertyAccessExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structPropertyAccessExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structPropertyAccessExpressionForGeneration GALGAS_structPropertyAccessExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_structPropertyAccessExpressionForGeneration result ;
  const GALGAS_structPropertyAccessExpressionForGeneration * p = (const GALGAS_structPropertyAccessExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structPropertyAccessExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structPropertyAccessExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_notExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_notExpressionForGeneration * p = (const cPtr_notExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_notExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_notExpressionForGeneration::objectCompare (const GALGAS_notExpressionForGeneration & inOperand) const {
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

GALGAS_notExpressionForGeneration::GALGAS_notExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_notExpressionForGeneration::GALGAS_notExpressionForGeneration (const cPtr_notExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_notExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_notExpressionForGeneration GALGAS_notExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_notExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_notExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_notExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_notExpressionForGeneration * p = (const cPtr_notExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_notExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_notExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_notExpressionForGeneration * p = (cPtr_notExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionForGeneration) ;
    p->mProperty_mExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_notExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @notExpressionForGeneration class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_notExpressionForGeneration::cPtr_notExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                  const GALGAS_location & in_mLocation,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_notExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionForGeneration ;
}

void cPtr_notExpressionForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@notExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_notExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_notExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @notExpressionForGeneration type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_notExpressionForGeneration ("notExpressionForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_notExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_notExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_notExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_notExpressionForGeneration GALGAS_notExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_notExpressionForGeneration result ;
  const GALGAS_notExpressionForGeneration * p = (const GALGAS_notExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_notExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_tildeExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_tildeExpressionForGeneration * p = (const cPtr_tildeExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_tildeExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_tildeExpressionForGeneration::objectCompare (const GALGAS_tildeExpressionForGeneration & inOperand) const {
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

GALGAS_tildeExpressionForGeneration::GALGAS_tildeExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tildeExpressionForGeneration::GALGAS_tildeExpressionForGeneration (const cPtr_tildeExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tildeExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tildeExpressionForGeneration GALGAS_tildeExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                          const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tildeExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_tildeExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_tildeExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_tildeExpressionForGeneration * p = (const cPtr_tildeExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_tildeExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tildeExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tildeExpressionForGeneration * p = (cPtr_tildeExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionForGeneration) ;
    p->mProperty_mExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_tildeExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @tildeExpressionForGeneration class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_tildeExpressionForGeneration::cPtr_tildeExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                      const GALGAS_location & in_mLocation,
                                                                      const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_tildeExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionForGeneration ;
}

void cPtr_tildeExpressionForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@tildeExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_tildeExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_tildeExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @tildeExpressionForGeneration type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tildeExpressionForGeneration ("tildeExpressionForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tildeExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tildeExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tildeExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tildeExpressionForGeneration GALGAS_tildeExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_tildeExpressionForGeneration result ;
  const GALGAS_tildeExpressionForGeneration * p = (const GALGAS_tildeExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tildeExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tildeExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_unaryWrappingMinusExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_unaryWrappingMinusExpressionForGeneration * p = (const cPtr_unaryWrappingMinusExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_unaryWrappingMinusExpressionForGeneration::objectCompare (const GALGAS_unaryWrappingMinusExpressionForGeneration & inOperand) const {
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

GALGAS_unaryWrappingMinusExpressionForGeneration::GALGAS_unaryWrappingMinusExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unaryWrappingMinusExpressionForGeneration::GALGAS_unaryWrappingMinusExpressionForGeneration (const cPtr_unaryWrappingMinusExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryWrappingMinusExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unaryWrappingMinusExpressionForGeneration GALGAS_unaryWrappingMinusExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unaryWrappingMinusExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unaryWrappingMinusExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_unaryWrappingMinusExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_unaryWrappingMinusExpressionForGeneration * p = (const cPtr_unaryWrappingMinusExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_unaryWrappingMinusExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unaryWrappingMinusExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_unaryWrappingMinusExpressionForGeneration * p = (cPtr_unaryWrappingMinusExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionForGeneration) ;
    p->mProperty_mExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_unaryWrappingMinusExpressionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         Pointer class for @unaryWrappingMinusExpressionForGeneration class                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_unaryWrappingMinusExpressionForGeneration::cPtr_unaryWrappingMinusExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                                const GALGAS_location & in_mLocation,
                                                                                                const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_unaryWrappingMinusExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ;
}

void cPtr_unaryWrappingMinusExpressionForGeneration::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@unaryWrappingMinusExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_unaryWrappingMinusExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_unaryWrappingMinusExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @unaryWrappingMinusExpressionForGeneration type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ("unaryWrappingMinusExpressionForGeneration",
                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_unaryWrappingMinusExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_unaryWrappingMinusExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryWrappingMinusExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unaryWrappingMinusExpressionForGeneration GALGAS_unaryWrappingMinusExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_unaryWrappingMinusExpressionForGeneration result ;
  const GALGAS_unaryWrappingMinusExpressionForGeneration * p = (const GALGAS_unaryWrappingMinusExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unaryWrappingMinusExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryWrappingMinusExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_orShortExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orShortExpressionForGeneration * p = (const cPtr_orShortExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orShortExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_orShortExpressionForGeneration::objectCompare (const GALGAS_orShortExpressionForGeneration & inOperand) const {
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

GALGAS_orShortExpressionForGeneration::GALGAS_orShortExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orShortExpressionForGeneration::GALGAS_orShortExpressionForGeneration (const cPtr_orShortExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orShortExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orShortExpressionForGeneration GALGAS_orShortExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                              const GALGAS_location & inAttribute_mLocation,
                                                                                              const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                              const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_orShortExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orShortExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_orShortExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_orShortExpressionForGeneration * p = (const cPtr_orShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_orShortExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_orShortExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_orShortExpressionForGeneration * p = (const cPtr_orShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_orShortExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_orShortExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orShortExpressionForGeneration * p = (cPtr_orShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_orShortExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_orShortExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orShortExpressionForGeneration * p = (cPtr_orShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_orShortExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @orShortExpressionForGeneration class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_orShortExpressionForGeneration::cPtr_orShortExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                          const GALGAS_location & in_mLocation,
                                                                          const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                          const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_orShortExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionForGeneration ;
}

void cPtr_orShortExpressionForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@orShortExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_orShortExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orShortExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @orShortExpressionForGeneration type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orShortExpressionForGeneration ("orShortExpressionForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_orShortExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_orShortExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orShortExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orShortExpressionForGeneration GALGAS_orShortExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_orShortExpressionForGeneration result ;
  const GALGAS_orShortExpressionForGeneration * p = (const GALGAS_orShortExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orShortExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orShortExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_orExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orExpressionForGeneration * p = (const cPtr_orExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_orExpressionForGeneration::objectCompare (const GALGAS_orExpressionForGeneration & inOperand) const {
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

GALGAS_orExpressionForGeneration::GALGAS_orExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orExpressionForGeneration::GALGAS_orExpressionForGeneration (const cPtr_orExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orExpressionForGeneration GALGAS_orExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_orExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_orExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_orExpressionForGeneration * p = (const cPtr_orExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_orExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_orExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_orExpressionForGeneration * p = (const cPtr_orExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_orExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_orExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orExpressionForGeneration * p = (cPtr_orExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_orExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_orExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orExpressionForGeneration * p = (cPtr_orExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_orExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @orExpressionForGeneration class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_orExpressionForGeneration::cPtr_orExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                const GALGAS_location & in_mLocation,
                                                                const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_orExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpressionForGeneration ;
}

void cPtr_orExpressionForGeneration::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@orExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_orExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @orExpressionForGeneration type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orExpressionForGeneration ("orExpressionForGeneration",
                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_orExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_orExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orExpressionForGeneration GALGAS_orExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_orExpressionForGeneration result ;
  const GALGAS_orExpressionForGeneration * p = (const GALGAS_orExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_xorExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xorExpressionForGeneration * p = (const cPtr_xorExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xorExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_xorExpressionForGeneration::objectCompare (const GALGAS_xorExpressionForGeneration & inOperand) const {
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

GALGAS_xorExpressionForGeneration::GALGAS_xorExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_xorExpressionForGeneration::GALGAS_xorExpressionForGeneration (const cPtr_xorExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_xorExpressionForGeneration GALGAS_xorExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_xorExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_xorExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorExpressionForGeneration * p = (const cPtr_xorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_xorExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_xorExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorExpressionForGeneration * p = (const cPtr_xorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_xorExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_xorExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xorExpressionForGeneration * p = (cPtr_xorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_xorExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_xorExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xorExpressionForGeneration * p = (cPtr_xorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_xorExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @xorExpressionForGeneration class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_xorExpressionForGeneration::cPtr_xorExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                  const GALGAS_location & in_mLocation,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_xorExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpressionForGeneration ;
}

void cPtr_xorExpressionForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@xorExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_xorExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xorExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @xorExpressionForGeneration type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorExpressionForGeneration ("xorExpressionForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_xorExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_xorExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_xorExpressionForGeneration GALGAS_xorExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_xorExpressionForGeneration result ;
  const GALGAS_xorExpressionForGeneration * p = (const GALGAS_xorExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xorExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_openedSliceExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_openedSliceExpressionForGeneration * p = (const cPtr_openedSliceExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_openedSliceExpressionForGeneration::objectCompare (const GALGAS_openedSliceExpressionForGeneration & inOperand) const {
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

GALGAS_openedSliceExpressionForGeneration::GALGAS_openedSliceExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_openedSliceExpressionForGeneration::GALGAS_openedSliceExpressionForGeneration (const cPtr_openedSliceExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_openedSliceExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_openedSliceExpressionForGeneration GALGAS_openedSliceExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_openedSliceExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_openedSliceExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_openedSliceExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_openedSliceExpressionForGeneration * p = (const cPtr_openedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_openedSliceExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_openedSliceExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_openedSliceExpressionForGeneration * p = (const cPtr_openedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_openedSliceExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_openedSliceExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_openedSliceExpressionForGeneration * p = (cPtr_openedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_openedSliceExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_openedSliceExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_openedSliceExpressionForGeneration * p = (cPtr_openedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_openedSliceExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @openedSliceExpressionForGeneration class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_openedSliceExpressionForGeneration::cPtr_openedSliceExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_openedSliceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ;
}

void cPtr_openedSliceExpressionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@openedSliceExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_openedSliceExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_openedSliceExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @openedSliceExpressionForGeneration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ("openedSliceExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_openedSliceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_openedSliceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_openedSliceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_openedSliceExpressionForGeneration GALGAS_openedSliceExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_openedSliceExpressionForGeneration result ;
  const GALGAS_openedSliceExpressionForGeneration * p = (const GALGAS_openedSliceExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_openedSliceExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedSliceExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_closedSliceExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_closedSliceExpressionForGeneration * p = (const cPtr_closedSliceExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_closedSliceExpressionForGeneration::objectCompare (const GALGAS_closedSliceExpressionForGeneration & inOperand) const {
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

GALGAS_closedSliceExpressionForGeneration::GALGAS_closedSliceExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_closedSliceExpressionForGeneration::GALGAS_closedSliceExpressionForGeneration (const cPtr_closedSliceExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_closedSliceExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_closedSliceExpressionForGeneration GALGAS_closedSliceExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_closedSliceExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_closedSliceExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_closedSliceExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_closedSliceExpressionForGeneration * p = (const cPtr_closedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_closedSliceExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_closedSliceExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_closedSliceExpressionForGeneration * p = (const cPtr_closedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_closedSliceExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_closedSliceExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_closedSliceExpressionForGeneration * p = (cPtr_closedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_closedSliceExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_closedSliceExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_closedSliceExpressionForGeneration * p = (cPtr_closedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_closedSliceExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @closedSliceExpressionForGeneration class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_closedSliceExpressionForGeneration::cPtr_closedSliceExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_closedSliceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ;
}

void cPtr_closedSliceExpressionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@closedSliceExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_closedSliceExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_closedSliceExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @closedSliceExpressionForGeneration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ("closedSliceExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_closedSliceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_closedSliceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_closedSliceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_closedSliceExpressionForGeneration GALGAS_closedSliceExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_closedSliceExpressionForGeneration result ;
  const GALGAS_closedSliceExpressionForGeneration * p = (const GALGAS_closedSliceExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_closedSliceExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("closedSliceExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_andExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andExpressionForGeneration * p = (const cPtr_andExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_andExpressionForGeneration::objectCompare (const GALGAS_andExpressionForGeneration & inOperand) const {
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

GALGAS_andExpressionForGeneration::GALGAS_andExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andExpressionForGeneration::GALGAS_andExpressionForGeneration (const cPtr_andExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andExpressionForGeneration GALGAS_andExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_andExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_andExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_andExpressionForGeneration * p = (const cPtr_andExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_andExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_andExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_andExpressionForGeneration * p = (const cPtr_andExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_andExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_andExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andExpressionForGeneration * p = (cPtr_andExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_andExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_andExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andExpressionForGeneration * p = (cPtr_andExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_andExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @andExpressionForGeneration class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_andExpressionForGeneration::cPtr_andExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                  const GALGAS_location & in_mLocation,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_andExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionForGeneration ;
}

void cPtr_andExpressionForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@andExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_andExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @andExpressionForGeneration type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andExpressionForGeneration ("andExpressionForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_andExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_andExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andExpressionForGeneration GALGAS_andExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_andExpressionForGeneration result ;
  const GALGAS_andExpressionForGeneration * p = (const GALGAS_andExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_andShortExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andShortExpressionForGeneration * p = (const cPtr_andShortExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_andShortExpressionForGeneration::objectCompare (const GALGAS_andShortExpressionForGeneration & inOperand) const {
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

GALGAS_andShortExpressionForGeneration::GALGAS_andShortExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andShortExpressionForGeneration::GALGAS_andShortExpressionForGeneration (const cPtr_andShortExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andShortExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andShortExpressionForGeneration GALGAS_andShortExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                const GALGAS_location & inAttribute_mLocation,
                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_andShortExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andShortExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_andShortExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_andShortExpressionForGeneration * p = (const cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_andShortExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_andShortExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_andShortExpressionForGeneration * p = (const cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_andShortExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_andShortExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andShortExpressionForGeneration * p = (cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_andShortExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_andShortExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andShortExpressionForGeneration * p = (cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_andShortExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @andShortExpressionForGeneration class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_andShortExpressionForGeneration::cPtr_andShortExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                            const GALGAS_location & in_mLocation,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_andShortExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionForGeneration ;
}

void cPtr_andShortExpressionForGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@andShortExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_andShortExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andShortExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @andShortExpressionForGeneration type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andShortExpressionForGeneration ("andShortExpressionForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_andShortExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_andShortExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andShortExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andShortExpressionForGeneration GALGAS_andShortExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_andShortExpressionForGeneration result ;
  const GALGAS_andShortExpressionForGeneration * p = (const GALGAS_andShortExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andShortExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andShortExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_multiplicationExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_multiplicationExpressionForGeneration * p = (const cPtr_multiplicationExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_multiplicationExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_multiplicationExpressionForGeneration::objectCompare (const GALGAS_multiplicationExpressionForGeneration & inOperand) const {
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

GALGAS_multiplicationExpressionForGeneration::GALGAS_multiplicationExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multiplicationExpressionForGeneration::GALGAS_multiplicationExpressionForGeneration (const cPtr_multiplicationExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_multiplicationExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multiplicationExpressionForGeneration GALGAS_multiplicationExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                            const GALGAS_location & inAttribute_mLocation,
                                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_multiplicationExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_multiplicationExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_multiplicationExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_multiplicationExpressionForGeneration * p = (const cPtr_multiplicationExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_multiplicationExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_multiplicationExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_multiplicationExpressionForGeneration * p = (const cPtr_multiplicationExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_multiplicationExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multiplicationExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_multiplicationExpressionForGeneration * p = (cPtr_multiplicationExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_multiplicationExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multiplicationExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_multiplicationExpressionForGeneration * p = (cPtr_multiplicationExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_multiplicationExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @multiplicationExpressionForGeneration class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_multiplicationExpressionForGeneration::cPtr_multiplicationExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                        const GALGAS_location & in_mLocation,
                                                                                        const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                        const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_multiplicationExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionForGeneration ;
}

void cPtr_multiplicationExpressionForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@multiplicationExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_multiplicationExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_multiplicationExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @multiplicationExpressionForGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multiplicationExpressionForGeneration ("multiplicationExpressionForGeneration",
                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_multiplicationExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_multiplicationExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multiplicationExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multiplicationExpressionForGeneration GALGAS_multiplicationExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_multiplicationExpressionForGeneration result ;
  const GALGAS_multiplicationExpressionForGeneration * p = (const GALGAS_multiplicationExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multiplicationExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multiplicationExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_multiplicationExpressionNoOverflowForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_multiplicationExpressionNoOverflowForGeneration * p = (const cPtr_multiplicationExpressionNoOverflowForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_multiplicationExpressionNoOverflowForGeneration::objectCompare (const GALGAS_multiplicationExpressionNoOverflowForGeneration & inOperand) const {
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

GALGAS_multiplicationExpressionNoOverflowForGeneration::GALGAS_multiplicationExpressionNoOverflowForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multiplicationExpressionNoOverflowForGeneration::GALGAS_multiplicationExpressionNoOverflowForGeneration (const cPtr_multiplicationExpressionNoOverflowForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_multiplicationExpressionNoOverflowForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multiplicationExpressionNoOverflowForGeneration GALGAS_multiplicationExpressionNoOverflowForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                                                const GALGAS_location & inAttribute_mLocation,
                                                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_multiplicationExpressionNoOverflowForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_multiplicationExpressionNoOverflowForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_multiplicationExpressionNoOverflowForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_multiplicationExpressionNoOverflowForGeneration * p = (const cPtr_multiplicationExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_multiplicationExpressionNoOverflowForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_multiplicationExpressionNoOverflowForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_multiplicationExpressionNoOverflowForGeneration * p = (const cPtr_multiplicationExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_multiplicationExpressionNoOverflowForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multiplicationExpressionNoOverflowForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_multiplicationExpressionNoOverflowForGeneration * p = (cPtr_multiplicationExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_multiplicationExpressionNoOverflowForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multiplicationExpressionNoOverflowForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_multiplicationExpressionNoOverflowForGeneration * p = (cPtr_multiplicationExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_multiplicationExpressionNoOverflowForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      Pointer class for @multiplicationExpressionNoOverflowForGeneration class                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_multiplicationExpressionNoOverflowForGeneration::cPtr_multiplicationExpressionNoOverflowForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                                            const GALGAS_location & in_mLocation,
                                                                                                            const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                                            const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_multiplicationExpressionNoOverflowForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowForGeneration ;
}

void cPtr_multiplicationExpressionNoOverflowForGeneration::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "[@multiplicationExpressionNoOverflowForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_multiplicationExpressionNoOverflowForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_multiplicationExpressionNoOverflowForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @multiplicationExpressionNoOverflowForGeneration type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowForGeneration ("multiplicationExpressionNoOverflowForGeneration",
                                                                        & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_multiplicationExpressionNoOverflowForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_multiplicationExpressionNoOverflowForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multiplicationExpressionNoOverflowForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multiplicationExpressionNoOverflowForGeneration GALGAS_multiplicationExpressionNoOverflowForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_multiplicationExpressionNoOverflowForGeneration result ;
  const GALGAS_multiplicationExpressionNoOverflowForGeneration * p = (const GALGAS_multiplicationExpressionNoOverflowForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multiplicationExpressionNoOverflowForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multiplicationExpressionNoOverflowForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_divisionExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_divisionExpressionForGeneration * p = (const cPtr_divisionExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_divisionExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_divisionExpressionForGeneration::objectCompare (const GALGAS_divisionExpressionForGeneration & inOperand) const {
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

GALGAS_divisionExpressionForGeneration::GALGAS_divisionExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_divisionExpressionForGeneration::GALGAS_divisionExpressionForGeneration (const cPtr_divisionExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_divisionExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_divisionExpressionForGeneration GALGAS_divisionExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                const GALGAS_location & inAttribute_mLocation,
                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_divisionExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_divisionExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_divisionExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_divisionExpressionForGeneration * p = (const cPtr_divisionExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_divisionExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_divisionExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_divisionExpressionForGeneration * p = (const cPtr_divisionExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_divisionExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_divisionExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_divisionExpressionForGeneration * p = (cPtr_divisionExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_divisionExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_divisionExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_divisionExpressionForGeneration * p = (cPtr_divisionExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_divisionExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @divisionExpressionForGeneration class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_divisionExpressionForGeneration::cPtr_divisionExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                            const GALGAS_location & in_mLocation,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_divisionExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionForGeneration ;
}

void cPtr_divisionExpressionForGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@divisionExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_divisionExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_divisionExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @divisionExpressionForGeneration type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_divisionExpressionForGeneration ("divisionExpressionForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_divisionExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_divisionExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_divisionExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_divisionExpressionForGeneration GALGAS_divisionExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_divisionExpressionForGeneration result ;
  const GALGAS_divisionExpressionForGeneration * p = (const GALGAS_divisionExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_divisionExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divisionExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_divisionExpressionNoOverflowForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_divisionExpressionNoOverflowForGeneration * p = (const cPtr_divisionExpressionNoOverflowForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_divisionExpressionNoOverflowForGeneration::objectCompare (const GALGAS_divisionExpressionNoOverflowForGeneration & inOperand) const {
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

GALGAS_divisionExpressionNoOverflowForGeneration::GALGAS_divisionExpressionNoOverflowForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_divisionExpressionNoOverflowForGeneration::GALGAS_divisionExpressionNoOverflowForGeneration (const cPtr_divisionExpressionNoOverflowForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_divisionExpressionNoOverflowForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_divisionExpressionNoOverflowForGeneration GALGAS_divisionExpressionNoOverflowForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_divisionExpressionNoOverflowForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_divisionExpressionNoOverflowForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_divisionExpressionNoOverflowForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_divisionExpressionNoOverflowForGeneration * p = (const cPtr_divisionExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_divisionExpressionNoOverflowForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_divisionExpressionNoOverflowForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_divisionExpressionNoOverflowForGeneration * p = (const cPtr_divisionExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_divisionExpressionNoOverflowForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_divisionExpressionNoOverflowForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_divisionExpressionNoOverflowForGeneration * p = (cPtr_divisionExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_divisionExpressionNoOverflowForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_divisionExpressionNoOverflowForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_divisionExpressionNoOverflowForGeneration * p = (cPtr_divisionExpressionNoOverflowForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_divisionExpressionNoOverflowForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         Pointer class for @divisionExpressionNoOverflowForGeneration class                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_divisionExpressionNoOverflowForGeneration::cPtr_divisionExpressionNoOverflowForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                                const GALGAS_location & in_mLocation,
                                                                                                const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                                const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_divisionExpressionNoOverflowForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionNoOverflowForGeneration ;
}

void cPtr_divisionExpressionNoOverflowForGeneration::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@divisionExpressionNoOverflowForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_divisionExpressionNoOverflowForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_divisionExpressionNoOverflowForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @divisionExpressionNoOverflowForGeneration type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_divisionExpressionNoOverflowForGeneration ("divisionExpressionNoOverflowForGeneration",
                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_divisionExpressionNoOverflowForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionNoOverflowForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_divisionExpressionNoOverflowForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_divisionExpressionNoOverflowForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_divisionExpressionNoOverflowForGeneration GALGAS_divisionExpressionNoOverflowForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_divisionExpressionNoOverflowForGeneration result ;
  const GALGAS_divisionExpressionNoOverflowForGeneration * p = (const GALGAS_divisionExpressionNoOverflowForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_divisionExpressionNoOverflowForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divisionExpressionNoOverflowForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_moduloExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_moduloExpressionForGeneration * p = (const cPtr_moduloExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_moduloExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
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


typeComparisonResult GALGAS_moduloExpressionForGeneration::objectCompare (const GALGAS_moduloExpressionForGeneration & inOperand) const {
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

GALGAS_moduloExpressionForGeneration::GALGAS_moduloExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_moduloExpressionForGeneration::GALGAS_moduloExpressionForGeneration (const cPtr_moduloExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_moduloExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_moduloExpressionForGeneration GALGAS_moduloExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                            const GALGAS_location & inAttribute_mLocation,
                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_moduloExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_moduloExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_moduloExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_moduloExpressionForGeneration * p = (const cPtr_moduloExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionForGeneration) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_moduloExpressionForGeneration::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_moduloExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_moduloExpressionForGeneration * p = (const cPtr_moduloExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionForGeneration) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_moduloExpressionForGeneration::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_moduloExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_moduloExpressionForGeneration * p = (cPtr_moduloExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionForGeneration) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_moduloExpressionForGeneration::setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_moduloExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_moduloExpressionForGeneration * p = (cPtr_moduloExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionForGeneration) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_moduloExpressionForGeneration::setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @moduloExpressionForGeneration class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_moduloExpressionForGeneration::cPtr_moduloExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                        const GALGAS_location & in_mLocation,
                                                                        const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                        const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_moduloExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduloExpressionForGeneration ;
}

void cPtr_moduloExpressionForGeneration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@moduloExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_moduloExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_moduloExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @moduloExpressionForGeneration type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduloExpressionForGeneration ("moduloExpressionForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_moduloExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduloExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_moduloExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduloExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_moduloExpressionForGeneration GALGAS_moduloExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_moduloExpressionForGeneration result ;
  const GALGAS_moduloExpressionForGeneration * p = (const GALGAS_moduloExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduloExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduloExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_assignmentInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetCppName.objectCompare (p->mProperty_mTargetCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameForCheckingFormalParameterUsing.objectCompare (p->mProperty_mNameForCheckingFormalParameterUsing) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_assignmentInstructionForGeneration::objectCompare (const GALGAS_assignmentInstructionForGeneration & inOperand) const {
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

GALGAS_assignmentInstructionForGeneration::GALGAS_assignmentInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentInstructionForGeneration::GALGAS_assignmentInstructionForGeneration (const cPtr_assignmentInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentInstructionForGeneration GALGAS_assignmentInstructionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetType,
                                                                                                      const GALGAS_string & inAttribute_mTargetCppName,
                                                                                                      const GALGAS_string & inAttribute_mNameForCheckingFormalParameterUsing,
                                                                                                      const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mSourceExpression
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionForGeneration result ;
  if (inAttribute_mTargetType.isValid () && inAttribute_mTargetCppName.isValid () && inAttribute_mNameForCheckingFormalParameterUsing.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentInstructionForGeneration (inAttribute_mTargetType, inAttribute_mTargetCppName, inAttribute_mNameForCheckingFormalParameterUsing, inAttribute_mStructAttributeList, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_assignmentInstructionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mProperty_mTargetType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_assignmentInstructionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_assignmentInstructionForGeneration::getter_mTargetCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mProperty_mTargetCppName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_assignmentInstructionForGeneration::getter_mTargetCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetCppName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_assignmentInstructionForGeneration::getter_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_assignmentInstructionForGeneration::getter_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNameForCheckingFormalParameterUsing ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_assignmentInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_assignmentInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_assignmentInstructionForGeneration::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_assignmentInstructionForGeneration::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_assignmentInstructionForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_assignmentInstructionForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_assignmentInstructionForGeneration::setter_setMTargetCppName (GALGAS_string inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    p->mProperty_mTargetCppName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_assignmentInstructionForGeneration::setter_setMTargetCppName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetCppName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_assignmentInstructionForGeneration::setter_setMNameForCheckingFormalParameterUsing (GALGAS_string inValue
                                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    p->mProperty_mNameForCheckingFormalParameterUsing = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_assignmentInstructionForGeneration::setter_setMNameForCheckingFormalParameterUsing (GALGAS_string inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNameForCheckingFormalParameterUsing = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_assignmentInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_assignmentInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_assignmentInstructionForGeneration::setter_setMSourceExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_assignmentInstructionForGeneration::setter_setMSourceExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @assignmentInstructionForGeneration class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_assignmentInstructionForGeneration::cPtr_assignmentInstructionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                                  const GALGAS_string & in_mTargetCppName,
                                                                                  const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                                                  const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mSourceExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mTargetType (in_mTargetType),
mProperty_mTargetCppName (in_mTargetCppName),
mProperty_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_assignmentInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ;
}

void cPtr_assignmentInstructionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@assignmentInstructionForGeneration:" ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_assignmentInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentInstructionForGeneration (mProperty_mTargetType, mProperty_mTargetCppName, mProperty_mNameForCheckingFormalParameterUsing, mProperty_mStructAttributeList, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @assignmentInstructionForGeneration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ("assignmentInstructionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_assignmentInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_assignmentInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentInstructionForGeneration GALGAS_assignmentInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionForGeneration result ;
  const GALGAS_assignmentInstructionForGeneration * p = (const GALGAS_assignmentInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_structuredCastInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structuredCastInstructionForGeneration * p = (const cPtr_structuredCastInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCastBranchList.objectCompare (p->mProperty_mCastBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_structuredCastInstructionForGeneration::objectCompare (const GALGAS_structuredCastInstructionForGeneration & inOperand) const {
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

GALGAS_structuredCastInstructionForGeneration::GALGAS_structuredCastInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structuredCastInstructionForGeneration::GALGAS_structuredCastInstructionForGeneration (const cPtr_structuredCastInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structuredCastInstructionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structuredCastInstructionForGeneration GALGAS_structuredCastInstructionForGeneration::constructor_new (const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression,
                                                                                                              const GALGAS_castInstructionBranchListForGeneration & inAttribute_mCastBranchList,
                                                                                                              const GALGAS_semanticInstructionListForGeneration & inAttribute_mElseInstructionList
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structuredCastInstructionForGeneration result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mCastBranchList.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structuredCastInstructionForGeneration (inAttribute_mExpression, inAttribute_mCastBranchList, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_structuredCastInstructionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionForGeneration * p = (const cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_structuredCastInstructionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListForGeneration GALGAS_structuredCastInstructionForGeneration::getter_mCastBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionForGeneration * p = (const cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    result = p->mProperty_mCastBranchList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_castInstructionBranchListForGeneration cPtr_structuredCastInstructionForGeneration::getter_mCastBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCastBranchList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration GALGAS_structuredCastInstructionForGeneration::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionForGeneration * p = (const cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration cPtr_structuredCastInstructionForGeneration::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structuredCastInstructionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structuredCastInstructionForGeneration * p = (cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    p->mProperty_mExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_structuredCastInstructionForGeneration::setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structuredCastInstructionForGeneration::setter_setMCastBranchList (GALGAS_castInstructionBranchListForGeneration inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structuredCastInstructionForGeneration * p = (cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    p->mProperty_mCastBranchList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_structuredCastInstructionForGeneration::setter_setMCastBranchList (GALGAS_castInstructionBranchListForGeneration inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCastBranchList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structuredCastInstructionForGeneration::setter_setMElseInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structuredCastInstructionForGeneration * p = (cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_structuredCastInstructionForGeneration::setter_setMElseInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElseInstructionList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @structuredCastInstructionForGeneration class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_structuredCastInstructionForGeneration::cPtr_structuredCastInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                          const GALGAS_castInstructionBranchListForGeneration & in_mCastBranchList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & in_mElseInstructionList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mCastBranchList (in_mCastBranchList),
mProperty_mElseInstructionList (in_mElseInstructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_structuredCastInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration ;
}

void cPtr_structuredCastInstructionForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@structuredCastInstructionForGeneration:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCastBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_structuredCastInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structuredCastInstructionForGeneration (mProperty_mExpression, mProperty_mCastBranchList, mProperty_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @structuredCastInstructionForGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration ("structuredCastInstructionForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_structuredCastInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_structuredCastInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structuredCastInstructionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structuredCastInstructionForGeneration GALGAS_structuredCastInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structuredCastInstructionForGeneration result ;
  const GALGAS_structuredCastInstructionForGeneration * p = (const GALGAS_structuredCastInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structuredCastInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structuredCastInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_opEqualInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetVariableCppName.objectCompare (p->mProperty_mTargetVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameForCheckingFormalParameterUsing.objectCompare (p->mProperty_mNameForCheckingFormalParameterUsing) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGeneratedMethod.objectCompare (p->mProperty_mGeneratedMethod) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_opEqualInstructionForGeneration::objectCompare (const GALGAS_opEqualInstructionForGeneration & inOperand) const {
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

GALGAS_opEqualInstructionForGeneration::GALGAS_opEqualInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_opEqualInstructionForGeneration::GALGAS_opEqualInstructionForGeneration (const cPtr_opEqualInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_opEqualInstructionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_opEqualInstructionForGeneration GALGAS_opEqualInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetType,
                                                                                                const GALGAS_string & inAttribute_mTargetVariableCppName,
                                                                                                const GALGAS_string & inAttribute_mNameForCheckingFormalParameterUsing,
                                                                                                const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mSourceExpression,
                                                                                                const GALGAS_string & inAttribute_mGeneratedMethod
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_opEqualInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetType.isValid () && inAttribute_mTargetVariableCppName.isValid () && inAttribute_mNameForCheckingFormalParameterUsing.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mGeneratedMethod.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_opEqualInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mTargetType, inAttribute_mTargetVariableCppName, inAttribute_mNameForCheckingFormalParameterUsing, inAttribute_mStructAttributeList, inAttribute_mSourceExpression, inAttribute_mGeneratedMethod COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_opEqualInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_opEqualInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_opEqualInstructionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    result = p->mProperty_mTargetType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_opEqualInstructionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_opEqualInstructionForGeneration::getter_mTargetVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    result = p->mProperty_mTargetVariableCppName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_opEqualInstructionForGeneration::getter_mTargetVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetVariableCppName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_opEqualInstructionForGeneration::getter_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    result = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_opEqualInstructionForGeneration::getter_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNameForCheckingFormalParameterUsing ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_opEqualInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    result = p->mProperty_mStructAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_opEqualInstructionForGeneration::getter_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStructAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_opEqualInstructionForGeneration::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_opEqualInstructionForGeneration::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_opEqualInstructionForGeneration::getter_mGeneratedMethod (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    result = p->mProperty_mGeneratedMethod ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_opEqualInstructionForGeneration::getter_mGeneratedMethod (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGeneratedMethod ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_opEqualInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_opEqualInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_opEqualInstructionForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_opEqualInstructionForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_opEqualInstructionForGeneration::setter_setMTargetVariableCppName (GALGAS_string inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    p->mProperty_mTargetVariableCppName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_opEqualInstructionForGeneration::setter_setMTargetVariableCppName (GALGAS_string inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetVariableCppName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_opEqualInstructionForGeneration::setter_setMNameForCheckingFormalParameterUsing (GALGAS_string inValue
                                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    p->mProperty_mNameForCheckingFormalParameterUsing = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_opEqualInstructionForGeneration::setter_setMNameForCheckingFormalParameterUsing (GALGAS_string inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNameForCheckingFormalParameterUsing = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_opEqualInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_opEqualInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStructAttributeList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_opEqualInstructionForGeneration::setter_setMSourceExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_opEqualInstructionForGeneration::setter_setMSourceExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_opEqualInstructionForGeneration::setter_setMGeneratedMethod (GALGAS_string inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    p->mProperty_mGeneratedMethod = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_opEqualInstructionForGeneration::setter_setMGeneratedMethod (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGeneratedMethod = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @opEqualInstructionForGeneration class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_opEqualInstructionForGeneration::cPtr_opEqualInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                            const GALGAS_string & in_mTargetVariableCppName,
                                                                            const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                                            const GALGAS_lstringlist & in_mStructAttributeList,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                            const GALGAS_string & in_mGeneratedMethod
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mTargetType (in_mTargetType),
mProperty_mTargetVariableCppName (in_mTargetVariableCppName),
mProperty_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mSourceExpression (in_mSourceExpression),
mProperty_mGeneratedMethod (in_mGeneratedMethod) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_opEqualInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opEqualInstructionForGeneration ;
}

void cPtr_opEqualInstructionForGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@opEqualInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGeneratedMethod.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_opEqualInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_opEqualInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mTargetType, mProperty_mTargetVariableCppName, mProperty_mNameForCheckingFormalParameterUsing, mProperty_mStructAttributeList, mProperty_mSourceExpression, mProperty_mGeneratedMethod COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @opEqualInstructionForGeneration type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_opEqualInstructionForGeneration ("opEqualInstructionForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_opEqualInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opEqualInstructionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_opEqualInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_opEqualInstructionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_opEqualInstructionForGeneration GALGAS_opEqualInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_opEqualInstructionForGeneration result ;
  const GALGAS_opEqualInstructionForGeneration * p = (const GALGAS_opEqualInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_opEqualInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("opEqualInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_errorInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorExpression.objectCompare (p->mProperty_mErrorExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBuiltVariableCppNameList.objectCompare (p->mProperty_mBuiltVariableCppNameList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFixitListForGeneration.objectCompare (p->mProperty_mFixitListForGeneration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_errorInstructionForGeneration::objectCompare (const GALGAS_errorInstructionForGeneration & inOperand) const {
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

GALGAS_errorInstructionForGeneration::GALGAS_errorInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_errorInstructionForGeneration::GALGAS_errorInstructionForGeneration (const cPtr_errorInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_errorInstructionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_errorInstructionForGeneration GALGAS_errorInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mErrorExpression,
                                                                                            const GALGAS_stringlist & inAttribute_mBuiltVariableCppNameList,
                                                                                            const GALGAS_fixitListForGeneration & inAttribute_mFixitListForGeneration
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_errorInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mErrorExpression.isValid () && inAttribute_mBuiltVariableCppNameList.isValid () && inAttribute_mFixitListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_errorInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverExpression, inAttribute_mErrorExpression, inAttribute_mBuiltVariableCppNameList, inAttribute_mFixitListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_errorInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_errorInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_errorInstructionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    result = p->mProperty_mReceiverExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_errorInstructionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_errorInstructionForGeneration::getter_mErrorExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    result = p->mProperty_mErrorExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_errorInstructionForGeneration::getter_mErrorExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mErrorExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_errorInstructionForGeneration::getter_mBuiltVariableCppNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    result = p->mProperty_mBuiltVariableCppNameList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist cPtr_errorInstructionForGeneration::getter_mBuiltVariableCppNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuiltVariableCppNameList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListForGeneration GALGAS_errorInstructionForGeneration::getter_mFixitListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_fixitListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    result = p->mProperty_mFixitListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fixitListForGeneration cPtr_errorInstructionForGeneration::getter_mFixitListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFixitListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_errorInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_errorInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_errorInstructionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_errorInstructionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mReceiverExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_errorInstructionForGeneration::setter_setMErrorExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    p->mProperty_mErrorExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_errorInstructionForGeneration::setter_setMErrorExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mErrorExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_errorInstructionForGeneration::setter_setMBuiltVariableCppNameList (GALGAS_stringlist inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    p->mProperty_mBuiltVariableCppNameList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_errorInstructionForGeneration::setter_setMBuiltVariableCppNameList (GALGAS_stringlist inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBuiltVariableCppNameList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_errorInstructionForGeneration::setter_setMFixitListForGeneration (GALGAS_fixitListForGeneration inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    p->mProperty_mFixitListForGeneration = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_errorInstructionForGeneration::setter_setMFixitListForGeneration (GALGAS_fixitListForGeneration inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFixitListForGeneration = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @errorInstructionForGeneration class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_errorInstructionForGeneration::cPtr_errorInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GALGAS_semanticExpressionForGeneration & in_mErrorExpression,
                                                                        const GALGAS_stringlist & in_mBuiltVariableCppNameList,
                                                                        const GALGAS_fixitListForGeneration & in_mFixitListForGeneration
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mErrorExpression (in_mErrorExpression),
mProperty_mBuiltVariableCppNameList (in_mBuiltVariableCppNameList),
mProperty_mFixitListForGeneration (in_mFixitListForGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_errorInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration ;
}

void cPtr_errorInstructionForGeneration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@errorInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mErrorExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBuiltVariableCppNameList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFixitListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_errorInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_errorInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverExpression, mProperty_mErrorExpression, mProperty_mBuiltVariableCppNameList, mProperty_mFixitListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @errorInstructionForGeneration type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_errorInstructionForGeneration ("errorInstructionForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_errorInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_errorInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_errorInstructionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_errorInstructionForGeneration GALGAS_errorInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_errorInstructionForGeneration result ;
  const GALGAS_errorInstructionForGeneration * p = (const GALGAS_errorInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_errorInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_forInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedObjectList.objectCompare (p->mProperty_mEnumeratedObjectList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexVariableCppName.objectCompare (p->mProperty_mIndexVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpression.objectCompare (p->mProperty_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBeforeInstructionList.objectCompare (p->mProperty_mBeforeInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBetweenInstructionList.objectCompare (p->mProperty_mBetweenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAfterInstructionList.objectCompare (p->mProperty_mAfterInstructionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_forInstructionForGeneration::objectCompare (const GALGAS_forInstructionForGeneration & inOperand) const {
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

GALGAS_forInstructionForGeneration::GALGAS_forInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionForGeneration::GALGAS_forInstructionForGeneration (const cPtr_forInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionForGeneration GALGAS_forInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                        const GALGAS_forInstructionEnumeratedObjectListForGeneration & inAttribute_mEnumeratedObjectList,
                                                                                        const GALGAS_string & inAttribute_mIndexVariableCppName,
                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mWhileExpression,
                                                                                        const GALGAS_semanticInstructionListForGeneration & inAttribute_mBeforeInstructionList,
                                                                                        const GALGAS_semanticInstructionListForGeneration & inAttribute_mBetweenInstructionList,
                                                                                        const GALGAS_semanticInstructionListForGeneration & inAttribute_mDoInstructionList,
                                                                                        const GALGAS_semanticInstructionListForGeneration & inAttribute_mAfterInstructionList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEnumeratedObjectList.isValid () && inAttribute_mIndexVariableCppName.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mBeforeInstructionList.isValid () && inAttribute_mBetweenInstructionList.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mAfterInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mEnumeratedObjectList, inAttribute_mIndexVariableCppName, inAttribute_mWhileExpression, inAttribute_mBeforeInstructionList, inAttribute_mBetweenInstructionList, inAttribute_mDoInstructionList, inAttribute_mAfterInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_forInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_forInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionForGeneration::getter_mEnumeratedObjectList (UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mEnumeratedObjectList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionEnumeratedObjectListForGeneration cPtr_forInstructionForGeneration::getter_mEnumeratedObjectList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumeratedObjectList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_forInstructionForGeneration::getter_mIndexVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mIndexVariableCppName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_forInstructionForGeneration::getter_mIndexVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndexVariableCppName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_forInstructionForGeneration::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mWhileExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_forInstructionForGeneration::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::getter_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mBeforeInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration cPtr_forInstructionForGeneration::getter_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBeforeInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::getter_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mBetweenInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration cPtr_forInstructionForGeneration::getter_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBetweenInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration cPtr_forInstructionForGeneration::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::getter_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    result = p->mProperty_mAfterInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration cPtr_forInstructionForGeneration::getter_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAfterInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionForGeneration::setter_setMEnumeratedObjectList (GALGAS_forInstructionEnumeratedObjectListForGeneration inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mEnumeratedObjectList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionForGeneration::setter_setMEnumeratedObjectList (GALGAS_forInstructionEnumeratedObjectListForGeneration inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEnumeratedObjectList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionForGeneration::setter_setMIndexVariableCppName (GALGAS_string inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mIndexVariableCppName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionForGeneration::setter_setMIndexVariableCppName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIndexVariableCppName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionForGeneration::setter_setMWhileExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mWhileExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionForGeneration::setter_setMWhileExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mWhileExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionForGeneration::setter_setMBeforeInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mBeforeInstructionList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionForGeneration::setter_setMBeforeInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBeforeInstructionList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionForGeneration::setter_setMBetweenInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mBetweenInstructionList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionForGeneration::setter_setMBetweenInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBetweenInstructionList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionForGeneration::setter_setMDoInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionForGeneration::setter_setMDoInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDoInstructionList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_forInstructionForGeneration::setter_setMAfterInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    p->mProperty_mAfterInstructionList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_forInstructionForGeneration::setter_setMAfterInstructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAfterInstructionList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @forInstructionForGeneration class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_forInstructionForGeneration::cPtr_forInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_forInstructionEnumeratedObjectListForGeneration & in_mEnumeratedObjectList,
                                                                    const GALGAS_string & in_mIndexVariableCppName,
                                                                    const GALGAS_semanticExpressionForGeneration & in_mWhileExpression,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mBeforeInstructionList,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mBetweenInstructionList,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mDoInstructionList,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mAfterInstructionList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mEnumeratedObjectList (in_mEnumeratedObjectList),
mProperty_mIndexVariableCppName (in_mIndexVariableCppName),
mProperty_mWhileExpression (in_mWhileExpression),
mProperty_mBeforeInstructionList (in_mBeforeInstructionList),
mProperty_mBetweenInstructionList (in_mBetweenInstructionList),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mAfterInstructionList (in_mAfterInstructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_forInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionForGeneration ;
}

void cPtr_forInstructionForGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@forInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratedObjectList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_forInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mEnumeratedObjectList, mProperty_mIndexVariableCppName, mProperty_mWhileExpression, mProperty_mBeforeInstructionList, mProperty_mBetweenInstructionList, mProperty_mDoInstructionList, mProperty_mAfterInstructionList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @forInstructionForGeneration type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionForGeneration ("forInstructionForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_forInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_forInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionForGeneration GALGAS_forInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionForGeneration result ;
  const GALGAS_forInstructionForGeneration * p = (const GALGAS_forInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_grammarInstructionWithSourceFileForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarName.objectCompare (p->mProperty_mGrammarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLabelName.objectCompare (p->mProperty_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceFileExpression.objectCompare (p->mProperty_mSourceFileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarHasTranslateFeature.objectCompare (p->mProperty_mGrammarHasTranslateFeature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssignementList.objectCompare (p->mProperty_mAssignementList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSyntaxDirectedTranslationResultVarName.objectCompare (p->mProperty_mSyntaxDirectedTranslationResultVarName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_grammarInstructionWithSourceFileForGeneration::objectCompare (const GALGAS_grammarInstructionWithSourceFileForGeneration & inOperand) const {
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

GALGAS_grammarInstructionWithSourceFileForGeneration::GALGAS_grammarInstructionWithSourceFileForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionWithSourceFileForGeneration::GALGAS_grammarInstructionWithSourceFileForGeneration (const cPtr_grammarInstructionWithSourceFileForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionWithSourceFileForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionWithSourceFileForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                            const GALGAS_string & inAttribute_mGrammarName,
                                                                                                                            const GALGAS_string & inAttribute_mLabelName,
                                                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mSourceFileExpression,
                                                                                                                            const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                                            const GALGAS_bool & inAttribute_mGrammarHasTranslateFeature,
                                                                                                                            const GALGAS_stringlist & inAttribute_mAssignementList,
                                                                                                                            const GALGAS_string & inAttribute_mSyntaxDirectedTranslationResultVarName
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceFileForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mGrammarName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mSourceFileExpression.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mGrammarHasTranslateFeature.isValid () && inAttribute_mAssignementList.isValid () && inAttribute_mSyntaxDirectedTranslationResultVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionWithSourceFileForGeneration (inAttribute_mInstructionLocation, inAttribute_mGrammarName, inAttribute_mLabelName, inAttribute_mSourceFileExpression, inAttribute_mActualParameterList, inAttribute_mGrammarHasTranslateFeature, inAttribute_mAssignementList, inAttribute_mSyntaxDirectedTranslationResultVarName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_grammarInstructionWithSourceFileForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mGrammarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mGrammarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_grammarInstructionWithSourceFileForGeneration::getter_mGrammarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mLabelName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_grammarInstructionWithSourceFileForGeneration::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabelName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mSourceFileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mSourceFileExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_grammarInstructionWithSourceFileForGeneration::getter_mSourceFileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceFileExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListForGeneration cPtr_grammarInstructionWithSourceFileForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mGrammarHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mGrammarHasTranslateFeature ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_grammarInstructionWithSourceFileForGeneration::getter_mGrammarHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarHasTranslateFeature ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mAssignementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mAssignementList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist cPtr_grammarInstructionWithSourceFileForGeneration::getter_mAssignementList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssignementList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_grammarInstructionWithSourceFileForGeneration::getter_mSyntaxDirectedTranslationResultVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    result = p->mProperty_mSyntaxDirectedTranslationResultVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_grammarInstructionWithSourceFileForGeneration::getter_mSyntaxDirectedTranslationResultVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyntaxDirectedTranslationResultVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMGrammarName (GALGAS_string inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mGrammarName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMGrammarName (GALGAS_string inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGrammarName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMLabelName (GALGAS_string inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mLabelName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMLabelName (GALGAS_string inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLabelName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMSourceFileExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mSourceFileExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMSourceFileExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceFileExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMGrammarHasTranslateFeature (GALGAS_bool inValue
                                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mGrammarHasTranslateFeature = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMGrammarHasTranslateFeature (GALGAS_bool inValue
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGrammarHasTranslateFeature = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMAssignementList (GALGAS_stringlist inValue
                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mAssignementList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMAssignementList (GALGAS_stringlist inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAssignementList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceFileForGeneration::setter_setMSyntaxDirectedTranslationResultVarName (GALGAS_string inValue
                                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    p->mProperty_mSyntaxDirectedTranslationResultVarName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceFileForGeneration::setter_setMSyntaxDirectedTranslationResultVarName (GALGAS_string inValue
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSyntaxDirectedTranslationResultVarName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                       Pointer class for @grammarInstructionWithSourceFileForGeneration class                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_grammarInstructionWithSourceFileForGeneration::cPtr_grammarInstructionWithSourceFileForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_string & in_mGrammarName,
                                                                                                        const GALGAS_string & in_mLabelName,
                                                                                                        const GALGAS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                                                                                        const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                        const GALGAS_bool & in_mGrammarHasTranslateFeature,
                                                                                                        const GALGAS_stringlist & in_mAssignementList,
                                                                                                        const GALGAS_string & in_mSyntaxDirectedTranslationResultVarName
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mGrammarName (in_mGrammarName),
mProperty_mLabelName (in_mLabelName),
mProperty_mSourceFileExpression (in_mSourceFileExpression),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mGrammarHasTranslateFeature (in_mGrammarHasTranslateFeature),
mProperty_mAssignementList (in_mAssignementList),
mProperty_mSyntaxDirectedTranslationResultVarName (in_mSyntaxDirectedTranslationResultVarName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_grammarInstructionWithSourceFileForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;
}

void cPtr_grammarInstructionWithSourceFileForGeneration::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@grammarInstructionWithSourceFileForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGrammarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceFileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGrammarHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssignementList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSyntaxDirectedTranslationResultVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_grammarInstructionWithSourceFileForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionWithSourceFileForGeneration (mProperty_mInstructionLocation, mProperty_mGrammarName, mProperty_mLabelName, mProperty_mSourceFileExpression, mProperty_mActualParameterList, mProperty_mGrammarHasTranslateFeature, mProperty_mAssignementList, mProperty_mSyntaxDirectedTranslationResultVarName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @grammarInstructionWithSourceFileForGeneration type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ("grammarInstructionWithSourceFileForGeneration",
                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_grammarInstructionWithSourceFileForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_grammarInstructionWithSourceFileForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionWithSourceFileForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionWithSourceFileForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceFileForGeneration result ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration * p = (const GALGAS_grammarInstructionWithSourceFileForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionWithSourceFileForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceFileForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_grammarInstructionWithSourceExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarName.objectCompare (p->mProperty_mGrammarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLabelName.objectCompare (p->mProperty_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceStringExpression.objectCompare (p->mProperty_mSourceStringExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameStringExpression.objectCompare (p->mProperty_mNameStringExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarHasTranslateFeature.objectCompare (p->mProperty_mGrammarHasTranslateFeature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssignementList.objectCompare (p->mProperty_mAssignementList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSyntaxDirectedTranslationResultVarName.objectCompare (p->mProperty_mSyntaxDirectedTranslationResultVarName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_grammarInstructionWithSourceExpressionForGeneration::objectCompare (const GALGAS_grammarInstructionWithSourceExpressionForGeneration & inOperand) const {
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

GALGAS_grammarInstructionWithSourceExpressionForGeneration::GALGAS_grammarInstructionWithSourceExpressionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionWithSourceExpressionForGeneration::GALGAS_grammarInstructionWithSourceExpressionForGeneration (const cPtr_grammarInstructionWithSourceExpressionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionWithSourceExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                        const GALGAS_string & inAttribute_mGrammarName,
                                                                                                                                        const GALGAS_string & inAttribute_mLabelName,
                                                                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mSourceStringExpression,
                                                                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mNameStringExpression,
                                                                                                                                        const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                                                        const GALGAS_bool & inAttribute_mGrammarHasTranslateFeature,
                                                                                                                                        const GALGAS_stringlist & inAttribute_mAssignementList,
                                                                                                                                        const GALGAS_string & inAttribute_mSyntaxDirectedTranslationResultVarName
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceExpressionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mGrammarName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mSourceStringExpression.isValid () && inAttribute_mNameStringExpression.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mGrammarHasTranslateFeature.isValid () && inAttribute_mAssignementList.isValid () && inAttribute_mSyntaxDirectedTranslationResultVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionWithSourceExpressionForGeneration (inAttribute_mInstructionLocation, inAttribute_mGrammarName, inAttribute_mLabelName, inAttribute_mSourceStringExpression, inAttribute_mNameStringExpression, inAttribute_mActualParameterList, inAttribute_mGrammarHasTranslateFeature, inAttribute_mAssignementList, inAttribute_mSyntaxDirectedTranslationResultVarName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mGrammarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mGrammarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mGrammarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mLabelName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabelName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mSourceStringExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mSourceStringExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mSourceStringExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceStringExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mNameStringExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mNameStringExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mNameStringExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNameStringExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actualParameterListForGeneration cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mGrammarHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mGrammarHasTranslateFeature ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mGrammarHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarHasTranslateFeature ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mAssignementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mAssignementList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mAssignementList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssignementList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_grammarInstructionWithSourceExpressionForGeneration::getter_mSyntaxDirectedTranslationResultVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    result = p->mProperty_mSyntaxDirectedTranslationResultVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_grammarInstructionWithSourceExpressionForGeneration::getter_mSyntaxDirectedTranslationResultVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyntaxDirectedTranslationResultVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMGrammarName (GALGAS_string inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mGrammarName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMGrammarName (GALGAS_string inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGrammarName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMLabelName (GALGAS_string inValue
                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mLabelName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMLabelName (GALGAS_string inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLabelName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMSourceStringExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mSourceStringExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMSourceStringExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceStringExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMNameStringExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mNameStringExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMNameStringExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNameStringExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMGrammarHasTranslateFeature (GALGAS_bool inValue
                                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mGrammarHasTranslateFeature = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMGrammarHasTranslateFeature (GALGAS_bool inValue
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGrammarHasTranslateFeature = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMAssignementList (GALGAS_stringlist inValue
                                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mAssignementList = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMAssignementList (GALGAS_stringlist inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAssignementList = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_grammarInstructionWithSourceExpressionForGeneration::setter_setMSyntaxDirectedTranslationResultVarName (GALGAS_string inValue
                                                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    p->mProperty_mSyntaxDirectedTranslationResultVarName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_grammarInstructionWithSourceExpressionForGeneration::setter_setMSyntaxDirectedTranslationResultVarName (GALGAS_string inValue
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSyntaxDirectedTranslationResultVarName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                    Pointer class for @grammarInstructionWithSourceExpressionForGeneration class                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_grammarInstructionWithSourceExpressionForGeneration::cPtr_grammarInstructionWithSourceExpressionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_string & in_mGrammarName,
                                                                                                                    const GALGAS_string & in_mLabelName,
                                                                                                                    const GALGAS_semanticExpressionForGeneration & in_mSourceStringExpression,
                                                                                                                    const GALGAS_semanticExpressionForGeneration & in_mNameStringExpression,
                                                                                                                    const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                                    const GALGAS_bool & in_mGrammarHasTranslateFeature,
                                                                                                                    const GALGAS_stringlist & in_mAssignementList,
                                                                                                                    const GALGAS_string & in_mSyntaxDirectedTranslationResultVarName
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mGrammarName (in_mGrammarName),
mProperty_mLabelName (in_mLabelName),
mProperty_mSourceStringExpression (in_mSourceStringExpression),
mProperty_mNameStringExpression (in_mNameStringExpression),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mGrammarHasTranslateFeature (in_mGrammarHasTranslateFeature),
mProperty_mAssignementList (in_mAssignementList),
mProperty_mSyntaxDirectedTranslationResultVarName (in_mSyntaxDirectedTranslationResultVarName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_grammarInstructionWithSourceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ;
}

void cPtr_grammarInstructionWithSourceExpressionForGeneration::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@grammarInstructionWithSourceExpressionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGrammarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceStringExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNameStringExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGrammarHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssignementList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSyntaxDirectedTranslationResultVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_grammarInstructionWithSourceExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionWithSourceExpressionForGeneration (mProperty_mInstructionLocation, mProperty_mGrammarName, mProperty_mLabelName, mProperty_mSourceStringExpression, mProperty_mNameStringExpression, mProperty_mActualParameterList, mProperty_mGrammarHasTranslateFeature, mProperty_mAssignementList, mProperty_mSyntaxDirectedTranslationResultVarName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              @grammarInstructionWithSourceExpressionForGeneration type                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ("grammarInstructionWithSourceExpressionForGeneration",
                                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_grammarInstructionWithSourceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_grammarInstructionWithSourceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionWithSourceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_grammarInstructionWithSourceExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceExpressionForGeneration result ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration * p = (const GALGAS_grammarInstructionWithSourceExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionWithSourceExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsConstant.objectCompare (p->mProperty_mIsConstant) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppVariableName.objectCompare (p->mProperty_mCppVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::objectCompare (const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inOperand) const {
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

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetType,
                                                                                                                                                                        const GALGAS_bool & inAttribute_mIsConstant,
                                                                                                                                                                        const GALGAS_string & inAttribute_mCppVariableName,
                                                                                                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mSourceExpression
                                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration result ;
  if (inAttribute_mTargetType.isValid () && inAttribute_mIsConstant.isValid () && inAttribute_mCppVariableName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (inAttribute_mTargetType, inAttribute_mIsConstant, inAttribute_mCppVariableName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    result = p->mProperty_mTargetType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mIsConstant (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    result = p->mProperty_mIsConstant ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mIsConstant (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsConstant ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mCppVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    result = p->mProperty_mCppVariableName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mCppVariableName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCppVariableName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMTargetType (GALGAS_unifiedTypeMap_2D_proxy inValue
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetType = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMIsConstant (GALGAS_bool inValue
                                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    p->mProperty_mIsConstant = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMIsConstant (GALGAS_bool inValue
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsConstant = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMCppVariableName (GALGAS_string inValue
                                                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    p->mProperty_mCppVariableName = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMCppVariableName (GALGAS_string inValue
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCppVariableName = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMSourceExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::setter_setMSourceExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSourceExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//            Pointer class for @localVariableOrConstantDeclarationWithSourceExpressionForGeneration class             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                                                                                                    const GALGAS_bool & in_mIsConstant,
                                                                                                                                                    const GALGAS_string & in_mCppVariableName,
                                                                                                                                                    const GALGAS_semanticExpressionForGeneration & in_mSourceExpression
                                                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mTargetType (in_mTargetType),
mProperty_mIsConstant (in_mIsConstant),
mProperty_mCppVariableName (in_mCppVariableName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ;
}

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::description (C_String & ioString,
                                                                                            const int32_t inIndentation) const {
  ioString << "[@localVariableOrConstantDeclarationWithSourceExpressionForGeneration:" ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (mProperty_mTargetType, mProperty_mIsConstant, mProperty_mCppVariableName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      @localVariableOrConstantDeclarationWithSourceExpressionForGeneration type                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration result ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_logInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_logInstructionForGeneration * p = (const cPtr_logInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mLogMessage.objectCompare (p->mProperty_mLogMessage) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLogExpression.objectCompare (p->mProperty_mLogExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_logInstructionForGeneration::objectCompare (const GALGAS_logInstructionForGeneration & inOperand) const {
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

GALGAS_logInstructionForGeneration::GALGAS_logInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logInstructionForGeneration::GALGAS_logInstructionForGeneration (const cPtr_logInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logInstructionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logInstructionForGeneration GALGAS_logInstructionForGeneration::constructor_new (const GALGAS_lstring & inAttribute_mLogMessage,
                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mLogExpression
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_logInstructionForGeneration result ;
  if (inAttribute_mLogMessage.isValid () && inAttribute_mLogExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_logInstructionForGeneration (inAttribute_mLogMessage, inAttribute_mLogExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_logInstructionForGeneration::getter_mLogMessage (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_logInstructionForGeneration * p = (const cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    result = p->mProperty_mLogMessage ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_logInstructionForGeneration::getter_mLogMessage (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLogMessage ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_logInstructionForGeneration::getter_mLogExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_logInstructionForGeneration * p = (const cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    result = p->mProperty_mLogExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_logInstructionForGeneration::getter_mLogExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLogExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_logInstructionForGeneration::setter_setMLogMessage (GALGAS_lstring inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_logInstructionForGeneration * p = (cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    p->mProperty_mLogMessage = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_logInstructionForGeneration::setter_setMLogMessage (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLogMessage = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_logInstructionForGeneration::setter_setMLogExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_logInstructionForGeneration * p = (cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    p->mProperty_mLogExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_logInstructionForGeneration::setter_setMLogExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLogExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @logInstructionForGeneration class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_logInstructionForGeneration::cPtr_logInstructionForGeneration (const GALGAS_lstring & in_mLogMessage,
                                                                    const GALGAS_semanticExpressionForGeneration & in_mLogExpression
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mLogMessage (in_mLogMessage),
mProperty_mLogExpression (in_mLogExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_logInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionForGeneration ;
}

void cPtr_logInstructionForGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@logInstructionForGeneration:" ;
  mProperty_mLogMessage.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLogExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_logInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_logInstructionForGeneration (mProperty_mLogMessage, mProperty_mLogExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @logInstructionForGeneration type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logInstructionForGeneration ("logInstructionForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_logInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_logInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logInstructionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_logInstructionForGeneration GALGAS_logInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_logInstructionForGeneration result ;
  const GALGAS_logInstructionForGeneration * p = (const GALGAS_logInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_logInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_loopInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariantExpression.objectCompare (p->mProperty_mVariantExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFirstInstructions.objectCompare (p->mProperty_mFirstInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLoopExpression.objectCompare (p->mProperty_mLoopExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSecondInstructions.objectCompare (p->mProperty_mSecondInstructions) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_loopInstructionForGeneration::objectCompare (const GALGAS_loopInstructionForGeneration & inOperand) const {
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

GALGAS_loopInstructionForGeneration::GALGAS_loopInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_loopInstructionForGeneration::GALGAS_loopInstructionForGeneration (const cPtr_loopInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_loopInstructionForGeneration GALGAS_loopInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_semanticExpressionForGeneration & inAttribute_mVariantExpression,
                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mFirstInstructions,
                                                                                          const GALGAS_semanticExpressionForGeneration & inAttribute_mLoopExpression,
                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mSecondInstructions
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVariantExpression.isValid () && inAttribute_mFirstInstructions.isValid () && inAttribute_mLoopExpression.isValid () && inAttribute_mSecondInstructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loopInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mVariantExpression, inAttribute_mFirstInstructions, inAttribute_mLoopExpression, inAttribute_mSecondInstructions COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_loopInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_loopInstructionForGeneration::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_loopInstructionForGeneration::getter_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    result = p->mProperty_mVariantExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_loopInstructionForGeneration::getter_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariantExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionForGeneration::getter_mFirstInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    result = p->mProperty_mFirstInstructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration cPtr_loopInstructionForGeneration::getter_mFirstInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFirstInstructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration GALGAS_loopInstructionForGeneration::getter_mLoopExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    result = p->mProperty_mLoopExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticExpressionForGeneration cPtr_loopInstructionForGeneration::getter_mLoopExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLoopExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionForGeneration::getter_mSecondInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_loopInstructionForGeneration * p = (const cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    result = p->mProperty_mSecondInstructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration cPtr_loopInstructionForGeneration::getter_mSecondInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondInstructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_loopInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_loopInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionLocation = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_loopInstructionForGeneration::setter_setMVariantExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    p->mProperty_mVariantExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_loopInstructionForGeneration::setter_setMVariantExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mVariantExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_loopInstructionForGeneration::setter_setMFirstInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    p->mProperty_mFirstInstructions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_loopInstructionForGeneration::setter_setMFirstInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFirstInstructions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_loopInstructionForGeneration::setter_setMLoopExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    p->mProperty_mLoopExpression = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_loopInstructionForGeneration::setter_setMLoopExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLoopExpression = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_loopInstructionForGeneration::setter_setMSecondInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_loopInstructionForGeneration * p = (cPtr_loopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionForGeneration) ;
    p->mProperty_mSecondInstructions = inValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cPtr_loopInstructionForGeneration::setter_setMSecondInstructions (GALGAS_semanticInstructionListForGeneration inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSecondInstructions = inValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @loopInstructionForGeneration class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_loopInstructionForGeneration::cPtr_loopInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_semanticExpressionForGeneration & in_mVariantExpression,
                                                                      const GALGAS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                      const GALGAS_semanticExpressionForGeneration & in_mLoopExpression,
                                                                      const GALGAS_semanticInstructionListForGeneration & in_mSecondInstructions
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mVariantExpression (in_mVariantExpression),
mProperty_mFirstInstructions (in_mFirstInstructions),
mProperty_mLoopExpression (in_mLoopExpression),
mProperty_mSecondInstructions (in_mSecondInstructions) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_loopInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionForGeneration ;
}

void cPtr_loopInstructionForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@loopInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_loopInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loopInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mFirstInstructions, mProperty_mLoopExpression, mProperty_mSecondInstructions COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @loopInstructionForGeneration type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loopInstructionForGeneration ("loopInstructionForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_loopInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_loopInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loopInstructionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_loopInstructionForGeneration GALGAS_loopInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionForGeneration result ;
  const GALGAS_loopInstructionForGeneration * p = (const GALGAS_loopInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loopInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

